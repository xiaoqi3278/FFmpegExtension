// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Utilities/CusStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCusStruct() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FAudioFormat();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleRate();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ESampleFormat();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EChannelLayout();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FMediaTime();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EVideoRatio();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInfo();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusStruct_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UCusStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioFormat;
class UScriptStruct* FAudioFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioFormat, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("AudioFormat"));
	}
	return Z_Registration_Info_UScriptStruct_AudioFormat.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FAudioFormat>()
{
	return FAudioFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSameAsSrc_MetaData[];
#endif
		static void NewProp_bSameAsSrc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSameAsSrc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SampleRate_E_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_E_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleRate_E;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SampleFormat_E_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleFormat_E_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleFormat_E;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelLayout_E_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelLayout_E_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelLayout_E;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFormat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioFormat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc_MetaData[] = {
		{ "Category", "Audio|OutputFormat" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\xb9\xe9\x85\x8d\xe6\xba\x90\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\xb9\xe9\x85\x8d\xe6\xba\x90" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc_SetBit(void* Obj)
	{
		((FAudioFormat*)Obj)->bSameAsSrc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc = { "bSameAsSrc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioFormat), &Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E_MetaData[] = {
		{ "Category", "Audio|OutputFormat" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe9\x87\x87\xe6\xa0\xb7\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E = { "SampleRate_E", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioFormat, SampleRate_E), Z_Construct_UEnum_FFmpegExtension_ESampleRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E_MetaData)) }; // 909782533
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E_MetaData[] = {
		{ "Category", "Audio|OutputFormat" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe9\x87\x87\xe6\xa0\xb7\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe9\x87\x87\xe6\xa0\xb7\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E = { "SampleFormat_E", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioFormat, SampleFormat_E), Z_Construct_UEnum_FFmpegExtension_ESampleFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E_MetaData)) }; // 4095253101
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E_MetaData[] = {
		{ "Category", "Audio|OutputFormat" },
		{ "Comment", "//\xe5\xa3\xb0\xe9\x81\x93\xe5\xb8\x83\xe5\xb1\x80\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xa3\xb0\xe9\x81\x93\xe5\xb8\x83\xe5\xb1\x80" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E = { "ChannelLayout_E", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioFormat, ChannelLayout_E), Z_Construct_UEnum_FFmpegExtension_EChannelLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E_MetaData)) }; // 379946249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_bSameAsSrc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleRate_E,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_SampleFormat_E,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioFormat_Statics::NewProp_ChannelLayout_E,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"AudioFormat",
		sizeof(FAudioFormat),
		alignof(FAudioFormat),
		Z_Construct_UScriptStruct_FAudioFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioFormat.InnerSingleton, Z_Construct_UScriptStruct_FAudioFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaTime;
class UScriptStruct* FMediaTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaTime, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("MediaTime"));
	}
	return Z_Registration_Info_UScriptStruct_MediaTime.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FMediaTime>()
{
	return FMediaTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\x97\xb6\xe9\x95\xbf\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\x97\xb6\xe9\x95\xbf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Hours_MetaData[] = {
		{ "Category", "MediaTime" },
		{ "Comment", "//\xe5\xb0\x8f\xe6\x97\xb6\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb0\x8f\xe6\x97\xb6" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaTime, Hours), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Hours_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Hours_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "MediaTime" },
		{ "Comment", "//\xe5\x88\x86\xe9\x92\x9f\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\x88\x86\xe9\x92\x9f" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaTime, Minutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "MediaTime" },
		{ "Comment", "//\xe7\xa7\x92\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe7\xa7\x92" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaTime, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "MediaTime" },
		{ "Comment", "//\xe5\xb8\xa7\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaTime, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTime_Statics::NewProp_Frames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"MediaTime",
		sizeof(FMediaTime),
		alignof(FMediaTime),
		Z_Construct_UScriptStruct_FMediaTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaTime()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaTime.InnerSingleton, Z_Construct_UScriptStruct_FMediaTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaTime.InnerSingleton;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferSize;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_VideoRatio_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoRatio_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VideoRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidFirstVideoStreamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValidFirstVideoStreamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTime_s_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VideoTime_s;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTime_ms_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_VideoTime_ms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoTime_us_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_VideoTime_us;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDecodeInterval_ms_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_FrameDecodeInterval_ms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterval_ms_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameInterval_ms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterval_s_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameInterval_s;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xb8\xa7\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f(\xe8\xae\xa1\xe7\xae\x97\xe6\x96\xb9\xe5\xbc\x8f: \xe4\xb8\x80\xe5\xb8\xa7\xe6\x89\x80\xe9\x9c\x80\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f(MB) = (\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87X * \xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87Y * 4) / 1024 / 1024)\n" },
		{ "DisplayName", "MaxBufferSize(MB)" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f(\xe8\xae\xa1\xe7\xae\x97\xe6\x96\xb9\xe5\xbc\x8f: \xe4\xb8\x80\xe5\xb8\xa7\xe6\x89\x80\xe9\x9c\x80\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f(MB) = (\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87X * \xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87Y * 4) / 1024 / 1024)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97,\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe6\x80\xa7\xe8\x83\xbd\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xbe\x93\xe5\x87\xba\xe5\x88\xb0\xe6\x97\xa5\xe5\xbf\x97,\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xbd\xb1\xe5\x93\x8d\xe6\x80\xa7\xe8\x83\xbd" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bOutLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod = { "UpdateTextureMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, UpdateTextureMethod), Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData)) }; // 564595625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "/** \xe9\xa2\x84\xe6\x9c\x9f\xe5\xa4\xa7\xe5\xb0\x8f */" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\xa2\x84\xe6\x9c\x9f\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize = { "ExpectedSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, ExpectedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "/** \xe4\xbf\x9d\xe6\x8c\x81\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94 */" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe6\x8c\x81\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio = { "VideoRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoRatio), Z_Construct_UEnum_FFmpegExtension_EVideoRatio, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio_MetaData)) }; // 2577945261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe7\x8e\x87" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex = { "ValidFirstVideoStreamIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, ValidFirstVideoStreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_s_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe7\xa7\x92)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe7\xa7\x92)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_s = { "VideoTime_s", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoTime_s), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_s_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_s_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_ms_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe6\xaf\xab\xe7\xa7\x92)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe6\xaf\xab\xe7\xa7\x92)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_ms = { "VideoTime_ms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoTime_ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_ms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_us_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe5\xbe\xae\xe7\xa7\x92)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf(\xe5\xbe\xae\xe7\xa7\x92)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_us = { "VideoTime_us", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoTime_us), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_us_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_us_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameDecodeInterval_ms_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xa7\xa3\xe7\xa0\x81\xe7\xba\xbf\xe7\xa8\x8b\xe6\xaf\x8f\xe5\xb8\xa7\xe8\xa7\xa3\xe7\xa0\x81\xe5\x90\x8e\xe7\xad\x89\xe5\xbe\x85\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\xa3\xe7\xa0\x81\xe7\xba\xbf\xe7\xa8\x8b\xe6\xaf\x8f\xe5\xb8\xa7\xe8\xa7\xa3\xe7\xa0\x81\xe5\x90\x8e\xe7\xad\x89\xe5\xbe\x85\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameDecodeInterval_ms = { "FrameDecodeInterval_ms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameDecodeInterval_ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameDecodeInterval_ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameDecodeInterval_ms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xb8\xa7\xe6\xb8\xb2\xe6\x9f\x93\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4(\xe6\xaf\xab\xe7\xa7\x92)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe6\xb8\xb2\xe6\x9f\x93\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4(\xe6\xaf\xab\xe7\xa7\x92)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms = { "FrameInterval_ms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameInterval_ms), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_s_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xb8\xa7\xe6\xb8\xb2\xe6\x9f\x93\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe6\xb8\xb2\xe6\x9f\x93\xe9\x97\xb4\xe9\x9a\x94\xe6\x97\xb6\xe9\x97\xb4(\xe7\xa7\x92)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_s = { "FrameInterval_s", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameInterval_s), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_s_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_s_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xb8\xa7\xe5\xae\xbd\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe5\xae\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth = { "FrameWidth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xb8\xa7\xe9\xab\x98\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe9\xab\x98" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight = { "FrameHeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, FrameHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_LoopIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe5\xbe\xaa\xe7\x8e\xaf\xe6\xac\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xbe\xaa\xe7\x8e\xaf\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_LoopIndex = { "LoopIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, LoopIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_LoopIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_LoopIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ExpectedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_ValidFirstVideoStreamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoTime_us,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameDecodeInterval_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_ms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameInterval_s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_FrameHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_LoopIndex,
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInfo;
class UScriptStruct* FAudioInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("AudioInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInfo.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FAudioInfo>()
{
	return FAudioInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioInfo_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidFirstAudioStreamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ValidFirstAudioStreamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutChannelCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutChannelCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FAudioInfo*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInfo), &Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbe\xaa\xe7\x8e\xaf\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe5\xbe\xaa\xe7\x8e\xaf" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAudioInfo*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInfo), &Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_AudioURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_AudioURL = { "AudioURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInfo, AudioURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_AudioURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_AudioURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_ValidFirstAudioStreamIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_ValidFirstAudioStreamIndex = { "ValidFirstAudioStreamIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInfo, ValidFirstAudioStreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_ValidFirstAudioStreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_ValidFirstAudioStreamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_OutChannelCount_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\xa3\xb0\xe9\x81\x93\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\xa3\xb0\xe9\x81\x93\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_OutChannelCount = { "OutChannelCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInfo, OutChannelCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_OutChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_OutChannelCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe5\xa3\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xa3\xb0\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInfo, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "//\xe5\xb8\xa7\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "DisplayName", "MaxBufferSize(MB)" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe5\xb8\xa7\xe7\xbc\x93\xe5\x86\xb2\xe5\x8c\xba\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInfo, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_BufferSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_AudioURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_ValidFirstAudioStreamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_OutChannelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInfo_Statics::NewProp_BufferSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"AudioInfo",
		sizeof(FAudioInfo),
		alignof(FAudioInfo),
		Z_Construct_UScriptStruct_FAudioInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInfo.InnerSingleton, Z_Construct_UScriptStruct_FAudioInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UCusStruct::execVideoInfoToString)
	{
		P_GET_STRUCT(FVideoInfo,Z_Param_VideoInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCusStruct::VideoInfoToString(Z_Param_VideoInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCusStruct::execVideoTimeToString)
	{
		P_GET_STRUCT(FMediaTime,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCusStruct::VideoTimeToString(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCusStruct::execVideoDurationToTime_s)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaTime*)Z_Param__Result=UCusStruct::VideoDurationToTime_s(Z_Param_Duration,Z_Param_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCusStruct::execVideoDurationToTime_us)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FPS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaTime*)Z_Param__Result=UCusStruct::VideoDurationToTime_us(Z_Param_Duration,Z_Param_FPS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCusStruct::execTimeFormat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UCusStruct::TimeFormat(Z_Param_Num);
		P_NATIVE_END;
	}
	void UCusStruct::StaticRegisterNativesUCusStruct()
	{
		UClass* Class = UCusStruct::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimeFormat", &UCusStruct::execTimeFormat },
			{ "VideoDurationToTime_s", &UCusStruct::execVideoDurationToTime_s },
			{ "VideoDurationToTime_us", &UCusStruct::execVideoDurationToTime_us },
			{ "VideoInfoToString", &UCusStruct::execVideoInfoToString },
			{ "VideoTimeToString", &UCusStruct::execVideoTimeToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCusStruct_TimeFormat_Statics
	{
		struct CusStruct_eventTimeFormat_Parms
		{
			int32 Num;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventTimeFormat_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventTimeFormat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::NewProp_Num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Utilities" },
		{ "Comment", "//\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac\xe6\x8d\xa2(X -> 0X)\n" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac\xe6\x8d\xa2(X -> 0X)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCusStruct, nullptr, "TimeFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::CusStruct_eventTimeFormat_Parms), Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCusStruct_TimeFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCusStruct_TimeFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics
	{
		struct CusStruct_eventVideoDurationToTime_s_Parms
		{
			float Duration;
			float FPS;
			FMediaTime ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_s_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_s_Parms, FPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_s_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaTime, METADATA_PARAMS(nullptr, 0) }; // 3389766753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Utilities" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x97\xb6\xe9\x95\xbf(s)\xe8\xbd\xac\xe4\xb8\xba FTime \xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "DisplayName", "VideoDuration(s)ToTime" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x97\xb6\xe9\x95\xbf(s)\xe8\xbd\xac\xe4\xb8\xba FTime \xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCusStruct, nullptr, "VideoDurationToTime_s", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::CusStruct_eventVideoDurationToTime_s_Parms), Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics
	{
		struct CusStruct_eventVideoDurationToTime_us_Parms
		{
			int64 Duration;
			float FPS;
			FMediaTime ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Duration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FPS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_us_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_FPS = { "FPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_us_Parms, FPS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoDurationToTime_us_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaTime, METADATA_PARAMS(nullptr, 0) }; // 3389766753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_FPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Utilities" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x97\xb6\xe9\x95\xbf(us)\xe8\xbd\xac\xe4\xb8\xba FTime \xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "DisplayName", "VideoDuration(us)ToTime" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x97\xb6\xe9\x95\xbf(us)\xe8\xbd\xac\xe4\xb8\xba FTime \xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCusStruct, nullptr, "VideoDurationToTime_us", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::CusStruct_eventVideoDurationToTime_us_Parms), Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics
	{
		struct CusStruct_eventVideoInfoToString_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoInfoToString_Parms, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(nullptr, 0) }; // 819572487
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::NewProp_VideoInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Utilities" },
		{ "DisplayName", "ToString" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCusStruct, nullptr, "VideoInfoToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::CusStruct_eventVideoInfoToString_Parms), Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCusStruct_VideoInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCusStruct_VideoInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics
	{
		struct CusStruct_eventVideoTimeToString_Parms
		{
			FMediaTime Time;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoTimeToString_Parms, Time), Z_Construct_UScriptStruct_FMediaTime, METADATA_PARAMS(nullptr, 0) }; // 3389766753
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CusStruct_eventVideoTimeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Utilities" },
		{ "DisplayName", "ToString" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCusStruct, nullptr, "VideoTimeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::CusStruct_eventVideoTimeToString_Parms), Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCusStruct_VideoTimeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCusStruct_VideoTimeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCusStruct);
	UClass* Z_Construct_UClass_UCusStruct_NoRegister()
	{
		return UCusStruct::StaticClass();
	}
	struct Z_Construct_UClass_UCusStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCusStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCusStruct_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCusStruct_TimeFormat, "TimeFormat" }, // 637416534
		{ &Z_Construct_UFunction_UCusStruct_VideoDurationToTime_s, "VideoDurationToTime_s" }, // 498502386
		{ &Z_Construct_UFunction_UCusStruct_VideoDurationToTime_us, "VideoDurationToTime_us" }, // 659620156
		{ &Z_Construct_UFunction_UCusStruct_VideoInfoToString, "VideoInfoToString" }, // 284457639
		{ &Z_Construct_UFunction_UCusStruct_VideoTimeToString, "VideoTimeToString" }, // 4150548268
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCusStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/CusStruct.h" },
		{ "ModuleRelativePath", "Public/Utilities/CusStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCusStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCusStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCusStruct_Statics::ClassParams = {
		&UCusStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCusStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCusStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCusStruct()
	{
		if (!Z_Registration_Info_UClass_UCusStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCusStruct.OuterSingleton, Z_Construct_UClass_UCusStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCusStruct.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UCusStruct>()
	{
		return UCusStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCusStruct);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ScriptStructInfo[] = {
		{ FAudioFormat::StaticStruct, Z_Construct_UScriptStruct_FAudioFormat_Statics::NewStructOps, TEXT("AudioFormat"), &Z_Registration_Info_UScriptStruct_AudioFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioFormat), 3394187060U) },
		{ FMediaTime::StaticStruct, Z_Construct_UScriptStruct_FMediaTime_Statics::NewStructOps, TEXT("MediaTime"), &Z_Registration_Info_UScriptStruct_MediaTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaTime), 3389766753U) },
		{ FVideoInfo::StaticStruct, Z_Construct_UScriptStruct_FVideoInfo_Statics::NewStructOps, TEXT("VideoInfo"), &Z_Registration_Info_UScriptStruct_VideoInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVideoInfo), 819572487U) },
		{ FAudioInfo::StaticStruct, Z_Construct_UScriptStruct_FAudioInfo_Statics::NewStructOps, TEXT("AudioInfo"), &Z_Registration_Info_UScriptStruct_AudioInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInfo), 3942609396U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCusStruct, UCusStruct::StaticClass, TEXT("UCusStruct"), &Z_Registration_Info_UClass_UCusStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCusStruct), 1932316450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_2676845253(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
