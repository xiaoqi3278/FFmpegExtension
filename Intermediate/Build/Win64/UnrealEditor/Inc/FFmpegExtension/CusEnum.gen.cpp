// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/CusEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCusEnum() {}
// Cross Module References
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EVideoRatio();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EDecodeState();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleRate();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleFormat();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EChannelLayout();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVideoRatio;
	static UEnum* EVideoRatio_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVideoRatio.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVideoRatio.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EVideoRatio, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EVideoRatio"));
		}
		return Z_Registration_Info_UEnum_EVideoRatio.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EVideoRatio>()
	{
		return EVideoRatio_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enumerators[] = {
		{ "EVideoRatio::No", (int64)EVideoRatio::No },
		{ "EVideoRatio::Height", (int64)EVideoRatio::Height },
		{ "EVideoRatio::Width", (int64)EVideoRatio::Width },
		{ "EVideoRatio::Origin", (int64)EVideoRatio::Origin },
		{ "EVideoRatio::Auto", (int64)EVideoRatio::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EVideoRatio::Auto" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n *///\xe7\xbc\xa9\xe6\x94\xbe\n" },
		{ "Height.Name", "EVideoRatio::Height" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "No.Name", "EVideoRatio::No" },
		{ "Origin.Name", "EVideoRatio::Origin" },
		{ "ToolTip", "//\xe7\xbc\xa9\xe6\x94\xbe" },
		{ "Width.Name", "EVideoRatio::Width" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EVideoRatio",
		"EVideoRatio",
		Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EVideoRatio()
	{
		if (!Z_Registration_Info_UEnum_EVideoRatio.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVideoRatio.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EVideoRatio_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVideoRatio.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecodeState;
	static UEnum* EDecodeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDecodeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDecodeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EDecodeState, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EDecodeState"));
		}
		return Z_Registration_Info_UEnum_EDecodeState.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EDecodeState>()
	{
		return EDecodeState_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enumerators[] = {
		{ "EDecodeState::NotStarted", (int64)EDecodeState::NotStarted },
		{ "EDecodeState::Stopped", (int64)EDecodeState::Stopped },
		{ "EDecodeState::Decoding", (int64)EDecodeState::Decoding },
		{ "EDecodeState::Completed", (int64)EDecodeState::Completed },
		{ "EDecodeState::Seeking", (int64)EDecodeState::Seeking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xa7\xa3\xe7\xa0\x81\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "Completed.Name", "EDecodeState::Completed" },
		{ "Decoding.Name", "EDecodeState::Decoding" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "NotStarted.Name", "EDecodeState::NotStarted" },
		{ "Seeking.Name", "EDecodeState::Seeking" },
		{ "Stopped.Name", "EDecodeState::Stopped" },
		{ "ToolTip", "\xe8\xa7\xa3\xe7\xa0\x81\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EDecodeState",
		"EDecodeState",
		Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EDecodeState()
	{
		if (!Z_Registration_Info_UEnum_EDecodeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecodeState.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EDecodeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDecodeState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateTextureMethod;
	static UEnum* EUpdateTextureMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUpdateTextureMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUpdateTextureMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EUpdateTextureMethod"));
		}
		return Z_Registration_Info_UEnum_EUpdateTextureMethod.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EUpdateTextureMethod>()
	{
		return EUpdateTextureMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enumerators[] = {
		{ "EUpdateTextureMethod::Memcpy", (int64)EUpdateTextureMethod::Memcpy },
		{ "EUpdateTextureMethod::RHICommand", (int64)EUpdateTextureMethod::RHICommand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\xbc\x95\xe6\x93\x8e\xe5\x9b\xbe\xe5\x83\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe5\xbc\x8f\n" },
		{ "Memcpy.Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x85\xe5\xad\x98\xe5\xa4\x8d\xe5\x88\xb6\xe7\x9a\x84\xe6\x96\xb9\xe5\xbc\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\n" },
		{ "Memcpy.DisplayName", "Memcpy" },
		{ "Memcpy.Name", "EUpdateTextureMethod::Memcpy" },
		{ "Memcpy.ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\x86\x85\xe5\xad\x98\xe5\xa4\x8d\xe5\x88\xb6\xe7\x9a\x84\xe6\x96\xb9\xe5\xbc\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "RHICommand.Comment", "//\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x95\xb0\xe6\x8d\xae\xe5\x8f\x91\xe9\x80\x81\xe5\x88\xb0\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe6\x9b\xb4\xe6\x96\xb0\n" },
		{ "RHICommand.DisplayName", "RHICommand" },
		{ "RHICommand.Name", "EUpdateTextureMethod::RHICommand" },
		{ "RHICommand.ToolTip", "\xe5\xb0\x86\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x95\xb0\xe6\x8d\xae\xe5\x8f\x91\xe9\x80\x81\xe5\x88\xb0\xe6\xb8\xb2\xe6\x9f\x93\xe7\xba\xbf\xe7\xa8\x8b\xe6\x9b\xb4\xe6\x96\xb0" },
		{ "ToolTip", "\xe5\xbc\x95\xe6\x93\x8e\xe5\x9b\xbe\xe5\x83\x8f\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EUpdateTextureMethod",
		"EUpdateTextureMethod",
		Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod()
	{
		if (!Z_Registration_Info_UEnum_EUpdateTextureMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateTextureMethod.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUpdateTextureMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPixFormat;
	static UEnum* EPixFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPixFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPixFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EPixFormat, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EPixFormat"));
		}
		return Z_Registration_Info_UEnum_EPixFormat.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPixFormat>()
	{
		return EPixFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enum_MetaDataParams[] = {
		{ "ABGR.Name", "EPixFormat::ABGR" },
		{ "ARGB.Name", "EPixFormat::ARGB" },
		{ "BGR24.Name", "EPixFormat::BGR24" },
		{ "BGR4.Name", "EPixFormat::BGR4" },
		{ "BGR4_BYTE.Name", "EPixFormat::BGR4_BYTE" },
		{ "BGR8.Name", "EPixFormat::BGR8" },
		{ "BGRA.Name", "EPixFormat::BGRA" },
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f\n" },
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
		{ "ToolTip", "\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f" },
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EPixFormat",
		"EPixFormat",
		Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat()
	{
		if (!Z_Registration_Info_UEnum_EPixFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPixFormat.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EPixFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPixFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoder;
	static UEnum* ECoder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ECoder, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ECoder"));
		}
		return Z_Registration_Info_UEnum_ECoder.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ECoder>()
	{
		return ECoder_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_ECoder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enumerators[] = {
		{ "ECoder::H264", (int64)ECoder::H264 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbc\x96\xe8\xa7\xa3\xe7\xa0\x81\xe5\x99\xa8\n" },
		{ "H264.Name", "ECoder::H264" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe8\xa7\xa3\xe7\xa0\x81\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"ECoder",
		"ECoder",
		Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder()
	{
		if (!Z_Registration_Info_UEnum_ECoder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoder.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_ECoder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoder.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPresetParam;
	static UEnum* EPresetParam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPresetParam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPresetParam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EPresetParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EPresetParam"));
		}
		return Z_Registration_Info_UEnum_EPresetParam.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPresetParam>()
	{
		return EPresetParam_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EPresetParam",
		"EPresetParam",
		Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam()
	{
		if (!Z_Registration_Info_UEnum_EPresetParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPresetParam.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EPresetParam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPresetParam.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETuneParam;
	static UEnum* ETuneParam_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETuneParam.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETuneParam.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ETuneParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ETuneParam"));
		}
		return Z_Registration_Info_UEnum_ETuneParam.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ETuneParam>()
	{
		return ETuneParam_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"ETuneParam",
		"ETuneParam",
		Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam()
	{
		if (!Z_Registration_Info_UEnum_ETuneParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETuneParam.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_ETuneParam_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETuneParam.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScaleFlag;
	static UEnum* EScaleFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScaleFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScaleFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EScaleFlag, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EScaleFlag"));
		}
		return Z_Registration_Info_UEnum_EScaleFlag.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EScaleFlag>()
	{
		return EScaleFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EScaleFlag",
		"EScaleFlag",
		Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag()
	{
		if (!Z_Registration_Info_UEnum_EScaleFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScaleFlag.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EScaleFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScaleFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESampleRate;
	static UEnum* ESampleRate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESampleRate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ESampleRate, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ESampleRate"));
		}
		return Z_Registration_Info_UEnum_ESampleRate.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ESampleRate>()
	{
		return ESampleRate_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enumerators[] = {
		{ "ESampleRate::E_6000", (int64)ESampleRate::E_6000 },
		{ "ESampleRate::E_8000", (int64)ESampleRate::E_8000 },
		{ "ESampleRate::E_11025", (int64)ESampleRate::E_11025 },
		{ "ESampleRate::E_16000", (int64)ESampleRate::E_16000 },
		{ "ESampleRate::E_22050", (int64)ESampleRate::E_22050 },
		{ "ESampleRate::E_32000", (int64)ESampleRate::E_32000 },
		{ "ESampleRate::E_44100", (int64)ESampleRate::E_44100 },
		{ "ESampleRate::E_48000", (int64)ESampleRate::E_48000 },
		{ "ESampleRate::E_64000", (int64)ESampleRate::E_64000 },
		{ "ESampleRate::E_88200", (int64)ESampleRate::E_88200 },
		{ "ESampleRate::E_96000", (int64)ESampleRate::E_96000 },
		{ "ESampleRate::E_176400", (int64)ESampleRate::E_176400 },
		{ "ESampleRate::E_192000", (int64)ESampleRate::E_192000 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87\n" },
		{ "E_11025.DisplayName", "11025 HZ" },
		{ "E_11025.Name", "ESampleRate::E_11025" },
		{ "E_16000.DisplayName", "16000 HZ" },
		{ "E_16000.Name", "ESampleRate::E_16000" },
		{ "E_176400.DisplayName", "176400 HZ" },
		{ "E_176400.Name", "ESampleRate::E_176400" },
		{ "E_192000.DisplayName", "192000 HZ" },
		{ "E_192000.Name", "ESampleRate::E_192000" },
		{ "E_22050.DisplayName", "22050 HZ" },
		{ "E_22050.Name", "ESampleRate::E_22050" },
		{ "E_32000.DisplayName", "32000 HZ" },
		{ "E_32000.Name", "ESampleRate::E_32000" },
		{ "E_44100.DisplayName", "44100 HZ" },
		{ "E_44100.Name", "ESampleRate::E_44100" },
		{ "E_48000.DisplayName", "48000 HZ" },
		{ "E_48000.Name", "ESampleRate::E_48000" },
		{ "E_6000.DisplayName", "6000 HZ" },
		{ "E_6000.Name", "ESampleRate::E_6000" },
		{ "E_64000.DisplayName", "64000 HZ" },
		{ "E_64000.Name", "ESampleRate::E_64000" },
		{ "E_8000.DisplayName", "8000 HZ" },
		{ "E_8000.Name", "ESampleRate::E_8000" },
		{ "E_88200.DisplayName", "88200 HZ" },
		{ "E_88200.Name", "ESampleRate::E_88200" },
		{ "E_96000.DisplayName", "96000 HZ" },
		{ "E_96000.Name", "ESampleRate::E_96000" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "ToolTip", "\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"ESampleRate",
		"ESampleRate",
		Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleRate()
	{
		if (!Z_Registration_Info_UEnum_ESampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESampleRate.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_ESampleRate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESampleRate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESampleFormat;
	static UEnum* ESampleFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESampleFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESampleFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_ESampleFormat, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ESampleFormat"));
		}
		return Z_Registration_Info_UEnum_ESampleFormat.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ESampleFormat>()
	{
		return ESampleFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enumerators[] = {
		{ "ESampleFormat::E_SAMPLE_FMT_U8", (int64)ESampleFormat::E_SAMPLE_FMT_U8 },
		{ "ESampleFormat::E_SAMPLE_FMT_S16", (int64)ESampleFormat::E_SAMPLE_FMT_S16 },
		{ "ESampleFormat::E_SAMPLE_FMT_S32", (int64)ESampleFormat::E_SAMPLE_FMT_S32 },
		{ "ESampleFormat::E_SAMPLE_FMT_FLT", (int64)ESampleFormat::E_SAMPLE_FMT_FLT },
		{ "ESampleFormat::E_SAMPLE_FMT_DBL", (int64)ESampleFormat::E_SAMPLE_FMT_DBL },
		{ "ESampleFormat::E_SAMPLE_FMT_U8P", (int64)ESampleFormat::E_SAMPLE_FMT_U8P },
		{ "ESampleFormat::E_SAMPLE_FMT_S16P", (int64)ESampleFormat::E_SAMPLE_FMT_S16P },
		{ "ESampleFormat::E_SAMPLE_FMT_S32P", (int64)ESampleFormat::E_SAMPLE_FMT_S32P },
		{ "ESampleFormat::E_SAMPLE_FMT_FLTP", (int64)ESampleFormat::E_SAMPLE_FMT_FLTP },
		{ "ESampleFormat::E_SAMPLE_FMT_DBLP", (int64)ESampleFormat::E_SAMPLE_FMT_DBLP },
		{ "ESampleFormat::E_SAMPLE_FMT_S64", (int64)ESampleFormat::E_SAMPLE_FMT_S64 },
		{ "ESampleFormat::E_SAMPLE_FMT_S64P", (int64)ESampleFormat::E_SAMPLE_FMT_S64P },
		{ "ESampleFormat::E_SAMPLE_FMT_NB", (int64)ESampleFormat::E_SAMPLE_FMT_NB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x87\x87\xe6\xa0\xb7\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "E_SAMPLE_FMT_DBL.Comment", "///< float\n" },
		{ "E_SAMPLE_FMT_DBL.Name", "ESampleFormat::E_SAMPLE_FMT_DBL" },
		{ "E_SAMPLE_FMT_DBL.ToolTip", "< float" },
		{ "E_SAMPLE_FMT_DBLP.Comment", "///< float, planar\n" },
		{ "E_SAMPLE_FMT_DBLP.Name", "ESampleFormat::E_SAMPLE_FMT_DBLP" },
		{ "E_SAMPLE_FMT_DBLP.ToolTip", "< float, planar" },
		{ "E_SAMPLE_FMT_FLT.Comment", "///< signed 32 bits\n" },
		{ "E_SAMPLE_FMT_FLT.Name", "ESampleFormat::E_SAMPLE_FMT_FLT" },
		{ "E_SAMPLE_FMT_FLT.ToolTip", "< signed 32 bits" },
		{ "E_SAMPLE_FMT_FLTP.Comment", "///< signed 32 bits, planar\n" },
		{ "E_SAMPLE_FMT_FLTP.Name", "ESampleFormat::E_SAMPLE_FMT_FLTP" },
		{ "E_SAMPLE_FMT_FLTP.ToolTip", "< signed 32 bits, planar" },
		{ "E_SAMPLE_FMT_NB.Comment", "///< signed 64 bits, planar\n" },
		{ "E_SAMPLE_FMT_NB.Name", "ESampleFormat::E_SAMPLE_FMT_NB" },
		{ "E_SAMPLE_FMT_NB.ToolTip", "< signed 64 bits, planar" },
		{ "E_SAMPLE_FMT_S16.Comment", "///< unsigned 8 bits\n" },
		{ "E_SAMPLE_FMT_S16.Name", "ESampleFormat::E_SAMPLE_FMT_S16" },
		{ "E_SAMPLE_FMT_S16.ToolTip", "< unsigned 8 bits" },
		{ "E_SAMPLE_FMT_S16P.Comment", "///< unsigned 8 bits, planar\n" },
		{ "E_SAMPLE_FMT_S16P.Name", "ESampleFormat::E_SAMPLE_FMT_S16P" },
		{ "E_SAMPLE_FMT_S16P.ToolTip", "< unsigned 8 bits, planar" },
		{ "E_SAMPLE_FMT_S32.Comment", "///< signed 16 bits\n" },
		{ "E_SAMPLE_FMT_S32.Name", "ESampleFormat::E_SAMPLE_FMT_S32" },
		{ "E_SAMPLE_FMT_S32.ToolTip", "< signed 16 bits" },
		{ "E_SAMPLE_FMT_S32P.Comment", "///< signed 16 bits, planar\n" },
		{ "E_SAMPLE_FMT_S32P.Name", "ESampleFormat::E_SAMPLE_FMT_S32P" },
		{ "E_SAMPLE_FMT_S32P.ToolTip", "< signed 16 bits, planar" },
		{ "E_SAMPLE_FMT_S64.Comment", "///< double, planar\n" },
		{ "E_SAMPLE_FMT_S64.Name", "ESampleFormat::E_SAMPLE_FMT_S64" },
		{ "E_SAMPLE_FMT_S64.ToolTip", "< double, planar" },
		{ "E_SAMPLE_FMT_S64P.Comment", "///< signed 64 bits\n" },
		{ "E_SAMPLE_FMT_S64P.Name", "ESampleFormat::E_SAMPLE_FMT_S64P" },
		{ "E_SAMPLE_FMT_S64P.ToolTip", "< signed 64 bits" },
		{ "E_SAMPLE_FMT_U8.Name", "ESampleFormat::E_SAMPLE_FMT_U8" },
		{ "E_SAMPLE_FMT_U8P.Comment", "///< double\n" },
		{ "E_SAMPLE_FMT_U8P.Name", "ESampleFormat::E_SAMPLE_FMT_U8P" },
		{ "E_SAMPLE_FMT_U8P.ToolTip", "< double" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "ToolTip", "\xe9\x87\x87\xe6\xa0\xb7\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"ESampleFormat",
		"ESampleFormat",
		Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleFormat()
	{
		if (!Z_Registration_Info_UEnum_ESampleFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESampleFormat.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_ESampleFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESampleFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelLayout;
	static UEnum* EChannelLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChannelLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChannelLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EChannelLayout, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EChannelLayout"));
		}
		return Z_Registration_Info_UEnum_EChannelLayout.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EChannelLayout>()
	{
		return EChannelLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enumerators[] = {
		{ "EChannelLayout::E_CH_LAYOUT_MONO", (int64)EChannelLayout::E_CH_LAYOUT_MONO },
		{ "EChannelLayout::E_CH_LAYOUT_STEREO", (int64)EChannelLayout::E_CH_LAYOUT_STEREO },
		{ "EChannelLayout::E_CH_LAYOUT_2POINT1", (int64)EChannelLayout::E_CH_LAYOUT_2POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_2_1", (int64)EChannelLayout::E_CH_LAYOUT_2_1 },
		{ "EChannelLayout::E_CH_LAYOUT_SURROUND", (int64)EChannelLayout::E_CH_LAYOUT_SURROUND },
		{ "EChannelLayout::E_CH_LAYOUT_3POINT1", (int64)EChannelLayout::E_CH_LAYOUT_3POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_4POINT0", (int64)EChannelLayout::E_CH_LAYOUT_4POINT0 },
		{ "EChannelLayout::E_CH_LAYOUT_4POINT1", (int64)EChannelLayout::E_CH_LAYOUT_4POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_2_2", (int64)EChannelLayout::E_CH_LAYOUT_2_2 },
		{ "EChannelLayout::E_CH_LAYOUT_QUAD", (int64)EChannelLayout::E_CH_LAYOUT_QUAD },
		{ "EChannelLayout::E_CH_LAYOUT_5POINT0", (int64)EChannelLayout::E_CH_LAYOUT_5POINT0 },
		{ "EChannelLayout::E_CH_LAYOUT_5POINT1", (int64)EChannelLayout::E_CH_LAYOUT_5POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_5POINT0_BACK", (int64)EChannelLayout::E_CH_LAYOUT_5POINT0_BACK },
		{ "EChannelLayout::E_CH_LAYOUT_5POINT1_BACK", (int64)EChannelLayout::E_CH_LAYOUT_5POINT1_BACK },
		{ "EChannelLayout::E_CH_LAYOUT_6POINT0", (int64)EChannelLayout::E_CH_LAYOUT_6POINT0 },
		{ "EChannelLayout::E_CH_LAYOUT_6POINT0_FRONT", (int64)EChannelLayout::E_CH_LAYOUT_6POINT0_FRONT },
		{ "EChannelLayout::E_CH_LAYOUT_HEXAGONAL", (int64)EChannelLayout::E_CH_LAYOUT_HEXAGONAL },
		{ "EChannelLayout::E_CH_LAYOUT_6POINT1", (int64)EChannelLayout::E_CH_LAYOUT_6POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_6POINT1_BACK", (int64)EChannelLayout::E_CH_LAYOUT_6POINT1_BACK },
		{ "EChannelLayout::E_CH_LAYOUT_6POINT1_FRONT", (int64)EChannelLayout::E_CH_LAYOUT_6POINT1_FRONT },
		{ "EChannelLayout::E_CH_LAYOUT_7POINT0", (int64)EChannelLayout::E_CH_LAYOUT_7POINT0 },
		{ "EChannelLayout::E_CH_LAYOUT_7POINT0_FRONT", (int64)EChannelLayout::E_CH_LAYOUT_7POINT0_FRONT },
		{ "EChannelLayout::E_CH_LAYOUT_7POINT1", (int64)EChannelLayout::E_CH_LAYOUT_7POINT1 },
		{ "EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE", (int64)EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE },
		{ "EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE_BACK", (int64)EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE_BACK },
		{ "EChannelLayout::E_CH_LAYOUT_OCTAGONAL", (int64)EChannelLayout::E_CH_LAYOUT_OCTAGONAL },
		{ "EChannelLayout::E_CH_LAYOUT_HEXADECAGONAL", (int64)EChannelLayout::E_CH_LAYOUT_HEXADECAGONAL },
		{ "EChannelLayout::E_CH_LAYOUT_STEREO_DOWNMIX", (int64)EChannelLayout::E_CH_LAYOUT_STEREO_DOWNMIX },
		{ "EChannelLayout::E_CH_LAYOUT_22POINT2", (int64)EChannelLayout::E_CH_LAYOUT_22POINT2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\xa3\xb0\xe9\x81\x93\xe5\xb8\x83\xe5\xb1\x80\n" },
		{ "E_CH_LAYOUT_22POINT2.DisplayName", "22.2" },
		{ "E_CH_LAYOUT_22POINT2.Name", "EChannelLayout::E_CH_LAYOUT_22POINT2" },
		{ "E_CH_LAYOUT_2_1.DisplayName", "3.0" },
		{ "E_CH_LAYOUT_2_1.Name", "EChannelLayout::E_CH_LAYOUT_2_1" },
		{ "E_CH_LAYOUT_2_2.DisplayName", "3.1" },
		{ "E_CH_LAYOUT_2_2.Name", "EChannelLayout::E_CH_LAYOUT_2_2" },
		{ "E_CH_LAYOUT_2POINT1.DisplayName", "2.1" },
		{ "E_CH_LAYOUT_2POINT1.Name", "EChannelLayout::E_CH_LAYOUT_2POINT1" },
		{ "E_CH_LAYOUT_3POINT1.DisplayName", "4.0" },
		{ "E_CH_LAYOUT_3POINT1.Name", "EChannelLayout::E_CH_LAYOUT_3POINT1" },
		{ "E_CH_LAYOUT_4POINT0.DisplayName", "quad" },
		{ "E_CH_LAYOUT_4POINT0.Name", "EChannelLayout::E_CH_LAYOUT_4POINT0" },
		{ "E_CH_LAYOUT_4POINT1.DisplayName", "quad(side)" },
		{ "E_CH_LAYOUT_4POINT1.Name", "EChannelLayout::E_CH_LAYOUT_4POINT1" },
		{ "E_CH_LAYOUT_5POINT0.DisplayName", "5.0(side)" },
		{ "E_CH_LAYOUT_5POINT0.Name", "EChannelLayout::E_CH_LAYOUT_5POINT0" },
		{ "E_CH_LAYOUT_5POINT0_BACK.DisplayName", "5.1" },
		{ "E_CH_LAYOUT_5POINT0_BACK.Name", "EChannelLayout::E_CH_LAYOUT_5POINT0_BACK" },
		{ "E_CH_LAYOUT_5POINT1.DisplayName", "4.1" },
		{ "E_CH_LAYOUT_5POINT1.Name", "EChannelLayout::E_CH_LAYOUT_5POINT1" },
		{ "E_CH_LAYOUT_5POINT1_BACK.DisplayName", "5.1(side)" },
		{ "E_CH_LAYOUT_5POINT1_BACK.Name", "EChannelLayout::E_CH_LAYOUT_5POINT1_BACK" },
		{ "E_CH_LAYOUT_6POINT0.DisplayName", "6.0" },
		{ "E_CH_LAYOUT_6POINT0.Name", "EChannelLayout::E_CH_LAYOUT_6POINT0" },
		{ "E_CH_LAYOUT_6POINT0_FRONT.DisplayName", "6.0(front)" },
		{ "E_CH_LAYOUT_6POINT0_FRONT.Name", "EChannelLayout::E_CH_LAYOUT_6POINT0_FRONT" },
		{ "E_CH_LAYOUT_6POINT1.DisplayName", "6.1" },
		{ "E_CH_LAYOUT_6POINT1.Name", "EChannelLayout::E_CH_LAYOUT_6POINT1" },
		{ "E_CH_LAYOUT_6POINT1_BACK.DisplayName", "6.1(back)" },
		{ "E_CH_LAYOUT_6POINT1_BACK.Name", "EChannelLayout::E_CH_LAYOUT_6POINT1_BACK" },
		{ "E_CH_LAYOUT_6POINT1_FRONT.DisplayName", "6.1(front)" },
		{ "E_CH_LAYOUT_6POINT1_FRONT.Name", "EChannelLayout::E_CH_LAYOUT_6POINT1_FRONT" },
		{ "E_CH_LAYOUT_7POINT0.DisplayName", "7.0" },
		{ "E_CH_LAYOUT_7POINT0.Name", "EChannelLayout::E_CH_LAYOUT_7POINT0" },
		{ "E_CH_LAYOUT_7POINT0_FRONT.DisplayName", "7.0(front)" },
		{ "E_CH_LAYOUT_7POINT0_FRONT.Name", "EChannelLayout::E_CH_LAYOUT_7POINT0_FRONT" },
		{ "E_CH_LAYOUT_7POINT1.DisplayName", "7.1" },
		{ "E_CH_LAYOUT_7POINT1.Name", "EChannelLayout::E_CH_LAYOUT_7POINT1" },
		{ "E_CH_LAYOUT_7POINT1_WIDE.DisplayName", "7.1(wide)" },
		{ "E_CH_LAYOUT_7POINT1_WIDE.Name", "EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE" },
		{ "E_CH_LAYOUT_7POINT1_WIDE_BACK.DisplayName", "7.1(wide-side)" },
		{ "E_CH_LAYOUT_7POINT1_WIDE_BACK.Name", "EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE_BACK" },
		{ "E_CH_LAYOUT_HEXADECAGONAL.DisplayName", "hexadecagonal" },
		{ "E_CH_LAYOUT_HEXADECAGONAL.Name", "EChannelLayout::E_CH_LAYOUT_HEXADECAGONAL" },
		{ "E_CH_LAYOUT_HEXAGONAL.DisplayName", "hexagonal" },
		{ "E_CH_LAYOUT_HEXAGONAL.Name", "EChannelLayout::E_CH_LAYOUT_HEXAGONAL" },
		{ "E_CH_LAYOUT_MONO.DisplayName", "mono" },
		{ "E_CH_LAYOUT_MONO.Name", "EChannelLayout::E_CH_LAYOUT_MONO" },
		{ "E_CH_LAYOUT_OCTAGONAL.DisplayName", "octagonal" },
		{ "E_CH_LAYOUT_OCTAGONAL.Name", "EChannelLayout::E_CH_LAYOUT_OCTAGONAL" },
		{ "E_CH_LAYOUT_QUAD.DisplayName", "5.0" },
		{ "E_CH_LAYOUT_QUAD.Name", "EChannelLayout::E_CH_LAYOUT_QUAD" },
		{ "E_CH_LAYOUT_STEREO.DisplayName", "stereo" },
		{ "E_CH_LAYOUT_STEREO.Name", "EChannelLayout::E_CH_LAYOUT_STEREO" },
		{ "E_CH_LAYOUT_STEREO_DOWNMIX.DisplayName", "downmix" },
		{ "E_CH_LAYOUT_STEREO_DOWNMIX.Name", "EChannelLayout::E_CH_LAYOUT_STEREO_DOWNMIX" },
		{ "E_CH_LAYOUT_SURROUND.DisplayName", "3.0(back)" },
		{ "E_CH_LAYOUT_SURROUND.Name", "EChannelLayout::E_CH_LAYOUT_SURROUND" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
		{ "ToolTip", "\xe5\xa3\xb0\xe9\x81\x93\xe5\xb8\x83\xe5\xb1\x80" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EChannelLayout",
		"EChannelLayout",
		Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EChannelLayout()
	{
		if (!Z_Registration_Info_UEnum_EChannelLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelLayout.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EChannelLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChannelLayout.InnerSingleton;
	}
	void UCusEnum::StaticRegisterNativesUCusEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCusEnum);
	UClass* Z_Construct_UClass_UCusEnum_NoRegister()
	{
		return UCusEnum::StaticClass();
	}
	struct Z_Construct_UClass_UCusEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCusEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCusEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/CusEnum.h" },
		{ "ModuleRelativePath", "Public/Utilities/CusEnum.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCusEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCusEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCusEnum_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UCusEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCusEnum.OuterSingleton, Z_Construct_UClass_UCusEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCusEnum.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UCusEnum>()
	{
		return UCusEnum::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCusEnum);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::EnumInfo[] = {
		{ EVideoRatio_StaticEnum, TEXT("EVideoRatio"), &Z_Registration_Info_UEnum_EVideoRatio, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2577945261U) },
		{ EDecodeState_StaticEnum, TEXT("EDecodeState"), &Z_Registration_Info_UEnum_EDecodeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3312309533U) },
		{ EUpdateTextureMethod_StaticEnum, TEXT("EUpdateTextureMethod"), &Z_Registration_Info_UEnum_EUpdateTextureMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 564595625U) },
		{ EPixFormat_StaticEnum, TEXT("EPixFormat"), &Z_Registration_Info_UEnum_EPixFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1340458859U) },
		{ ECoder_StaticEnum, TEXT("ECoder"), &Z_Registration_Info_UEnum_ECoder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1648613404U) },
		{ EPresetParam_StaticEnum, TEXT("EPresetParam"), &Z_Registration_Info_UEnum_EPresetParam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2694303097U) },
		{ ETuneParam_StaticEnum, TEXT("ETuneParam"), &Z_Registration_Info_UEnum_ETuneParam, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3375290893U) },
		{ EScaleFlag_StaticEnum, TEXT("EScaleFlag"), &Z_Registration_Info_UEnum_EScaleFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3607364147U) },
		{ ESampleRate_StaticEnum, TEXT("ESampleRate"), &Z_Registration_Info_UEnum_ESampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 909782533U) },
		{ ESampleFormat_StaticEnum, TEXT("ESampleFormat"), &Z_Registration_Info_UEnum_ESampleFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4095253101U) },
		{ EChannelLayout_StaticEnum, TEXT("EChannelLayout"), &Z_Registration_Info_UEnum_EChannelLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 379946249U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCusEnum, UCusEnum::StaticClass, TEXT("UCusEnum"), &Z_Registration_Info_UClass_UCusEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCusEnum), 2459801160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_2672303209(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
