// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioInfo;
struct FAudioFormat;
class UAudioPlayer_FFmpeg;
#ifdef FFMPEGEXTENSION_AudioPlayer_FFmpeg_generated_h
#error "AudioPlayer_FFmpeg.generated.h already included, missing '#pragma once' in AudioPlayer_FFmpeg.h"
#endif
#define FFMPEGEXTENSION_AudioPlayer_FFmpeg_generated_h

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_20_DELEGATE \
static inline void FOnAudioPlayBegin_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayBegin) \
{ \
	OnAudioPlayBegin.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_21_DELEGATE \
static inline void FOnAudioPlayEnd_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayEnd) \
{ \
	OnAudioPlayEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_22_DELEGATE \
struct _Script_FFmpegExtension_eventOnAudioError_Parms \
{ \
	FString ErrorMessage; \
}; \
static inline void FOnAudioError_DelegateWrapper(const FMulticastScriptDelegate& OnAudioError, const FString& ErrorMessage) \
{ \
	_Script_FFmpegExtension_eventOnAudioError_Parms Parms; \
	Parms.ErrorMessage=ErrorMessage; \
	OnAudioError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_23_DELEGATE \
struct _Script_FFmpegExtension_eventOnAudioLoop_Parms \
{ \
	int32 LoopIndex; \
}; \
static inline void FOnAudioLoop_DelegateWrapper(const FMulticastScriptDelegate& OnAudioLoop, int32 LoopIndex) \
{ \
	_Script_FFmpegExtension_eventOnAudioLoop_Parms Parms; \
	Parms.LoopIndex=LoopIndex; \
	OnAudioLoop.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_SPARSE_DATA
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFFmpegPlayAudio); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execCloseAudio); \
	DECLARE_FUNCTION(execPlayAudio); \
	DECLARE_FUNCTION(execOpenAudio);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFFmpegPlayAudio); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execCloseAudio); \
	DECLARE_FUNCTION(execPlayAudio); \
	DECLARE_FUNCTION(execOpenAudio);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioPlayer_FFmpeg(); \
	friend struct Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics; \
public: \
	DECLARE_CLASS(UAudioPlayer_FFmpeg, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UAudioPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAudioPlayer_FFmpeg(); \
	friend struct Z_Construct_UClass_UAudioPlayer_FFmpeg_Statics; \
public: \
	DECLARE_CLASS(UAudioPlayer_FFmpeg, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UAudioPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioPlayer_FFmpeg(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPlayer_FFmpeg) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPlayer_FFmpeg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPlayer_FFmpeg); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioPlayer_FFmpeg(UAudioPlayer_FFmpeg&&); \
	NO_API UAudioPlayer_FFmpeg(const UAudioPlayer_FFmpeg&); \
public:


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioPlayer_FFmpeg(UAudioPlayer_FFmpeg&&); \
	NO_API UAudioPlayer_FFmpeg(const UAudioPlayer_FFmpeg&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPlayer_FFmpeg); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPlayer_FFmpeg); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioPlayer_FFmpeg)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_25_PROLOG
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_RPC_WRAPPERS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_INCLASS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFMPEGEXTENSION_API UClass* StaticClass<class UAudioPlayer_FFmpeg>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Audio_AudioPlayer_FFmpeg_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
