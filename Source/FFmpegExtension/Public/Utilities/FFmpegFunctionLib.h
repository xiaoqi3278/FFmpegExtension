// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Video/VideoPlayer_FFmpeg.h"
#include "FFmpegFunctionLib.generated.h"

/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(FFmpegExtensionLog, Log, All);

UCLASS()
class FFMPEGEXTENSION_API UFFmpegFunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static FORCEINLINE void OutLog(UObject* CallObject, bool bOutLog, FString OutMessage)
	{
		if (bOutLog)
		{
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *OutMessage);
			AsyncTask(ENamedThreads::GameThread, [=]()
				{
					if (CallObject)
					{
						UE_LOG(FFmpegExtensionLog, Warning, TEXT("PlayerObject: %s, %s"), *CallObject->GetName(), *OutMessage);
					}
					else
					{
						UE_LOG(FFmpegExtensionLog, Warning, TEXT("PlayerObject: None, %s"), *OutMessage);
					}
				});
		}
	}

	UFUNCTION(BlueprintPure, Category = "FFmpegExtension|FFmpegFunctionLibrary")
	static FString ToString(FVideoInfo VideoInfo)
	{
		return "VideoURL:" + VideoInfo.VideoURL +
			"\n" + "VideoFPS:" + FString::FromInt(VideoInfo.FPS) +
			"\n" + "ValidFirstVideoStreamIndex" + FString::FromInt(VideoInfo.ValidFirstVideoStreamIndex) +
			"\n" + "VideoTotalTime:" + FString::FromInt(VideoInfo.VideoTime_s) +
			"\n" + "VideoWidth:" + FString::FromInt(VideoInfo.FrameWidth) + "     " + "VideoHeight:" + FString::FromInt(VideoInfo.FrameHeight);
	};
};
