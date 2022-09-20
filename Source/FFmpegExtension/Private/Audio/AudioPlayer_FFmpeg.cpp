// Fill out your copyright notice in the Description page of Project Settings.


#include "Audio/AudioPlayer_FFmpeg.h"
#include "Utilities/FFmpegFunctionLib.h"

#include <thread>

#include "FFmpegExtension/Thirdparty/SDL/include/SDL.h"
#include "FFmpegExtension/Thirdparty/SDL/include/SDL_error.h"

extern "C"
{
#include "libswresample/swresample.h"
}

//
UAudioPlayer_FFmpeg* GlobalAudioPlayer = nullptr;

void UAudioPlayer_FFmpeg::PostInitProperties()
{
	UObject::PostInitProperties();

	//if (GetWorld() && AudioInfo.bAutoPlay)
	//{
	//	OpenAudio();
	//}
}

UWorld* UAudioPlayer_FFmpeg::GetWorld() const
{
	// CDO objects do not belong to a world
	// If the actors outer is destroyed or unreachable we are shutting down and the world should be nullptr
	if (!HasAnyFlags(RF_ClassDefaultObject) && ensureMsgf(GetOuter(), TEXT("Actor: %s has a null OuterPrivate in AActor::GetWorld()"), *GetFullName())
		&& !GetOuter()->HasAnyFlags(RF_BeginDestroyed) && !GetOuter()->IsUnreachable())
	{
		return GetOuter()->GetWorld();
	}
	return nullptr;

	/*
	// Возвращаем ссылку на мир из владельца объекта, если не работаем редакторе.
	if (!FApp::IsGame()) return nullptr;
	else if (GetOuter()) return GetOuter()->GetWorld();
	else return nullptr;
	*/
}

void UAudioPlayer_FFmpeg::BeginDestroy()
{
	UObject::BeginDestroy();

	CloseAudio();
}

void UAudioPlayer_FFmpeg::ErrorLog(FString ErrorMessage)
{
	UFFmpegFunctionLib::OutLog(this, true, ErrorMessage);
	if (IsValid(this))
	{
		OnAudioError.Broadcast(ErrorMessage);
	}
}

void UAudioPlayer_FFmpeg::SetAudioInfo(FAudioInfo NewAudioInfo)
{
	this->AudioInfo = NewAudioInfo;
}

void UAudioPlayer_FFmpeg::SetAudioOutputFormat(FAudioFormat NewOutputFormat)
{
	this->PlayFormat = NewOutputFormat;
}

//当音频设备需要更多数据时会调用该函数
void Call_Back_SDL(void* userdata, Uint8* stream, int len)
{
	FAudioQueue* AudioQueue = static_cast<FAudioQueue*>(userdata);
	if (AudioQueue == nullptr || (AudioQueue->GetFrameNum() == 0 && GlobalAudioPlayer->GetIsDecodeing() == false))
	{
		GlobalAudioPlayer->CloseAudio();
		return;
	}

#if 0
	SDL_memset(stream, 0, len);

	int ReadLen = 0;
	int BufferLen = 0;
	int NeedLen = len;
	while(NeedLen > 0)
	{
		SDL_memset(stream, 0, BufferLen);

		//判断缓冲区是否为空
		if (AudioQueue->GetFrameNum() == 0)
		{
			return;
		}

		BufferLen = NeedLen;
		uint8* Data = AudioQueue->DequeueFrame(BufferLen);
		NeedLen -= BufferLen;
		SDL_MixAudio(stream, (Uint8*)Data + ReadLen, BufferLen, SDL_MIX_MAXVOLUME);
		ReadLen += BufferLen;
	}
#endif

#if 1
	//清空 stream
	SDL_memset(stream, 0, len);

	//判断缓冲区是否为空
	if (AudioQueue->GetFrameNum() == 0)
	{
		return;
	}
	//len = 1000;
	int32 BufferLen = len;
	uint8* Data = AudioQueue->DequeueFrame(BufferLen);

	len = (len > BufferLen) ? BufferLen : len;
	//UE_LOG(LogTemp, Warning, TEXT("Call Back!"));
	//填充数据
	SDL_MixAudio(stream, (Uint8*)Data, len, GlobalAudioPlayer->AudioInfo.SDLVolume);
	//SDL_MixAudioFormat(stream, (Uint8*)Data, wanted_spec.format, len, SDL_MIX_MAXVOLUME);
	//memcpy(stream, Data, len);
#endif
}

