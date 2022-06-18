// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/FFmpegFunctionLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFmpegFunctionLib() {}
// Cross Module References
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UFFmpegFunctionLib_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UFFmpegFunctionLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
// End Cross Module References
	void UFFmpegFunctionLib::StaticRegisterNativesUFFmpegFunctionLib()
	{
	}
	UClass* Z_Construct_UClass_UFFmpegFunctionLib_NoRegister()
	{
		return UFFmpegFunctionLib::StaticClass();
	}
	struct Z_Construct_UClass_UFFmpegFunctionLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFFmpegFunctionLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utilities/FFmpegFunctionLib.h" },
		{ "ModuleRelativePath", "Public/Utilities/FFmpegFunctionLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFFmpegFunctionLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFFmpegFunctionLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFFmpegFunctionLib_Statics::ClassParams = {
		&UFFmpegFunctionLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFFmpegFunctionLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFFmpegFunctionLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFFmpegFunctionLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFFmpegFunctionLib, 4236488107);
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UFFmpegFunctionLib>()
	{
		return UFFmpegFunctionLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFFmpegFunctionLib(Z_Construct_UClass_UFFmpegFunctionLib, &UFFmpegFunctionLib::StaticClass, TEXT("/Script/FFmpegExtension"), TEXT("UFFmpegFunctionLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFFmpegFunctionLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
