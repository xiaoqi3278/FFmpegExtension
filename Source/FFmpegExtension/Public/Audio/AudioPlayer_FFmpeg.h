// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

extern "C"
{
#include "FFmpegExtension/Thirdparty/SDL/include/SDL_stdinc.h"
}
#include "UObject/NoExportTypes.h"
#include "Utilities/CusStruct.h"
#include "Utilities/UtilitiesClass.h"
#include "AudioPlayer_FFmpeg.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioPlayBegin);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioPlayEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioError, FString, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioLoop, int32, LoopIndex);

UCLASS(Blueprintable)
class FFMPEGEXTENSION_API UAudioPlayer_FFmpeg : public UObject
{
	GENERATED_BODY()

private:
	//音频帧缓冲队列
	FrameQueue* AudioQueue;

public:
	//FFmpeg 相关参数
	FLocal_FFmpegParam* FFmpegParam;

	//音频相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension", meta = (ExposeOnSpawn = "true"))
	FAudioInfo AudioInfo;

	//控制解码线程退出
	bool bRunDecode = true;
	//控制播放线程退出
	bool bRunPlay = false;

	//视频播放失败
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension")
	FOnAudioError OnAudioError;

private:

public:
	UAudioPlayer_FFmpeg()
	{
		AudioQueue = new FrameQueue();
	}
	~UAudioPlayer_FFmpeg()
	{
		if (AudioQueue != nullptr)
		{
			delete AudioQueue;
			AudioQueue = nullptr;
		}
	}

	//void Call_Back_SDL(void* userdata, Uint8* stream, int len);

	virtual void PostInitProperties() override;
	virtual UWorld* GetWorld() const override;

	void ErrorLog(FString ErrorMessage);

	//音频解码线程
	void DecodeThread();
	//音频播放线程
	void PlayThread();

	void StartPlayThread();

	//使用已有配置打开音频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void OpenAudio();

	//打开指定音频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void PlayAudio(FString AudioURL);

	//关闭音频
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void CloseAudio();

	UFUNCTION(BlueprintCallable)
	void TestFunction();
};