void UAudioPlayer_FFmpeg::DecodeThread()
{
	FFmpegParam = new FLocal_FFmpegParam();
	//解压缩后存放的数据帧
	AVFrame* Frame = av_frame_alloc();
	//初始化音频重采样上下文
	FFmpegParam->Local_SwrContext = swr_alloc();

	uint8* OutData = nullptr;

	//FFmpeg API 返回错误码
	int32 Ret = 0;

	//输入音频格式
	FAudioFormat InputFormat;

#if 0
	FILE* File = fopen("C:\\Users\\23907\\Desktop\\Test\\Audio.pcm", "wb+");
	if (File == NULL)
	{
		goto _Clear;
	}
#endif

	//初始化网络库
	avformat_network_init();

	//音频地址地址
	const char* LocalAudioURL = TCHAR_TO_UTF8(*AudioInfo.AudioURL);

	//打开音频
	Ret = avformat_open_input(&FFmpegParam->Local_AVFormatContext, LocalAudioURL, 0, NULL);
	if (Ret != 0)
	{
		ErrorLog(FString("媒体流打开失败 / Failed to Open Media Stream | Error at avformat_open_input()"));
		goto _Clear;
	}

	//探测文件信息
	Ret = avformat_find_stream_info(FFmpegParam->Local_AVFormatContext, NULL);
	if (Ret < 0)
	{
		ErrorLog(FString("探测文件信息失败 / Failed to Find Stream Info | Error at avformat_find_stream_info()"));
		goto _Clear;
	}

	//找到最合适的音频流
	AudioInfo.ValidFirstAudioStreamIndex = av_find_best_stream(FFmpegParam->Local_AVFormatContext, AVMEDIA_TYPE_AUDIO, -1, -1, &(FFmpegParam->Local_AVCodec), 0);
	if (AudioInfo.ValidFirstAudioStreamIndex < 0)
	{
		if (AudioInfo.ValidFirstAudioStreamIndex == AVERROR_DECODER_NOT_FOUND)
		{
			ErrorLog(FString("未找到可用的解码器 / Failed to Find Decoder | Error at av_find_best_stream()"));
			goto _Clear;
		}
		ErrorLog(FString("未找到可用的音频流 / Failed to Find Best Stream | Error at av_find_best_stream()"));
		goto _Clear;
	}

	FFmpegParam->Local_AVStream = FFmpegParam->Local_AVFormatContext->streams[AudioInfo.ValidFirstAudioStreamIndex];
	//查找合适的解码器
	FFmpegParam->Local_AVCodec = avcodec_find_decoder(FFmpegParam->Local_AVStream->codecpar->codec_id);
	if (FFmpegParam->Local_AVCodec == NULL)
	{
		ErrorLog(FString("查找解码器失败 / Failed to Find Decoder | Error at avcodec_find_decoder()"));
		goto _Clear;
	}

	//使用查找到的解码器初始化编解码器上下文
	FFmpegParam->Local_AVCodecContext = avcodec_alloc_context3(FFmpegParam->Local_AVCodec);
	if (FFmpegParam->Local_AVCodecContext == NULL)
	{
		ErrorLog(FString("初始化编解码器上下文失败 / Failed alloc AVCodecContext | Error at avcodec_alloc_context3()"));
		goto _Clear;
	}

	//为编解码器上下文设置参数
	Ret = avcodec_parameters_to_context(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVStream->codecpar);
	if (Ret < 0)
	{
		ErrorLog(FString("为编解码器上下文设置参数失败 / Failed Set Parameters for AVCodec | Error at avcodec_parameters_to_context()"));
		goto _Clear;
	}

	//初始化一个音频编解码器的上下文
	Ret = avcodec_open2(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVCodec, NULL);
	if (Ret != 0)
	{
		//OutLog(FString("Error at avcodec_open2()"));
		ErrorLog("打开解码器失败 / Failed to Open Codec | Error at avcodec_open2()");
		goto _Clear;
	}

	//初始化输入音频格式结构体
	UCusStruct::InitAudioFormat(&InputFormat,
		FFmpegParam->Local_AVCodecContext->sample_rate,
		FFmpegParam->Local_AVCodecContext->sample_fmt,
		FFmpegParam->Local_AVCodecContext->channel_layout);

	//初始化输出音频格式结构体
	//是否匹配源
	if (PlayFormat.bSameAsSrc)
	{
		PlayFormat = InputFormat;
		PlayFormat.SampleFormat_E = ESampleFormat::E_SAMPLE_FMT_S16;
		UCusStruct::InitAudioFormat(&PlayFormat);
	}
	else
	{
		UCusStruct::InitAudioFormat(&PlayFormat);
	}

	int BytesPerSample = av_get_bytes_per_sample(PlayFormat.SampleFormat);
	int OutDataSize = PlayFormat.SampleRate * BytesPerSample * PlayFormat.Channels;

	//分配重采样参数
	swr_alloc_set_opts(FFmpegParam->Local_SwrContext,
		PlayFormat.ChannelLayout,
		PlayFormat.SampleFormat,
		PlayFormat.SampleRate,
		InputFormat.ChannelLayout,
		InputFormat.SampleFormat,
		InputFormat.SampleRate,
		0, NULL);
	//初始化重采样上下文
	swr_init(FFmpegParam->Local_SwrContext);

	//设置音频缓冲区大小
	AudioQueue->SetMaxBufferSize(AudioInfo.BufferSize * 1024 * 1024);

	//初始化SDL子系统
	if (SDL_Init(SDL_INIT_AUDIO | SDL_INIT_TIMER))
	{
		ErrorLog(FString("初始化SDL子系统失败 / Failed to Init SDL SubSystem | Error at SDL_Init(SDL_INIT_AUDIO) | " + FString(ANSI_TO_TCHAR(SDL_GetError()))));
		goto _Clear;
	}

	//启动播放线程
	//bRunPlay = true;
	//StartPlayThread();

	//int num = SDL_GetNumAudioDevices(0);
	//const char* DeveiceName = SDL_GetAudioDeviceName(num, 0);
	//audioId = SDL_OpenAudioDevice(NULL, 0, &wanted_spec, &spec, SDL_AUDIO_ALLOW_ANY_CHANGE);
	//if (audioId <= 0)
	//{
	//	printf("Open audio device error!\n");
	//	goto _Clear;
	//}
	//开启播放
	//SDL_PauseAudioDevice(audioId, 0);

	while(bRunDecode)
	{
		if (FFmpegParam->Local_AVPacket->stream_index != AudioInfo.ValidFirstAudioStreamIndex
			|| !AudioQueue->bCanPush)
		{
			continue;
		}
		if (!AudioInfo.bIsPaused)
		{
			//读取码流中的音频若干帧或者视频一帧
			Ret = av_read_frame(FFmpegParam->Local_AVFormatContext, FFmpegParam->Local_AVPacket);
			if (Ret < 0)
			{
				ErrorLog(FString("读取音频帧失败 / Failed to Read Audio Frame | Error at av_read_frame()"));
				goto _Clear;
			}
			if (FFmpegParam->Local_AVPacket->stream_index != AudioInfo.ValidFirstAudioStreamIndex)
			{
				av_packet_unref(FFmpegParam->Local_AVPacket);
				continue;
			}

			//将数据包发送到解码队列
			Ret = avcodec_send_packet(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVPacket);
			if (Ret == AVERROR(EAGAIN))
			{
				av_packet_unref(FFmpegParam->Local_AVPacket);
				continue;
			}
			if (Ret != 0)
			{
				ErrorLog(FString("发送数据包到解码队列失败 / Failed to Send Packet to Decode Queue | Error at avcodec_send_packet()"));
				goto _Clear;
			}

			//读取解码后的音频数据
			Ret = avcodec_receive_frame(FFmpegParam->Local_AVCodecContext, Frame);
			if (Ret == AVERROR(EAGAIN))
			{
				av_packet_unref(FFmpegParam->Local_AVPacket);
				continue;
			}
			if (Ret != 0)
			{
				ErrorLog(FString("读取解码后的音频数据失败 / Failed to Receive Audio Data | Error at avcodec_receive_frame()"));
				goto _Clear;
			}

			//初始化音频设备
			if (!AudioInfo.bDeviceIsInited)
			{
				InitAudioDevice(Frame);
			}

			/**
			 * 如何用获取到的 ConvertLen 去初始化播放器
			 */
			OutData = (uint8*)av_malloc(Frame->nb_samples* BytesPerSample * PlayFormat.Channels);
			int32 ConverLen = swr_convert(FFmpegParam->Local_SwrContext, &OutData, Frame->nb_samples, (const uint8_t**)Frame->data, Frame->nb_samples);

			//写PCM文件
			//fwrite(OutData, len * BytesPerSample * PlayFormat.Channels, 1, File);

			//写PCM文件
			//int data_size = av_get_bytes_per_sample(FFmpegParam->Local_AVCodecContext->sample_fmt);
			//for (int i = 0; i < Frame->nb_samples; i++) {
			//	//遍历声道
			//	for (int ch = 0; ch < FFmpegParam->Local_AVCodecContext->channels; ch++) {
			//		fwrite(Frame->data[ch] + data_size * i, 1, data_size, File);
			//	}
			//}

			//将音频数据添加到缓冲区
			AudioQueue->EnqueueFrame(OutData, ConverLen * BytesPerSample * PlayFormat.Channels);
			OutData = nullptr;
			av_packet_unref(FFmpegParam->Local_AVPacket);
		}
		//SDL_Delay(5);
	}

_Clear:
	UFFmpegFunctionLib::OutLog(this, true, FString("Clear Source"));

	bRunDecode = false;

	if (FFmpegParam != nullptr)
	{
		delete FFmpegParam;
		FFmpegParam = nullptr;
	}
}

