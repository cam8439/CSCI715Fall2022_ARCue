// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FVector;
struct FRotator;
class USoundAttenuation;
class USoundConcurrency;
class UAudioComponent;
class UObject;
class AActor;
#ifdef PARALLELCUBEAUDIOANALYZER_AudioAnalyzerSoundWave_generated_h
#error "AudioAnalyzerSoundWave.generated.h already included, missing '#pragma once' in AudioAnalyzerSoundWave.h"
#endif
#define PARALLELCUBEAUDIOANALYZER_AudioAnalyzerSoundWave_generated_h

#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_13_DELEGATE \
static inline void FPlaybackDelegateSoundWave_DelegateWrapper(const FMulticastScriptDelegate& PlaybackDelegateSoundWave) \
{ \
	PlaybackDelegateSoundWave.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_SPARSE_DATA
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execGetRemainingLoops); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execPauseSound); \
	DECLARE_FUNCTION(execAsyncStopSound);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execCreateSound2D); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execPlaySound2D); \
	DECLARE_FUNCTION(execGetRemainingLoops); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execPauseSound); \
	DECLARE_FUNCTION(execAsyncStopSound);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSoundWave(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerSoundWave)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerSoundWave(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerSoundWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerSoundWave)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzerSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerSoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerSoundWave(UAudioAnalyzerSoundWave&&); \
	NO_API UAudioAnalyzerSoundWave(const UAudioAnalyzerSoundWave&); \
public:


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzerSoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerSoundWave(UAudioAnalyzerSoundWave&&); \
	NO_API UAudioAnalyzerSoundWave(const UAudioAnalyzerSoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerSoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerSoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerSoundWave)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_PRIVATE_PROPERTY_OFFSET
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_18_PROLOG
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_RPC_WRAPPERS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_INCLASS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_INCLASS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerSoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Public_AudioAnalyzerSoundWave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
