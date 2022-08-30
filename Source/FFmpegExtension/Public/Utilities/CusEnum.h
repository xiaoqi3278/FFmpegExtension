// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "libavutil/samplefmt.h"

extern "C"
{
#include "libavcodec/codec_id.h"
}

#include "UObject/NoExportTypes.h"
#include "CusEnum.generated.h"

/**
 * 
 */

//缩放
UENUM(BlueprintType)
enum class EVideoRatio : uint8
{
	No,
	Height,
	Width,
	Origin,
	Auto
};

//解码状态
UENUM(BlueprintType)
enum class EDecodeState : uint8
{
	NotStarted,
	Stopped,
	Decoding,
	Completed,
	Seeking
};

//引擎图像更新方式
UENUM(BlueprintType)
enum class EUpdateTextureMethod : uint8
{
	//使用内存复制的方式更新视频帧
	Memcpy UMETA(DisplayName = "Memcpy"),
	//将视频帧数据发送到渲染线程更新
	RHICommand UMETA(DisplayName = "RHICommand")
};

//像素格式
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

//编解码器
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
	E_SWS_FAST_BILINEAR,
	E_SWS_BILINEAR,
	E_SWS_BICUBIC,
	E_SWS_X,
	E_SWS_POINT,
	E_SWS_AREA,
	E_SWS_BICUBLIN,
	E_SWS_GAUSS,
	E_SWS_SINC,
	E_SWS_LANCZOS,
	E_SWS_SPLINE
};

//采样率
UENUM(BlueprintType)
enum class ESampleRate : uint8
{
	E_44100 UMETA(DisplayName = "44100 HZ"),
	E_48000 UMETA(DisplayName = "48000 HZ"),
	E_96000 UMETA(DisplayName = "96000 HZ"),
	E_192000 UMETA(DisplayName = "192000 HZ")

};

//采样格式
UENUM(BlueprintType)
enum class ESampleFormat : uint8
{
	E_SAMPLE_FMT_U8,          ///< unsigned 8 bits
	E_SAMPLE_FMT_S16,         ///< signed 16 bits
	E_SAMPLE_FMT_S32,         ///< signed 32 bits
	E_SAMPLE_FMT_FLT,         ///< float
	E_SAMPLE_FMT_DBL,         ///< double

	E_SAMPLE_FMT_U8P,         ///< unsigned 8 bits, planar
	E_SAMPLE_FMT_S16P,        ///< signed 16 bits, planar
	E_SAMPLE_FMT_S32P,        ///< signed 32 bits, planar
	E_SAMPLE_FMT_FLTP,        ///< float, planar
	E_SAMPLE_FMT_DBLP,        ///< double, planar
	E_SAMPLE_FMT_S64,         ///< signed 64 bits
	E_SAMPLE_FMT_S64P,        ///< signed 64 bits, planar

	E_SAMPLE_FMT_NB           ///< Number of sample formats. DO NOT USE if linking dynamically
};

//声道布局
UENUM(BlueprintType)
enum class EChannelLayout : uint8
{
	E_CH_LAYOUT_MONO,
	E_CH_LAYOUT_STEREO,
	E_CH_LAYOUT_2POINT1,
	E_CH_LAYOUT_2_1,
	E_CH_LAYOUT_SURROUND,
	E_CH_LAYOUT_3POINT1,
	E_CH_LAYOUT_4POINT0,
	E_CH_LAYOUT_4POINT1,
	E_CH_LAYOUT_2_2,
	E_CH_LAYOUT_QUAD,
	E_CH_LAYOUT_5POINT0,
	E_CH_LAYOUT_5POINT1,
	E_CH_LAYOUT_5POINT0_BACK,
	E_CH_LAYOUT_5POINT1_BACK,
	E_CH_LAYOUT_6POINT0,
	E_CH_LAYOUT_6POINT0_FRONT,
	E_CH_LAYOUT_HEXAGONAL,
	E_CH_LAYOUT_6POINT1,
	E_CH_LAYOUT_6POINT1_BACK,
	E_CH_LAYOUT_6POINT1_FRONT,
	E_CH_LAYOUT_7POINT0,
	E_CH_LAYOUT_7POINT0_FRONT,
	E_CH_LAYOUT_7POINT1,
	E_CH_LAYOUT_7POINT1_WIDE,
	E_CH_LAYOUT_7POINT1_WIDE_BACK,
	E_CH_LAYOUT_OCTAGONAL,
	E_CH_LAYOUT_HEXADECAGONAL,
	E_CH_LAYOUT_STEREO_DOWNMIX,
	E_CH_LAYOUT_22POINT2          
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

	static int32 GetScaleFlagFFmpegIndex(EScaleFlag ScaleFlag);

	static int32 ESampleRateToInt(ESampleRate SampleRate);

	static AVSampleFormat ESampleFormatToAVSampleFormat(ESampleFormat SampleFormat);
};
