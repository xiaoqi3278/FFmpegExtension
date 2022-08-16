// Fill out your copyright notice in the Description page of Project Settings.


#include "Video/VideoPlayer_FFmpeg.h"
#include <thread>

#include "Components/CanvasPanelSlot.h"
#include "Widgets/Images/SImage.h"

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
		OpenVideo();
	}
}
void UVideoPlayer_FFmpeg::VideoThread()
{
	FFmpegParam = new FLocal_FFmpegParam();

	AVPacket* Local_AVPacket = av_packet_alloc();
	AVFrame* Local_AVFrameBeforeScale = av_frame_alloc();
	AVFrame* Local_AVFrameAfterScale = av_frame_alloc();

	//FFmpeg API 返回错误码
	int32 ret;

	//初始化网络库
	avformat_network_init();

	//视频地址
	const char* LocalVideoURL = TCHAR_TO_UTF8(*VideoInfo.VideoURL);
	//参数
	av_dict_set(&FFmpegParam->Local_AVDictionary, "stimeout", "5000000", 0);   // us
	av_dict_set(&FFmpegParam->Local_AVDictionary, "buffer_size", "2048000", 0);
	//打开视频
	ret = avformat_open_input(&FFmpegParam->Local_AVFormatContext, LocalVideoURL, 0, &FFmpegParam->Local_AVDictionary);
	if (ret != 0)
	{
		OutLog(FString("Error at avformat_open_input()"));
		if (IsValid(this))
		{
			OnVideoError.Broadcast("媒体流打开失败 / Media Stream Open Failure");
		}
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
		OutLog(FString("Error at avformat_find_stream_info()"));
		goto _Error;
	}

	//找到第一个可用的视频流
	//for (uint32 i = 0; i < FFmpegParam->Local_AVFormatContext->nb_streams; i++)
	//{
	//	AVStream* LocalStream = FFmpegParam->Local_AVFormatContext->streams[i];
	//	if (LocalStream->codecpar->codec_type == AVMEDIA_TYPE_VIDEO)
	//	{
	//		//查找适合的解码器
	//		FFmpegParam->Local_AVCodec = avcodec_find_decoder(LocalStream->codecpar->codec_id);
	//		if (FFmpegParam->Local_AVCodec == NULL)
	//		{
	//			OutLog(FString("The suitable decoder not found"));
	//			goto _Error;
	//		}
	//		//使用查找到的解码器初始化编解码器上下文
	//		FFmpegParam->Local_AVCodecContext = avcodec_alloc_context3(FFmpegParam->Local_AVCodec);
	//		av_opt_set(FFmpegParam->Local_AVCodecContext->priv_data, "tune", "zerolatency", 0);
	//		if (FFmpegParam->Local_AVCodecContext == NULL)
	//		{
	//			OutLog(FString("Error at avcodec_alloc_context3()"));
	//			goto _Error;
	//		}
	//		//为编解码器上下文设置参数
	//		ret = avcodec_parameters_to_context(FFmpegParam->Local_AVCodecContext, LocalStream->codecpar);
	//		if (ret < 0)
	//		{
	//			OutLog(FString("Error at avcodec_parameters_to_context()"));
	//			goto _Error;
	//		}
	//		VideoInfo.FrameWidth = FFmpegParam->Local_AVCodecContext->width;
	//		VideoInfo.FrameHeight = FFmpegParam->Local_AVCodecContext->height;
	//		VideoInfo.FPS = av_q2d(LocalStream->r_frame_rate);
	//		VideoInfo.FrameInterval_ms = 1 / VideoInfo.FPS * 1000;
	//		VideoInfo.ValidFirstVideoStreamIndex = i;
	//		break;
	//	}
	//}
	VideoInfo.ValidFirstVideoStreamIndex = av_find_best_stream(FFmpegParam->Local_AVFormatContext, AVMEDIA_TYPE_VIDEO, -1, -1, &(FFmpegParam->Local_AVCodec), 0);
	AVStream* LocalStream = FFmpegParam->Local_AVFormatContext->streams[VideoInfo.ValidFirstVideoStreamIndex];
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

	AsyncTask(ENamedThreads::GameThread, [&]
		{
			OnFindVideoSuccessfully.Broadcast(VideoInfo);
		});

	//初始化一个视音频编解码器的上下文
	ret = avcodec_open2(FFmpegParam->Local_AVCodecContext, FFmpegParam->Local_AVCodec, NULL);
	if (ret != 0)
	{
		OutLog(FString("Error at avcodec_open2()"));
		goto _Error;
	}

	//初始化 Image 大小
	//AsyncTask(ENamedThreads::GameThread, [&]()
	//{

	//});
	
	//初始化图像转换上下文
	FFmpegParam->Local_SwsContext = sws_getContext(FFmpegParam->Local_AVCodecContext->width, FFmpegParam->Local_AVCodecContext->height,
		FFmpegParam->Local_AVCodecContext->pix_fmt,
		FFmpegParam->Local_AVCodecContext->width, FFmpegParam->Local_AVCodecContext->height,
		AV_PIX_FMT_BGRA,
		SWS_BICUBIC, NULL, NULL, NULL);

	//通过指定像素格式、图像宽、图像高来计算帧缓存所需的内存大小
	int32 Local_FrameBufferSize = av_image_get_buffer_size(AV_PIX_FMT_BGRA, VideoInfo.FrameWidth, VideoInfo.FrameHeight, 1);

	VideoInfo.FrameBuffer = (uint8*)av_malloc(Local_FrameBufferSize * sizeof(uint8));
	//格式化已经申请的内存并将 FrameBuffer 绑定到 Local_AVFrameAfterScale
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

	AsyncTask(ENamedThreads::GameThread, [&]
	{
		OnVideoPlayBegin.Broadcast();
	});

	while (bRun && this != nullptr)
	{
		//读取码流中的音频若干帧或者视频一帧
		ret = av_read_frame(FFmpegParam->Local_AVFormatContext, Local_AVPacket);
		if (ret < 0)
		{
			OutLog(FString("Error at av_read_frame()"));
			//OnVideoPlayEnd.Broadcast();
			goto _Error;
		}
		if (Local_AVPacket->stream_index != VideoInfo.ValidFirstVideoStreamIndex)
		{
			av_packet_unref(Local_AVPacket);
			continue;
		}

		//将数据包发送到解码队列
		ret = avcodec_send_packet(FFmpegParam->Local_AVCodecContext, Local_AVPacket);
		if (ret == AVERROR(EAGAIN))
		{
			av_packet_unref(Local_AVPacket);
			continue;
		}
		if (ret != 0)
		{
			OutLog(FString("Error at avcodec_send_packet()"));
			//OnVideoPlayEnd.Broadcast();
			goto _Error;
		}

		//读取解码后的一帧
		ret = avcodec_receive_frame(FFmpegParam->Local_AVCodecContext, Local_AVFrameBeforeScale);
		if (ret == AVERROR(EAGAIN))
		{
			av_packet_unref(Local_AVPacket);
			continue;
		}
		if (ret != 0)
		{
			OutLog(FString("Error at avcodec_receive_frame()"));
			//OnVideoPlayEnd.Broadcast();
			goto _Error;
		}

		sws_scale(FFmpegParam->Local_SwsContext, Local_AVFrameBeforeScale->data, Local_AVFrameBeforeScale->linesize, 0,
			FFmpegParam->Local_AVCodecContext->height, Local_AVFrameAfterScale->data, Local_AVFrameAfterScale->linesize);

		//uint8* FrameMem = (uint8*)av_malloc(Local_FrameBufferSize * sizeof(uint8));
		uint8* FrameMem = new uint8[Local_FrameBufferSize];
		FMemory::Memcpy(FrameMem, VideoInfo.FrameBuffer, Local_FrameBufferSize * sizeof(uint8));
		//memcpy(FrameMem, Local_AVFrameAfterScale->data[0], 10);
		FrameBufferQueue.Enqueue(FrameMem);
		
		av_packet_unref(Local_AVPacket);
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	
_Error:
	AsyncTask(ENamedThreads::GameThread, [&]()
		{
			if (IsValid(this))
			{
				UE_LOG(LogTemp, Warning, TEXT("%s: Clear source"), *this->GetName());
			}
		});
	bRun = false;
	if (FFmpegParam)
	{
		avformat_close_input(&FFmpegParam->Local_AVFormatContext);
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
}

void UVideoPlayer_FFmpeg::CloseVideo()
{
	bRun = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	FrameBufferQueue.Empty();
}

void UVideoPlayer_FFmpeg::OpenVideo()
{
	std::thread VideoThread(&UVideoPlayer_FFmpeg::VideoThread, this);
	VideoThread.detach();
	UE_LOG(LogTemp, Warning, TEXT("Video Player Object: %s, Is Constructed!"), *this->GetName());

	OnVideoPlayBegin.AddDynamic(this, &UVideoPlayer_FFmpeg::VideoBeginPlay);
}

void UVideoPlayer_FFmpeg::SetVideoKeepRatio(EKeepVideoRatio KeepVideoRatio)
{
	bool bIsSlateParent = false;
	UCanvasPanelSlot* VideoCanvasPanelSlot = Cast<UCanvasPanelSlot>(this->Slot);
	const FVector2D BrushSize = this->Brush.GetImageSize();
	FVector2D SlotSize;
	if (VideoCanvasPanelSlot != nullptr)
	{
		SlotSize = VideoCanvasPanelSlot->GetSize();
	}
	FVector2D NewSize;
	float NewSizeY;

	EKeepVideoRatio NewRatioType = KeepVideoRatio;
	
	//如果是自动，则需要判断缩放方式
	if (KeepVideoRatio == EKeepVideoRatio::Auto)
	{
		NewSizeY = (VideoInfo.ExpectedSize.X / BrushSize.X) * BrushSize.Y;
		if (NewSizeY > VideoInfo.ExpectedSize.Y)
		{
			NewRatioType = EKeepVideoRatio::Height;
		}
		else
		{
			NewRatioType = EKeepVideoRatio::Width;
		}
	}
	
	if (VideoCanvasPanelSlot == nullptr)
	{
		if (ParentSlateSlot == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("ExtImage::KeepRatio Valid Only When the Parent Widget is UCanvasPanelSlot Or SConstraintCanvas!"));
			return;
		}
		bIsSlateParent = true;
		SlotSize = FVector2D(ParentSlateSlot->GetOffset().Right, ParentSlateSlot->GetOffset().Bottom);
	}
	switch (NewRatioType)
	{
	case EKeepVideoRatio::No :
		//ImageSlot->SetSize(ExpectedSize);
		break;
		//保持高度不变
		case EKeepVideoRatio::Height :
		NewSize.Y = VideoInfo.ExpectedSize.Y;
		NewSize.X = (NewSize.Y / BrushSize.Y) * BrushSize.X;
		if (VideoInfo.ExpectedSize.X != NewSize.X || NewSize != SlotSize)
		{
			if (bIsSlateParent)
			{
				FMargin OldMargin = ParentSlateSlot->GetOffset();
				OldMargin.Right = NewSize.X;
				OldMargin.Bottom = NewSize.Y;
				ParentSlateSlot->SetOffset(OldMargin);
			}
			else
			{
				VideoCanvasPanelSlot->SetSize(NewSize);
			}
		}
		break;
		//保持宽度不变
		case EKeepVideoRatio::Width :
		NewSize.X = VideoInfo.ExpectedSize.X;
		NewSize.Y = (NewSize.X / BrushSize.X) * BrushSize.Y;
		if (VideoInfo.ExpectedSize.Y != NewSize.Y || NewSize != SlotSize)
		{
			if (bIsSlateParent)
            {
            	FMargin OldMargin = ParentSlateSlot->GetOffset();
            	OldMargin.Right = NewSize.X;
            	OldMargin.Bottom = NewSize.Y;
            	ParentSlateSlot->SetOffset(OldMargin);
            }
            else
            {
            	VideoCanvasPanelSlot->SetSize(NewSize);
            }
		}
		break;
		//与输入图像保持一致
		case EKeepVideoRatio::Origin :
		if (SlotSize != FVector2D(VideoInfo.FrameWidth, VideoInfo.FrameHeight))
		{
			NewSize = FVector2D(VideoInfo.FrameWidth, VideoInfo.FrameHeight);
			if (bIsSlateParent)
			{
				FMargin OldMargin = ParentSlateSlot->GetOffset();
				OldMargin.Right = NewSize.X;
				OldMargin.Bottom = NewSize.Y;
				ParentSlateSlot->SetOffset(OldMargin);
			}
			else
			{
				VideoCanvasPanelSlot->SetSize(NewSize);
			}
		}
		break;
		//自动判断
		case EKeepVideoRatio::Auto :

		break;
	default:
		break;
	}
}

void UVideoPlayer_FFmpeg::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

#if WITH_EDITOR
	SetVideoKeepRatio(VideoInfo.KeepVideoRatio);
#endif
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

void UVideoPlayer_FFmpeg::VideoBeginPlay()
{
	//初始化 UTexture2D
	VideoInfo.VideoTexture = UTexture2D::CreateTransient(VideoInfo.FrameWidth, VideoInfo.FrameHeight, PF_B8G8R8A8);
	VideoInfo.VideoTexture->UpdateResource();
	this->SetBrushFromTexture(VideoInfo.VideoTexture);

	this->Brush.SetImageSize(FVector2D(VideoInfo.FrameWidth, VideoInfo.FrameHeight));
	this->SetVideoKeepRatio(VideoInfo.KeepVideoRatio);

	const float Rate = VideoInfo.FrameInterval_ms / 1000.0;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UVideoPlayer_FFmpeg::UpdateFrameTexture, Rate, true);
}

