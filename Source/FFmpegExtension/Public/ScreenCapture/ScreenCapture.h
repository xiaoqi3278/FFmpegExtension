// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Utilities/CusEnum.h"
extern "C"
{
#include "libavformat/avformat.h"
}

#include "ScreenCapture.generated.h"

struct FScreenCap_Param
{
	AVFormatContext* AV_fmctx = NULL;
	const AVInputFormat* AV_Infm = NULL;
	const AVCodec* AV_Codec = NULL;
	AVStream* AV_InStream = NULL;

	AVCodecContext* AV_Coctx = NULL;

	void ReleaseParam()
	{
		if (AV_fmctx)
		{
			avformat_free_context(AV_fmctx);
		}
	}
};

USTRUCT(BlueprintType)
struct FScreenCapInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	bool bAutoCapture = true;

	//捕获分辨率
	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	int32 CapWidth;

	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	int32 CapHeight;

	//像素格式
	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	EPixFormat PixelFormat;

	//捕获帧率
	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	int32 CapFPS;

	//捕获方式：捕获全屏：desktop, 捕获窗口：title=窗口名
	UPROPERTY(EditAnywhere, Category = "FFmepgExtension|ScreenCapture|ScreenCapture")
	FString CapMethod = "desktop";

	UPROPERTY(EditAnywhere, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	bool bOutLog = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapture")
	int32 CapStreamIndex = -1;
};

UCLASS(Blueprintable)
class FFMPEGEXTENSION_API UScreenCapture : public UObject
{
	GENERATED_BODY()

public:
	int32 Ret;

	FScreenCap_Param* ScreenCap_Param;
	FScreenCapInfo ScreenCapInfo;

	//~ Begin UObject Interface.
	/** 大部分变量都初始化后调用 */
	virtual void PostInitProperties() override;
	//~ End UObject Interface.

	void CaptureFunction();

private:
	/** 初始化解封装上下文 */
	bool InitFormatContext();

	/** 初始化解码器 */
	bool InitDecoder();
};