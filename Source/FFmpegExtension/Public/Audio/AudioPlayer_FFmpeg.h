// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SDL_audio.h"

#include "FFmpegExtension/Thirdparty/SDL/include/SDL_stdinc.h"
extern "C"
{
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
	FAudioQueue* AudioQueue;

	SDL_AudioSpec wanted_spec, spec;
	//控制解码线程退出
	bool bRunDecode = true;

public:
	//FFmpeg 相关参数
	FLocal_FFmpegParam* FFmpegParam;

	//音频相关参数
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension", meta = (ExposeOnSpawn = "true"))
	FAudioInfo AudioInfo;

	//音频输出格式
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FFmpegExtension", meta = (ExposeOnSpawn = "true"))
	FAudioFormat PlayFormat;

	//视频播放失败
	UPROPERTY(BlueprintAssignable, Category = "FFmpegExtension")
	FOnAudioError OnAudioError;

private:

public:
	UAudioPlayer_FFmpeg()
	{
		AudioQueue = new FAudioQueue();
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
	virtual void BeginDestroy() override;

	void ErrorLog(FString ErrorMessage);

	/**
	 * 配置音频,配置后可使用 OpenAudio() 重新播放
	 *
	 * @param NewAudioInfo	新的音频配置
	 */
	void SetAudioInfo(FAudioInfo NewAudioInfo);
	/**
	 * 配置音频输出设置,配置后可使用 OpenAudio() 重新播放
	 *
	 * @param NewOutputFormat	新的输出格式配置
	 */
	void SetAudioOutputFormat(FAudioFormat NewOutputFormat);

	//音频解码线程
	void DecodeThread();
	//初始化音频播放设备
	void InitAudioDevice(AVFrame* Frame);

	/**
	 * 使用已有配置播放音频,音频播放的入口
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void OpenAudio();

	/**
	 * 指定音频资源并使用已有配置播放
	 *
	 * @param AudioURL	音频资源
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void PlayAudio(FString AudioURL);

	/**
	 * 关闭音频
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void CloseAudio();

	/**
	 * 暂停音频播放
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void PauseAudio();

	/**
	 * 回复音频播放
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void ResumeAudio();

	/**
	 * 调整音量
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void SetVolume(int32 NewVolume);

	/**
	 * 跳转音频
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	void SeekAudio();

	/**
	 * 获取音频是否在解码中
	 */
	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|Audio")
	bool GetIsDecodeing();

	/**
	 * 创建音频播放对象并播放
	 *
	 * @param Key			用于管理音频播放对象
	 * @param AudioInfo		音频配置
	 * @param OutputFormat	音频输出格式配置
	 *
	 * @return				创建的音频播放对象
	 */
	UFUNCTION(BlueprintCallable, Category = "FFmpegExtension|Audio")
	static UAudioPlayer_FFmpeg* FFmpegPlayAudio(FString Key, FAudioInfo InAudioInfo, FAudioFormat InPlaytFormat);
};
