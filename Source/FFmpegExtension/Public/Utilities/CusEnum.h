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
	//ʹ���ڴ渴�Ƶķ�ʽ������Ƶ֡
	Memcpy UMETA(DisplayName = "Memcpy"),
	//����Ƶ֡���ݷ��͵���Ⱦ�̸߳���
	RHICommand UMETA(DisplayName = "RHICommand")
};

UCLASS()
class FFMPEGEXTENSION_API UCusEnum : public UObject
{
	GENERATED_BODY()
	
};