void UAudioPlayer_FFmpeg::InitAudioDevice(AVFrame* Frame)
{
	int audioId = 0;
	//打开设备
	wanted_spec.channels = PlayFormat.Channels;
	wanted_spec.freq = PlayFormat.SampleRate;
	wanted_spec.format = AUDIO_S16SYS;
	//wanted_spec.silence = 0;
	//wanted_spec.samples = 1152;
	if (FFmpegParam->Local_AVCodecContext->frame_size != 0)
	{
		wanted_spec.samples = FFmpegParam->Local_AVCodecContext->frame_size;
	}
	else
	{
		wanted_spec.samples = Frame->nb_samples;
	}
	wanted_spec.callback = Call_Back_SDL;
	wanted_spec.userdata = AudioQueue;

	SDL_OpenAudio(&wanted_spec, NULL);
	SDL_PauseAudio(0);
	AudioInfo.bDeviceIsInited = true;
}

void UAudioPlayer_FFmpeg::OpenAudio()
{
	GlobalAudioPlayer = this;

	if (bRunDecode)
	{
		CloseAudio();
	}
	bRunDecode = true;

	std::thread AudioThread(&UAudioPlayer_FFmpeg::DecodeThread, this);
	AudioThread.detach();

	UE_LOG(LogTemp, Warning, TEXT("Audio Player Object: %s, Is Constructed!"), *this->GetName());
}

