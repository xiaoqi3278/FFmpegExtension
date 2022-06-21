// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"

extern "C"
{
#include "libavcodec/codec_id.h"
}

#include "UObject/NoExportTypes.h"
#include "CusEnum.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EUpdateTextureMethod : uint8
{
	//使用内存复制的方式更新视频帧
	Memcpy UMETA(DisplayName = "Memcpy"),
	//将视频帧数据发送到渲染线程更新
	RHICommand UMETA(DisplayName = "RHICommand")
};

UENUM(BlueprintType)
enum class EPixFormat : uint8
{
	YUV420P,
	YUYV422,
	RGB24,
	BGR24,
	YUV422P,
	YUV444P,
	YUV410P,
	YUV411P,
	GRAY8,
	MONOWHITE,
	MONOBLACK,
	PAL8,
	YUVJ420P,
	YUVJ422P,
	YUVJ444P,
	UYVY422,
	UYYVYY411,
	BGR8,
	BGR4,
	BGR4_BYTE,
	RGB8,
	RGB4,
	RGB4_BYTE,
	NV12,
	NV21,
	ARGB,
	RGBA,
	ABGR,
	BGRA
};

UENUM(BlueprintType)
enum class ECoder : uint8
{
	H264
};

//编码速度，速度越快压缩率越低
UENUM(BlueprintType)
enum class EPresetParam : uint8
{
	ULTRAFAST,
	SUPERFAST,
	VERYFAST,
	FASTER,
	FAST,
	MEDIUM,
	SLOW,
	SLOWER,
	VERYSLOW,
	PLACEBO
};

//为视频类型和视觉效果优化
UENUM(BlueprintType)
enum class ETuneParam : uint8
{
	//电影、真人类型
	FILM,

	//动画
	ANIMATION,

	//需要保留大量的纹理时使用
	GRAIN,

	//静态图像编码时使用
	STILLIMAGE,

	//为提高psnr(峰值信噪比)做了优化的参数
	PSNR,

	//为提高ssim(结构相似指标)做了优化的参数
	SSIM,

	//可以快速解码的参数
	FASTDECODE,

	//零延迟，在对延迟非常敏感的环境下使用
	ZEROLATENCY
};

//图像转换算法
UENUM(BlueprintType)
enum class EScaleFlag : uint8
{
	DEFAULT = 0,
	E_SWS_FAST_BILINEAR = 1,
	E_SWS_BILINEAR = 2,
	E_SWS_BICUBIC = 4,
	E_SWS_X = 8,
	E_SWS_POINT = 0x10,
	E_SWS_AREA = 0x20,
	E_SWS_BICUBLIN = 0x40,
	E_SWS_GAUSS = 0x80,
	E_SWS_SINC = 0x100,
	E_SWS_LANCZOS = 0x200,
	E_SWS_SPLINE = 0x400
};

UCLASS()
class FFMPEGEXTENSION_API UCusEnum : public UObject
{
	GENERATED_BODY()

public:
	static FString PixFormatToFString(EPixFormat PixFormat);
	static std::string PixFormatToStandardString(EPixFormat PixFormat);
	static const char* PixFormatToChar(EPixFormat PixFormat);

	static AVCodecID CoderToAvCodecID(ECoder Coder);

	static std::string PresetParamToStandardString(EPresetParam PresetParam);

	static std::string TuneParamToStandardString(ETuneParam TuneParam);
};
