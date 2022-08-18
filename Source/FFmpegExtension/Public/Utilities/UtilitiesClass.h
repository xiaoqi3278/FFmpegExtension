// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <queue>

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UtilitiesClass.generated.h"

/**
 * 
 */

class FFMPEGEXTENSION_API FrameQueue
{
private:
	//解码完成的帧队列
	std::queue<uint8*> FrameBufferQueue_std;

	//允许的帧缓冲区大小
	float BufferSize = 0;
	//当前缓冲区大小
	float CurrentBufferSize = 0;

	//单帧所需的缓冲大小
	float FrameBufferSize = 0;

public:
	bool bCanPush = true;

public:
	FrameQueue(float InBufferSize = 100, float InFrameBufferSize = 0)
		: BufferSize(InBufferSize)
		, FrameBufferSize(InFrameBufferSize) {}

	void EnqueueFrame(uint8* FrameBuffer)
	{
		FrameBufferQueue_std.push(FrameBuffer);

		CurrentBufferSize += FrameBufferSize;
		bCanPush = CurrentBufferSize < BufferSize;
	};

	uint8* DequeueFrame()
	{
		CurrentBufferSize -= FrameBufferSize;
		bCanPush = CurrentBufferSize < BufferSize;

		uint8* Frame = FrameBufferQueue_std.front();
		FrameBufferQueue_std.pop();
		return Frame;
	};

	void SetFrameBufferSize(float InFrameBufferSize)
	{
		FrameBufferSize = InFrameBufferSize;
	}

	void SetBufferSize(float InBufferSize)
	{
		BufferSize = InBufferSize;
	}

	int32 GetFrameNum()
	{
		return FrameBufferQueue_std.size();
	}
};

UCLASS()
class FFMPEGEXTENSION_API UUtilitiesClass : public UObject
{
	GENERATED_BODY()
	
};
