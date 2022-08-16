// Fill out your copyright notice in the Description page of Project Settings.


#include "Video/StreamingServer.h"

#include <thread>

extern "C"
{
#include "libavutil/time.h"
}

void UStreamingServer::PostInitProperties()
{
	UObject::PostInitProperties();

	if (StreamingInfo.bAutoStreaming && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		UE_LOG(LogTemp, Warning, TEXT("StreamingServer Is Running!, Object Name: %s"), *this->GetName());

		std::thread StreamingThread(&UStreamingServer::StreamingFunction, this);
		StreamingThread.detach();
	}
}

void UStreamingServer::StreamingFunction()
{
	FFmpegParam = new FServer_FFmpegParam();

	int32 ret;
	bool bServrIsRunning = false;

	avformat_network_init();

	const char* LocalInURL = TCHAR_TO_UTF8(*StreamingInfo.InURL);
	const char* LocalOutURL = TCHAR_TO_UTF8(*StreamingInfo.OutURL);

	//打开视频
	ret = avformat_open_input(&FFmpegParam->Local_InAVFormatContext, LocalInURL, NULL, NULL);
	if (ret != 0)
	{
		OutLog("Error at avformat_open_input()");
		goto _Error;
	}

	//探测文件信息
	ret = avformat_find_stream_info(FFmpegParam->Local_InAVFormatContext, 0);
	if (ret < 0)
	{
		OutLog("Error at avformat_find_stream_info()");
		goto _Error;
	}

	//初始化输出封装上下文
	ret = avformat_alloc_output_context2(&FFmpegParam->Local_OutAVFormatContext, NULL, "rtsp", LocalOutURL);
	if (ret < 0)
	{
		OutLog("Error at avformat_alloc_output_context2()");
		goto _Error;
	}
	FFmpegParam->Local_AVOutputFormat = FFmpegParam->Local_OutAVFormatContext->oformat;

	//添加音视频流
	for (uint32 i = 0; i < FFmpegParam->Local_InAVFormatContext->nb_streams; i++)
	{
		FFmpegParam->Local_InStream = FFmpegParam->Local_InAVFormatContext->streams[i];
		FFmpegParam->Local_AVCodec = avcodec_find_decoder(FFmpegParam->Local_InStream->codecpar->codec_id);
		if (!FFmpegParam->Local_AVCodec)
		{
			OutLog("Error at avcodec_find_decoder");
			goto _Error;
		}
		//为输出解封装上下文添加音视频流
		FFmpegParam->Local_OutStream = avformat_new_stream(FFmpegParam->Local_OutAVFormatContext, FFmpegParam->Local_AVCodec);
		if (!FFmpegParam->Local_OutStream)
		{
			OutLog("Error at avformat_new_stream()");
			goto _Error;
		}

		//将输入流的编解码器上下文信息 copy 给输出流的编解码器上下文
		ret = avcodec_parameters_copy(FFmpegParam->Local_OutStream->codecpar, FFmpegParam->Local_InStream->codecpar);
		if (ret < 0)
		{
			OutLog("Error at avcodec_parameters_copy");
			goto _Error;
		}
		FFmpegParam->Local_OutStream->codecpar->codec_tag = 0;

		FFmpegParam->Local_AVCodecContext = avcodec_alloc_context3(FFmpegParam->Local_AVCodec);
		if (!FFmpegParam->Local_AVCodecContext)
		{
			OutLog("Error at avcodec_alloc_context3()");
			goto _Error;
		}

		ret = avcodec_parameters_to_context(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_OutStream->codecpar);
		if (ret < 0)
		{
			OutLog("Error at avcodec_parameters_to_context()");
			goto _Error;
		}

		FFmpegParam->Local_AVCodecContext->codec_tag = 0;
		if (FFmpegParam->Local_OutAVFormatContext->flags & AVFMT_GLOBALHEADER)
		{
			FFmpegParam->Local_AVCodecContext->flags |= AV_CODEC_FLAG_GLOBAL_HEADER;
		}

		ret = avcodec_parameters_from_context(FFmpegParam->Local_OutStream->codecpar, FFmpegParam->Local_AVCodecContext);
		if (ret < 0)
		{
			OutLog("Error at avcodec_parameters_from_context()");
			goto _Error;
		}
	}

	//找到第一个可用的视频流
	for (uint32 i = 0; i < FFmpegParam->Local_InAVFormatContext->nb_streams; i++)
	{
		if (FFmpegParam->Local_InAVFormatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO)
		{
			StreamingInfo.FirstValidVideoIndex = i;
			break;
		}
	}

	//找到第一个可用的音频流
	for (uint32 i = 0; i < FFmpegParam->Local_InAVFormatContext->nb_streams; i++)
	{
		if (FFmpegParam->Local_InAVFormatContext->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_AUDIO)
		{
			StreamingInfo.FirstValidAudioIndex = i;
			break;
		}
	}
	
	//打开IO
	//ret = avio_open(&FFmpegParam->Local_OutAVFormatContext->pb, LocalOutURL, AVIO_FLAG_WRITE);
	//ret = avio_open(&FFmpegParam->Local_OutAVFormatContext->pb, "rtsp://192.168.3.5:554/10001", AVIO_FLAG_WRITE);
	/*AVDictionary* Local_AVDictionary = NULL;
	av_dict_set(&Local_AVDictionary, "rtsp_transport", "tcp", 0);
	ret = avio_open2(&FFmpegParam->Local_OutAVFormatContext->pb, LocalOutURL, AVIO_FLAG_WRITE, NULL, &Local_AVDictionary);
	av_dict_free(&Local_AVDictionary);
	if (ret < 0)
	{
		OutLog("Error at avio_open()");
		goto _Error;
	}*/

	AVDictionary* Local_AVDictionary = NULL;
	av_dict_set(&Local_AVDictionary, "rtsp_transport", "tcp", 0);

	//写入头部信息
	ret = avformat_write_header(FFmpegParam->Local_OutAVFormatContext, &Local_AVDictionary);
	if (ret < 0)
	{
		OutLog("Error at avformat_write_header()");
		goto _Error;
	}

	//开始推流
	//以微秒为单位获取当前的时间戳
	long long StartTime = av_gettime();
	long long FrameIndex = 0;
	FFmpegParam->Local_Filter = av_bsf_get_by_name("aac_adtstoasc");
	FFmpegParam->Local_AVPacket = av_packet_alloc();
	if (FFmpegParam->Local_AVPacket == NULL)
	{
		OutLog("Error at av_packet_alloc()");
		goto _Error;
	}

	bServrIsRunning = true;

	while (bRun)
	{
		OutLog(FString::FromInt(FrameIndex));

		int32 Tempret = av_read_frame(FFmpegParam->Local_InAVFormatContext, FFmpegParam->Local_AVPacket);
		if (Tempret < 0 || !bRun)
		{
			OutLog("Error at av_read_frame()");
			goto _Error;
		}

		/*
		PTS（Presentation Time Stamp）显示时间戳
		DTS（Decoding Time Stamp）解码时间戳
		*/

		//如没有显示时间（比如未解码的 H.264 ）
		if (FFmpegParam->Local_AVPacket->pts == AV_NOPTS_VALUE)
		{
			//AVRational time_base：时基。通过该值可以把PTS，DTS转化为真正的时间。
			AVRational TimeBase = FFmpegParam->Local_InAVFormatContext->streams[StreamingInfo.FirstValidVideoIndex]->time_base;

			int64_t calc_duration = (double)AV_TIME_BASE / av_q2d(FFmpegParam->Local_InAVFormatContext->streams[StreamingInfo.FirstValidVideoIndex]->r_frame_rate);

			//配置参数
			FFmpegParam->Local_AVPacket->pts = (double)(FrameIndex * calc_duration) / (double)(av_q2d(TimeBase) * AV_TIME_BASE);
			FFmpegParam->Local_AVPacket->dts = FFmpegParam->Local_AVPacket->pts;
			FFmpegParam->Local_AVPacket->duration = (double)calc_duration / (double)(av_q2d(TimeBase) * AV_TIME_BASE);
		}

		if (FFmpegParam->Local_AVPacket->stream_index == StreamingInfo.FirstValidVideoIndex)
		{
			AVRational TimeBase = FFmpegParam->Local_InAVFormatContext->streams[StreamingInfo.FirstValidVideoIndex]->time_base;
			AVRational TimeBase_Q = { 1,AV_TIME_BASE };

			int64_t PTSTime = av_rescale_q(FFmpegParam->Local_AVPacket->dts, TimeBase, TimeBase_Q);
			int64_t NowTime = av_gettime() - StartTime;

			if (PTSTime > NowTime)
			{
				av_usleep((unsigned int)PTSTime - NowTime);
			}
		}

		FFmpegParam->Local_InStream = FFmpegParam->Local_InAVFormatContext->streams[FFmpegParam->Local_AVPacket->stream_index];
		FFmpegParam->Local_OutStream = FFmpegParam->Local_OutAVFormatContext->streams[FFmpegParam->Local_AVPacket->stream_index];

		FFmpegParam->Local_AVPacket->pts = av_rescale_q_rnd(FFmpegParam->Local_AVPacket->pts, FFmpegParam->Local_InStream->time_base,
			FFmpegParam->Local_OutStream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
		FFmpegParam->Local_AVPacket->dts = av_rescale_q_rnd(FFmpegParam->Local_AVPacket->dts, FFmpegParam->Local_InStream->time_base,
			FFmpegParam->Local_OutStream->time_base, (AVRounding)(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));

		FFmpegParam->Local_AVPacket->pos = -1;
		if (FFmpegParam->Local_AVPacket->stream_index == StreamingInfo.FirstValidVideoIndex)
		{
			FrameIndex++;
		}

		if (FFmpegParam->Local_AVPacket->stream_index == 4)
		{
			AVBSFContext* bsf_ctx;
			if (!FFmpegParam->Local_Filter)
			{
				OutLog("Error at FFmpegParam->Local_Filter is not valid!");
				goto _Error;
			}

			ret = av_bsf_alloc(FFmpegParam->Local_Filter, &bsf_ctx);
			if (ret != 0)
			{
				OutLog("Error at av_bsf_alloc()");
				goto _Error;
			}


			ret = av_bsf_send_packet(bsf_ctx, FFmpegParam->Local_AVPacket);
			if (ret < 0)
			{
				OutLog("Error at av_bsf_send_packet()");
				goto _Error;
			}

			ret = av_bsf_receive_packet(bsf_ctx, FFmpegParam->Local_AVPacket);
			if (ret < 0)
			{
				OutLog("Error at av_bsf_receive_packet()");
				goto _Error;
			}
			av_bsf_free(&bsf_ctx);
		}

		ret = av_interleaved_write_frame(FFmpegParam->Local_OutAVFormatContext, FFmpegParam->Local_AVPacket);
		if (ret < 0)
		{
			OutLog("Error at av_interleaved_write_frame()");
			goto _Error;
		}

		av_packet_unref(FFmpegParam->Local_AVPacket);
		//av_packet_free(&FFmpegParam->Local_AVPacket);
	}

_Error:
	OutLog("Streaming Closing!");

	if (FFmpegParam->Local_OutAVFormatContext && bServrIsRunning)
	{
		ret = av_write_trailer(FFmpegParam->Local_OutAVFormatContext);
		if (ret != 0)
		{
			OutLog("Error at av_write_trailer()");
		}
	}

	av_dict_free(&Local_AVDictionary);

	if (FFmpegParam != nullptr && IsValid(this))
	{
		//FFmpegParam->ReleaseFFmpegParam();
		delete FFmpegParam;
		FFmpegParam = nullptr;
	}
}

void UStreamingServer::OpenStreaming()
{
	std::thread StreamingThread(&UStreamingServer::StreamingFunction, this);
	StreamingThread.detach();
}

void UStreamingServer::CloseStreaming()
{
	bRun = false;
}

void UStreamingServer::BeginDestroy()
{
	UObject::BeginDestroy();

	if (bRun && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		CloseStreaming();
	}
}

UStreamingServer::~UStreamingServer()
{
	CloseStreaming();
}
