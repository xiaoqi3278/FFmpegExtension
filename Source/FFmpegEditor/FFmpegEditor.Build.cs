
using UnrealBuildTool;

public class FFmpegEditor : ModuleRules
{
	public FFmpegEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
		"Core", "CoreUObject", "Engine", "InputCore", "RHI",
		"RenderCore" });

		PublicDependencyModuleNames.Add("FFmpegExtension");

		PrivateDependencyModuleNames.AddRange(new string[] {
	 	"CoreUObject",
		"Engine",
		"Slate",
		"SlateCore",
		"MainFrame",
		"EditorStyle",
		"UMG",
		"Json",
		"UnrealEd"
		});
	}
}
