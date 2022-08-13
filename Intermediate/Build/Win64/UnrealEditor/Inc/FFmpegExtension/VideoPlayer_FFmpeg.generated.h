// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVideoInfo;
enum class EKeepVideoRatio : uint8;
#ifdef FFMPEGEXTENSION_VideoPlayer_FFmpeg_generated_h
#error "VideoPlayer_FFmpeg.generated.h already included, missing '#pragma once' in VideoPlayer_FFmpeg.h"
#endif
#define FFMPEGEXTENSION_VideoPlayer_FFmpeg_generated_h

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVideoInfo_Statics; \
	FFMPEGEXTENSION_API static class UScriptStruct* StaticStruct();


template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<struct FVideoInfo>();

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_162_DELEGATE \
struct _Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms \
{ \
	FVideoInfo VideoInfo; \
}; \
static inline void FOnFindVideoSuccessfully_DelegateWrapper(const FMulticastScriptDelegate& OnFindVideoSuccessfully, FVideoInfo VideoInfo) \
{ \
	_Script_FFmpegExtension_eventOnFindVideoSuccessfully_Parms Parms; \
	Parms.VideoInfo=VideoInfo; \
	OnFindVideoSuccessfully.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_163_DELEGATE \
static inline void FOnVideoPlayBegin_DelegateWrapper(const FMulticastScriptDelegate& OnVideoPlayBegin) \
{ \
	OnVideoPlayBegin.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_164_DELEGATE \
static inline void FOnVideoPlayEnd_DelegateWrapper(const FMulticastScriptDelegate& OnVideoPlayEnd) \
{ \
	OnVideoPlayEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_165_DELEGATE \
struct _Script_FFmpegExtension_eventOnVideoError_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnVideoError_DelegateWrapper(const FMulticastScriptDelegate& OnVideoError, const FString& ErrorMessage) \
{ \
	_Script_FFmpegExtension_eventOnVideoError_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnVideoError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_SPARSE_DATA
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVideoKeepRatio); \
	DECLARE_FUNCTION(execOpenVideo); \
	DECLARE_FUNCTION(execCloseVideo);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVideoKeepRatio); \
	DECLARE_FUNCTION(execOpenVideo); \
	DECLARE_FUNCTION(execCloseVideo);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideoPlayer_FFmpeg(); \
	friend struct Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics; \
public: \
	DECLARE_CLASS(UVideoPlayer_FFmpeg, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UVideoPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_INCLASS \
private: \
	static void StaticRegisterNativesUVideoPlayer_FFmpeg(); \
	friend struct Z_Construct_UClass_UVideoPlayer_FFmpeg_Statics; \
public: \
	DECLARE_CLASS(UVideoPlayer_FFmpeg, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UVideoPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVideoPlayer_FFmpeg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideoPlayer_FFmpeg) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideoPlayer_FFmpeg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideoPlayer_FFmpeg); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVideoPlayer_FFmpeg(UVideoPlayer_FFmpeg&&); \
	NO_API UVideoPlayer_FFmpeg(const UVideoPlayer_FFmpeg&); \
public:


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVideoPlayer_FFmpeg(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVideoPlayer_FFmpeg(UVideoPlayer_FFmpeg&&); \
	NO_API UVideoPlayer_FFmpeg(const UVideoPlayer_FFmpeg&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideoPlayer_FFmpeg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideoPlayer_FFmpeg); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideoPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_167_PROLOG
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_RPC_WRAPPERS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_INCLASS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFMPEGEXTENSION_API UClass* StaticClass<class UVideoPlayer_FFmpeg>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Video_VideoPlayer_FFmpeg_h


#define FOREACH_ENUM_EKEEPVIDEORATIO(op) \
	op(EKeepVideoRatio::No) \
	op(EKeepVideoRatio::Height) \
	op(EKeepVideoRatio::Width) \
	op(EKeepVideoRatio::Origin) \
	op(EKeepVideoRatio::Auto) 

enum class EKeepVideoRatio : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EKeepVideoRatio>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
