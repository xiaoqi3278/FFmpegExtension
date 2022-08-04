#include "FFmpegEditor.h"

#include "LevelEditor.h"
#include "Misc/MessageDialog.h"
#include "Interfaces/IMainFrameModule.h"
#include "Widgets/Layout/SConstraintCanvas.h"
#include "StreamingServerWidget.h"

#define LOCTEXT_NAMESPACE "FFFmpegEditorModule"

void FFFmpegEditor::StartupModule()
{
	TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
	MenuExtender->AddToolBarExtension("Content", EExtensionHook::After,
		NULL, FToolBarExtensionDelegate::CreateLambda([this](FToolBarBuilder& Builder)
			{
				//Builder.BeginSection("StreamingServer");
				Builder.AddSeparator(TEXT("Streaming"));
				//添加视频流 Open 按钮
				Builder.AddToolBarButton(FUIAction(FExecuteAction::CreateRaw(this, &FFFmpegEditor::StreamingServerOpenCallback)),
					TEXT("Open"), FText::FromString(TEXT("Open Streaming Server")),
					FText::FromString(TEXT("Open Streaming Server")),
					FSlateIcon(FEditorStyle::GetStyleSetName(), "Open Streaming Server")
				);
				//Builder.EndSection();
			})
		);

	//添加一个菜单按钮
	MenuExtender->AddMenuExtension("LevelEditor", EExtensionHook::After,
			NULL, FMenuExtensionDelegate::CreateLambda([this](FMenuBuilder& Builder)
			{
				Builder.BeginSection("CustomMenu");
				//创建一个Menu1
				Builder.AddMenuEntry(
					FText::FromString("Menu1"),
					FText::FromString("This is Menu1"),
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateRaw(this, &FFFmpegEditor::MenuCallback))
				);

				//创建一个有子菜单的Menu2
				Builder.AddSubMenu(
					FText::FromString("Menu2"),
					FText::FromString("This is Menu2"),
					FNewMenuDelegate::CreateRaw(this, &FFFmpegEditor::AddSubMenus)
				);
				Builder.EndSection();
			})
		);

	//加载LevelEditor模块
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(MenuExtender);
}

void FFFmpegEditor::ShutdownModule()
{

}

//添加子菜单
void FFFmpegEditor::AddSubMenus(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		FText::FromString("SubMenu1"),
		FText::FromString("This is SubMenu1"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FFFmpegEditor::MenuCallback))
	);
	MenuBuilder.AddMenuEntry(
		FText::FromString("SubMenu2"),
		FText::FromString("This is SubMenu2"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FFFmpegEditor::MenuCallback))
	);
}

void FFFmpegEditor::MenuCallback()
{
	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("Just a test"));
}

void FFFmpegEditor::StreamingServerOpenCallback()
{
	TSharedRef<SWindow> NewWindow = SNew(SWindow)
	.Title(FText::FromString(TEXT("Streaming Server")))
	.ClientSize(FVector2D(1200, 600))
	.SupportsMaximize(false)
	.SupportsMinimize(false);

#if 0
	TSharedRef<SConstraintCanvas> BaseCanvasPanel =
		SNew(SConstraintCanvas)
		+ SConstraintCanvas::Slot()
		.Anchors(0.f)
		.Offset(FMargin(0, 0, 800, 400))
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SBasePanel_TextURL", "URL"))
			.Font(FCoreStyle::GetDefaultFontStyle("Roboto", 53))
			.ColorAndOpacity(FSlateColor(FLinearColor(1, 1, 1, 1)))
		];

	NewWindow->SetContent
	(
		BaseCanvasPanel
	);
#endif
	TSharedPtr<SWidget> TestWidget = SNew(SStreamingServerWidget);//自定义窗体
	NewWindow->SetContent
	(
		TestWidget.ToSharedRef()
	);

	IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
	if (MainFrameModule.GetParentWindow().IsValid())
	{
		FSlateApplication::Get().AddWindowAsNativeChild(NewWindow, MainFrameModule.GetParentWindow().ToSharedRef());
	}
	else
	{
		FSlateApplication::Get().AddWindow(NewWindow);
	}

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_GAME_MODULE(FFFmpegEditor, FFmpegEditor)