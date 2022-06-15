// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CusEnum.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EUpdateTextureMethod : uint8
{
	//使用内存复制的方式更新视频帧
	Memcpy UMETA(DisplayName = "Memcpy"),
	//将视频帧数据发送到渲染线程更新
	RHICommand UMETA(DisplayName = "RHICommand")
};

UCLASS()
class FFMPEGEXTENSION_API UCusEnum : public UObject
{
	GENERATED_BODY()
	
};
