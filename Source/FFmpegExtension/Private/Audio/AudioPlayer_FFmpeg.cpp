// Fill out your copyright notice in the Description page of Project Settings.


#include "Audio/AudioPlayer_FFmpeg.h"
#include "Utilities/FFmpegFunctionLib.h"

#include <thread>

#include "FFmpegExtension/Thirdparty/SDL/include/SDL_error.h"

extern "C"
{
#include "FFmpegExtension/Thirdparty/SDL/include/SDL.h"
#include "FFmpegExtension/Thirdparty/SDL/include/SDL_error.h"
#include "libswresample/swresample.h"
}




void UAudioPlayer_FFmpeg::PostInitProperties()
{
	UObject::PostInitProperties();

	if (GetWorld() && AudioInfo.bAutoPlay)
	{
		OpenAudio();
	}
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

void UAudioPlayer_FFmpeg::ErrorLog(FString ErrorMessage)
{
	UFFmpegFunctionLib::OutLog(this, true, ErrorMessage);
	if (IsValid(this))
	{
		OnAudioError.Broadcast(ErrorMessage);
	}
}

int32 BufferLen = 0;
uint8_t* GlobalBuffer = nullptr;
bool bPlay = true;

//当音频设备需要更多数据时会调用该函数
void (Call_Back_SDL) (void* userdata, Uint8* stream, int len)
{
	if (!bPlay)
	{
		return;
	}

	//清空 stream
	SDL_memset(stream, 0, len);

	if (BufferLen <= 0)
	{
		return;
	}

	len = (len > BufferLen) ? BufferLen : len;
	//UE_LOG(LogTemp, Warning, TEXT("Call Back!"));
	//填充数据
	SDL_MixAudio(stream, (Uint8*)GlobalBuffer, len, SDL_MIX_MAXVOLUME);
	BufferLen -= len;
	GlobalBuffer += len;
}

//void UAudioPlayer_FFmpeg::Call_Back_SDL(void* userdata, Uint8* stream, int len)
//{
//	if (!bPlay)
//	{
//		return;
//	}
//
//	//清空 stream
//	SDL_memset(stream, 0, len);
//
//	if (BufferLen <= 0)
//	{
//		return;
//	}
//
//	len = (len > BufferLen) ? BufferLen : len;
//	UE_LOG(LogTemp, Warning, TEXT("Call Back!"));
//	//填充数据
//	SDL_MixAudio(stream, (Uint8*)GlobalBuffer, len, SDL_MIX_MAXVOLUME);
//	BufferLen -= len;
//	GlobalBuffer += len;
//}

void UAudioPlayer_FFmpeg::DecodeThread()
{
	FFmpegParam = new FLocal_FFmpegParam();
	//解压缩后存放的数据帧
	AVFrame* Frame = av_frame_alloc();
	//初始化音频重采样上下文
	FFmpegParam->Local_SwrContext = swr_alloc();

	//FFmpeg API 返回错误码
	int32 Ret = 0;

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

	//音频格式 输入的采样设置参数
	AVSampleFormat InFormat = FFmpegParam->Local_AVCodecContext->sample_fmt;
	//输出采样格式
	AVSampleFormat OutFormat = AV_SAMPLE_FMT_S16;
	//AVSampleFormat OutFormat = UCusEnum::ESampleFormatToAVSampleFormat(AudioInfo.OutSampleFormat);

	//输入采样率
	int InRate = FFmpegParam->Local_AVCodecContext->sample_rate;
	//输出采样率
	int OutRate = UCusEnum::ESampleRateToInt(AudioInfo.OutSampleRate);

	//输入声道布局
	uint64_t InChannelLayout = FFmpegParam->Local_AVCodecContext->channel_layout;
	//输出声道布局
	uint64_t OutChannelLayout = UCusEnum::EChannelLayoutToint64(AudioInfo.OutChannelLayout);

	//设置 Swrcontext 参数
	swr_alloc_set_opts(FFmpegParam->Local_SwrContext, OutChannelLayout, OutFormat, OutRate, InChannelLayout, InFormat, InRate, 0, NULL);
	//初始化
	swr_init(FFmpegParam->Local_SwrContext);

	//获取声道数量
	AudioInfo.OutChannelCount = av_get_channel_layout_nb_channels(OutChannelLayout);

	//计算一个音频Buffer所需内存大小
	AudioQueue->SetFrameBufferSize(AudioInfo.OutChannelCount * OutRate * 2 / 1024 / 1024);
	//设置音频缓冲区的大小
	AudioQueue->SetBufferSize(AudioInfo.BufferSize);

	//初始化SDL子系统
	if (SDL_Init(SDL_INIT_AUDIO))
	{
		ErrorLog(FString("初始化SDL子系统失败 / Failed to Init SDL SubSystem | Error at SDL_Init(SDL_INIT_AUDIO) | " + FString(ANSI_TO_TCHAR(SDL_GetError()))));
		goto _Clear;
	}

	//音频设备参数
	SDL_AudioSpec Spec;
	Spec.freq = OutRate;
	Spec.format = AUDIO_S16;
	Spec.channels = AudioInfo.OutChannelCount;
	Spec.samples = 1024;
	Spec.callback = Call_Back_SDL;

	//打开音频设备
	if (SDL_OpenAudio(&Spec, nullptr))
	{
		ErrorLog(FString("打开音频设备失败 / Failed to Open Audio Device | Error at SDL_OpenAudio() | " + FString(ANSI_TO_TCHAR(SDL_GetError()))));
		goto _Clear;
	}

	//启动播放线程
	bRunPlay = true;
	StartPlayThread();

	while(bRunDecode)
	{
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

			AudioInfo.BufferLen = AudioInfo.OutChannelCount * OutRate * 2 * sizeof(uint8);
			//申请 Buffer 内存
			uint8_t* Buffer = (uint8*)av_malloc(AudioInfo.BufferLen);

			//音频数据转换
			swr_convert(FFmpegParam->Local_SwrContext, &Buffer, AudioInfo.OutChannelCount * OutRate * 2, (const uint8_t**)Frame->data, Frame->nb_samples);
			//将音频数据添加到缓冲区
			AudioQueue->EnqueueFrame(Buffer);

			av_packet_unref(FFmpegParam->Local_AVPacket);
		}
		SDL_Delay(100);
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

void UAudioPlayer_FFmpeg::PlayThread()
{
	SDL_PauseAudio(0);
	while(bRunPlay)
	{
		if (!AudioInfo.bIsPaused)
		{
			if (BufferLen > 0)
			{
				continue;
			}

			if (AudioInfo.Buffer)
			{
				//delete AudioInfo.Buffer;
				av_free(AudioInfo.Buffer);
				AudioInfo.Buffer = nullptr;
			}

			BufferLen = AudioInfo.BufferLen;
			GlobalBuffer = AudioQueue->DequeueFrame();
			AudioInfo.Buffer = GlobalBuffer;
		}
	}
	
	SDL_CloseAudio();
	SDL_Quit();
}

void UAudioPlayer_FFmpeg::StartPlayThread()
{
	std::thread PlayThread(&UAudioPlayer_FFmpeg::PlayThread, this);
	PlayThread.detach();
}

void UAudioPlayer_FFmpeg::OpenAudio()
{
	if (bRunDecode)
	{
		CloseAudio();
	}
	bRunDecode = true;
	bPlay = true;

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
	bRunPlay = false;
	bPlay = false;

	//清空缓冲区
	while (AudioQueue->GetFrameNum() > 0)
	{
		uint8* Buffer;
		Buffer = AudioQueue->DequeueFrame();
		av_free(Buffer);
	}
}

void UAudioPlayer_FFmpeg::TestFunction()
{
	//(*Call_Back_SDL)(nullptr, nullptr, 1);
}
