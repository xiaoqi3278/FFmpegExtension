// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Utilities/CusEnum.h"
#include "Widgets/Layout/SConstraintCanvas.h"

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
}

#include "VideoPlayer_FFmpeg.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EKeepVideoRatio : uint8
{
	No,
	Height,
	Width,
	Auto
};

struct FLocal_FFmpegParam
{
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
	const AVCodec* Local_AVCodec = NULL;

	//编解码器上下文，包含了众多编解码器需要的参数信息
	AVCodecContext* Local_AVCodecContext = NULL;

	//图像转换上下文,提供图像缩放、图像格式转换等功能
	SwsContext* Local_SwsContext = NULL;

	FLocal_FFmpegParam()
	{
		Local_AVFormatContext = avformat_alloc_context();
	};

	void ReleaseFFmpegParam()
	{
		if (Local_SwsContext)
		{
			sws_freeContext(Local_SwsContext);
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
	}
};

USTRUCT(BlueprintType)
struct FVideoInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|Video|VideoPlayer")
	bool bAutoPlay = false;

	//视频地址
	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|Video|VideoPlayer")
	FString VideoURL;

	//是否输出到日志,可能会影响性能
	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|Video|VideoPlayer")
	bool bOutLog = false;

	//视频帧更新方法
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|Video|VideoPlayer")
	EUpdateTextureMethod UpdateTextureMethod;

	/** 预期大小 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|Video|VideoPlayer")
	FVector2D ExpectedSize;

	/** 保持宽高比 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|Video|VideoPlayer")
	EKeepVideoRatio KeepVideoRatio;
	
	UTexture2D* VideoTexture;
	FUpdateTextureRegion2D Region;

	//视频帧率
	float FPS;

	//首个可用的视频流
	int32 ValidFirstVideoStreamIndex = -1;

	//视频总时长
	int32 VideoTotalTime;

	//帧间隔时间
	int32 FrameInterval_ms;

	//视频帧缓存
	uint8* FrameBuffer = nullptr;

	//帧宽
	int32 FrameWidth;
	//帧高
	int32 FrameHeight;

	~FVideoInfo()
	{
		//if (FrameBuffer != nullptr)
		//{
			//delete FrameBuffer;
			//FrameBuffer = nullptr;
		//}
	}
};

class SConstraintCanvas;

UCLASS()
class FFMPEGEXTENSION_API UVideoPlayer_FFmpeg : public UImage
{
	GENERATED_BODY()

private:

	FORCEINLINE void OutLog(const FString OutMessage) const
	{
		if (VideoInfo.bOutLog)
		{
			AsyncTask(ENamedThreads::GameThread, [=]()
				{
					UE_LOG(LogTemp, Warning, TEXT("PlayerObject: %s, %s"), *this->GetName(), *OutMessage);
				});
		}
	}

public:

	FLocal_FFmpegParam* FFmpegParam;
	SConstraintCanvas::FSlot* ParentSlateSlot;

	//视频相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|VideoPlayer", meta = (ExposeOnSpawn = true))
	FVideoInfo VideoInfo;

	//控制线程退出
	bool bRun = true;

	virtual void SynchronizeProperties() override;
	void VideoThread();

	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void CloseVideo();

	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void OpenVideo();

	UFUNCTION(BlueprintCallable, Category = "v")
	void SetVideoKeepRatio(EKeepVideoRatio KeepVideoRatio);
	
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	
	virtual void BeginDestroy() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
};
