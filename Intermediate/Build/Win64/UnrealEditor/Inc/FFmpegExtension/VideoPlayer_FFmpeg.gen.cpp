// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Video/VideoPlayer_FFmpeg.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoPlayer_FFmpeg() {}
// Cross Module References
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg();
	UMG_API UClass* Z_Construct_UClass_UImage();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeepVideoRatio;
	static UEnum* EKeepVideoRatio_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKeepVideoRatio.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKeepVideoRatio.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EKeepVideoRatio"));
		}
		return Z_Registration_Info_UEnum_EKeepVideoRatio.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EKeepVideoRatio>()
	{
		return EKeepVideoRatio_StaticEnum();
	}
	struct Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enumerators[] = {
		{ "EKeepVideoRatio::No", (int64)EKeepVideoRatio::No },
		{ "EKeepVideoRatio::Height", (int64)EKeepVideoRatio::Height },
		{ "EKeepVideoRatio::Width", (int64)EKeepVideoRatio::Width },
		{ "EKeepVideoRatio::Origin", (int64)EKeepVideoRatio::Origin },
		{ "EKeepVideoRatio::Auto", (int64)EKeepVideoRatio::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EKeepVideoRatio::Auto" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n *///\xe7\xbc\xa9\xe6\x94\xbe\n" },
		{ "Height.Name", "EKeepVideoRatio::Height" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "No.Name", "EKeepVideoRatio::No" },
		{ "Origin.Name", "EKeepVideoRatio::Origin" },
		{ "ToolTip", "//\xe7\xbc\xa9\xe6\x94\xbe" },
		{ "Width.Name", "EKeepVideoRatio::Width" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		"EKeepVideoRatio",
		"EKeepVideoRatio",
		Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio()
	{
		if (!Z_Registration_Info_UEnum_EKeepVideoRatio.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeepVideoRatio.InnerSingleton, Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKeepVideoRatio.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VideoInfo;
class UScriptStruct* FVideoInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VideoInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VideoInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("VideoInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VideoInfo.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FVideoInfo>()
{
	return FVideoInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVideoInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateTextureMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTextureMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateTextureMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepVideoRatio_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepVideoRatio_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepVideoRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidFirstVideoStreamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValidFirstVideoStreamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTotalTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoTotalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterval_ms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameInterval_ms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97,\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe6\x80\xa7\xe8\x83\xbd\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97,\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe6\x80\xa7\xe8\x83\xbd" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bOutLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod = { "UpdateTextureMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, UpdateTextureMethod), Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData)) }; // 3582888379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "/** \xe9\xa2\x84\xe6\x9c\x9f\xe5\xa4\xa7\xe5\xb0\x8f */" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe9\xa2\x84\xe6\x9c\x9f\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize = { "ExpectedSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, ExpectedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "/** \xe4\xbf\x9d\xe6\x8c\x81\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe6\x8c\x81\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio = { "KeepVideoRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, KeepVideoRatio), Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio_MetaData)) }; // 1060943527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex = { "ValidFirstVideoStreamIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, ValidFirstVideoStreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTotalTime_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTotalTime = { "VideoTotalTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoTotalTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTotalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTotalTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe5\xb8\xa7\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms = { "FrameInterval_ms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameInterval_ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe5\xb8\xa7\xe5\xae\xbd\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe5\xae\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe5\xb8\xa7\xe9\xab\x98\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe9\xab\x98" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_KeepVideoRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTotalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"VideoInfo",
		sizeof(FVideoInfo),
		alignof(FVideoInfo),
		Z_Construct_UScriptStruct_FVideoInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VideoInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VideoInfo.InnerSingleton, Z_Construct_UScriptStruct_FVideoInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VideoInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics
	{
		struct _Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms
		{
			FVideoInfo VideoInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(nullptr, 0) }; // 767611938
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::NewProp_VideoInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnFindVideoSuccessfully__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::_Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms), Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnVideoPlayBegin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnVideoPlayEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics
	{
		struct _Script_FFmpegExtension_eventOnVideoError_Parms
		{
			FString ErrorMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnVideoError_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnVideoError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::_Script_FFmpegExtension_eventOnVideoError_Parms), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execSetVideoKeepRatio)
	{
		P_GET_ENUM(EKeepVideoRatio,Z_Param_KeepVideoRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVideoKeepRatio(EKeepVideoRatio(Z_Param_KeepVideoRatio));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execOpenVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execCloseVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseVideo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execUpdateFrameTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFrameTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execVideoBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VideoBeginPlay();
		P_NATIVE_END;
	}
	void UVideoPlayer_FFmpeg::StaticRegisterNativesUVideoPlayer_FFmpeg()
	{
		UClass* Class = UVideoPlayer_FFmpeg::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseVideo", &UVideoPlayer_FFmpeg::execCloseVideo },
			{ "OpenVideo", &UVideoPlayer_FFmpeg::execOpenVideo },
			{ "SetVideoKeepRatio", &UVideoPlayer_FFmpeg::execSetVideoKeepRatio },
			{ "UpdateFrameTexture", &UVideoPlayer_FFmpeg::execUpdateFrameTexture },
			{ "VideoBeginPlay", &UVideoPlayer_FFmpeg::execVideoBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "CloseVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "OpenVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics
	{
		struct VideoPlayer_FFmpeg_eventSetVideoKeepRatio_Parms
		{
			EKeepVideoRatio KeepVideoRatio;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepVideoRatio_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepVideoRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::NewProp_KeepVideoRatio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::NewProp_KeepVideoRatio = { "KeepVideoRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventSetVideoKeepRatio_Parms, KeepVideoRatio), Z_Construct_UEnum_FFmpegExtension_EKeepVideoRatio, METADATA_PARAMS(nullptr, 0) }; // 1060943527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::NewProp_KeepVideoRatio_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::NewProp_KeepVideoRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "v" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "SetVideoKeepRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::VideoPlayer_FFmpeg_eventSetVideoKeepRatio_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe6\x9b\xb4\xe6\x96\xb0\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe6\x9b\xb4\xe6\x96\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "UpdateFrameTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "VideoBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVideoPlayer_FFmpeg);
	UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg_NoRegister()
	{
		return UVideoPlayer_FFmpeg::StaticClass();
	}
	struct Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFindVideoSuccessfully_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFindVideoSuccessfully;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVideoPlayBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoPlayBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVideoPlayEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoPlayEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVideoError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo, "CloseVideo" }, // 2529965781
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo, "OpenVideo" }, // 4218961284
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoKeepRatio, "SetVideoKeepRatio" }, // 3120573564
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_UpdateFrameTexture, "UpdateFrameTexture" }, // 2952446599
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_VideoBeginPlay, "VideoBeginPlay" }, // 2977530433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Video/VideoPlayer_FFmpeg.h" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData)) }; // 767611938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\xe6\x88\x90\xe5\x8a\x9f" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully = { "OnFindVideoSuccessfully", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnFindVideoSuccessfully), Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData)) }; // 2168693903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin = { "OnVideoPlayBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoPlayBegin), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData)) }; // 1023510447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd = { "OnVideoPlayEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoPlayEnd), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData)) }; // 3675754918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError = { "OnVideoError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoError), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData)) }; // 1403423291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoPlayer_FFmpeg>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::ClassParams = {
		&UVideoPlayer_FFmpeg::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg()
	{
		if (!Z_Registration_Info_UClass_UVideoPlayer_FFmpeg.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVideoPlayer_FFmpeg.OuterSingleton, Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVideoPlayer_FFmpeg.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UVideoPlayer_FFmpeg>()
	{
		return UVideoPlayer_FFmpeg::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoPlayer_FFmpeg);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::EnumInfo[] = {
		{ EKeepVideoRatio_StaticEnum, TEXT("EKeepVideoRatio"), &Z_Registration_Info_UEnum_EKeepVideoRatio, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1060943527U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ScriptStructInfo[] = {
		{ FVideoInfo::StaticStruct, Z_Construct_UScriptStruct_FVideoInfo_Statics::NewStructOps, TEXT("VideoInfo"), &Z_Registration_Info_UScriptStruct_VideoInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVideoInfo), 767611938U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVideoPlayer_FFmpeg, UVideoPlayer_FFmpeg::StaticClass, TEXT("UVideoPlayer_FFmpeg"), &Z_Registration_Info_UClass_UVideoPlayer_FFmpeg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideoPlayer_FFmpeg), 1517897534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_3660579834(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
