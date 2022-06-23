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
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EScaleFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EScaleFlag, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EScaleFlag"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EScaleFlag>()
	{
		return EScaleFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScaleFlag(EScaleFlag_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("EScaleFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Hash() { return 2912137112U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScaleFlag"), 0, Get_Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScaleFlag::E_SWS_FAST_BILINEAR", (int64)EScaleFlag::E_SWS_FAST_BILINEAR },
				{ "EScaleFlag::E_SWS_BILINEAR", (int64)EScaleFlag::E_SWS_BILINEAR },
				{ "EScaleFlag::E_SWS_BICUBIC", (int64)EScaleFlag::E_SWS_BICUBIC },
				{ "EScaleFlag::E_SWS_X", (int64)EScaleFlag::E_SWS_X },
				{ "EScaleFlag::E_SWS_POINT", (int64)EScaleFlag::E_SWS_POINT },
				{ "EScaleFlag::E_SWS_AREA", (int64)EScaleFlag::E_SWS_AREA },
				{ "EScaleFlag::E_SWS_BICUBLIN", (int64)EScaleFlag::E_SWS_BICUBLIN },
				{ "EScaleFlag::E_SWS_GAUSS", (int64)EScaleFlag::E_SWS_GAUSS },
				{ "EScaleFlag::E_SWS_SINC", (int64)EScaleFlag::E_SWS_SINC },
				{ "EScaleFlag::E_SWS_LANCZOS", (int64)EScaleFlag::E_SWS_LANCZOS },
				{ "EScaleFlag::E_SWS_SPLINE", (int64)EScaleFlag::E_SWS_SPLINE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95\n" },
				{ "E_SWS_AREA.Name", "EScaleFlag::E_SWS_AREA" },
				{ "E_SWS_BICUBIC.Name", "EScaleFlag::E_SWS_BICUBIC" },
				{ "E_SWS_BICUBLIN.Name", "EScaleFlag::E_SWS_BICUBLIN" },
				{ "E_SWS_BILINEAR.Name", "EScaleFlag::E_SWS_BILINEAR" },
				{ "E_SWS_FAST_BILINEAR.Name", "EScaleFlag::E_SWS_FAST_BILINEAR" },
				{ "E_SWS_GAUSS.Name", "EScaleFlag::E_SWS_GAUSS" },
				{ "E_SWS_LANCZOS.Name", "EScaleFlag::E_SWS_LANCZOS" },
				{ "E_SWS_POINT.Name", "EScaleFlag::E_SWS_POINT" },
				{ "E_SWS_SINC.Name", "EScaleFlag::E_SWS_SINC" },
				{ "E_SWS_SPLINE.Name", "EScaleFlag::E_SWS_SPLINE" },
				{ "E_SWS_X.Name", "EScaleFlag::E_SWS_X" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "ToolTip", "\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"EScaleFlag",
				"EScaleFlag",
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
	static UEnum* ETuneParam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ETuneParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ETuneParam"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ETuneParam>()
	{
		return ETuneParam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETuneParam(ETuneParam_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("ETuneParam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_ETuneParam_Hash() { return 125979449U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETuneParam"), 0, Get_Z_Construct_UEnum_FFmpegExtension_ETuneParam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETuneParam::FILM", (int64)ETuneParam::FILM },
				{ "ETuneParam::ANIMATION", (int64)ETuneParam::ANIMATION },
				{ "ETuneParam::GRAIN", (int64)ETuneParam::GRAIN },
				{ "ETuneParam::STILLIMAGE", (int64)ETuneParam::STILLIMAGE },
				{ "ETuneParam::PSNR", (int64)ETuneParam::PSNR },
				{ "ETuneParam::SSIM", (int64)ETuneParam::SSIM },
				{ "ETuneParam::FASTDECODE", (int64)ETuneParam::FASTDECODE },
				{ "ETuneParam::ZEROLATENCY", (int64)ETuneParam::ZEROLATENCY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANIMATION.Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\n" },
				{ "ANIMATION.Name", "ETuneParam::ANIMATION" },
				{ "ANIMATION.ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb" },
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96\n" },
				{ "FASTDECODE.Comment", "//\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xbf\xab\xe9\x80\x9f\xe8\xa7\xa3\xe7\xa0\x81\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\n" },
				{ "FASTDECODE.Name", "ETuneParam::FASTDECODE" },
				{ "FASTDECODE.ToolTip", "\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xbf\xab\xe9\x80\x9f\xe8\xa7\xa3\xe7\xa0\x81\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0" },
				{ "FILM.Comment", "//\xe7\x94\xb5\xe5\xbd\xb1\xe3\x80\x81\xe7\x9c\x9f\xe4\xba\xba\xe7\xb1\xbb\xe5\x9e\x8b\n" },
				{ "FILM.Name", "ETuneParam::FILM" },
				{ "FILM.ToolTip", "\xe7\x94\xb5\xe5\xbd\xb1\xe3\x80\x81\xe7\x9c\x9f\xe4\xba\xba\xe7\xb1\xbb\xe5\x9e\x8b" },
				{ "GRAIN.Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe7\x95\x99\xe5\xa4\xa7\xe9\x87\x8f\xe7\x9a\x84\xe7\xba\xb9\xe7\x90\x86\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\n" },
				{ "GRAIN.Name", "ETuneParam::GRAIN" },
				{ "GRAIN.ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe4\xbf\x9d\xe7\x95\x99\xe5\xa4\xa7\xe9\x87\x8f\xe7\x9a\x84\xe7\xba\xb9\xe7\x90\x86\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "PSNR.Comment", "//\xe4\xb8\xba\xe6\x8f\x90\xe9\xab\x98psnr(\xe5\xb3\xb0\xe5\x80\xbc\xe4\xbf\xa1\xe5\x99\xaa\xe6\xaf\x94)\xe5\x81\x9a\xe4\xba\x86\xe4\xbc\x98\xe5\x8c\x96\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\n" },
				{ "PSNR.Name", "ETuneParam::PSNR" },
				{ "PSNR.ToolTip", "\xe4\xb8\xba\xe6\x8f\x90\xe9\xab\x98psnr(\xe5\xb3\xb0\xe5\x80\xbc\xe4\xbf\xa1\xe5\x99\xaa\xe6\xaf\x94)\xe5\x81\x9a\xe4\xba\x86\xe4\xbc\x98\xe5\x8c\x96\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0" },
				{ "SSIM.Comment", "//\xe4\xb8\xba\xe6\x8f\x90\xe9\xab\x98ssim(\xe7\xbb\x93\xe6\x9e\x84\xe7\x9b\xb8\xe4\xbc\xbc\xe6\x8c\x87\xe6\xa0\x87)\xe5\x81\x9a\xe4\xba\x86\xe4\xbc\x98\xe5\x8c\x96\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\n" },
				{ "SSIM.Name", "ETuneParam::SSIM" },
				{ "SSIM.ToolTip", "\xe4\xb8\xba\xe6\x8f\x90\xe9\xab\x98ssim(\xe7\xbb\x93\xe6\x9e\x84\xe7\x9b\xb8\xe4\xbc\xbc\xe6\x8c\x87\xe6\xa0\x87)\xe5\x81\x9a\xe4\xba\x86\xe4\xbc\x98\xe5\x8c\x96\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0" },
				{ "STILLIMAGE.Comment", "//\xe9\x9d\x99\xe6\x80\x81\xe5\x9b\xbe\xe5\x83\x8f\xe7\xbc\x96\xe7\xa0\x81\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8\n" },
				{ "STILLIMAGE.Name", "ETuneParam::STILLIMAGE" },
				{ "STILLIMAGE.ToolTip", "\xe9\x9d\x99\xe6\x80\x81\xe5\x9b\xbe\xe5\x83\x8f\xe7\xbc\x96\xe7\xa0\x81\xe6\x97\xb6\xe4\xbd\xbf\xe7\x94\xa8" },
				{ "ToolTip", "\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96" },
				{ "ZEROLATENCY.Comment", "//\xe9\x9b\xb6\xe5\xbb\xb6\xe8\xbf\x9f\xef\xbc\x8c\xe5\x9c\xa8\xe5\xaf\xb9\xe5\xbb\xb6\xe8\xbf\x9f\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x95\x8f\xe6\x84\x9f\xe7\x9a\x84\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbd\xbf\xe7\x94\xa8\n" },
				{ "ZEROLATENCY.Name", "ETuneParam::ZEROLATENCY" },
				{ "ZEROLATENCY.ToolTip", "\xe9\x9b\xb6\xe5\xbb\xb6\xe8\xbf\x9f\xef\xbc\x8c\xe5\x9c\xa8\xe5\xaf\xb9\xe5\xbb\xb6\xe8\xbf\x9f\xe9\x9d\x9e\xe5\xb8\xb8\xe6\x95\x8f\xe6\x84\x9f\xe7\x9a\x84\xe7\x8e\xaf\xe5\xa2\x83\xe4\xb8\x8b\xe4\xbd\xbf\xe7\x94\xa8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"ETuneParam",
				"ETuneParam",
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
	static UEnum* EPresetParam_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EPresetParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EPresetParam"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPresetParam>()
	{
		return EPresetParam_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPresetParam(EPresetParam_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("EPresetParam"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_EPresetParam_Hash() { return 4125485548U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPresetParam"), 0, Get_Z_Construct_UEnum_FFmpegExtension_EPresetParam_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPresetParam::ULTRAFAST", (int64)EPresetParam::ULTRAFAST },
				{ "EPresetParam::SUPERFAST", (int64)EPresetParam::SUPERFAST },
				{ "EPresetParam::VERYFAST", (int64)EPresetParam::VERYFAST },
				{ "EPresetParam::FASTER", (int64)EPresetParam::FASTER },
				{ "EPresetParam::FAST", (int64)EPresetParam::FAST },
				{ "EPresetParam::MEDIUM", (int64)EPresetParam::MEDIUM },
				{ "EPresetParam::SLOW", (int64)EPresetParam::SLOW },
				{ "EPresetParam::SLOWER", (int64)EPresetParam::SLOWER },
				{ "EPresetParam::VERYSLOW", (int64)EPresetParam::VERYSLOW },
				{ "EPresetParam::PLACEBO", (int64)EPresetParam::PLACEBO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e\n" },
				{ "FAST.Name", "EPresetParam::FAST" },
				{ "FASTER.Name", "EPresetParam::FASTER" },
				{ "MEDIUM.Name", "EPresetParam::MEDIUM" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "PLACEBO.Name", "EPresetParam::PLACEBO" },
				{ "SLOW.Name", "EPresetParam::SLOW" },
				{ "SLOWER.Name", "EPresetParam::SLOWER" },
				{ "SUPERFAST.Name", "EPresetParam::SUPERFAST" },
				{ "ToolTip", "\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e" },
				{ "ULTRAFAST.Name", "EPresetParam::ULTRAFAST" },
				{ "VERYFAST.Name", "EPresetParam::VERYFAST" },
				{ "VERYSLOW.Name", "EPresetParam::VERYSLOW" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"EPresetParam",
				"EPresetParam",
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
	static UEnum* ECoder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ECoder, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ECoder"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ECoder>()
	{
		return ECoder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECoder(ECoder_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("ECoder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_ECoder_Hash() { return 1450988752U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECoder"), 0, Get_Z_Construct_UEnum_FFmpegExtension_ECoder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECoder::H264", (int64)ECoder::H264 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "H264.Name", "ECoder::H264" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"ECoder",
				"ECoder",
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
	static UEnum* EPixFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EPixFormat, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EPixFormat"));
		}
		return Singleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPixFormat>()
	{
		return EPixFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPixFormat(EPixFormat_StaticEnum, TEXT("/Script/FFmpegExtension"), TEXT("EPixFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_EPixFormat_Hash() { return 3851279695U; }
	UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPixFormat"), 0, Get_Z_Construct_UEnum_FFmpegExtension_EPixFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPixFormat::YUV420P", (int64)EPixFormat::YUV420P },
				{ "EPixFormat::YUYV422", (int64)EPixFormat::YUYV422 },
				{ "EPixFormat::RGB24", (int64)EPixFormat::RGB24 },
				{ "EPixFormat::BGR24", (int64)EPixFormat::BGR24 },
				{ "EPixFormat::YUV422P", (int64)EPixFormat::YUV422P },
				{ "EPixFormat::YUV444P", (int64)EPixFormat::YUV444P },
				{ "EPixFormat::YUV410P", (int64)EPixFormat::YUV410P },
				{ "EPixFormat::YUV411P", (int64)EPixFormat::YUV411P },
				{ "EPixFormat::GRAY8", (int64)EPixFormat::GRAY8 },
				{ "EPixFormat::MONOWHITE", (int64)EPixFormat::MONOWHITE },
				{ "EPixFormat::MONOBLACK", (int64)EPixFormat::MONOBLACK },
				{ "EPixFormat::PAL8", (int64)EPixFormat::PAL8 },
				{ "EPixFormat::YUVJ420P", (int64)EPixFormat::YUVJ420P },
				{ "EPixFormat::YUVJ422P", (int64)EPixFormat::YUVJ422P },
				{ "EPixFormat::YUVJ444P", (int64)EPixFormat::YUVJ444P },
				{ "EPixFormat::UYVY422", (int64)EPixFormat::UYVY422 },
				{ "EPixFormat::UYYVYY411", (int64)EPixFormat::UYYVYY411 },
				{ "EPixFormat::BGR8", (int64)EPixFormat::BGR8 },
				{ "EPixFormat::BGR4", (int64)EPixFormat::BGR4 },
				{ "EPixFormat::BGR4_BYTE", (int64)EPixFormat::BGR4_BYTE },
				{ "EPixFormat::RGB8", (int64)EPixFormat::RGB8 },
				{ "EPixFormat::RGB4", (int64)EPixFormat::RGB4 },
				{ "EPixFormat::RGB4_BYTE", (int64)EPixFormat::RGB4_BYTE },
				{ "EPixFormat::NV12", (int64)EPixFormat::NV12 },
				{ "EPixFormat::NV21", (int64)EPixFormat::NV21 },
				{ "EPixFormat::ARGB", (int64)EPixFormat::ARGB },
				{ "EPixFormat::RGBA", (int64)EPixFormat::RGBA },
				{ "EPixFormat::ABGR", (int64)EPixFormat::ABGR },
				{ "EPixFormat::BGRA", (int64)EPixFormat::BGRA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ABGR.Name", "EPixFormat::ABGR" },
				{ "ARGB.Name", "EPixFormat::ARGB" },
				{ "BGR24.Name", "EPixFormat::BGR24" },
				{ "BGR4.Name", "EPixFormat::BGR4" },
				{ "BGR4_BYTE.Name", "EPixFormat::BGR4_BYTE" },
				{ "BGR8.Name", "EPixFormat::BGR8" },
				{ "BGRA.Name", "EPixFormat::BGRA" },
				{ "BlueprintType", "true" },
				{ "GRAY8.Name", "EPixFormat::GRAY8" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "MONOBLACK.Name", "EPixFormat::MONOBLACK" },
				{ "MONOWHITE.Name", "EPixFormat::MONOWHITE" },
				{ "NV12.Name", "EPixFormat::NV12" },
				{ "NV21.Name", "EPixFormat::NV21" },
				{ "PAL8.Name", "EPixFormat::PAL8" },
				{ "RGB24.Name", "EPixFormat::RGB24" },
				{ "RGB4.Name", "EPixFormat::RGB4" },
				{ "RGB4_BYTE.Name", "EPixFormat::RGB4_BYTE" },
				{ "RGB8.Name", "EPixFormat::RGB8" },
				{ "RGBA.Name", "EPixFormat::RGBA" },
				{ "UYVY422.Name", "EPixFormat::UYVY422" },
				{ "UYYVYY411.Name", "EPixFormat::UYYVYY411" },
				{ "YUV410P.Name", "EPixFormat::YUV410P" },
				{ "YUV411P.Name", "EPixFormat::YUV411P" },
				{ "YUV420P.Name", "EPixFormat::YUV420P" },
				{ "YUV422P.Name", "EPixFormat::YUV422P" },
				{ "YUV444P.Name", "EPixFormat::YUV444P" },
				{ "YUVJ420P.Name", "EPixFormat::YUVJ420P" },
				{ "YUVJ422P.Name", "EPixFormat::YUVJ422P" },
				{ "YUVJ444P.Name", "EPixFormat::YUVJ444P" },
				{ "YUYV422.Name", "EPixFormat::YUYV422" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
				nullptr,
				"EPixFormat",
				"EPixFormat",
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
	uint32 Get_Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Hash() { return 2026893061U; }
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
				{ "Memcpy.Comment", "/**\n * \n *///\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x85\xe5\xad\x98\xe5\xa4\x8d\xe5\x88\xb6\xe7\x9a\x84\xe6\x96\xb9\xe5\xbc\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\n" },
				{ "Memcpy.DisplayName", "Memcpy" },
				{ "Memcpy.Name", "EUpdateTextureMethod::Memcpy" },
				{ "Memcpy.ToolTip", "//\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x85\xe5\xad\x98\xe5\xa4\x8d\xe5\x88\xb6\xe7\x9a\x84\xe6\x96\xb9\xe5\xbc\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7" },
				{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
				{ "RHICommand.Comment", "//\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x95\xb0\xe6\x8d\xae\xe5\x8f\x91\xe9\x80\x81\xe5\x88\xb0\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe6\x9b\xb4\xe6\x96\xb0\n" },
				{ "RHICommand.DisplayName", "RHICommand" },
				{ "RHICommand.Name", "EUpdateTextureMethod::RHICommand" },
				{ "RHICommand.ToolTip", "\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x95\xb0\xe6\x8d\xae\xe5\x8f\x91\xe9\x80\x81\xe5\x88\xb0\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe6\x9b\xb4\xe6\x96\xb0" },
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
