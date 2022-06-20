// Fill out your copyright notice in the Description page of Project Settings.


#include "Video/VideoPlayer_FFmpeg.h"

#include <thread>

extern "C"
{
#include "libavutil/opt.h"
#include "libavutil/imgutils.h"
}


void UVideoPlayer_FFmpeg::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	if (!IsDesignTime() && VideoInfo.bAutoPlay && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		std::thread VideoThread(&UVideoPlayer_FFmpeg::VideoThread, this);
		VideoThread.detach();
		UE_LOG(LogTemp, Warning, TEXT("Video Player Object: %s, Is Constructed!"), *this->GetName());
	}
}

void UVideoPlayer_FFmpeg::VideoThread()
{
	FFmpegParam = new FLocal_FFmpegParam();

	//使用 EUpdateTextureMethod::Memcpy 时 Realloc 的帧数据指针
	void* TextureData = nullptr;

	//FFmpeg API 返回错误码
	int32 ret;

	//初始化网络库
	avformat_network_init();

	//视频地址
	const char* LocalVideoURL = TCHAR_TO_UTF8(*VideoInfo.VideoURL);
	//打开视频
	ret = avformat_open_input(&FFmpegParam->Local_AVFormatContext, LocalVideoURL, 0, 0);
	if (ret != 0)
	{
		//AsyncTask(ENamedThreads::GameThread, [&]()
		//	{
		//		UE_LOG(LogTemp, Warning, TEXT("Player Object: %s, avformat_open_input() Open Stream Failed"), *this->GetName());
		//	});
		OutLog(FString("Error at avformat_open_input()"));
		goto _Error;
	}
	if (!bRun)
	{
		goto _Error;
	}

	//探测文件信息
	ret = avformat_find_stream_info(FFmpegParam->Local_AVFormatContext, NULL);
	if (ret < 0)
	{
		//AsyncTask(ENamedThreads::GameThread, [&]()
		//	{
		//		UE_LOG(LogTemp, Warning, TEXT("Player Object: %s, avformat_open_input() Open Stream Failed"), *this->GetName());
		//	});
		OutLog(FString("Error at avformat_find_stream_info()"));
		goto _Error;
	}

	//找到第一个可用的视频流
	for (uint32 i = 0; i < FFmpegParam->Local_AVFormatContext->nb_streams; i++)
	{
		AVStream* LocalStream = FFmpegParam->Local_AVFormatContext->streams[i];
		if (LocalStream->codecpar->codec_type == AVMEDIA_TYPE_VIDEO)
		{
			//查找适合的解码器
			FFmpegParam->Local_AVCodec = avcodec_find_decoder(LocalStream->codecpar->codec_id);
			if (FFmpegParam->Local_AVCodec == NULL)
			{
				OutLog(FString("The suitable decoder not found"));
				goto _Error;
			}
			//使用查找到的解码器初始化编解码器上下文
			FFmpegParam->Local_AVCodecContext = avcodec_alloc_context3(FFmpegParam->Local_AVCodec);
			av_opt_set(FFmpegParam->Local_AVCodecContext->priv_data, "tune", "zerolatency", 0);
			if (FFmpegParam->Local_AVCodecContext == NULL)
			{
				OutLog(FString("Error at avcodec_alloc_context3()"));
				goto _Error;
			}
			//为编解码器上下文设置参数
			ret = avcodec_parameters_to_context(FFmpegParam->Local_AVCodecContext, LocalStream->codecpar);
			if (ret < 0)
			{
				OutLog(FString("Error at avcodec_parameters_to_context()"));
				goto _Error;
			}
			VideoInfo.FrameWidth = FFmpegParam->Local_AVCodecContext->width;
			VideoInfo.FrameHeight = FFmpegParam->Local_AVCodecContext->height;
			VideoInfo.FPS = av_q2d(LocalStream->r_frame_rate);
			VideoInfo.FrameInterval_ms = 1 / VideoInfo.FPS * 1000;
			VideoInfo.ValidFirstVideoStreamIndex = i;
			break;
		}
	}

	//初始化一个视音频编解码器的上下文
	ret = avcodec_open2(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVCodec, NULL);
	if (ret != 0)
	{
		OutLog(FString("Error at avcodec_open2()"));
		goto _Error;
	}

	//初始化图像转换上下文
	FFmpegParam->Local_SwsContext = sws_getContext(FFmpegParam->Local_AVCodecContext->width, FFmpegParam->Local_AVCodecContext->height,
		FFmpegParam->Local_AVCodecContext->pix_fmt,
		FFmpegParam->Local_AVCodecContext->width, FFmpegParam->Local_AVCodecContext->height,
		AV_PIX_FMT_BGRA,
		SWS_BICUBIC, NULL, NULL, NULL);

	AVPacket* Local_AVPacket = av_packet_alloc();
	AVFrame* Local_AVFrameBeforeScale = av_frame_alloc();
	AVFrame* Local_AVFrameAfterScale = av_frame_alloc();

	//通过指定像素格式、图像宽、图像高来计算帧缓存所需的内存大小
	int32 Local_FrameBufferSize = av_image_get_buffer_size(AV_PIX_FMT_BGRA, VideoInfo.FrameWidth, VideoInfo.FrameHeight, 1);

	VideoInfo.FrameBuffer = (uint8*)av_malloc(Local_FrameBufferSize * sizeof(uint8));
	//格式化已经申请的内存并将 Local_FrameBuffer 绑定到 Local_AVFrameAfterScale
	av_image_fill_arrays(Local_AVFrameAfterScale->data, Local_AVFrameAfterScale->linesize, VideoInfo.FrameBuffer, AV_PIX_FMT_BGRA,
		VideoInfo.FrameWidth, VideoInfo.FrameHeight, 1);

	//输出视频信息
	//FString UE_VideoURL(std::string(FFmpegParam->Local_AVFormatContext->url).c_str());
	//VideoInfo.VideoTotalTime = FFmpegParam->Local_AVFormatContext->duration;
	//if (bOutLog)
	//{
	//	AsyncTask(ENamedThreads::GameThread, [&]()
	//		{
	//			UE_LOG(LogTemp, Warning, TEXT("Video Player FFmpeg Constructed!, PlayerObject: %s"), *this->GetName());
	//			//UE_LOG(LogTemp, Warning, TEXT("Video URL: %s, Total Time: %d"), *UE_VideoURL, VideoTotalTime);
	//		});
	//}

	//准备 UTexture2D
	AsyncTask(ENamedThreads::GameThread, [&]()
		{
			VideoInfo.VideoTexture = UTexture2D::CreateTransient(VideoInfo.FrameWidth, VideoInfo.FrameHeight, PF_B8G8R8A8);
			VideoInfo.VideoTexture->UpdateResource();
			this->SetBrushFromTexture(VideoInfo.VideoTexture);
		});

	clock_t begin_time;
	float milliseconds;
	while (bRun)
	{
		begin_time = clock();
		//读取码流中的音频若干帧或者视频一帧
		ret = av_read_frame(FFmpegParam->Local_AVFormatContext, Local_AVPacket);
		if (ret < 0)
		{
			OutLog(FString("Error at av_read_frame()"));
			goto _Error;
		}
		if (Local_AVPacket->stream_index != VideoInfo.ValidFirstVideoStreamIndex)
		{
			continue;
		}

		//将数据包发送到解码队列
		ret = avcodec_send_packet(FFmpegParam->Local_AVCodecContext, Local_AVPacket);
		if (ret != 0)
		{
			OutLog(FString("Error at avcodec_send_packet()"));
			goto _Error;
		}

		//读取解码后的一帧
		ret = avcodec_receive_frame(FFmpegParam->Local_AVCodecContext, Local_AVFrameBeforeScale);
		if (ret == AVERROR_EOF)
		{
			OutLog(FString("Media Play End!"));
			goto _Error;
		}
		else if (ret < 0)
		{
			OutLog(FString("Error at avcodec_receive_frame"));
			//goto _Error;
			continue;
		}

		sws_scale(FFmpegParam->Local_SwsContext, Local_AVFrameBeforeScale->data, Local_AVFrameBeforeScale->linesize, 0,
			FFmpegParam->Local_AVCodecContext->height, Local_AVFrameAfterScale->data, Local_AVFrameAfterScale->linesize);

		switch (VideoInfo.UpdateTextureMethod)
		{
		case EUpdateTextureMethod::Memcpy:

			AsyncTask(ENamedThreads::GameThread, [&]()
				{
					if (bRun)
					{
						VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
						TextureData = VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Realloc(VideoInfo.FrameWidth * VideoInfo.FrameHeight * 4);
						FMemory::Memcpy(TextureData, Local_AVFrameAfterScale->data[0], sizeof(uint8) * VideoInfo.FrameWidth * VideoInfo.FrameHeight * 4);
						VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Unlock();

						//更新UTexture2D
						VideoInfo.VideoTexture->UpdateResource();

						milliseconds = float(clock() - begin_time);
						//UE_LOG(LogTemp, Warning, TEXT("Memcpy Exec Time: %f"), milliseconds);
					}
				});

			break;

		case EUpdateTextureMethod::RHICommand:

			VideoInfo.Region.SrcX = 0;
			VideoInfo.Region.SrcY = 0;
			VideoInfo.Region.DestX = 0;
			VideoInfo.Region.DestY = 0;
			VideoInfo.Region.Width = VideoInfo.FrameWidth;
			VideoInfo.Region.Height = VideoInfo.FrameHeight;
			//if (!VideoTexture || Local_FrameBuffer == NULL)
			//{
			//	return;
			//}

			AsyncTask(ENamedThreads::GameThread, [&]()
				{
					if (bRun)
					{
						VideoInfo.VideoTexture->UpdateTextureRegions(0, 1, &VideoInfo.Region, VideoInfo.Region.Width * 4, 4, VideoInfo.FrameBuffer);
					}
				});

			milliseconds = float(clock() - begin_time);
			//AsyncTask(ENamedThreads::GameThread, [&milliseconds]()
			//    {
			//        UE_LOG(LogTemp, Warning, TEXT("RHICommand Exec Time: %f"), milliseconds);
			//    });

			break;
		}

		av_packet_unref(Local_AVPacket);
		std::this_thread::sleep_for(std::chrono::milliseconds(VideoInfo.FrameInterval_ms));
	}

_Error:
	AsyncTask(ENamedThreads::GameThread, [&]()
		{
			UE_LOG(LogTemp, Warning, TEXT("%s: Clear source"), *this->GetName());
		});
	if (FFmpegParam)
	{
		FFmpegParam->ReleaseFFmpegParam();
		delete FFmpegParam;
		FFmpegParam = nullptr;
	}

	if (TextureData != nullptr)
	{
		delete TextureData;
		TextureData = nullptr;
	}
	av_packet_free(&Local_AVPacket);
	av_frame_free(&Local_AVFrameAfterScale);
	av_frame_free(&Local_AVFrameBeforeScale);
}

void UVideoPlayer_FFmpeg::CloseVideo()
{
	bRun = false;
}

void UVideoPlayer_FFmpeg::BeginDestroy()
{
	Super::BeginDestroy();

	if (bRun && !IsDesignTime() && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		CloseVideo();
	}
}

void UVideoPlayer_FFmpeg::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	if (bRun && !IsDesignTime() && !HasAnyFlags(RF_ClassDefaultObject) && this->GetWorld())
	{
		CloseVideo();
	}
}
