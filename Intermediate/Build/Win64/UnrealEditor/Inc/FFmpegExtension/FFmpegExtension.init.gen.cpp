// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFmpegExtension_init() {}
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FFmpegExtension;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FFmpegExtension()
	{
		if (!Z_Registration_Info_UPackage__Script_FFmpegExtension.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FFmpegExtension",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB39D1EF1,
				0xD3E8E56B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FFmpegExtension.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FFmpegExtension.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FFmpegExtension(Z_Construct_UPackage__Script_FFmpegExtension, TEXT("/Script/FFmpegExtension"), Z_Registration_Info_UPackage__Script_FFmpegExtension, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB39D1EF1, 0xD3E8E56B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
