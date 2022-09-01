// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CusEnum.h"
#include "UObject/NoExportTypes.h"

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libswresample/swresample.h"
}

#include "CusStruct.generated.h"

/**
 * 
 */

//FFmpeg相关
struct FLocal_FFmpegParam
{
public:
	/**
	 * AVFormatContext
	 * 解封装上下文,描述媒体文件或者媒体流的构成和基本信息
	 */
	AVFormatContext* Local_AVFormatContext;

	/**
	 * AVDictionary
	 * ͨ健值对存储工具,设置/读取内部参数
	 */
	AVDictionary* Local_AVDictionary = NULL;

	//编解码器参数
	AVCodecParameters* Local_AVCodecParameters = NULL;

	//存储编解码器信息的结构体
	AVCodec* Local_AVCodec = NULL;

	//编解码器上下文，包含了众多编解码器需要的参数信息
	AVCodecContext* Local_AVCodecContext = NULL;

	//图像转换上下文,提供图像缩放、图像格式转换等功能
	SwsContext* Local_SwsContext = NULL;
	//音频重采样上下文
	SwrContext* Local_SwrContext = NULL;

	AVStream* Local_AVStream = NULL;

	AVPacket* Local_AVPacket = NULL;

	FLocal_FFmpegParam()
	{
		Local_AVFormatContext = avformat_alloc_context();
		Local_AVPacket = av_packet_alloc();
	};

	~FLocal_FFmpegParam()
	{
		avformat_close_input(&Local_AVFormatContext);
		if (Local_SwsContext)
		{
			sws_freeContext(Local_SwsContext);
		}
		if (Local_SwrContext)
		{
			swr_free(&Local_SwrContext);
		}

		if (Local_AVCodecContext)
		{
			avcodec_close(Local_AVCodecContext);
		}

		if (Local_AVFormatContext)
		{
			avformat_close_input(&Local_AVFormatContext);
		}

		if (Local_AVCodecContext)
		{
			avcodec_free_context(&Local_AVCodecContext);
		}

		if (Local_AVFormatContext)
		{
			avformat_free_context(Local_AVFormatContext);
		}

		if (Local_AVPacket)
		{
			av_packet_free(&Local_AVPacket);
		}
	}
};

//音频重采样时一帧音频信息
struct FAudioFrameData
{
	//指向缓冲区的指针
	uint8_t** AudioData = nullptr;

	//缓冲区大小
	int32 LineSize = 0;

	//声道数
	int32 Channels = 0;

	//每个采样样本的大小
	int32 PerSampleInByte = 0;

	//缓冲区样本数量
	int32 Samples = 0;

	//采样率
	int32 SampleRate = 0;

	//采样格式
	AVSampleFormat Format;
};

//时长
USTRUCT(BlueprintType)
struct FMediaTime
{
	GENERATED_BODY()

	//小时
	UPROPERTY(BlueprintReadWrite)
	int32 Hours;

	//分钟
	UPROPERTY(BlueprintReadWrite)
	int32 Minutes;

	//秒
	UPROPERTY(BlueprintReadWrite)
	int32 Seconds;

	//帧
	UPROPERTY(BlueprintReadWrite)
	int32 Frames;

	FMediaTime()
	{

	}

	/**
	 * @param Duration us
	 */
	FMediaTime(int64 Duration, float FPS)
	{
		const double FrameIntervalTime = 1.00 / FPS * AV_TIME_BASE;
		Frames = Duration <= 0 ? 0 : (Duration % AV_TIME_BASE) / FrameIntervalTime;
		int32 TotalSeconds = Duration / AV_TIME_BASE;
		Hours = TotalSeconds / 3600;
		Minutes = TotalSeconds / 60;
		Seconds = TotalSeconds % 60;
	}

	/**
	 * @param Duration seconds
	 */
	FMediaTime(float Duration, float FPS)
	{
		int64 Duration_s = Duration * 1000000;
		const double FrameIntervalTime = 1.00 / FPS * AV_TIME_BASE;
		Frames = Duration_s <= 0 ? 0 : (Duration_s % AV_TIME_BASE) / FrameIntervalTime;
		int32 TotalSeconds = Duration_s / AV_TIME_BASE;
		Hours = TotalSeconds / 3600;
		Minutes = TotalSeconds / 60;
		Seconds = TotalSeconds % 60;
	}
};

