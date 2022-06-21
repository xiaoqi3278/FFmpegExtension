// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Utilities/CusEnum.h"

extern "C"
{
#include "libavformat/avformat.h"
#include "Video/VideoPlayer_FFmpeg.h"
}

#include "ScreenCapture.generated.h"

struct FScreenCap_Param
{
	AVFormatContext* AV_fmctx = NULL;
	const AVInputFormat* AV_Infm = NULL;
	AVStream* AV_InStream = NULL;

	const AVCodec* AV_EnCodec = NULL;
	AVCodecContext* AV_EnCoctx = NULL;

	const AVCodec* AV_DeCodec = NULL;
	AVCodecContext* AV_DeCoctx = NULL;

	AVFormatContext* AV_Outfmctx = NULL;
	AVStream* AV_OutStream = NULL;

	SwsContext* Swsctx = NULL;

	AVFrame* SrcFrame = NULL;
	AVFrame* DestFrame = NULL;
	AVPacket* DePacket = NULL;
	AVPacket* EnPacket = NULL;

	void ReleaseParam()
	{
		if (AV_fmctx)	avformat_free_context(AV_fmctx);
	}
};

USTRUCT(BlueprintType)
struct FEncodeParam
{
	GENERATED_BODY()

	//比特率
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 BitRate = 3000;

	//两个I帧之间的帧数目
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 GopSize = 20;

	//关键帧之间的最小间隔
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 KeyMin = 20;

	//相邻两个非B帧之间最多出现的B帧数量
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 MaxBFrames = 0;

	//像素编码格式
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	EPixFormat PixFormat;

	//编码器
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	ECoder Coder;

	//多线程编码
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 ThreadCounts = 8;

	//最小量化因子, 1~51
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 QMin = 20;

	//最大量化因子, 1~51
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	int32 QMax = 30;

	//编码速度，速度越快压缩率越低
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	EPresetParam PresetParam;

	//为视频类型和视觉效果优化
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|EncodeParam")
	ETuneParam TuneParam;
};

USTRUCT(BlueprintType)
struct FScreenCapInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	bool bAutoCapture = true;

	//捕获分辨率
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	int32 CapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	int32 CapHeight;

	//像素格式
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	EPixFormat PixelFormat;

	//捕获帧率
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	int32 CapFPS;

	//捕获方式：捕获全屏：desktop, 捕获窗口：title=窗口名
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	FString CapMethod = "desktop";

	//视频编码配置
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	FEncodeParam EncodeParam;

	//输出像素格式
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	EPixFormat OutPixFormat;

	//图像转换算法 DEFAULT == SWS_FAST_BILINEAR
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	EScaleFlag ScaleFlag = EScaleFlag::E_SWS_FAST_BILINEAR;

	//输出格式名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	FString OutFormatName = "mpegts";

	//输出文件名称
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmepgExtension|ScreenCapture|ScreenCapInfo")
	FString FileName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	bool bOutLog = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FFmpegExtension|ScreenCapture|ScreenCapInfo")
	int32 CapStreamIndex = -1;
};

UCLASS(Blueprintable)
class FFMPEGEXTENSION_API UScreenCapture : public UObject
{
	GENERATED_BODY()

public:
	int32 Ret;
	bool bRun = true;

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

	/** 初始化编码器 */
	bool InitEncoder();

	/** 初始化输出流 */
	bool InitOutputStream();

	/** 初始化格式转换上下文 */
	bool InitSwsContext();
};