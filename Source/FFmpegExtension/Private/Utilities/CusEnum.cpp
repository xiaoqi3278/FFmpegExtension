// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/CusEnum.h"

FString UCusEnum::PixFormatToFString(EPixFormat PixFormat)
{
	switch(PixFormat)
	{
	case EPixFormat::YUV420P :
		return FString("yuv420p");
	}

	return FString("yuv420p");
}

std::string UCusEnum::PixFormatToStandardString(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::YUV420P:
		return std::string("yuv420p");
	}

	return std::string("yuv420p");
}

const char* UCusEnum::PixFormatToChar(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::YUV420P:
		return "yuv420p";
	}

	return "yuv420p";
}

AVCodecID UCusEnum::CoderToAvCodecID(ECoder Coder)
{
	switch(Coder)
	{
	case ECoder::H264:
		return AVCodecID::AV_CODEC_ID_H264;
	}

	return AVCodecID::AV_CODEC_ID_H264;
}

std::string UCusEnum::PresetParamToStandardString(EPresetParam PresetParam)
{
	switch(PresetParam)
	{
	case EPresetParam::ULTRAFAST:
		return std::string("ultrafast");
	case EPresetParam::SUPERFAST:
		return std::string("superfast");
	case EPresetParam::VERYFAST:
		return std::string("veryfast");
	case EPresetParam::FASTER:
		return std::string("faster");
	case EPresetParam::FAST:
		return std::string("fast");
	case EPresetParam::MEDIUM:
		return std::string("medium");
	case EPresetParam::SLOW:
		return std::string("slow");
	case EPresetParam::SLOWER:
		return std::string("slower");
	case EPresetParam::VERYSLOW:
		return std::string("veryslow");
	case EPresetParam::PLACEBO:
		return std::string("placebo");
	}

	return std::string("superfast");
}

std::string UCusEnum::TuneParamToStandardString(ETuneParam TuneParam)
{
	switch (TuneParam)
	{
	case ETuneParam::FILM:
		return std::string("film");
	case ETuneParam::ANIMATION:
		return std::string("animation");
	case ETuneParam::GRAIN:
		return std::string("grain");
	case ETuneParam::STILLIMAGE:
		return std::string("stillimage");
	case ETuneParam::PSNR:
		return std::string("psnr");
	case ETuneParam::SSIM:
		return std::string("ssim");
	case ETuneParam::FASTDECODE:
		return std::string("fastdecode");
	case ETuneParam::ZEROLATENCY:
		return std::string("zerolatency");
	}

	return std::string("zerolatency");
}

int32 UCusEnum::GetScaleFlagFFmpegIndex(EScaleFlag ScaleFlag)
{
	switch (ScaleFlag)
	{
	case EScaleFlag::E_SWS_FAST_BILINEAR:
		return 1;
	case EScaleFlag::E_SWS_BILINEAR :
		return 2;
	case EScaleFlag::E_SWS_BICUBIC :
		return 4;
	case EScaleFlag::E_SWS_X :
		return 8;
	case EScaleFlag::E_SWS_POINT :
		return 16;
	case EScaleFlag::E_SWS_AREA :
		return 32;
	case EScaleFlag::E_SWS_BICUBLIN :
		return 64;
	case EScaleFlag::E_SWS_GAUSS :
		return 128;
	case EScaleFlag::E_SWS_SINC :
		return 256;
	case EScaleFlag::E_SWS_LANCZOS :
		return 512;
	case EScaleFlag::E_SWS_SPLINE :
		return 1024;
	}

	return 1;
}

int32 UCusEnum::ESampleRate2Int(ESampleRate SampleRate)
{
	switch (SampleRate)
	{
	case ESampleRate::E_6000:	return 6000;
	case ESampleRate::E_8000:	return 8000;
	case ESampleRate::E_11025:	return 11025;
	case ESampleRate::E_16000:	return 16000;
	case ESampleRate::E_22050:	return 22050;
	case ESampleRate::E_32000:	return 32000;
	case ESampleRate::E_44100:	return 44100;
	case ESampleRate::E_48000:	return 48000;
	case ESampleRate::E_64000:	return 64000;
	case ESampleRate::E_88200:	return 88200;
	case ESampleRate::E_96000:	return 96000;
	case ESampleRate::E_176400: return 176400;
	case ESampleRate::E_192000: return 192000;
	default: return 44100;
	}
}

ESampleRate UCusEnum::Int2ESampleRate(int32 SampleRate)
{
	switch (SampleRate)
	{
	case 6000 :
		return ESampleRate::E_6000;
	case 8000 :
		return ESampleRate::E_8000;
	case 11025 :
		return ESampleRate::E_11025;
	case 16000 :
		return ESampleRate::E_16000;
	case 22050 :
		return ESampleRate::E_22050;
	case 32000 :
		return ESampleRate::E_32000;
	case 44100 :
		return ESampleRate::E_44100;
	case 48000 :
		return ESampleRate::E_48000;
	case 64000 :
		return ESampleRate::E_64000;
	case 88200 :
		return ESampleRate::E_88200;
	case 96000 :
		return ESampleRate::E_96000;
	case 192000 :
		return ESampleRate::E_192000;
	case 176400 :
		return ESampleRate::E_176400;
	default:
		return ESampleRate::E_44100;
	}
}

AVSampleFormat UCusEnum::ESampleFormat2AVSampleFormat(ESampleFormat SampleFormat)
{
	return AVSampleFormat{static_cast<AVSampleFormat>(SampleFormat)};
}

ESampleFormat UCusEnum::AVSampleFormat2ESampleFormat(AVSampleFormat SampleFormat)
{
	return static_cast<ESampleFormat>(SampleFormat);
}

uint64_t UCusEnum::EChannelLayout2int64(EChannelLayout ChannelLayout)
{
	switch(ChannelLayout)
	{
	case EChannelLayout::E_CH_LAYOUT_MONO :
		return AV_CH_LAYOUT_MONO;
	case EChannelLayout::E_CH_LAYOUT_STEREO :
		return AV_CH_LAYOUT_STEREO;
	default:
		return AV_CH_LAYOUT_STEREO;
	}
}

EChannelLayout UCusEnum::AV_CHANNEL_LAYOUT2EChannel(uint64_t Layout)
{
	switch(Layout)
	{
	case AV_CH_LAYOUT_MONO :
		return EChannelLayout::E_CH_LAYOUT_MONO;
	case AV_CH_LAYOUT_STEREO :
		return EChannelLayout::E_CH_LAYOUT_STEREO;
	}
	return EChannelLayout::E_CH_LAYOUT_STEREO;
}
