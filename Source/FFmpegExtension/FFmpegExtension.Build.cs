// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class FFmpegExtension : ModuleRules
{
	private string ThirdParty
    {
		get 
		{
			return Path.GetFullPath(Path.Combine(ModuleDirectory, "ThirdParty"));
		}
    }

	public bool LoadFFmpeg(ReadOnlyTargetRules Target)
    {
		string FFmpegPath = Path.Combine(ThirdParty, "FFmpeg");
		string LibPath = Path.Combine(FFmpegPath, "lib");
		string DLLPath = Path.Combine(FFmpegPath, "bin");

		PublicIncludePaths.AddRange(new string[] { Path.Combine(FFmpegPath, "include") });

		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "avcodec.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "avdevice.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "avfilter.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "avformat.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "avutil.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "postproc.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "swresample.lib"));
		PublicAdditionalLibraries.Add(Path.Combine(LibPath, "swscale.lib"));

		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "avcodec-58.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "avcodec-58.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "avdevice-58.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "avdevice-58.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "avfilter-7.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "avfilter-7.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "avformat-58.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "avformat-58.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "avutil-56.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "avutil-56.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "postproc-55.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "postproc-55.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "swresample-3.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "swresample-3.dll"));
		PublicDelayLoadDLLs.Add(Path.Combine(DLLPath + "swscale-5.dll"));
		RuntimeDependencies.Add(Path.Combine(DLLPath + "swscale-5.dll"));

		return true;
	}

	public FFmpegExtension(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		LoadFFmpeg(Target);
	}
}
