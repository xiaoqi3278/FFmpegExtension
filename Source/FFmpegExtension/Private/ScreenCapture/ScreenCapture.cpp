// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenCapture/ScreenCapture.h"

#include <thread>
#include "Utilities/FFmpegFunctionLib.h"

extern "C"
{
#include "libavutil/dict.h"
#include "libavcodec/avcodec.h"
#include "libavutil/time.h"
#include "libavdevice/avdevice.h"
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
	if (!InitDecoder())			goto _Error;
	if (!InitEncoder())			goto _Error;
	if (!InitOutputStream())	goto _Error;
	if (!InitSwsContext())		goto _Error;

	ScreenCap_Param->SrcFrame = av_frame_alloc();
	ScreenCap_Param->SrcFrame->format = AVPixelFormat::AV_PIX_FMT_BGRA;
	ScreenCap_Param->SrcFrame->width = ScreenCapInfo.CapWidth;
	ScreenCap_Param->SrcFrame->height = ScreenCapInfo.CapHeight;
	Ret = av_frame_get_buffer(ScreenCap_Param->SrcFrame, 32);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at CaptureFunction()->av_frame_get_buffer():43");
		goto _Error;
	}

	ScreenCap_Param->SrcFrame = av_frame_alloc();
	ScreenCap_Param->SrcFrame->format = static_cast<int>(ScreenCapInfo.OutPixFormat);
	ScreenCap_Param->SrcFrame->width = ScreenCapInfo.CapWidth;
	ScreenCap_Param->SrcFrame->height = ScreenCapInfo.CapHeight;
	Ret = av_frame_get_buffer(ScreenCap_Param->SrcFrame, 32);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at CaptureFunction()->av_frame_get_buffer():54");
		goto _Error;
	}

	ScreenCap_Param->Packet = av_packet_alloc();
	ScreenCap_Param->Packet = av_packet_alloc();

	long long FrameIndex = 0;
	//以微秒为单位获取当前的时间戳
	long long StartTime = av_gettime();
	while(bRun)
	{
		Ret = av_read_frame(ScreenCap_Param->AV_fmctx, ScreenCap_Param->Packet);
		if (Ret < 0)
		{
			UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at av_read_frame()");
			break;
		}

		//ScreenCap_Param->EnPacket->dts = 0;
		if (ScreenCap_Param->Packet->stream_index == ScreenCapInfo.CapStreamIndex)
		{
			//ScreenCap_Param->AV_InStream = ScreenCap_Param->AV_fmctx->streams[ScreenCapInfo.CapStreamIndex];
			sws_scale(ScreenCap_Param->Swsctx, ScreenCap_Param->SrcFrame->data, ScreenCap_Param->SrcFrame->linesize,
			          0, ScreenCapInfo.CapHeight, ScreenCap_Param->DestFrame->data,
			          ScreenCap_Param->DestFrame->linesize);
			//FrameIndex++;
			//ScreenCap_Param->DestFrame->pts = FrameIndex;
		}

		if (ScreenCap_Param->Packet->pts == AV_NOPTS_VALUE)
		{
			//AVRational time_base：时基。通过该值可以把PTS，DTS转化为真正的时间。
			AVRational TimeBase = ScreenCap_Param->AV_fmctx->streams[ScreenCapInfo.CapStreamIndex]->time_base;

			int64_t calc_duration = (double)AV_TIME_BASE / av_q2d(ScreenCap_Param->AV_fmctx->streams[ScreenCapInfo.CapStreamIndex]->r_frame_rate);

			//配置参数
			ScreenCap_Param->Packet->pts = (double)(FrameIndex * calc_duration) / (double)(av_q2d(TimeBase) * AV_TIME_BASE);
			ScreenCap_Param->Packet->dts = ScreenCap_Param->Packet->pts;
			ScreenCap_Param->Packet->duration = (double)calc_duration / (double)(av_q2d(TimeBase) * AV_TIME_BASE);
		}

		if (ScreenCap_Param->Packet->stream_index == ScreenCapInfo.CapStreamIndex)
		{
			AVRational TimeBase = ScreenCap_Param->AV_fmctx->streams[ScreenCapInfo.CapStreamIndex]->time_base;
			AVRational TimeBase_Q = { 1,AV_TIME_BASE };

			int64_t PTSTime = av_rescale_q(ScreenCap_Param->Packet->dts, TimeBase, TimeBase_Q);
			int64_t NowTime = av_gettime() - StartTime;

			if (PTSTime > NowTime)
			{
				av_usleep((unsigned int)PTSTime - NowTime);
			}
		}

		ScreenCap_Param->AV_InStream = ScreenCap_Param->AV_fmctx->streams[ScreenCap_Param->Packet->stream_index];
		ScreenCap_Param->AV_OutStream = ScreenCap_Param->AV_fmctx->streams[ScreenCap_Param->Packet->stream_index];

		ScreenCap_Param->Packet->pts = av_rescale_q_rnd(ScreenCap_Param->Packet->pts, ScreenCap_Param->AV_InStream->time_base,
			ScreenCap_Param->AV_OutStream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
		ScreenCap_Param->Packet->dts = av_rescale_q_rnd(ScreenCap_Param->Packet->dts, ScreenCap_Param->AV_InStream->time_base,
			ScreenCap_Param->AV_OutStream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));

		ScreenCap_Param->Packet->pos = -1;
		if (ScreenCap_Param->Packet->stream_index == ScreenCapInfo.CapStreamIndex)
		{
			FrameIndex++;
		}

		Ret = av_interleaved_write_frame(ScreenCap_Param->AV_Outfmctx, ScreenCap_Param->Packet);
		if (Ret < 0)
		{
			UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at av_interleaved_write_frame()");
			goto _Error;
		}

		av_packet_unref(ScreenCap_Param->Packet);
	}

	av_write_trailer(ScreenCap_Param->AV_Outfmctx);

