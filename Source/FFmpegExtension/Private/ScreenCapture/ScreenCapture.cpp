// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenCapture/ScreenCapture.h"

#include <thread>

#include "Utilities/FFmpegFunctionLib.h"

extern "C"
{
#include "libavutil/dict.h"
#include "libavcodec/avcodec.h"
}

void UScreenCapture::PostInitProperties()
{
	UObject::PostInitProperties();

	if (ScreenCapInfo.bAutoCapture && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("StreamingServer Is Running!, Object Name: %s"), *this->GetName());

		std::thread CaptureThread(&UScreenCapture::CaptureFunction, this);
		CaptureThread.detach();
	}
}

void UScreenCapture::CaptureFunction()
{
	ScreenCap_Param = new FScreenCap_Param();

	if (!InitFormatContext())	goto _Error;

_Error:
	ScreenCap_Param->ReleaseParam();
	delete ScreenCap_Param;
	ScreenCap_Param = nullptr;
}

bool UScreenCapture::InitFormatContext()
{
	AVDictionary* Options = NULL;

	FString CapSizeOrigin = FString::FromInt(ScreenCapInfo.CapWidth) + "x" + FString::FromInt(ScreenCapInfo.CapHeight);
	const char* CapSize = TCHAR_TO_ANSI(*CapSizeOrigin);

	//设置录屏参数
	av_dict_set(&Options, "video_size", CapSize, 0);
	av_dict_set(&Options, "pix_fmt", UCusEnum::PixFormatToChar(ScreenCapInfo.PixelFormat), 0);
	av_dict_set_int(&Options, "framerate", ScreenCapInfo.CapFPS, 0);

	//初始化解封装上下文
	ScreenCap_Param->AV_fmctx = avformat_alloc_context();
	if (!ScreenCap_Param->AV_fmctx)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avformat_alloc_context()");
		goto _Error;
	}

	//根据输入格式的短名称查找解复用器对象
	ScreenCap_Param->AV_Infm = av_find_input_format("gdigrab");
	Ret = avformat_open_input(&ScreenCap_Param->AV_fmctx, TCHAR_TO_ANSI(*ScreenCapInfo.CapMethod),
	                          ScreenCap_Param->AV_Infm, &Options);
	if (Ret != 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avformat_open_input()");
		goto _Error;
	}

	ScreenCapInfo.CapStreamIndex = av_find_best_stream(ScreenCap_Param->AV_fmctx, AVMEDIA_TYPE_VIDEO, -1,
	                                                   -1, &ScreenCap_Param->AV_Codec, 0);
	if (ScreenCapInfo.CapStreamIndex < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at av_find_best_stream()");
		goto _Error;
	}

	ScreenCap_Param->AV_InStream = ScreenCap_Param->AV_fmctx->streams[ScreenCapInfo.CapStreamIndex];
	if (!ScreenCap_Param->AV_InStream)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at get AV_InStream");
		goto _Error;
	}

	return true;

_Error:
	if (Options != NULL)
	{
		av_dict_free(&Options);
	}
	return false;
}

bool UScreenCapture::InitDecoder()
{
	ScreenCap_Param->AV_Codec = avcodec_find_decoder(ScreenCap_Param->AV_InStream->codecpar->codec_id);
	if (!ScreenCap_Param->AV_Codec)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_find_decoder()");
		goto _Error;
	}

	ScreenCap_Param->AV_Coctx = avcodec_alloc_context3(ScreenCap_Param->AV_Codec);
	if (!ScreenCap_Param->AV_Coctx)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_Alloc_context3()");
		goto _Error;
	}

	Ret = avcodec_open2(ScreenCap_Param->AV_Coctx, ScreenCap_Param->AV_Codec, NULL);
	if (Ret != 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_open2()");
		goto _Error;
	}

	return true;

_Error:
	return false;
}
