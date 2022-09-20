// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FFmpegExtension/Public/Audio/AudioPlayer_FFmpeg.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPlayer_FFmpeg() {}
// Cross Module References
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UAudioPlayer_FFmpeg_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UAudioPlayer_FFmpeg();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInfo();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FAudioFormat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnAudioPlayBegin__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayBegin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnAudioPlayEnd__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioPlayEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics
	{
		struct _Script_FFmpegExtension_eventOnAudioError_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnAudioError_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnAudioError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::_Script_FFmpegExtension_eventOnAudioError_Parms), Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics
	{
		struct _Script_FFmpegExtension_eventOnAudioLoop_Parms
		{
			int32 LoopIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LoopIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::NewProp_LoopIndex = { "LoopIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnAudioLoop_Parms, LoopIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::NewProp_LoopIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnAudioLoop__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::_Script_FFmpegExtension_eventOnAudioLoop_Parms), Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioLoop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAudioPlayer_FFmpeg::execFFmpegPlayAudio)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_STRUCT(FAudioInfo,Z_Param_InAudioInfo);
		P_GET_STRUCT(FAudioFormat,Z_Param_InPlaytFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioPlayer_FFmpeg**)Z_Param__Result=UAudioPlayer_FFmpeg::FFmpegPlayAudio(Z_Param_Key,Z_Param_InAudioInfo,Z_Param_InPlaytFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioPlayer_FFmpeg::execSetVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioPlayer_FFmpeg::execCloseAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseAudio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioPlayer_FFmpeg::execPlayAudio)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAudio(Z_Param_AudioURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioPlayer_FFmpeg::execOpenAudio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAudio();
		P_NATIVE_END;
	}
	void UAudioPlayer_FFmpeg::StaticRegisterNativesUAudioPlayer_FFmpeg()
	{
		UClass* Class = UAudioPlayer_FFmpeg::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseAudio", &UAudioPlayer_FFmpeg::execCloseAudio },
			{ "FFmpegPlayAudio", &UAudioPlayer_FFmpeg::execFFmpegPlayAudio },
			{ "OpenAudio", &UAudioPlayer_FFmpeg::execOpenAudio },
			{ "PlayAudio", &UAudioPlayer_FFmpeg::execPlayAudio },
			{ "SetVolume", &UAudioPlayer_FFmpeg::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "/**\n\x09 * \xe5\x85\xb3\xe9\x97\xad\xe9\x9f\xb3\xe9\xa2\x91\n\x09 */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe9\x9f\xb3\xe9\xa2\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPlayer_FFmpeg, nullptr, "CloseAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics
	{
		struct AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms
		{
			FString Key;
			FAudioInfo InAudioInfo;
			FAudioFormat InPlaytFormat;
			UAudioPlayer_FFmpeg* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAudioInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPlaytFormat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_InAudioInfo = { "InAudioInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms, InAudioInfo), Z_Construct_UScriptStruct_FAudioInfo, METADATA_PARAMS(nullptr, 0) }; // 3942609396
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_InPlaytFormat = { "InPlaytFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms, InPlaytFormat), Z_Construct_UScriptStruct_FAudioFormat, METADATA_PARAMS(nullptr, 0) }; // 3394187060
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioPlayer_FFmpeg_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_InAudioInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_InPlaytFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "/**\n\x09 * \xe5\x88\x9b\xe5\xbb\xba\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xb9\xb6\xe6\x92\xad\xe6\x94\xbe\n\x09 *\n\x09 * @param Key\x09\x09\x09\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1\n\x09 * @param AudioInfo\x09\x09\xe9\x9f\xb3\xe9\xa2\x91\xe9\x85\x8d\xe7\xbd\xae\n\x09 * @param OutputFormat\x09\xe9\x9f\xb3\xe9\xa2\x91\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe9\x85\x8d\xe7\xbd\xae\n\x09 *\n\x09 * @return\x09\x09\x09\x09\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1\n\x09 */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\x88\x9b\xe5\xbb\xba\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xb9\xb6\xe6\x92\xad\xe6\x94\xbe\n\n@param Key                   \xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1\n@param AudioInfo             \xe9\x9f\xb3\xe9\xa2\x91\xe9\x85\x8d\xe7\xbd\xae\n@param OutputFormat  \xe9\x9f\xb3\xe9\xa2\x91\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\xe9\x85\x8d\xe7\xbd\xae\n\n@return                              \xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPlayer_FFmpeg, nullptr, "FFmpegPlayAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::AudioPlayer_FFmpeg_eventFFmpegPlayAudio_Parms), Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "/**\n\x09 * \xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x92\xad\xe6\x94\xbe\xe9\x9f\xb3\xe9\xa2\x91,\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x85\xa5\xe5\x8f\xa3\n\x09 */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x92\xad\xe6\x94\xbe\xe9\x9f\xb3\xe9\xa2\x91,\xe9\x9f\xb3\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe5\x85\xa5\xe5\x8f\xa3" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPlayer_FFmpeg, nullptr, "OpenAudio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics
	{
		struct AudioPlayer_FFmpeg_eventPlayAudio_Parms
		{
			FString AudioURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::NewProp_AudioURL = { "AudioURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventPlayAudio_Parms, AudioURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::NewProp_AudioURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "/**\n\x09 * \xe6\x8c\x87\xe5\xae\x9a\xe9\x9f\xb3\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90\xe5\xb9\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x92\xad\xe6\x94\xbe\n\x09 *\n\x09 * @param AudioURL\x09\xe9\x9f\xb3\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90\n\x09 */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe9\x9f\xb3\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90\xe5\xb9\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x92\xad\xe6\x94\xbe\n\n@param AudioURL      \xe9\x9f\xb3\xe9\xa2\x91\xe8\xb5\x84\xe6\xba\x90" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPlayer_FFmpeg, nullptr, "PlayAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::AudioPlayer_FFmpeg_eventPlayAudio_Parms), Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics
	{
		struct AudioPlayer_FFmpeg_eventSetVolume_Parms
		{
			int32 NewVolume;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioPlayer_FFmpeg_eventSetVolume_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Audio" },
		{ "Comment", "/**\n\x09 * \xe8\xb0\x83\xe6\x95\xb4\xe9\x9f\xb3\xe9\x87\x8f\n\x09 */" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xb0\x83\xe6\x95\xb4\xe9\x9f\xb3\xe9\x87\x8f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPlayer_FFmpeg, nullptr, "SetVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::AudioPlayer_FFmpeg_eventSetVolume_Parms), Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPlayer_FFmpeg);
	UClass* Z_Construct_UClass_UAudioPlayer_FFmpeg_NoRegister()
	{
		return UAudioPlayer_FFmpeg::StaticClass();
	}
	struct Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioPlayer_FFmpeg_CloseAudio, "CloseAudio" }, // 3310951291
		{ &Z_Construct_UFunction_UAudioPlayer_FFmpeg_FFmpegPlayAudio, "FFmpegPlayAudio" }, // 1445361171
		{ &Z_Construct_UFunction_UAudioPlayer_FFmpeg_OpenAudio, "OpenAudio" }, // 1331668351
		{ &Z_Construct_UFunction_UAudioPlayer_FFmpeg_PlayAudio, "PlayAudio" }, // 1809724486
		{ &Z_Construct_UFunction_UAudioPlayer_FFmpeg_SetVolume, "SetVolume" }, // 3361997892
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Audio/AudioPlayer_FFmpeg.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_AudioInfo_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_AudioInfo = { "AudioInfo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioPlayer_FFmpeg, AudioInfo), Z_Construct_UScriptStruct_FAudioInfo, METADATA_PARAMS(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_AudioInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_AudioInfo_MetaData)) }; // 3942609396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_PlayFormat_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe9\x9f\xb3\xe9\xa2\x91\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe9\xa2\x91\xe8\xbe\x93\xe5\x87\xba\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_PlayFormat = { "PlayFormat", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioPlayer_FFmpeg, PlayFormat), Z_Construct_UScriptStruct_FAudioFormat, METADATA_PARAMS(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_PlayFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_PlayFormat_MetaData)) }; // 3394187060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_OnAudioError_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5\n" },
		{ "ModuleRelativePath", "Public/Audio/AudioPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_OnAudioError = { "OnAudioError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioPlayer_FFmpeg, OnAudioError), Z_Construct_UDelegateFunction_FFmpegExtension_OnAudioError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_OnAudioError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_OnAudioError_MetaData)) }; // 2132906676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_AudioInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_PlayFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::NewProp_OnAudioError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPlayer_FFmpeg>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::ClassParams = {
		&UAudioPlayer_FFmpeg::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioPlayer_FFmpeg()
	{
		if (!Z_Registration_Info_UClass_UAudioPlayer_FFmpeg.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPlayer_FFmpeg.OuterSingleton, Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioPlayer_FFmpeg.OuterSingleton;
	}
	template<> FFMPEGEXTENSION_API UClass* StaticClass<UAudioPlayer_FFmpeg>()
	{
		return UAudioPlayer_FFmpeg::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPlayer_FFmpeg);
	struct Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPlayer_FFmpeg, UAudioPlayer_FFmpeg::StaticClass, TEXT("UAudioPlayer_FFmpeg"), &Z_Registration_Info_UClass_UAudioPlayer_FFmpeg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPlayer_FFmpeg), 2142992701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_3386679695(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
