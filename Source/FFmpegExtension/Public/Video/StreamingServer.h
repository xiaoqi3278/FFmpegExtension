// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavcodec/bsf.h"
#include "libavcodec/packet.h"
#include "libavformat/avformat.h"
#include "libavutil/mem.h"
}

#include "StreamingServer.generated.h"

/**
 * 
 */

struct FServer_FFmpegParam
{
	//输入解封装上下文
	AVFormatContext* Local_InAVFormatContext = NULL;
	//输出解封装上下文
	AVFormatContext* Local_OutAVFormatContext = NULL;

	//输入音视频流
	AVStream* Local_InStream = NULL;
	//为输出解封装上下文添加音视频流
	AVStream* Local_OutStream = NULL;

	const AVCodec* Local_AVCodec = NULL;
	AVCodecContext* Local_AVCodecContext = NULL;

	//保存输出格式信息和常规设置
	const AVOutputFormat* Local_AVOutputFormat = NULL;

	AVPacket* Local_AVPacket = NULL;

	const AVBitStreamFilter* Local_Filter = NULL;

	//void ReleaseFFmpegParam()
	~FServer_FFmpegParam()
	{
		if (Local_InAVFormatContext)
		{
			avformat_free_context(Local_InAVFormatContext);

		}

		if (Local_OutAVFormatContext)
		{
			avio_close(Local_OutAVFormatContext->pb);
			avformat_free_context(Local_OutAVFormatContext);
		}

		if (Local_AVCodecContext)
		{
			avcodec_free_context(&Local_AVCodecContext);
		}

		if (Local_AVOutputFormat)
		{
			av_free(&Local_AVOutputFormat);
		}

		if (Local_AVPacket)
		{
			av_packet_free(&Local_AVPacket);
		}

		if (Local_Filter)
		{
			av_free(&Local_Filter);
		}
	}
};

USTRUCT(BlueprintType)
struct FStreamingInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|StreamingServer")
	bool bAutoStreaming = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|StreamingServer")
	FString InURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|StreamingServer")
	FString OutURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|StreamingServer")
	bool bOutLog = true;

	//首个可用的视频流
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 FirstValidVideoIndex = -1;
	//首个可用的音频流
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 FirstValidAudioIndex = -1;
};

UCLASS(Blueprintable)
class FFMPEGEXTENSION_API UStreamingServer : public UObject
{
	GENERATED_BODY()

private:

	FORCEINLINE void OutLog(const FString OutMessage) const
	{
		if (StreamingInfo.bOutLog)
		{
			AsyncTask(ENamedThreads::GameThread, [=]()
				{
					UE_LOG(LogTemp, Warning, TEXT("PlayerObject: %s, %s"), *this->GetName(), *OutMessage);
				});
		}
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video", Meta = (ExposeOnSpawn = true))
	FStreamingInfo StreamingInfo;

	FServer_FFmpegParam* FFmpegParam;
	bool bRun = true;

	//~ Begin UObject Interface.
	/** 大部分变量都初始化后调用 */
	virtual void PostInitProperties() override;
	//~ End UObject Interface.

	void StreamingFunction();

	void OpenStreaming();
	void CloseStreaming();

	virtual void BeginDestroy() override;
	~UStreamingServer();
};
