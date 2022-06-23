// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/ScreenCapture/ScreenCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenCapture() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FScreenCapInfo();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPixFormat();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FEncodeParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EScaleFlag();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ECoder();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EPresetParam();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_ETuneParam();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UScreenCapture_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UScreenCapture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FScreenCapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FFMPEGEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FScreenCapInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenCapInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("ScreenCapInfo"), sizeof(FScreenCapInfo), Get_Z_Construct_UScriptStruct_FScreenCapInfo_Hash());
	}
	return Singleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FScreenCapInfo>()
{
	return FScreenCapInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScreenCapInfo(FScreenCapInfo::StaticStruct, TEXT("/Script/FFmpegExtension"), TEXT("ScreenCapInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FFmpegExtension_StaticRegisterNativesFScreenCapInfo
{
	FScriptStruct_FFmpegExtension_StaticRegisterNativesFScreenCapInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScreenCapInfo")),new UScriptStruct::TCppStructOps<FScreenCapInfo>);
	}
} ScriptStruct_FFmpegExtension_StaticRegisterNativesFScreenCapInfo;
	struct Z_Construct_UScriptStruct_FScreenCapInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCapture_MetaData[];
#endif
		static void NewProp_bAutoCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCapture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapHeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CapMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncodeParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EncodeParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutPixFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPixFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutPixFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScaleFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutFormatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFormatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapStreamIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CapStreamIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenCapInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_SetBit(void* Obj)
	{
		((FScreenCapInfo*)Obj)->bAutoCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture = { "bAutoCapture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScreenCapInfo), &Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe5\x88\x86\xe8\xbe\xa8\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth = { "CapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight = { "CapHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, PixelFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb8\xa7\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe5\xb8\xa7\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS = { "CapFPS", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe6\x8d\x95\xe8\x8e\xb7\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\x85\xa8\xe5\xb1\x8f\xef\xbc\x9a""desktop, \xe6\x8d\x95\xe8\x8e\xb7\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x9atitle=\xe7\xaa\x97\xe5\x8f\xa3\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x8d\x95\xe8\x8e\xb7\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x9a\xe6\x8d\x95\xe8\x8e\xb7\xe5\x85\xa8\xe5\xb1\x8f\xef\xbc\x9a""desktop, \xe6\x8d\x95\xe8\x8e\xb7\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x9atitle=\xe7\xaa\x97\xe5\x8f\xa3\xe5\x90\x8d" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod = { "CapMethod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\xbc\x96\xe7\xa0\x81\xe9\x85\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\xbc\x96\xe7\xa0\x81\xe9\x85\x8d\xe7\xbd\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam = { "EncodeParam", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, EncodeParam), Z_Construct_UScriptStruct_FEncodeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\x83\x8f\xe7\xb4\xa0\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat = { "OutPixFormat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, OutPixFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95 DEFAULT == SWS_FAST_BILINEAR\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x9b\xbe\xe5\x83\x8f\xe8\xbd\xac\xe6\x8d\xa2\xe7\xae\x97\xe6\xb3\x95 DEFAULT == SWS_FAST_BILINEAR" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag = { "ScaleFlag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, ScaleFlag), Z_Construct_UEnum_FFmpegExtension_EScaleFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName = { "OutFormatName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, OutFormatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "FFmepgExtension|ScreenCapture|ScreenCapInfo" },
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FScreenCapInfo*)Obj)->bOutLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScreenCapInfo), &Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|ScreenCapInfo" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex = { "CapStreamIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenCapInfo, CapStreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenCapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bAutoCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_PixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_EncodeParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutPixFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_ScaleFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_OutFormatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_bOutLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenCapInfo_Statics::NewProp_CapStreamIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenCapInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScreenCapInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScreenCapInfo"), sizeof(FScreenCapInfo), Get_Z_Construct_UScriptStruct_FScreenCapInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScreenCapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScreenCapInfo_Hash() { return 2437822375U; }
class UScriptStruct* FEncodeParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FFMPEGEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FEncodeParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodeParam, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("EncodeParam"), sizeof(FEncodeParam), Get_Z_Construct_UScriptStruct_FEncodeParam_Hash());
	}
	return Singleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FEncodeParam>()
{
	return FEncodeParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEncodeParam(FEncodeParam::StaticStruct, TEXT("/Script/FFmpegExtension"), TEXT("EncodeParam"), false, nullptr, nullptr);
static struct FScriptStruct_FFmpegExtension_StaticRegisterNativesFEncodeParam
{
	FScriptStruct_FFmpegExtension_StaticRegisterNativesFEncodeParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EncodeParam")),new UScriptStruct::TCppStructOps<FEncodeParam>);
	}
} ScriptStruct_FFmpegExtension_StaticRegisterNativesFEncodeParam;
	struct Z_Construct_UScriptStruct_FEncodeParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GopSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GopSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KeyMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBFrames;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PixFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Coder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Coder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreadCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThreadCounts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QMax;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresetParam_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresetParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TuneParam_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TuneParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TuneParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodeParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodeParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\xaf\x94\xe7\x89\xb9\xe7\x8e\x87\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\xaf\x94\xe7\x89\xb9\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate = { "BitRate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, BitRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe4\xb8\xa4\xe4\xb8\xaaI\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\xb8\xa7\xe6\x95\xb0\xe7\x9b\xae\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe4\xb8\xa4\xe4\xb8\xaaI\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe5\xb8\xa7\xe6\x95\xb0\xe7\x9b\xae" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize = { "GopSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, GopSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\x85\xb3\xe9\x94\xae\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x97\xb4\xe9\x9a\x94\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x94\xae\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe7\x9a\x84\xe6\x9c\x80\xe5\xb0\x8f\xe9\x97\xb4\xe9\x9a\x94" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin = { "KeyMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, KeyMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\xa4\xe4\xb8\xaa\xe9\x9d\x9e""B\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\x9a\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84""B\xe5\xb8\xa7\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\x9b\xb8\xe9\x82\xbb\xe4\xb8\xa4\xe4\xb8\xaa\xe9\x9d\x9e""B\xe5\xb8\xa7\xe4\xb9\x8b\xe9\x97\xb4\xe6\x9c\x80\xe5\xa4\x9a\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84""B\xe5\xb8\xa7\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames = { "MaxBFrames", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, MaxBFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\x83\x8f\xe7\xb4\xa0\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\x83\x8f\xe7\xb4\xa0\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat = { "PixFormat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, PixFormat), Z_Construct_UEnum_FFmpegExtension_EPixFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\xbc\x96\xe7\xa0\x81\xe5\x99\xa8\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe7\xa0\x81\xe5\x99\xa8" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder = { "Coder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, Coder), Z_Construct_UEnum_FFmpegExtension_ECoder, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbc\x96\xe7\xa0\x81\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe7\xbc\x96\xe7\xa0\x81" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts = { "ThreadCounts", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, ThreadCounts), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xb0\x8f\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin = { "QMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, QMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe9\x87\x8f\xe5\x8c\x96\xe5\x9b\xa0\xe5\xad\x90, 1~51" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax = { "QMax", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, QMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe7\xbc\x96\xe7\xa0\x81\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x8c\xe9\x80\x9f\xe5\xba\xa6\xe8\xb6\x8a\xe5\xbf\xab\xe5\x8e\x8b\xe7\xbc\xa9\xe7\x8e\x87\xe8\xb6\x8a\xe4\xbd\x8e" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam = { "PresetParam", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, PresetParam), Z_Construct_UEnum_FFmpegExtension_EPresetParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture|EncodeParam" },
		{ "Comment", "//\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96\n" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
		{ "ToolTip", "\xe4\xb8\xba\xe8\xa7\x86\xe9\xa2\x91\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe8\xa7\x86\xe8\xa7\x89\xe6\x95\x88\xe6\x9e\x9c\xe4\xbc\x98\xe5\x8c\x96" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam = { "TuneParam", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncodeParam, TuneParam), Z_Construct_UEnum_FFmpegExtension_ETuneParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_BitRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_GopSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_KeyMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_MaxBFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PixFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_Coder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_ThreadCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_QMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_PresetParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodeParam_Statics::NewProp_TuneParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodeParam_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEncodeParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EncodeParam"), sizeof(FEncodeParam), Get_Z_Construct_UScriptStruct_FEncodeParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEncodeParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEncodeParam_Hash() { return 2638283769U; }
	void UScreenCapture::StaticRegisterNativesUScreenCapture()
	{
	}
	UClass* Z_Construct_UClass_UScreenCapture_NoRegister()
	{
		return UScreenCapture::StaticClass();
	}
	struct Z_Construct_UClass_UScreenCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenCapInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenCapInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScreenCapture/ScreenCapture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|ScreenCapture" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ScreenCapture/ScreenCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo = { "ScreenCapInfo", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenCapture, ScreenCapInfo), Z_Construct_UScriptStruct_FScreenCapInfo, METADATA_PARAMS(Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCapture_Statics::NewProp_ScreenCapInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenCapture_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenCapture, 2426441723);
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UScreenCapture>()
	{
		return UScreenCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenCapture(Z_Construct_UClass_UScreenCapture, &UScreenCapture::StaticClass, TEXT("/Script/FFmpegExtension"), TEXT("UScreenCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
