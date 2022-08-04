// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/ScreenCapture/ScreenCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenCapture() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FEncodeParam();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FScreenCapInfo();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UScreenCapture_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UScreenCapture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodeParam;
class UScriptStruct* FEncodeParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodeParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodeParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodeParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EncodeParam"));
	}
	return Z_Registration_Info_UScriptStruct_EncodeParam.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FEncodeParam>()
{
	return FEncodeParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodeParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BitRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GopSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GopSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBFrames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Coder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Coder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreadCounts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThreadCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QMin_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PresetParam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetParam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PresetParam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TuneParam_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TuneParam_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TuneParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodeParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\xaf\x94\xe7\x89\xb9\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe7\x89\xb9\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate = { "BitRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, BitRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe4\xb8\xa4\xe4\xb8\xaaI\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\xb8\xa7\xe6\x95\xb0\xe7\x9b\xae\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe4\xb8\xa4\xe4\xb8\xaaI\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\xb8\xa7\xe6\x95\xb0\xe7\x9b\xae" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize = { "GopSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, GopSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\x85\xb3\xe9\x94\xae\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x97\xb4\xe9\x9a\x94\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x94\xae\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x97\xb4\xe9\x9a\x94" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin = { "KeyMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, KeyMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\xa4\xe4\xb8\xaa\xe9\x9d\x9e""B\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\x9a\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84""B\xe5\xb8\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\xa4\xe4\xb8\xaa\xe9\x9d\x9e""B\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\x9a\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84""B\xe5\xb8\xa7\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames = { "MaxBFrames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, MaxBFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\x83\x8f\xe7\xb4\xa0\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x83\x8f\xe7\xb4\xa0\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat = { "PixFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, PixFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData)) }; // 1226560476
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\xbc\x96\xe7\xa0\x81\xe5\x99\xa8\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe7\xa0\x81\xe5\x99\xa8" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder = { "Coder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, Coder), Z_Construct_UEnum_FFmpegExtension_ECoder, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData)) }; // 1592924205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbc\x96\xe7\xa0\x81\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbc\x96\xe7\xa0\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts = { "ThreadCounts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, ThreadCounts), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xb0\x8f\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin = { "QMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, QMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax = { "QMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, QMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam = { "PresetParam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, PresetParam), Z_Construct_UEnum_FFmpegExtension_EPresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData)) }; // 2694303097
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam = { "TuneParam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, TuneParam), Z_Construct_UEnum_FFmpegExtension_ETuneParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData)) }; // 3375290893
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodeParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodeParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"EncodeParam",
		sizeof(FEncodeParam),
		alignof(FEncodeParam),
		Z_Construct_UScriptStruct_FEncodeParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncodeParam()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodeParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodeParam.InnerSingleton, Z_Construct_UScriptStruct_FEncodeParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodeParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenCapInfo;
class UScriptStruct* FScreenCapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenCapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenCapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenCapInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ScreenCapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenCapInfo.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FScreenCapInfo>()
{
	return FScreenCapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenCapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCapture_MetaData[];
#endif
		static void NewProp_bAutoCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapHeight;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapMethod_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CapMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeParam_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EncodeParam;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutPixFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPixFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutPixFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleFlag_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFlag_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutFormatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFormatName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapStreamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapStreamIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenCapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_SetBit(void* Obj)
	{
		((FScreenCapInfo*)Obj)->bAutoCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture = { "bAutoCapture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScreenCapInfo), &Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth = { "CapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight = { "CapHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, PixelFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData)) }; // 1226560476
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb8\xa7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb8\xa7\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS = { "CapFPS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\x85\xa8\xe5\xb1\x8f\xef\xbc\x9a""desktop, \xe6\x8d\x95\xe8\x8e\xb7\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x9atitle=\xe7\xaa\x97\xe5\x8f\xa3\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\x85\xa8\xe5\xb1\x8f\xef\xbc\x9a""desktop, \xe6\x8d\x95\xe8\x8e\xb7\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x9atitle=\xe7\xaa\x97\xe5\x8f\xa3\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod = { "CapMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\xbc\x96\xe7\xa0\x81\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\xbc\x96\xe7\xa0\x81\xe9\x85\x8d\xe7\xbd\xae" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam = { "EncodeParam", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, EncodeParam), Z_Construct_UScriptStruct_FEncodeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData)) }; // 1529580577
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat = { "OutPixFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, OutPixFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData)) }; // 1226560476
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95 DEFAULT == SWS_FAST_BILINEAR\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95 DEFAULT == SWS_FAST_BILINEAR" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag = { "ScaleFlag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, ScaleFlag), Z_Construct_UEnum_FFmpegExtension_EScaleFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData)) }; // 3607364147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName = { "OutFormatName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, OutFormatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FScreenCapInfo*)Obj)->bOutLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScreenCapInfo), &Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex = { "CapStreamIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapStreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenCapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"ScreenCapInfo",
		sizeof(FScreenCapInfo),
		alignof(FScreenCapInfo),
		Z_Construct_UScriptStruct_FScreenCapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenCapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenCapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenCapInfo.InnerSingleton, Z_Construct_UScriptStruct_FScreenCapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenCapInfo.InnerSingleton;
	}
	void UScreenCapture::StaticRegisterNativesUScreenCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenCapture);
	UClass* Z_Construct_UClass_UScreenCapture_NoRegister()
	{
		return UScreenCapture::StaticClass();
	}
	struct Z_Construct_UClass_UScreenCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenCapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenCapInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScreenCapture/ScreenCapture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo = { "ScreenCapInfo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenCapture, ScreenCapInfo), Z_Construct_UScriptStruct_FScreenCapInfo, METADATA_PARAMS(Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData)) }; // 3321534101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenCapture_Statics::ClassParams = {
		&UScreenCapture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScreenCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenCapture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenCapture()
	{
		if (!Z_Registration_Info_UClass_UScreenCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenCapture.OuterSingleton, Z_Construct_UClass_UScreenCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScreenCapture.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UScreenCapture>()
	{
		return UScreenCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenCapture);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ScriptStructInfo[] = {
		{ FEncodeParam::StaticStruct, Z_Construct_UScriptStruct_FEncodeParam_Statics::NewStructOps, TEXT("EncodeParam"), &Z_Registration_Info_UScriptStruct_EncodeParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodeParam), 1529580577U) },
		{ FScreenCapInfo::StaticStruct, Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewStructOps, TEXT("ScreenCapInfo"), &Z_Registration_Info_UScriptStruct_ScreenCapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenCapInfo), 3321534101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScreenCapture, UScreenCapture::StaticClass, TEXT("UScreenCapture"), &Z_Registration_Info_UClass_UScreenCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenCapture), 1285473336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_4114055206(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_ScreenCapture_ScreenCapture_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
