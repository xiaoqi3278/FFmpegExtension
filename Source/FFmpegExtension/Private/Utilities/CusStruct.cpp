// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/CusStruct.h"

FString UCusStruct::TimeFormat(int32 Num)
{
	return Num < 10 ? "0" + FString::FromInt(Num) : FString::FromInt(Num);
}

FMediaTime UCusStruct::VideoDurationToTime_us(int64 Duration, float FPS)
{
	return FMediaTime(Duration, FPS);
}

FMediaTime UCusStruct::VideoDurationToTime_s(float Duration, float FPS)
{
	return FMediaTime(Duration, FPS);
}

FString UCusStruct::VideoTimeToString(FMediaTime Time)
{
	return TimeFormat(Time.Hours) + ":"
		+ TimeFormat(Time.Minutes) + ":"
		+ TimeFormat(Time.Seconds) + ":"
		+ TimeFormat(Time.Frames);
}

FString UCusStruct::VideoInfoToString(FVideoInfo VideoInfo)
{
	FString Info;

	Info.Append("VideoURL: "						+ VideoInfo.VideoURL + "\r\n");
	Info.Append("UpdateTextureMethod: "				+ StaticEnum<EUpdateTextureMethod>()->GetNameStringByValue((int64)VideoInfo.UpdateTextureMethod) + "\r\n");
	Info.Append("VideoResolution: "					+ FString::FromInt(VideoInfo.FrameWidth) + "x" + FString::FromInt(VideoInfo.FrameHeight) + "\r\n");
	Info.Append("FPS: "								+ FString::SanitizeFloat(VideoInfo.FPS) + "\r\n");
	Info.Append("VideoStreamIndex: "				+ FString::FromInt(VideoInfo.ValidFirstVideoStreamIndex) + "\r\n");
	Info.Append("VideoTime: "						+ VideoTimeToString(VideoInfo.VideoTime) + "\r\n");
	Info.Append("VideoTime(Seconds): "				+ FString::FromInt(VideoInfo.VideoTime_s) + "\r\n");
	Info.Append("VideoTime(Milliseconds): "			+ FString(std::to_string(VideoInfo.VideoTime_ms).c_str()) + "\r\n");
	Info.Append("VideoTime(Microseconds): "			+ FString(std::to_string(VideoInfo.VideoTime_us).c_str()) + "\r\n");
	Info.Append("FrameInterval(Milliseconds): " 	+ FString::SanitizeFloat(VideoInfo.FrameInterval_s) + "\r\n");
	Info.Append("FrameInterval(Seconds): "			+ FString::SanitizeFloat(VideoInfo.FrameInterval_s) + "\r\n");
	Info.Append("BufferSize: "						+ FString::SanitizeFloat(VideoInfo.BufferSize) + "\r\n");
	Info.Append("FrameBufferSize: "					+ FString::SanitizeFloat(VideoInfo.FrameBufferSize) + "\r\n");

	return Info;
}

float UCusStruct::TimeToSeconds(FMediaTime Time, int32 FPS)
{
	return float(Time.Hours * 3600 + Time.Minutes * 60 + Time.Seconds) + Time.Frames / FPS;
}
