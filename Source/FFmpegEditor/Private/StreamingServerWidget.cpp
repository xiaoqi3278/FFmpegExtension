#include "StreamingServerWidget.h"
#include "SlateOptMacros.h"
#include "Kismet/KismetSystemLibrary.h"
//#include "Widgets/Layout/SConstraintCanvas.h"
#include "Editor.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SButton.h"
#include "SlateCore/Public/Types/SlateStructs.h"
#include "Video/VideoPlayer_FFmpeg.h"
#include "Video/StreamingServer.h"
#include "Dom/JsonObject.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"

#define LOCTEXT_NAMESPACE "FFFmpegEditorModule"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SStreamingServerWidget::Construct(const FArguments& InArgs)
{
	Player = NewObject<UVideoPlayer_FFmpeg>(GEditor->GetEditorWorldContext().World());
	TSharedRef<SWidget> VideoPlayerRef = Player->TakeWidget();
	TSharedPtr<FJsonObject> JsonObject = GetConfigJsonObject();
	FString DefaultInputURL = JsonObject->GetStringField("DefaultStremingInputURL");
	FString DefaultOutputURL = JsonObject->GetStringField("DefaultStremingOutputURL");

#if 1
	ChildSlot
	[
		SNew(SConstraintCanvas)
		//上层 Panel
		+ SConstraintCanvas::Slot()
		.Anchors(0.5f)
		.Offset(FMargin(0.f, -300.f, 1200.f, 200.f))
		.Alignment(FVector2D(0.5f, 0.f))
		[
			SNew(SConstraintCanvas)
			//添加输入流地址输入框
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 0.0, 0.5, 0.0))
			.Offset(FMargin(-92.f, 16.f, 700.f, 40.f))
			.Alignment(FVector2D(0.5, 0.0))
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(FMargin(0.f, 0.f, 20.f, 0.f))
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("InputStreamURL", "输入流地址:"))
				]
				+ SHorizontalBox::Slot()
				.Padding(0)
				.FillWidth(1.f)
				[
					(InputURLText = SNew(SEditableTextBox).Text(FText::FromString(DefaultInputURL))).ToSharedRef()
				]
			]
			//添加输出流地址输入框
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 0.0, 0.5, 0.0))
			.Offset(FMargin(-92.f, 76.f, 700.f, 40.f))
			.Alignment(FVector2D(0.5, 0.0))
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(FMargin(0.f, 0.f, 20.f, 0.f))
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("PushStreamURL", "推流地址:"))
				]
				+ SHorizontalBox::Slot()
				.Padding(0)
				.FillWidth(1.f)
				[
					(OutputURLText = SNew(SEditableTextBox).Text(FText::FromString(DefaultOutputURL))).ToSharedRef()
				]
			]
			//添加开始推流按钮
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 0.f, 0.5, 0.f))
			.Offset(FMargin(-100.f, 140.f, 100.f, 40))
			.Alignment(FVector2D(0.5, 0.f))
			.AutoSize(true)
			[
				SNew(SButton)
				.OnClicked(FOnClicked::CreateRaw(this, &SStreamingServerWidget::ClickBeginStreaming))
				.ContentPadding(FMargin(4.f, 2.f, 4.f, 2.f))
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("BeginPush", "开始推流"))
				]
			]
			//添加停止推流按钮
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 0.f, 0.5, 0.f))
			.Offset(FMargin(100.f, 140.f, 100.f, 40))
			.Alignment(FVector2D(0.5, 0.f))
			.AutoSize(true)
			[
				SNew(SButton)
				.OnClicked(FOnClicked::CreateRaw(this, &SStreamingServerWidget::ClickCloseStreaming))
				.ContentPadding(FMargin(4.f, 2.f, 4.f, 2.f))
				.VAlign(VAlign_Center)
				.HAlign(HAlign_Center)
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("StopPush", "停止推流"))
				]
			]
		]
		//下层 Panel
		+ SConstraintCanvas::Slot()
		.Anchors(0.5f)
		.Offset(FMargin(0.f, 300.f, 1200.f, 400.f))
		.Alignment(FVector2D(0.5f, 1.f))
		[
			/*(PlayerCanvas = SNew(SConstraintCanvas)
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 1.f, 0.5, 1.f))
			.Offset(FMargin(0.f, -32.f, 800.f, 330.f))
			.Alignment(FVector2D(0.5, 1.f))
			[
				Player->TakeWidget()
			]).ToSharedRef()*/
			SNew(SConstraintCanvas)
			+ SConstraintCanvas::Slot()
			.Anchors(FAnchors(0.5, 1.f, 0.5, 1.f))
			.Offset(FMargin(0.f, -32.f, 800.f, 330.f))
			.Alignment(FVector2D(0.5, 1.f))
			.Expose(PlayerCanvasSlot)
			[
				VideoPlayerRef
			]
		]
	];
