// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/FFmpegFunctionLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFmpegFunctionLib() {}
// Cross Module References
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UFFmpegFunctionLib_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UFFmpegFunctionLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo();
// End Cross Module References
	DEFINE_FUNCTION(UFFmpegFunctionLib::execToString)
	{
		P_GET_STRUCT(FVideoInfo,Z_Param_VideoInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFFmpegFunctionLib::ToString(Z_Param_VideoInfo);
		P_NATIVE_END;
	}
	void UFFmpegFunctionLib::StaticRegisterNativesUFFmpegFunctionLib()
	{
		UClass* Class = UFFmpegFunctionLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UFFmpegFunctionLib::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics
	{
		struct FFmpegFunctionLib_eventToString_Parms
		{
			FVideoInfo VideoInfo;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFmpegFunctionLib_eventToString_Parms, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(nullptr, 0) }; // 2956152520
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFmpegFunctionLib_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::NewProp_VideoInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|FFmpegFunctionLibrary" },
		{ "ModuleRelativePath", "Public/Utilities/FFmpegFunctionLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFFmpegFunctionLib, nullptr, "ToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::FFmpegFunctionLib_eventToString_Parms), Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFFmpegFunctionLib_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFFmpegFunctionLib_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFFmpegFunctionLib);
	UClass* Z_Construct_UClass_UFFmpegFunctionLib_NoRegister()
	{
		return UFFmpegFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UFFmpegFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFFmpegFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFFmpegFunctionLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFFmpegFunctionLib_ToString, "ToString" }, // 3047053696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/FFmpegFunctionLib.h" },
		{ "ModuleRelativePath", "Public/Utilities/FFmpegFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFFmpegFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFmpegFunctionLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFFmpegFunctionLib_Statics::ClassParams = {
		&UFFmpegFunctionLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFFmpegFunctionLib()
	{
		if (!Z_Registration_Info_UClass_UFFmpegFunctionLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFFmpegFunctionLib.OuterSingleton, Z_Construct_UClass_UFFmpegFunctionLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFFmpegFunctionLib.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UFFmpegFunctionLib>()
	{
		return UFFmpegFunctionLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFFmpegFunctionLib);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_FFmpegFunctionLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_FFmpegFunctionLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFFmpegFunctionLib, UFFmpegFunctionLib::StaticClass, TEXT("UFFmpegFunctionLib"), &Z_Registration_Info_UClass_UFFmpegFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFFmpegFunctionLib), 2259006404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_FFmpegFunctionLib_h_4213701360(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_FFmpegFunctionLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_FFmpegFunctionLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