void UVideoPlayer_FFmpeg::UpdateFrameTexture()
{
	if (FrameBufferQueue.Dequeue(CurrentBuffer))
	{
		//UE_LOG(LogTemp, Warning, TEXT("%d"), FrameBufferQueue.);
		switch (VideoInfo.UpdateTextureMethod)
		{
		case EUpdateTextureMethod::Memcpy:

			VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			TextureData = VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Realloc(VideoInfo.FrameWidth * VideoInfo.FrameHeight * 4);
			FMemory::Memcpy(TextureData, CurrentBuffer, sizeof(uint8) * VideoInfo.FrameWidth * VideoInfo.FrameHeight * 4);
			VideoInfo.VideoTexture->PlatformData->Mips[0].BulkData.Unlock();

			//更新UTexture2D
			VideoInfo.VideoTexture->UpdateResource();

			break;

		case EUpdateTextureMethod::RHICommand:

			VideoInfo.Region.SrcX = 0;
			VideoInfo.Region.SrcY = 0;
			VideoInfo.Region.DestX = 0;
			VideoInfo.Region.DestY = 0;
			VideoInfo.Region.Width = VideoInfo.FrameWidth;
			VideoInfo.Region.Height = VideoInfo.FrameHeight;

			VideoInfo.VideoTexture->UpdateTextureRegions(0, 1, &VideoInfo.Region, VideoInfo.Region.Width * 4, 4, CurrentBuffer);

			break;
		}
	}
}
