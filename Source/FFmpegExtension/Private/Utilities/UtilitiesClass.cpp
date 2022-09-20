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
	//��ջ�����
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
	//ͷ����Ƶ֡ʣ���С
	int32 BufferLen = 0;
	//ͷ����Ƶ֡��������С
	int32 FullBufferLen = FrameSizeQueue_std.front();

	//����ϴ�δȡ��ͷ����Ƶ֡ȫ��������
	if (ReadSize != 0)
	{
		//����ͷ����Ƶ֡ʣ���С
		BufferLen = FullBufferLen - ReadSize;
		//�����Ҫ������С�ڵ�ǰͷ����Ƶ֡ʣ��Ĵ�С
		if (NeedBufferLen < BufferLen)
		{
			ReadSize += NeedBufferLen;
			TempData += ReadSize;
			return TempData;
		}
		//�����Ҫ�����ݴ��ڵ��ڵ�ǰͷ����Ƶ֡ʣ��Ĵ�С�򷵻�ȫ��ʣ�������
		NeedBufferLen = FullBufferLen - ReadSize;
		TempData += ReadSize;
		ReadSize = 0;
		CurrentBufferSize -= FullBufferLen;
		//���пɼ���д������
		bCanPush = true;
		//����ͷ������
		FrameSizeQueue_std.pop();
		FrameBufferQueue_std.pop();
		return TempData;
	}
	//����ϴ���ȡ��ͷ����Ƶ֡ȫ��������
	BufferLen = FullBufferLen;
	//�����Ҫ������С�ڵ�ǰͷ����Ƶ֡�Ĵ�С
	if (NeedBufferLen < BufferLen)
	{
		ReadSize = NeedBufferLen;
		return TempData;
	}
	//�����Ҫ�����ݴ��ڵ��ڵ�ǰͷ����Ƶ֡�Ĵ�С
	NeedBufferLen = BufferLen;
	ReadSize = 0;
	CurrentBufferSize -= FullBufferLen;
	//���пɼ���д������
	bCanPush = true;
	//����ͷ������
	FrameSizeQueue_std.pop();
	FrameBufferQueue_std.pop();
	return TempData;
}

void FAudioQueue::SetMaxBufferSize(int32 Size)
{
	MaxBufferSize = Size;
}
