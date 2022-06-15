// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/CusEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCusEnum() {}
// Cross Module References
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EUpdateTextureMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EUpdateTextureMethod"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EUpdateTextureMethod>()
	{
		return EUpdateTextureMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateTextureMethod(EUpdateTextureMethod_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("EUpdateTextureMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Hash() { return 3454277230U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateTextureMethod"), 0, Get_Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateTextureMethod::Memcpy", (int64)EUpdateTextureMethod::Memcpy },
				{ "EUpdateTextureMethod::RHICommand", (int64)EUpdateTextureMethod::RHICommand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "Memcpy.Comment", "/**\n * \n *///\xca\xb9???\xda\xb4\xe6\xb8\xb4?\xc6\xb5\xc4\xb7?\xca\xbd??????\xc6\xb5\xd6\xa1\n" },
				{ "Memcpy.DisplayName", "Memcpy" },
				{ "Memcpy.Name", "EUpdateTextureMethod::Memcpy" },
				{ "Memcpy.ToolTip", "//\xca\xb9???\xda\xb4\xe6\xb8\xb4?\xc6\xb5\xc4\xb7?\xca\xbd??????\xc6\xb5\xd6\xa1" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "RHICommand.Comment", "//????\xc6\xb5\xd6\xa1???\xdd\xb7??\xcd\xb5???\xc8\xbe?\xdf\xb3\xcc\xb8???\n" },
				{ "RHICommand.DisplayName", "RHICommand" },
				{ "RHICommand.Name", "EUpdateTextureMethod::RHICommand" },
				{ "RHICommand.ToolTip", "????\xc6\xb5\xd6\xa1???\xdd\xb7??\xcd\xb5???\xc8\xbe?\xdf\xb3\xcc\xb8???" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"EUpdateTextureMethod",
				"EUpdateTextureMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCusEnum::StaticRegisterNativesUCusEnum()
	{
	}
	UClass* Z_Construct_UClass_UCusEnum_NoRegister()
	{
		return UCusEnum::StaticClass();
	}
	struct Z_Construct_UClass_UCusEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCusEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCusEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/CusEnum.h" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCusEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCusEnum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCusEnum_Statics::ClassParams = {
		&UCusEnum::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCusEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCusEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCusEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCusEnum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCusEnum, 1769171224);
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UCusEnum>()
	{
		return UCusEnum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCusEnum(Z_Construct_UClass_UCusEnum, &UCusEnum::StaticClass, TEXT("/Script/FFmpegExtension"), TEXT("UCusEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCusEnum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
