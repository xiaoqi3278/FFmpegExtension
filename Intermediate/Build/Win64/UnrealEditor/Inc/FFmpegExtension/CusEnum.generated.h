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

#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_SPARSE_DATA
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_RPC_WRAPPERS
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCusEnum(); \
	friend struct Z_Construct_UClass_UCusEnum_Statics; \
public: \
	DECLARE_CLASS(UCusEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusEnum)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_INCLASS \
private: \
	static void StaticRegisterNativesUCusEnum(); \
	friend struct Z_Construct_UClass_UCusEnum_Statics; \
public: \
	DECLARE_CLASS(UCusEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FFmpegExtension"), NO_API) \
	DECLARE_SERIALIZER(UCusEnum)


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_STANDARD_CONSTRUCTORS \
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


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_ENHANCED_CONSTRUCTORS \
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


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_235_PROLOG
#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_RPC_WRAPPERS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_INCLASS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_SPARSE_DATA \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_INCLASS_NO_PURE_DECLS \
	FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h_238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FFMPEGEXTENSION_API UClass* StaticClass<class UCusEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginTest_Plugins_FFmpegExtension_Source_FFmpegExtension_Public_Utilities_CusEnum_h


#define FOREACH_ENUM_EVIDEORATIO(op) \
	op(EVideoRatio::No) \
	op(EVideoRatio::Height) \
	op(EVideoRatio::Width) \
	op(EVideoRatio::Origin) \
	op(EVideoRatio::Auto) 

enum class EVideoRatio : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EVideoRatio>();

#define FOREACH_ENUM_EDECODESTATE(op) \
	op(EDecodeState::NotStarted) \
	op(EDecodeState::Stopped) \
	op(EDecodeState::Decoding) \
	op(EDecodeState::Completed) \
	op(EDecodeState::Seeking) 

enum class EDecodeState : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EDecodeState>();

#define FOREACH_ENUM_EUPDATETEXTUREMETHOD(op) \
	op(EUpdateTextureMethod::Memcpy) \
	op(EUpdateTextureMethod::RHICommand) 

enum class EUpdateTextureMethod : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EUpdateTextureMethod>();

#define FOREACH_ENUM_EPIXFORMAT(op) \
	op(EPixFormat::YUV420P) \
	op(EPixFormat::YUYV422) \
	op(EPixFormat::RGB24) \
	op(EPixFormat::BGR24) \
	op(EPixFormat::YUV422P) \
	op(EPixFormat::YUV444P) \
	op(EPixFormat::YUV410P) \
	op(EPixFormat::YUV411P) \
	op(EPixFormat::GRAY8) \
	op(EPixFormat::MONOWHITE) \
	op(EPixFormat::MONOBLACK) \
	op(EPixFormat::PAL8) \
	op(EPixFormat::YUVJ420P) \
	op(EPixFormat::YUVJ422P) \
	op(EPixFormat::YUVJ444P) \
	op(EPixFormat::UYVY422) \
	op(EPixFormat::UYYVYY411) \
	op(EPixFormat::BGR8) \
	op(EPixFormat::BGR4) \
	op(EPixFormat::BGR4_BYTE) \
	op(EPixFormat::RGB8) \
	op(EPixFormat::RGB4) \
	op(EPixFormat::RGB4_BYTE) \
	op(EPixFormat::NV12) \
	op(EPixFormat::NV21) \
	op(EPixFormat::ARGB) \
	op(EPixFormat::RGBA) \
	op(EPixFormat::ABGR) \
	op(EPixFormat::BGRA) 

enum class EPixFormat : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPixFormat>();

#define FOREACH_ENUM_ECODER(op) \
	op(ECoder::H264) 

enum class ECoder : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ECoder>();

#define FOREACH_ENUM_EPRESETPARAM(op) \
	op(EPresetParam::ULTRAFAST) \
	op(EPresetParam::SUPERFAST) \
	op(EPresetParam::VERYFAST) \
	op(EPresetParam::FASTER) \
	op(EPresetParam::FAST) \
	op(EPresetParam::MEDIUM) \
	op(EPresetParam::SLOW) \
	op(EPresetParam::SLOWER) \
	op(EPresetParam::VERYSLOW) \
	op(EPresetParam::PLACEBO) 

enum class EPresetParam : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EPresetParam>();

#define FOREACH_ENUM_ETUNEPARAM(op) \
	op(ETuneParam::FILM) \
	op(ETuneParam::ANIMATION) \
	op(ETuneParam::GRAIN) \
	op(ETuneParam::STILLIMAGE) \
	op(ETuneParam::PSNR) \
	op(ETuneParam::SSIM) \
	op(ETuneParam::FASTDECODE) \
	op(ETuneParam::ZEROLATENCY) 

enum class ETuneParam : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ETuneParam>();

#define FOREACH_ENUM_ESCALEFLAG(op) \
	op(EScaleFlag::E_SWS_FAST_BILINEAR) \
	op(EScaleFlag::E_SWS_BILINEAR) \
	op(EScaleFlag::E_SWS_BICUBIC) \
	op(EScaleFlag::E_SWS_X) \
	op(EScaleFlag::E_SWS_POINT) \
	op(EScaleFlag::E_SWS_AREA) \
	op(EScaleFlag::E_SWS_BICUBLIN) \
	op(EScaleFlag::E_SWS_GAUSS) \
	op(EScaleFlag::E_SWS_SINC) \
	op(EScaleFlag::E_SWS_LANCZOS) \
	op(EScaleFlag::E_SWS_SPLINE) 

enum class EScaleFlag : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EScaleFlag>();

#define FOREACH_ENUM_ESAMPLERATE(op) \
	op(ESampleRate::E_6000) \
	op(ESampleRate::E_8000) \
	op(ESampleRate::E_11025) \
	op(ESampleRate::E_16000) \
	op(ESampleRate::E_22050) \
	op(ESampleRate::E_32000) \
	op(ESampleRate::E_44100) \
	op(ESampleRate::E_48000) \
	op(ESampleRate::E_64000) \
	op(ESampleRate::E_88200) \
	op(ESampleRate::E_96000) \
	op(ESampleRate::E_176400) \
	op(ESampleRate::E_192000) 

enum class ESampleRate : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ESampleRate>();

#define FOREACH_ENUM_ESAMPLEFORMAT(op) \
	op(ESampleFormat::E_SAMPLE_FMT_U8) \
	op(ESampleFormat::E_SAMPLE_FMT_S16) \
	op(ESampleFormat::E_SAMPLE_FMT_S32) \
	op(ESampleFormat::E_SAMPLE_FMT_FLT) \
	op(ESampleFormat::E_SAMPLE_FMT_DBL) \
	op(ESampleFormat::E_SAMPLE_FMT_U8P) \
	op(ESampleFormat::E_SAMPLE_FMT_S16P) \
	op(ESampleFormat::E_SAMPLE_FMT_S32P) \
	op(ESampleFormat::E_SAMPLE_FMT_FLTP) \
	op(ESampleFormat::E_SAMPLE_FMT_DBLP) \
	op(ESampleFormat::E_SAMPLE_FMT_S64) \
	op(ESampleFormat::E_SAMPLE_FMT_S64P) \
	op(ESampleFormat::E_SAMPLE_FMT_NB) 

enum class ESampleFormat : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<ESampleFormat>();

#define FOREACH_ENUM_ECHANNELLAYOUT(op) \
	op(EChannelLayout::E_CH_LAYOUT_MONO) \
	op(EChannelLayout::E_CH_LAYOUT_STEREO) \
	op(EChannelLayout::E_CH_LAYOUT_2POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_2_1) \
	op(EChannelLayout::E_CH_LAYOUT_SURROUND) \
	op(EChannelLayout::E_CH_LAYOUT_3POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_4POINT0) \
	op(EChannelLayout::E_CH_LAYOUT_4POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_2_2) \
	op(EChannelLayout::E_CH_LAYOUT_QUAD) \
	op(EChannelLayout::E_CH_LAYOUT_5POINT0) \
	op(EChannelLayout::E_CH_LAYOUT_5POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_5POINT0_BACK) \
	op(EChannelLayout::E_CH_LAYOUT_5POINT1_BACK) \
	op(EChannelLayout::E_CH_LAYOUT_6POINT0) \
	op(EChannelLayout::E_CH_LAYOUT_6POINT0_FRONT) \
	op(EChannelLayout::E_CH_LAYOUT_HEXAGONAL) \
	op(EChannelLayout::E_CH_LAYOUT_6POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_6POINT1_BACK) \
	op(EChannelLayout::E_CH_LAYOUT_6POINT1_FRONT) \
	op(EChannelLayout::E_CH_LAYOUT_7POINT0) \
	op(EChannelLayout::E_CH_LAYOUT_7POINT0_FRONT) \
	op(EChannelLayout::E_CH_LAYOUT_7POINT1) \
	op(EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE) \
	op(EChannelLayout::E_CH_LAYOUT_7POINT1_WIDE_BACK) \
	op(EChannelLayout::E_CH_LAYOUT_OCTAGONAL) \
	op(EChannelLayout::E_CH_LAYOUT_HEXADECAGONAL) \
	op(EChannelLayout::E_CH_LAYOUT_STEREO_DOWNMIX) \
	op(EChannelLayout::E_CH_LAYOUT_22POINT2) 

enum class EChannelLayout : uint8;
template<> FFMPEGEXTENSION_API UEnum* StaticEnum<EChannelLayout>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
