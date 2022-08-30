// Fill out your copyright notice in the Description page of Project Settings.


#include "Audio/AudioPlayer_FFmpeg.h"
#include "Utilities/FFmpegFunctionLib.h"

#include <thread>

#include "libswresample/swresample.h"


void UAudioPlayer_FFmpeg::PostInitProperties()
{
	UObject::PostInitProperties();

	if (GetWorld())
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

void UAudioPlayer_FFmpeg::DecodeThread()
{
	FFmpegParam = new FLocal_FFmpegParam();

	//FFmpeg API 返回错误码
	int32 ret;

	//初始化网络库
	avformat_network_init();

	//音频地址地址
	const char* LocalAudioURL = TCHAR_TO_UTF8(*AudioInfo.AudioURL);

	//打开音频
	ret = avformat_open_input(&FFmpegParam->Local_AVFormatContext, LocalAudioURL, 0, NULL);
	if (ret != 0)
	{
		ErrorLog("媒体流打开失败 / Failed to Open Media Stream | Error at avformat_open_input()");
		goto _Clear;
	}

	//探测文件信息
	ret = avformat_find_stream_info(FFmpegParam->Local_AVFormatContext, NULL);
	if (ret < 0)
	{
		ErrorLog("探测文件信息失败 / Failed to Find Stream Info | Error at avformat_find_stream_info()");
		goto _Clear;
	}

	//找到最合适的音频流
	AudioInfo.ValidFirstAudioStreamIndex = av_find_best_stream(FFmpegParam->Local_AVFormatContext, AVMEDIA_TYPE_AUDIO, -1, -1, &(FFmpegParam->Local_AVCodec), 0);
	if (AudioInfo.ValidFirstAudioStreamIndex < 0)
	{
		if (AudioInfo.ValidFirstAudioStreamIndex == AVERROR_DECODER_NOT_FOUND)
		{
			ErrorLog("未找到可用的解码器 / Failed to Find Decoder | Error at av_find_best_stream()");
			goto _Clear;
		}
		ErrorLog("未找到可用的音频流 / Failed to Find Best Stream | Error at av_find_best_stream()");
		goto _Clear;
	}

	FFmpegParam->Local_AVStream = FFmpegParam->Local_AVFormatContext->streams[AudioInfo.ValidFirstAudioStreamIndex];
	//查找合适的解码器
	FFmpegParam->Local_AVCodec = avcodec_find_decoder(FFmpegParam->Local_AVStream->codecpar->codec_id);
	if (FFmpegParam->Local_AVCodec == NULL)
	{
		ErrorLog("查找解码器失败 / Failed to Find Decoder | Error at avcodec_find_decoder()");
		goto _Clear;
	}

	//使用查找到的解码器初始化编解码器上下文
	FFmpegParam->Local_AVCodecContext = avcodec_alloc_context3(FFmpegParam->Local_AVCodec);
	if (FFmpegParam->Local_AVCodecContext == NULL)
	{
		ErrorLog("初始化编解码器上下文失败 / Failed alloc AVCodecContext | Error at avcodec_alloc_context3()");
		goto _Clear;
	}

	//为编解码器上下文设置参数
	ret = avcodec_parameters_to_context(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVStream->codecpar);
	if (ret < 0)
	{
		ErrorLog("为编解码器上下文设置参数失败 / Failed Set Parameters for AVCodec | Error at avcodec_parameters_to_context()");
		goto _Clear;
	}

	//解压缩后存放的数据帧
	AVFrame* Local_AVFrame = av_frame_alloc();
	//初始化音频重采样上下文
	FFmpegParam->Local_SwrContext = swr_alloc();
	//音频格式 输入的采样设置参数
	AVSampleFormat InFormat = FFmpegParam->Local_AVCodecContext->sample_fmt;
	//输出采样格式
	//AVSampleFormat OutFormat = AV_SAMPLE_FMT_S16;
	AVSampleFormat OutFormat = UCusEnum::ESampleFormatToAVSampleFormat(AudioInfo.OutSampleFormat);

	//输入采样率
	int InRate = FFmpegParam->Local_AVCodecContext->sample_rate;
	//输出采样率
	int outRate = UCusEnum::ESampleRateToInt(AudioInfo.OutSampleRate);

	//输入声道布局
	uint64_t InChannelLayout = FFmpegParam->Local_AVCodecContext->channel_layout;
	//输出声道布局
	uint64_t out_ch_layout = AV_CH_LAYOUT_STEREO;

_Clear:
	if (FFmpegParam != nullptr)
	{
		delete FFmpegParam;
		FFmpegParam = nullptr;
	}
}

void UAudioPlayer_FFmpeg::OpenAudio()
{
	if (bRun)
	{
		CloseAudio();
	}
	bRun = true;

	std::thread AudioThread(&UAudioPlayer_FFmpeg::DecodeThread, this);
	AudioThread.detach();
	UE_LOG(LogTemp, Warning, TEXT("Audio Player Object: %s, Is Constructed!"), *this->GetName());
}

void UAudioPlayer_FFmpeg::PlayAudio(FString AudioURL)
{
}

void UAudioPlayer_FFmpeg::CloseAudio()
{
}