_Error:

	UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Screen Capture Closing!");

	ScreenCap_Param->ReleaseParam();
	delete ScreenCap_Param;
	ScreenCap_Param = nullptr;
}

bool UScreenCapture::InitFormatContext()
{
	avdevice_register_all();
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
	ScreenCap_Param->AV_Infm = av_find_input_format("3.");
	if (!ScreenCap_Param->AV_Infm)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at av_find_input_format()");
		goto _Error;
	}
	Ret = avformat_open_input(&ScreenCap_Param->AV_fmctx, TCHAR_TO_ANSI(*ScreenCapInfo.CapMethod),
	                          ScreenCap_Param->AV_Infm, &Options);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avformat_open_input()");
		goto _Error;
	}

	ScreenCapInfo.CapStreamIndex = av_find_best_stream(ScreenCap_Param->AV_fmctx, AVMEDIA_TYPE_VIDEO, -1,
	                                                   -1, &ScreenCap_Param->AV_EnCodec, 0);
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
	ScreenCap_Param->AV_EnCodec = avcodec_find_decoder(ScreenCap_Param->AV_InStream->codecpar->codec_id);
	if (!ScreenCap_Param->AV_EnCodec)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_find_decoder()");
		goto _Error;
	}

	ScreenCap_Param->AV_EnCoctx = avcodec_alloc_context3(ScreenCap_Param->AV_EnCodec);
	if (!ScreenCap_Param->AV_EnCoctx)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_Alloc_context3()");
		goto _Error;
	}

	Ret = avcodec_open2(ScreenCap_Param->AV_EnCoctx, ScreenCap_Param->AV_EnCodec, NULL);
	if (Ret != 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_open2()");
		goto _Error;
	}

	return true;

_Error:
	return false;
}

