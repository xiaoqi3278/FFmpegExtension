// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Video/VideoPlayer_FFmpeg.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoPlayer_FFmpeg() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg();
	UMG_API UClass* Z_Construct_UClass_UImage();
// End Cross Module References
class UScriptStruct* FVideoInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FFMPEGEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FVideoInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVideoInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("VideoInfo"), sizeof(FVideoInfo), Get_Z_Construct_UScriptStruct_FVideoInfo_Hash());
	}
	return Singleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FVideoInfo>()
{
	return FVideoInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVideoInfo(FVideoInfo::StaticStruct, TEXT("/Script/FFmpegExtension"), TEXT("VideoInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FFmpegExtension_StaticRegisterNativesFVideoInfo
{
	FScriptStruct_FFmpegExtension_StaticRegisterNativesFVideoInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VideoInfo")),new UScriptStruct::TCppStructOps<FVideoInfo>);
	}
} ScriptStruct_FFmpegExtension_StaticRegisterNativesFVideoInfo;
	struct Z_Construct_UScriptStruct_FVideoInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateTextureMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTextureMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateTextureMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVideoInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVideoInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((FVideoInfo*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\x9c\xb0\xe5\x9d\x80" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, VideoURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData[] = {
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVideoInfo), &Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData[] = {
		{ "Category", "VideoInfo" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xb8\xa7\xe6\x9b\xb4\xe6\x96\xb0\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod = { "UpdateTextureMethod", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVideoInfo, UpdateTextureMethod), Z_Construct_UEnum_FFmpegExtension_EUpdateTextureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVideoInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_VideoURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_bOutLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVideoInfo_Statics::NewProp_UpdateTextureMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVideoInfo_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVideoInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VideoInfo"), sizeof(FVideoInfo), Get_Z_Construct_UScriptStruct_FVideoInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVideoInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVideoInfo_Hash() { return 3838294287U; }
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execCloseVideo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseVideo();
		P_NATIVE_END;
	}
	void UVideoPlayer_FFmpeg::StaticRegisterNativesUVideoPlayer_FFmpeg()
	{
		UClass* Class = UVideoPlayer_FFmpeg::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseVideo", &UVideoPlayer_FFmpeg::execCloseVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "CloseVideo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg_NoRegister()
	{
		return UVideoPlayer_FFmpeg::StaticClass();
	}
	struct Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo, "CloseVideo" }, // 3068745219
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Video/VideoPlayer_FFmpeg.h" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|VideoPlayer" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoPlayer_FFmpeg>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVideoPlayer_FFmpeg, 2248760196);
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UVideoPlayer_FFmpeg>()
	{
		return UVideoPlayer_FFmpeg::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideoPlayer_FFmpeg(Z_Construct_UClass_UVideoPlayer_FFmpeg, &UVideoPlayer_FFmpeg::StaticClass, TEXT("/Script/FFmpegExtension"), TEXT("UVideoPlayer_FFmpeg"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoPlayer_FFmpeg);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
