// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/UtilitiesClass.h"

void FVideoQueue::EnqueueFrame(uint8* FrameBuffer)
{
	if (bCanPush && FrameBuffer != nullptr)
	{
		FrameBufferQueue_std.push(FrameBuffer);
		CurrentBufferSize += FrameBufferSize;
		if (CurrentBufferSize >= MaxBufferSize)
		{
			bCanPush = false;
		}
	}
}

uint8* FVideoQueue::DequeueFrame()
{
	if (FrameBufferQueue_std.size() == 0)
	{
		return nullptr;
	}

	CurrentBufferSize -= FrameBufferSize;
	bCanPush = true;

	uint8* Frame = FrameBufferQueue_std.front();
	FrameBufferQueue_std.pop();

	return Frame;
}

void FVideoQueue::ClearQueue(bool bIsavfree)
{
	FFrameQueue::ClearQueue(bIsavfree);

	CurrentBufferSize = 0;
}

void FAudioQueue::EnqueueFrame(uint8* FrameBuffer)
{
}

uint8* FAudioQueue::DequeueFrame()
{
	return nullptr;
}

void FAudioQueue::ClearQueue(bool bIsavfree)
{
	//清空缓冲区
	while (FrameBufferQueue_std.size() > 0)
	{
		uint8* Buffer;
		int i = 0;
		Buffer = this->DequeueFrame(i);
		if (bIsavfree)
		{
			av_free(Buffer);
		}
		else
		{
			delete Buffer;
		}
	}
}

void FAudioQueue::EnqueueFrame(uint8* FrameBuffer, int32 BufferSize)
{
	if (bCanPush && FrameBuffer != nullptr && BufferSize > 0)
	{
		FrameBufferQueue_std.push(FrameBuffer);
		FrameSizeQueue_std.push(BufferSize);
		CurrentBufferSize += BufferSize;
		if (CurrentBufferSize >= MaxBufferSize)
		{
			bCanPush = false;
		}
	}
}

uint8* FAudioQueue::DequeueFrame(int32& NeedBufferLen)
{
	if (FrameBufferQueue_std.size() == 0)
	{
		return nullptr;
	}

	TempData = FrameBufferQueue_std.front();
	//头部音频帧剩余大小
	int32 BufferLen = 0;
	//头部音频帧的完整大小
	int32 FullBufferLen = FrameSizeQueue_std.front();

	//如果上次未取出头部音频帧全部的数据
	if (ReadSize != 0)
	{
		//计算头部音频帧剩余大小
		BufferLen = FullBufferLen - ReadSize;
		//如果需要的数据小于当前头部音频帧剩余的大小
		if (NeedBufferLen < BufferLen)
		{
			ReadSize += NeedBufferLen;
			TempData += ReadSize;
			return TempData;
		}
		//如果需要的数据大于等于当前头部音频帧剩余的大小则返回全部剩余的数据
		NeedBufferLen = FullBufferLen - ReadSize;
		TempData += ReadSize;
		ReadSize = 0;
		CurrentBufferSize -= FullBufferLen;
		//队列可继续写入数据
		bCanPush = true;
		//弹出头部数据
		FrameSizeQueue_std.pop();
		FrameBufferQueue_std.pop();
		return TempData;
	}
	//如果上次已取出头部音频帧全部的数据
	BufferLen = FullBufferLen;
	//如果需要的数据小于当前头部音频帧的大小
	if (NeedBufferLen < BufferLen)
	{
		ReadSize = NeedBufferLen;
		return TempData;
	}
	//如果需要的数据大于等于当前头部音频帧的大小
	NeedBufferLen = BufferLen;
	ReadSize = 0;
	CurrentBufferSize -= FullBufferLen;
	//队列可继续写入数据
	bCanPush = true;
	//弹出头部数据
	FrameSizeQueue_std.pop();
	FrameBufferQueue_std.pop();
	return TempData;
}

void FAudioQueue::SetMaxBufferSize(int32 Size)
{
	MaxBufferSize = Size;
}
