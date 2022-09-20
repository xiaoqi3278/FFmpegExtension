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
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FFmpegExtension();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FVideoInfo();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature();
	FFMPEGEXTENSION_API UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg_NoRegister();
	FFMPEGEXTENSION_API UClass* Z_Construct_UClass_UVideoPlayer_FFmpeg();
	UMG_API UClass* Z_Construct_UClass_UImage();
	FFMPEGEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FMediaTime();
	FFMPEGEXTENSION_API UEnum* Z_Construct_UEnum_FFmpegExtension_EVideoRatio();
// End Cross Module References
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(nullptr, 0) }; // 819572487
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
	struct Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics
	{
		struct _Script_FFmpegExtension_eventOnVideoLoop_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::NewProp_LoopIndex = { "LoopIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FFmpegExtension_eventOnVideoLoop_Parms, LoopIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::NewProp_LoopIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FFmpegExtension, nullptr, "OnVideoLoop__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::_Script_FFmpegExtension_eventOnVideoLoop_Parms), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execSeek)
	{
		P_GET_STRUCT(FMediaTime,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execGetVideoInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVideoInfo*)Z_Param__Result=P_THIS->GetVideoInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execGetVideoInfoAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVideoInfoAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execGetVideoTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMediaTime*)Z_Param__Result=P_THIS->GetVideoTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execGetFrameBufferSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameBufferSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execSetVideoRatio)
	{
		P_GET_ENUM(EVideoRatio,Z_Param_KeepVideoRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVideoRatio(EVideoRatio(Z_Param_KeepVideoRatio));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execResumePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumePlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execPausePlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PausePlay();
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
	DEFINE_FUNCTION(UVideoPlayer_FFmpeg::execPlayVideo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VideoURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayVideo(Z_Param_VideoURL);
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
			{ "GetFrameBufferSize", &UVideoPlayer_FFmpeg::execGetFrameBufferSize },
			{ "GetVideoInfo", &UVideoPlayer_FFmpeg::execGetVideoInfo },
			{ "GetVideoInfoAsString", &UVideoPlayer_FFmpeg::execGetVideoInfoAsString },
			{ "GetVideoTime", &UVideoPlayer_FFmpeg::execGetVideoTime },
			{ "OpenVideo", &UVideoPlayer_FFmpeg::execOpenVideo },
			{ "PausePlay", &UVideoPlayer_FFmpeg::execPausePlay },
			{ "PlayVideo", &UVideoPlayer_FFmpeg::execPlayVideo },
			{ "ResumePlay", &UVideoPlayer_FFmpeg::execResumePlay },
			{ "Seek", &UVideoPlayer_FFmpeg::execSeek },
			{ "SetPlaybackSpeed", &UVideoPlayer_FFmpeg::execSetPlaybackSpeed },
			{ "SetVideoRatio", &UVideoPlayer_FFmpeg::execSetVideoRatio },
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
		{ "Comment", "//\xe5\x85\xb3\xe9\x97\xad\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe8\xa7\x86\xe9\xa2\x91" },
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
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics
	{
		struct VideoPlayer_FFmpeg_eventGetFrameBufferSize_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventGetFrameBufferSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe5\x8d\x95\xe5\xb8\xa7\xe6\x89\x80\xe5\x8d\xa0\xe7\xbc\x93\xe5\xad\x98\xe5\xa4\xa7\xe5\xb0\x8f(\xe5\x8d\x95\xe4\xbd\x8d: MB)\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe5\x8d\x95\xe5\xb8\xa7\xe6\x89\x80\xe5\x8d\xa0\xe7\xbc\x93\xe5\xad\x98\xe5\xa4\xa7\xe5\xb0\x8f(\xe5\x8d\x95\xe4\xbd\x8d: MB)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "GetFrameBufferSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::VideoPlayer_FFmpeg_eventGetFrameBufferSize_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics
	{
		struct VideoPlayer_FFmpeg_eventGetVideoInfo_Parms
		{
			FVideoInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventGetVideoInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(nullptr, 0) }; // 819572487
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "GetVideoInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::VideoPlayer_FFmpeg_eventGetVideoInfo_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics
	{
		struct VideoPlayer_FFmpeg_eventGetVideoInfoAsString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventGetVideoInfoAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe4\xbf\xa1\xe6\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "GetVideoInfoAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::VideoPlayer_FFmpeg_eventGetVideoInfoAsString_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics
	{
		struct VideoPlayer_FFmpeg_eventGetVideoTime_Parms
		{
			FMediaTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventGetVideoTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FMediaTime, METADATA_PARAMS(nullptr, 0) }; // 3389766753
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\x80\xbb\xe6\x97\xb6\xe9\x95\xbf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "GetVideoTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::VideoPlayer_FFmpeg_eventGetVideoTime_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime_Statics::FuncParams);
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
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\xb7\xb2\xe6\x9c\x89\xe9\x85\x8d\xe7\xbd\xae\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91" },
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
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe6\x9a\x82\xe5\x81\x9c\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x9a\x82\xe5\x81\x9c\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "PausePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics
	{
		struct VideoPlayer_FFmpeg_eventPlayVideo_Parms
		{
			FString VideoURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::NewProp_VideoURL = { "VideoURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventPlayVideo_Parms, VideoURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::NewProp_VideoURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x89\x93\xe5\xbc\x80\xe8\xa7\x86\xe9\xa2\x91" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "PlayVideo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::VideoPlayer_FFmpeg_eventPlayVideo_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe6\x81\xa2\xe5\xa4\x8d\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe6\x81\xa2\xe5\xa4\x8d\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "ResumePlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics
	{
		struct VideoPlayer_FFmpeg_eventSeek_Parms
		{
			FMediaTime Time;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FMediaTime, METADATA_PARAMS(nullptr, 0) }; // 3389766753
	void Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VideoPlayer_FFmpeg_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VideoPlayer_FFmpeg_eventSeek_Parms), &Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xb7\xb3\xe8\xbd\xac\xe5\x88\xb0\xe6\x9f\x90\xe4\xb8\xaa\xe6\x97\xb6\xe9\x97\xb4\xe7\x82\xb9\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xb7\xb3\xe8\xbd\xac\xe5\x88\xb0\xe6\x9f\x90\xe4\xb8\xaa\xe6\x97\xb6\xe9\x97\xb4\xe7\x82\xb9" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "Seek", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::VideoPlayer_FFmpeg_eventSeek_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics
	{
		struct VideoPlayer_FFmpeg_eventSetPlaybackSpeed_Parms
		{
			float Speed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventSetPlaybackSpeed_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::NewProp_Speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\n" },
		{ "CPP_Default_Speed", "1.000000" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::VideoPlayer_FFmpeg_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics
	{
		struct VideoPlayer_FFmpeg_eventSetVideoRatio_Parms
		{
			EVideoRatio KeepVideoRatio;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepVideoRatio_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepVideoRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::NewProp_KeepVideoRatio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::NewProp_KeepVideoRatio = { "KeepVideoRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VideoPlayer_FFmpeg_eventSetVideoRatio_Parms, KeepVideoRatio), Z_Construct_UEnum_FFmpegExtension_EVideoRatio, METADATA_PARAMS(nullptr, 0) }; // 2577945261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::NewProp_KeepVideoRatio_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::NewProp_KeepVideoRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "FFmpegExtension|Video" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x86\xe9\xa2\x91\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x86\xe9\xa2\x91\xe5\xae\xbd\xe9\xab\x98\xe6\xaf\x94" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoPlayer_FFmpeg, nullptr, "SetVideoRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::VideoPlayer_FFmpeg_eventSetVideoRatio_Parms), Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVideoLoop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_FFmpegExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_CloseVideo, "CloseVideo" }, // 834372273
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetFrameBufferSize, "GetFrameBufferSize" }, // 1474045355
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfo, "GetVideoInfo" }, // 519127565
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoInfoAsString, "GetVideoInfoAsString" }, // 4259697759
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_GetVideoTime, "GetVideoTime" }, // 2041828771
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_OpenVideo, "OpenVideo" }, // 1347943121
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_PausePlay, "PausePlay" }, // 3686586848
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_PlayVideo, "PlayVideo" }, // 1326070948
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_ResumePlay, "ResumePlay" }, // 3186764448
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_Seek, "Seek" }, // 3569787401
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 2746968342
		{ &Z_Construct_UFunction_UVideoPlayer_FFmpeg_SetVideoRatio, "SetVideoRatio" }, // 1936163349
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
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe7\x9b\xb8\xe5\x85\xb3\xe5\x8f\x82\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo = { "VideoInfo", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, VideoInfo), Z_Construct_UScriptStruct_FVideoInfo, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo_MetaData)) }; // 819572487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\xe6\x88\x90\xe5\x8a\x9f\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xa7\x86\xe9\xa2\x91\xe6\xb5\x81\xe6\x88\x90\xe5\x8a\x9f" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully = { "OnFindVideoSuccessfully", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnFindVideoSuccessfully), Z_Construct_UDelegateFunction_FFmpegExtension_OnFindVideoSuccessfully__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully_MetaData)) }; // 1591283798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe5\xbc\x80\xe5\xa7\x8b\xe6\x92\xad\xe6\x94\xbe" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin = { "OnVideoPlayBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoPlayBegin), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayBegin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin_MetaData)) }; // 1023510447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xae\x8c\xe6\x88\x90" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd = { "OnVideoPlayEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoPlayEnd), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoPlayEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd_MetaData)) }; // 3675754918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError = { "OnVideoError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoError), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError_MetaData)) }; // 1403423291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoLoop_MetaData[] = {
		{ "Category", "FFmpegExtension" },
		{ "Comment", "//\xe8\xa7\x86\xe9\xa2\x91\xe6\xaf\x8f\xe6\xac\xa1\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8, \xe8\xbf\x94\xe5\x9b\x9e\xe5\xbe\xaa\xe7\x8e\xaf\xe6\xac\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/Video/VideoPlayer_FFmpeg.h" },
		{ "ToolTip", "\xe8\xa7\x86\xe9\xa2\x91\xe6\xaf\x8f\xe6\xac\xa1\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8, \xe8\xbf\x94\xe5\x9b\x9e\xe5\xbe\xaa\xe7\x8e\xaf\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoLoop = { "OnVideoLoop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideoPlayer_FFmpeg, OnVideoLoop), Z_Construct_UDelegateFunction_FFmpegExtension_OnVideoLoop__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoLoop_MetaData)) }; // 2402095209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_VideoInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnFindVideoSuccessfully,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoPlayEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics::NewProp_OnVideoLoop,
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
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVideoPlayer_FFmpeg, UVideoPlayer_FFmpeg::StaticClass, TEXT("UVideoPlayer_FFmpeg"), &Z_Registration_Info_UClass_UVideoPlayer_FFmpeg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideoPlayer_FFmpeg), 746037356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_3547840008(TEXT("/Script/FFmpegExtension"),
		Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
