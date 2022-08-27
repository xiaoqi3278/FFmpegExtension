// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <mutex>
#include <queue>

#include "CoreMinimal.h"
#include "Components/Image.h"
#include "Utilities/CusEnum.h"
#include "Utilities/UtilitiesClass.h"
#include "Utilities/CusStruct.h"
#include "Widgets/Layout/SConstraintCanvas.h"

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
}

#include "VideoPlayer_FFmpeg.generated.h"

/**
 * 
 */

class SConstraintCanvas;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFindVideoSuccessfully, FVideoInfo, VideoInfo);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVideoPlayBegin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVideoPlayEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVideoError, FString, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVideoLoop, int32, LoopIndex);

UCLASS()
class FFMPEGEXTENSION_API UVideoPlayer_FFmpeg : public UImage
{
	GENERATED_BODY()

public:

	FLocal_FFmpegParam* FFmpegParam;
	SConstraintCanvas::FSlot* ParentSlateSlot;

	//视频相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension|Video|VideoPlayer", meta = (ExposeOnSpawn = true))
	FVideoInfo VideoInfo;

	//获取视频流成功
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension|Video|VideoPlayer")
	FOnFindVideoSuccessfully OnFindVideoSuccessfully;

	//视频开始播放
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension|Video|VideoPlayer")
	FOnVideoPlayBegin OnVideoPlayBegin;

	//视频播放完成
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension|Video|VideoPlayer")
	FOnVideoPlayEnd OnVideoPlayEnd;

	//视频播放失败
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension|Video|VideoPlayer")
	FOnVideoError OnVideoError;

	//视频每次循环时调用, 返回循环次数
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension|Video|VideoPlayer")
	FOnVideoLoop OnVideoLoop;

	//控制解码线程退出
	bool bRun = true;

	//定时器句柄
	FTimerHandle TimerHandle;

	//解码状态
	EDecodeState DecodeState;

	bool bIsSending = false;

public:
	UVideoPlayer_FFmpeg()
	{
		FrameQueue_std = new FrameQueue();
	}

	virtual void SynchronizeProperties() override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void BeginDestroy() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	//视频开始播放
	UFUNCTION()
	virtual void VideoBeginPlay();

	//显示更新
	UFUNCTION()
	void UpdateFrameTexture();
	
	void DecodeThread();

	//打开视频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void PlayVideo(FString VideoURL);

	//关闭视频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void CloseVideo();

	//使用已有配置打开视频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void OpenVideo();

	//暂停视频播放
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void PausePlay();

	//恢复视频播放
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void ResumePlay();

	//设置视频宽高比
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void SetVideoRatio(EVideoRatio KeepVideoRatio);

	//获取视频单帧所占内存大小(单位: M)
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Video")
	float GetFrameBufferSize();

	//设置视频播放速度
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	void SetPlaybackSpeed(float Speed = 1);

	//获取视频总时长
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	FMediaTime GetVideoTime();

	//获取视频信息
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Video")
	FString GetVideoInfo();

	//跳转到某个时间点
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Video")
	bool Seek(FMediaTime Time);

private:
	FrameQueue* FrameQueue_std;

	//使用 EUpdateTextureMethod::Memcpy 时 Realloc 的帧数据指针
	void* TextureData = nullptr;
	
	FORCEINLINE void OutLog(const FString OutMessage) const
	{
		if (VideoInfo.bOutLog)
		{
			AsyncTask(ENamedThreads::GameThread, [=]()
				{
					UE_LOG(LogTemp, Warning, TEXT("PlayerObject: %s, %s"), *this->GetName(), *OutMessage);
				});
		}
	}
};