bool UScreenCapture::InitEncoder()
{
	AVDictionary* Options = NULL;

	//寻找指定的编码器
	ScreenCap_Param->AV_EnCodec = avcodec_find_encoder(UCusEnum::CoderToAvCodecID(ScreenCapInfo.EncodeParam.Coder));
	if (!ScreenCap_Param->AV_EnCodec)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at avcodec_find_encoder()");
		goto _Error;
	}

	//根据指定的编码器初始化编码器上下文
	ScreenCap_Param->AV_EnCoctx = avcodec_alloc_context3(ScreenCap_Param->AV_EnCodec);
	if (!ScreenCap_Param->AV_EnCoctx)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at alloc AV_Encoctx avcodec_alloc_context3()");
		goto _Error;
	}

	//设置编码器参数
	ScreenCap_Param->AV_EnCoctx->bit_rate = ScreenCapInfo.EncodeParam.BitRate;
	ScreenCap_Param->AV_EnCoctx->gop_size = ScreenCapInfo.EncodeParam.GopSize;
	ScreenCap_Param->AV_EnCoctx->keyint_min = ScreenCapInfo.EncodeParam.KeyMin;
	ScreenCap_Param->AV_EnCoctx->max_b_frames = ScreenCapInfo.EncodeParam.MaxBFrames;
	ScreenCap_Param->AV_EnCoctx->pix_fmt = static_cast<AVPixelFormat>(ScreenCapInfo.EncodeParam.PixFormat);
	ScreenCap_Param->AV_EnCoctx->codec_id = UCusEnum::CoderToAvCodecID(ScreenCapInfo.EncodeParam.Coder);
	ScreenCap_Param->AV_EnCoctx->thread_count = ScreenCapInfo.EncodeParam.ThreadCounts;
	ScreenCap_Param->AV_EnCoctx->qmin = ScreenCapInfo.EncodeParam.QMin;
	ScreenCap_Param->AV_EnCoctx->qmax = ScreenCapInfo.EncodeParam.QMax;

	av_dict_set(&Options, "preset", UCusEnum::PresetParamToStandardString(ScreenCapInfo.EncodeParam.PresetParam).c_str(), 0);
	av_dict_set(&Options, "tune", UCusEnum::TuneParamToStandardString(ScreenCapInfo.EncodeParam.TuneParam).c_str(), 0);

	//打开编码器
	Ret = avcodec_open2(ScreenCap_Param->AV_EnCoctx, ScreenCap_Param->AV_EnCodec, &Options);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at Open Encoder avcodec_open2()");
		goto _Error;
	}

	return true;

_Error:
	if (Options)
	{
		av_dict_free(&Options);
	}

	return false;
}

bool UScreenCapture::InitOutputStream()
{
	//初始化输出解封装上下文
	Ret = avformat_alloc_output_context2(&ScreenCap_Param->AV_Outfmctx, 0, TCHAR_TO_ANSI(*ScreenCapInfo.OutFormatName), TCHAR_TO_ANSI(*ScreenCapInfo.FileName));
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitOutputStream()->avformat_alloc_output_context2()");
		goto _Error;
	}

	//向输出解封装上下文添加视频流信息
	ScreenCap_Param->AV_OutStream = avformat_new_stream(ScreenCap_Param->AV_Outfmctx, NULL);
	if (!ScreenCap_Param->AV_OutStream)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitOutputStream()->avformat_new_stream()");
		goto _Error;
	}

	ScreenCap_Param->AV_OutStream->id = 0;
	ScreenCap_Param->AV_OutStream->codecpar->codec_tag = 0;
	Ret = avcodec_parameters_from_context(ScreenCap_Param->AV_OutStream->codecpar, ScreenCap_Param->AV_EnCoctx);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitOutputStream()->avcodec_parameters_from_context()");
		goto _Error;
	}

	//写文件头
	Ret = avio_open(&ScreenCap_Param->AV_Outfmctx->pb, TCHAR_TO_UTF8(*ScreenCapInfo.FileName), AVIO_FLAG_WRITE);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitOutputStream()->avio_open()");
		goto _Error;
	}
	Ret = avformat_write_header(ScreenCap_Param->AV_Outfmctx, NULL);
	if (Ret < 0)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitOutputStream()->avformat_write_header()");
		goto _Error;
	}

	return true;

_Error:
	return false;
}

bool UScreenCapture::InitSwsContext()
{
	//if (static_cast<int32>(ScreenCapInfo.ScaleFlag) == 0)
	//{
	//	ScreenCapInfo.ScaleFlag = EScaleFlag::E_SWS_FAST_BILINEAR;
	//}
	
	ScreenCap_Param->Swsctx = sws_getContext(ScreenCapInfo.CapWidth, ScreenCapInfo.CapHeight, AV_PIX_FMT_BGRA,
	                                         ScreenCapInfo.CapWidth, ScreenCapInfo.CapHeight, AVPixelFormat(ScreenCapInfo.OutPixFormat),
	                                         UCusEnum::GetScaleFlagFFmpegIndex(ScreenCapInfo.ScaleFlag), NULL, NULL, NULL);

	if (!ScreenCap_Param->Swsctx)
	{
		UFFmpegFunctionLib::OutLog(this, ScreenCapInfo.bOutLog, "Error at InitSwsContext()->sws_getContext()");
		goto _Error;
	}

	return true;

_Error:
	return false;
}

void UScreenCapture::closeCapture()
{
	bRun = false;
}

void UScreenCapture::BeginDestroy()
{
	UObject::BeginDestroy();

	if (bRun && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		closeCapture();
	}
}

UScreenCapture::~UScreenCapture()
{
	closeCapture();
}
