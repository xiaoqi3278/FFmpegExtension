// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Video/StreamingServer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamingServer() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingInfo();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UStreamingServer_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UStreamingServer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FStreamingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FFMPEGEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FStreamingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("StreamingInfo"), sizeof(FStreamingInfo), Get_Z_Construct_UScriptStruct_FStreamingInfo_Hash());
	}
	return Singleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FStreamingInfo>()
{
	return FStreamingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingInfo(FStreamingInfo::StaticStruct, TEXT("/Script/FFmpegExtension"), TEXT("StreamingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FFmpegExtension_StaticRegisterNativesFStreamingInfo
{
	FScriptStruct_FFmpegExtension_StaticRegisterNativesFStreamingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingInfo")),new UScriptStruct::TCppStructOps<FStreamingInfo>);
	}
} ScriptStruct_FFmpegExtension_StaticRegisterNativesFStreamingInfo;
	struct Z_Construct_UScriptStruct_FStreamingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStreaming_MetaData[];
#endif
		static void NewProp_bAutoStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstValidVideoIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstValidVideoIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstValidAudioIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstValidAudioIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_SetBit(void* Obj)
	{
		((FStreamingInfo*)Obj)->bAutoStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming = { "bAutoStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStreamingInfo), &Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, InURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL = { "OutURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, OutURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FStreamingInfo*)Obj)->bOutLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStreamingInfo), &Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData[] = {
		{ "Category", "StreamingInfo" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex = { "FirstValidVideoIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, FirstValidVideoIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData[] = {
		{ "Category", "StreamingInfo" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex = { "FirstValidAudioIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, FirstValidAudioIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
		nullptr,
		&NewStructOps,
		"StreamingInfo",
		sizeof(FStreamingInfo),
		alignof(FStreamingInfo),
		Z_Construct_UScriptStruct_FStreamingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FFmpegExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingInfo"), sizeof(FStreamingInfo), Get_Z_Construct_UScriptStruct_FStreamingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingInfo_Hash() { return 1552417917U; }
	void UStreamingServer::StaticRegisterNativesUStreamingServer()
	{
	}
	UClass* Z_Construct_UClass_UStreamingServer_NoRegister()
	{
		return UStreamingServer::StaticClass();
	}
	struct Z_Construct_UClass_UStreamingServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamingServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Video/StreamingServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo = { "StreamingInfo", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingServer, StreamingInfo), Z_Construct_UScriptStruct_FStreamingInfo, METADATA_PARAMS(Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamingServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamingServer_Statics::ClassParams = {
		&UStreamingServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamingServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingServer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamingServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamingServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamingServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamingServer, 3161093236);
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UStreamingServer>()
	{
		return UStreamingServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamingServer(Z_Construct_UClass_UStreamingServer, &UStreamingServer::StaticClass, TEXT("/Script/FFmpegExtension"), TEXT("UStreamingServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