#endif

	Player->ParentSlateSlot = PlayerCanvasSlot;
}

FReply SStreamingServerWidget::ClickBeginStreaming()
{
	//创建推流服务
	Server = NewObject<UStreamingServer>();
	FString InputURL = InputURLText.Get()->GetText().ToString();
	FString OutputURL = OutputURLText.Get()->GetText().ToString();
	Server->StreamingInfo.InURL = InputURL;
	Server->StreamingInfo.OutURL = OutputURL;
	Server->StreamingInfo.bOutLog = false;
	Server->OpenStreaming();

	//创建视频预览
	Player->VideoInfo.VideoURL = InputURL;
	Player->VideoInfo.bOutLog = false;
	Player->VideoInfo.UpdateTextureMethod = EUpdateTextureMethod::RHICommand;
	Player->VideoInfo.ExpectedSize = FVector2D(1200, 400);
	Player->VideoInfo.KeepVideoRatio = EKeepVideoRatio::Auto;
	Player->OpenVideo();

	TSharedPtr<FJsonObject> JsonObject = GetConfigJsonObject();
	JsonObject->SetStringField("DefaultStremingInputURL", InputURL);
	JsonObject->SetStringField("DefaultStremingOutputURL", OutputURL);
	SaveConfig(JsonObject);

	return FReply::Handled();
}

FReply SStreamingServerWidget::ClickCloseStreaming()
{
	Server->CloseStreaming();
	Player->CloseVideo();
	
	return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

TSharedPtr<FJsonObject> SStreamingServerWidget::GetConfigJsonObject()
{
	TSharedPtr<FJsonObject> JsonObject = nullptr;
	FString ConfigerPath = UKismetSystemLibrary::GetProjectDirectory() + "Config/FFmpegConfig.json";
	FString ConfigerContent;

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (PlatformFile.FileExists(*ConfigerPath))
	{
		FFileHelper::LoadFileToString(ConfigerContent, *ConfigerPath);

		TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ConfigerContent);
		FJsonSerializer::Deserialize(JsonReader, JsonObject);
	}
	else
	{
		JsonObject = MakeShareable(new FJsonObject());
		JsonObject->SetStringField("DefaultStremingInputURL", "");
		JsonObject->SetStringField("DefaultStremingOutputURL", "");
		
		FString JsonString;
		TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&JsonString);
		FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
		FFileHelper::SaveStringToFile(JsonString, *ConfigerPath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_None);
	}

	return JsonObject;
}

void SStreamingServerWidget::SaveConfig(TSharedPtr<FJsonObject> JsonObject)
{
	FString ConfigerPath = UKismetSystemLibrary::GetProjectDirectory() + "Config/FFmpegConfig.json";

	FString JsonString;
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<TCHAR>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
	FFileHelper::SaveStringToFile(JsonString, *ConfigerPath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_None);
}

#undef LOCTEXT_NAMESPACE
