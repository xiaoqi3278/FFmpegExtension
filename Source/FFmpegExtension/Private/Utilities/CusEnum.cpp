// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/CusEnum.h"

FString UCusEnum::PixFormatToFString(EPixFormat PixFormat)
{
	switch(PixFormat)
	{
	case EPixFormat::YUV420P :
		return FString("yuv420p");
	}
}

std::string UCusEnum::PixFormatToStandardString(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::YUV420P:
		return std::string("yuv420p");
	}
}

const char* UCusEnum::PixFormatToChar(EPixFormat PixFormat)
{
	switch (PixFormat)
	{
	case EPixFormat::YUV420P:
		return "yuv420p";
	}
}

AVCodecID UCusEnum::CoderToAvCodecID(ECoder Coder)
{
	switch(Coder)
	{
	case ECoder::H264:
		return AVCodecID::AV_CODEC_ID_H264;
	}
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
}