//视频相关
USTRUCT(BlueprintType)
struct FVideoInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	bool bAutoPlay = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	bool bLoop = false;

	bool bIsPaused = false;

	//视频地址
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	FString VideoURL;

	//帧缓冲区大小(计算方式: 一帧所需缓冲区大小(MB) = (分辨率X * 分辨率Y * 4) / 1024 / 1024)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video", meta = (DisplayName = "BufferSize(MB)"))
	float BufferSize = 100;

	//是否输出到日志,可能会影响性能
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	bool bOutLog = false;

	//视频帧更新方法
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	EUpdateTextureMethod UpdateTextureMethod;

	/** 预期大小 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	FVector2D ExpectedSize;

	/** 保持宽高比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video")
	EVideoRatio VideoRatio;

	UTexture2D* VideoTexture;
	FUpdateTextureRegion2D Region;

	//视频帧率
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	float FPS;

	//首个可用的视频流
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 ValidFirstVideoStreamIndex = -1;

	//视频总时长(秒)
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 VideoTime_s;

	//视频总时长(毫秒)
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int64 VideoTime_ms;

	//视频总时长(微秒)
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int64 VideoTime_us;

	//视频总时长(FTime)
	FMediaTime VideoTime;

	//解码线程每帧解码后等待的时间
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int64 FrameDecodeInterval_ms = 10;

	//帧渲染间隔时间(毫秒)
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 FrameInterval_ms;

	//帧渲染间隔时间(秒)
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	float FrameInterval_s;

	//单帧缓冲大小
	float FrameBufferSize = 0;

	//帧宽
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 FrameWidth;
	//帧高
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 FrameHeight;

	//循环次数
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Video")
	int32 LoopIndex = 0;

	~FVideoInfo()
	{
		//if (FrameBuffer != nullptr)
		//{
			//delete FrameBuffer;
			//FrameBuffer = nullptr;
		//}
	}
};

//音频相关
USTRUCT(BlueprintType)
struct FAudioInfo
{
	GENERATED_BODY()

	//是否自动播放
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	bool bAutoPlay = false;

	//是否自动循环
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	bool bLoop = false;

	bool bIsPaused = false;

	uint8_t* Buffer = nullptr;
	int32 BufferLen = 0;

	//音频地址
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	FString AudioURL;

	//首个可用的音频流
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Audio")
	int32 ValidFirstAudioStreamIndex = -1;

	//输出音频采样率
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	ESampleRate OutSampleRate = ESampleRate::E_44100;

	//输出音频采样格式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	ESampleFormat OutSampleFormat = ESampleFormat::E_SAMPLE_FMT_S16;

	//输出声道布局
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio")
	EChannelLayout OutChannelLayout = EChannelLayout::E_CH_LAYOUT_STEREO;

	//输出声道数量
	UPROPERTY(BlueprintReadOnly, Category = "FFmpegExtension|Audio")
	int32 OutChannelCount;

	//帧缓冲区大小
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Audio", meta = (DisplayName = "BufferSize(MB)"))
	float BufferSize = 10;
};

UCLASS()
class FFMPEGEXTENSION_API UCusStruct : public UObject
{
	GENERATED_BODY()

public:
	//格式转换(X -> 0X)
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Utilities")
	static FString TimeFormat(int32 Num);

	//视频时长(us)转为 FTime 格式
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Utilities", DisplayName = "VideoDuration(us)ToTime")
	static FMediaTime VideoDurationToTime_us(int64 Duration, float FPS);

	//视频时长(s)转为 FTime 格式
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Utilities", DisplayName = "VideoDuration(s)ToTime")
	static FMediaTime VideoDurationToTime_s(float Duration, float FPS);

	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Utilities", DisplayName = "ToString")
	static FString VideoTimeToString(FMediaTime Time);

	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Utilities", DisplayName = "ToString")
	static FString VideoInfoToString(FVideoInfo VideoInfo);

	static float TimeToSeconds(FMediaTime Time, int32 FPS);
};
