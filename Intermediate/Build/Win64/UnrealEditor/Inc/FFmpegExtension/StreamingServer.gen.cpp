// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Video/StreamingServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamingServer() {}
// Cross Module References
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingInfo();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UStreamingServer_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UStreamingServer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamingInfo;
class UScriptStruct* FStreamingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingInfo, Z_Construct_UPackage__Script_FFmpegExtension(), TEXT("StreamingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StreamingInfo.OuterSingleton;
}
template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<FStreamingInfo>()
{
	return FStreamingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStreaming_MetaData[];
#endif
		static void NewProp_bAutoStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutLog_MetaData[];
#endif
		static void NewProp_bOutLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstValidVideoIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstValidVideoIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstValidAudioIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstValidAudioIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_SetBit(void* Obj)
	{
		((FStreamingInfo*)Obj)->bAutoStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming = { "bAutoStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStreamingInfo), &Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, InURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL = { "OutURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, OutURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData[] = {
		{ "Category", "FFmpegExtension|Video|StreamingServer" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_SetBit(void* Obj)
	{
		((FStreamingInfo*)Obj)->bOutLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog = { "bOutLog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStreamingInfo), &Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData[] = {
		{ "Category", "StreamingInfo" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex = { "FirstValidVideoIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, FirstValidVideoIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData[] = {
		{ "Category", "StreamingInfo" },
		{ "Comment", "//\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81\n" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
		{ "ToolTip", "\xe9\xa6\x96\xe4\xb8\xaa\xe5\x8f\xaf\xe7\x94\xa8\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\xb5\x81" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex = { "FirstValidAudioIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingInfo, FirstValidAudioIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bAutoStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_OutURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_bOutLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidVideoIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewProp_FirstValidAudioIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_StreamingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamingInfo.InnerSingleton, Z_Construct_UScriptStruct_FStreamingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamingInfo.InnerSingleton;
	}
	void UStreamingServer::StaticRegisterNativesUStreamingServer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamingServer);
	UClass* Z_Construct_UClass_UStreamingServer_NoRegister()
	{
		return UStreamingServer::StaticClass();
	}
	struct Z_Construct_UClass_UStreamingServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamingServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Video/StreamingServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Video/StreamingServer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo = { "StreamingInfo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStreamingServer, StreamingInfo), Z_Construct_UScriptStruct_FStreamingInfo, METADATA_PARAMS(Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo_MetaData)) }; // 451636310
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamingServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamingServer_Statics::NewProp_StreamingInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamingServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamingServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamingServer_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UStreamingServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamingServer.OuterSingleton, Z_Construct_UClass_UStreamingServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamingServer.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UStreamingServer>()
	{
		return UStreamingServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamingServer);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ScriptStructInfo[] = {
		{ FStreamingInfo::StaticStruct, Z_Construct_UScriptStruct_FStreamingInfo_Statics::NewStructOps, TEXT("StreamingInfo"), &Z_Registration_Info_UScriptStruct_StreamingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamingInfo), 451636310U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamingServer, UStreamingServer::StaticClass, TEXT("UStreamingServer"), &Z_Registration_Info_UClass_UStreamingServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamingServer), 814480740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_4065465205(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_StreamingServer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
