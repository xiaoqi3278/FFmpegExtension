// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/UtilitiesClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilitiesClass() {}
// Cross Module References
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UUtilitiesClass_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UUtilitiesClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
// End Cross Module References
	void UUtilitiesClass::StaticRegisterNativesUUtilitiesClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUtilitiesClass);
	UClass* Z_Construct_UClass_UUtilitiesClass_NoRegister()
	{
		return UUtilitiesClass::StaticClass();
	}
	struct Z_Construct_UClass_UUtilitiesClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtilitiesClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtilitiesClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/UtilitiesClass.h" },
		{ "ModuleRelativePath", "Public/Utilities/UtilitiesClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtilitiesClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilitiesClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUtilitiesClass_Statics::ClassParams = {
		&UUtilitiesClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUtilitiesClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtilitiesClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtilitiesClass()
	{
		if (!Z_Registration_Info_UClass_UUtilitiesClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtilitiesClass.OuterSingleton, Z_Construct_UClass_UUtilitiesClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUtilitiesClass.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UUtilitiesClass>()
	{
		return UUtilitiesClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilitiesClass);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_UtilitiesClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_UtilitiesClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUtilitiesClass, UUtilitiesClass::StaticClass, TEXT("UUtilitiesClass"), &Z_Registration_Info_UClass_UUtilitiesClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtilitiesClass), 1295040229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_UtilitiesClass_h_93380667(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_UtilitiesClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_UtilitiesClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
