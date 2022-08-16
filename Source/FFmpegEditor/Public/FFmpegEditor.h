#pragma once
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FFFmpegEditor : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void AddSubMenus(FMenuBuilder& MenuBuilder);
	void MenuCallback();

	//点击视频流 Open 按钮
	void StreamingServerOpenCallback();
};