// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <queue>

#include "CoreMinimal.h"
#include "libavutil/mem.h"
#include "UObject/NoExportTypes.h"
#include "UtilitiesClass.generated.h"

/**
 * 
 */

class FFMPEGEXTENSION_API FFrameQueue
{
protected:
	//解码完成的帧队列
	std::queue<uint8*> FrameBufferQueue_std;

public:
	bool bCanPush = true;

public:
	
	virtual void EnqueueFrame(uint8* FrameBuffer) {};

	virtual uint8* DequeueFrame() = 0;

	int32 GetFrameNum()
	{
		return FrameBufferQueue_std.size();
	}

	virtual void ClearQueue(bool bIsavfree)
	{
		//清空缓冲区
		while (FrameBufferQueue_std.size() > 0)
		{
			uint8* Buffer;
			Buffer = this->DequeueFrame();
			if (bIsavfree)
			{
				av_free(Buffer);
			}
			else
			{
				delete Buffer;
			}
		}
	};

	virtual ~FFrameQueue()
	{
		
	}
};

class FFMPEGEXTENSION_API FVideoQueue : public FFrameQueue
{
protected:
	//允许的帧缓冲区大小
	int32 MaxBufferSize = 0;
	//当前缓冲区大小
	int32 CurrentBufferSize = 0;

	//单帧所需的缓冲大小
	int32 FrameBufferSize = 0;

public:
	FVideoQueue(int32 InBufferSize = 100, int32 InFrameBufferSize = 0)
		: MaxBufferSize(InBufferSize)
		, FrameBufferSize(InFrameBufferSize) {}

	virtual void EnqueueFrame(uint8* FrameBuffer) override;
	virtual uint8* DequeueFrame() override;
	virtual void ClearQueue(bool bIsavfree) override;

	void SetVideoFrameBufferSize(int32 InFrameBufferSize)
	{
		FrameBufferSize = InFrameBufferSize;
	}

	int32 GetVideoBufferSize()
	{
		return FrameBufferSize;
	}

	void SetVideoBufferSize(int32 InBufferSize)
	{
		MaxBufferSize = InBufferSize;
	}

	void SetCurrentVideoBufferSize(int32 InCurrentBufferSize)
	{
		CurrentBufferSize = InCurrentBufferSize;
	}
};

class FFMPEGEXTENSION_API FAudioQueue : public FFrameQueue
{
protected:
	int32 MaxBufferSize = 0;
	int32 CurrentBufferSize = 0;
	//当取出的数据大小小于头部音频帧的大小时,标识已被取出的大小
	int32 ReadSize = 0;

	uint8* TempData = nullptr;

	//解码完成的帧大小队列
	std::queue<int32> FrameSizeQueue_std;
public:
	virtual	void EnqueueFrame(uint8* FrameBuffer) override;
	virtual uint8* DequeueFrame() override;
	virtual void ClearQueue(bool bIsavfree) override;

	void EnqueueFrame(uint8* FrameBuffer, int32 BufferSize);
	uint8* DequeueFrame(int32& NeedBufferLen);
	void SetMaxBufferSize(int32 Size);
};

UCLASS()
class FFMPEGEXTENSION_API UUtilitiesClass : public UObject
{
	GENERATED_BODY()
	
};
