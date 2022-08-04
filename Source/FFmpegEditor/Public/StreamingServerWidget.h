// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Video/StreamingServer.h"
#include "Widgets/Layout/SConstraintCanvas.h"

class UVideoPlayer_FFmpeg;
class UStreamingServer;
class SEditableTextBox;
class SCanvas;

class SStreamingServerWidget : public SCompoundWidget
{
private:
	TSharedPtr<SEditableTextBox> InputURLText;
	TSharedPtr<SEditableTextBox> OutputURLText;
	SConstraintCanvas::FSlot* PlayerCanvasSlot = nullptr;
	/*TSharedRef<SButton> BeginStreamingButton;
	TSharedRef<SButton> CloseStreamingButton;*/
	
	UVideoPlayer_FFmpeg* Player = nullptr;
	UStreamingServer* Server = nullptr;
	
public:
	SLATE_BEGIN_ARGS(SStreamingServerWidget)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	FReply ClickBeginStreaming();
	FReply ClickCloseStreaming();

	static TSharedPtr<FJsonObject> GetConfigJsonObject();
	static void SaveConfig(TSharedPtr<FJsonObject> JsonObject);
};