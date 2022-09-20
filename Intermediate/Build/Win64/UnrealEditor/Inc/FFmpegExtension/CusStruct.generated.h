// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVideoInfo;
struct FMediaTime;
#ifdef FFMPEGEXTENSION_CusStruct_generated_h
#error "CusStruct.generated.h already included, missing '#pragma once' in CusStruct.h"
#endif
#define FFMPEGEXTENSION_CusStruct_generated_h

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioFormat_Statics; \
	FFMPEGEXTENSION_API static class UScriptStruct* StaticStruct();


template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<struct FAudioFormat>();

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaTime_Statics; \
	FFMPEGEXTENSION_API static class UScriptStruct* StaticStruct();


template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<struct FMediaTime>();

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVideoInfo_Statics; \
	FFMPEGEXTENSION_API static class UScriptStruct* StaticStruct();


template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<struct FVideoInfo>();

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_314_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioInfo_Statics; \
	FFMPEGEXTENSION_API static class UScriptStruct* StaticStruct();


template<> FFMPEGEXTENSION_API UScriptStruct* StaticStruct<struct FAudioInfo>();

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_SPARSE_DATA
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVideoInfoToString); \
	DECLARE_FUNCTION(execVideoTimeToString); \
	DECLARE_FUNCTION(execVideoDurationToTime_s); \
	DECLARE_FUNCTION(execVideoDurationToTime_us); \
	DECLARE_FUNCTION(execTimeFormat);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVideoInfoToString); \
	DECLARE_FUNCTION(execVideoTimeToString); \
	DECLARE_FUNCTION(execVideoDurationToTime_s); \
	DECLARE_FUNCTION(execVideoDurationToTime_us); \
	DECLARE_FUNCTION(execTimeFormat);


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCusStruct(); \
	friend struct Z_Construct_UClass_UCusStruct_Statics; \
public: \
	DECLARE_CLASS(UCusStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusStruct)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUCusStruct(); \
	friend struct Z_Construct_UClass_UCusStruct_Statics; \
public: \
	DECLARE_CLASS(UCusStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusStruct)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCusStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCusStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCusStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCusStruct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCusStruct(UCusStruct&&); \
	NO_API UCusStruct(const UCusStruct&); \
public:


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCusStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCusStruct(UCusStruct&&); \
	NO_API UCusStruct(const UCusStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCusStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCusStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCusStruct)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_351_PROLOG
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_RPC_WRAPPERS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_INCLASS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFMPEGEXTENSION_API UClass* StaticClass<class UCusStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
