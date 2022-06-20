// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
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
	static FORCEINLINE void OutLog(UObject* CallObject, bool bOutLog, const FString OutMessage)
	{
		if (bOutLog)
		{
			AsyncTask(ENamedThreads::GameThread, [=]()
				{
					UE_LOG(FFmpegExtensionLog, Warning, TEXT("PlayerObject: %s, %s"), *CallObject->GetName(), *OutMessage);
				});
		}
	}
};