void UAudioPlayer_FFmpeg::PlayAudio(FString AudioURL)
{
}

void UAudioPlayer_FFmpeg::CloseAudio()
{
	bRunDecode = false;

	//清空缓冲区
	//AudioQueue->ClearQueue(true);
	//while (AudioQueue->GetFrameNum() > 0)
	//{
	//	uint8* Buffer;
	//	Buffer = AudioQueue->DequeueFrame();
	//	av_free(Buffer);
	//}

	SDL_CloseAudio();
	SDL_Quit();
}

void UAudioPlayer_FFmpeg::PauseAudio()
{
}

void UAudioPlayer_FFmpeg::ResumeAudio()
{
}

void UAudioPlayer_FFmpeg::SetVolume(int32 NewVolume)
{
	this->AudioInfo.SetVolume(NewVolume);
}

bool UAudioPlayer_FFmpeg::GetIsDecodeing()
{
	return bRunDecode;
}

UAudioPlayer_FFmpeg* UAudioPlayer_FFmpeg::FFmpegPlayAudio(FString Key, FAudioInfo InAudioInfo, FAudioFormat InPlaytFormat)
{
	UAudioPlayer_FFmpeg* Player = NewObject<UAudioPlayer_FFmpeg>();
	Player->SetAudioInfo(InAudioInfo);
	Player->SetAudioOutputFormat(InPlaytFormat);
	if (InAudioInfo.bAutoPlay)
	{
		Player->OpenAudio();
	}
	return Player;
}
