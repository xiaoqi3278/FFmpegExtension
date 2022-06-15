// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FFMPEGEXTENSION_CusEnum_generated_h
#error "CusEnum.generated.h already included, missing '#pragma once' in CusEnum.h"
#endif
#define FFMPEGEXTENSION_CusEnum_generated_h

#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_SPARSE_DATA
#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_RPC_WRAPPERS
#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCusEnum(); \
	friend struct Z_Construct_UClass_UCusEnum_Statics; \
public: \
	DECLARE_CLASS(UCusEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusEnum)


#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCusEnum(); \
	friend struct Z_Construct_UClass_UCusEnum_Statics; \
public: \
	DECLARE_CLASS(UCusEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusEnum)


#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCusEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCusEnum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCusEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCusEnum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCusEnum(UCusEnum&&); \
	NO_API UCusEnum(const UCusEnum&); \
public:


#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCusEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCusEnum(UCusEnum&&); \
	NO_API UCusEnum(const UCusEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCusEnum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCusEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCusEnum)


#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_PRIVATE_PROPERTY_OFFSET
#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_22_PROLOG
#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_SPARSE_DATA \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_RPC_WRAPPERS \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_INCLASS \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_PRIVATE_PROPERTY_OFFSET \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_SPARSE_DATA \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_INCLASS_NO_PURE_DECLS \
	PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFMPEGEXTENSION_API UClass* StaticClass<class UCusEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h


#define FOREACH_ENUM_EUPDATETEXTUREMETHOD(op) \
	op(EUpdateTextureMethod::Memcpy) \
	op(EUpdateTextureMethod::RHICommand) 

enum class EUpdateTextureMethod : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EUpdateTextureMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
