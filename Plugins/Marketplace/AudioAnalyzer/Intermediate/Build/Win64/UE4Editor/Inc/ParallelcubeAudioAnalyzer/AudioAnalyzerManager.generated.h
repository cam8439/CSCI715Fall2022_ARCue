// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioAnalyzerSoundWave;
class UChannelFResult;
enum class EChannelSelectionMode : uint8;
class UChannelBResult;
class UChannelIResult;
struct FVector2D;
enum class ESpectrumType : uint8;
enum class EAudioFormat : uint8;
class UAudioComponent;
enum class EAudioDepth : uint8;
#ifdef PARALLELCUBEAUDIOANALYZER_AudioAnalyzerManager_generated_h
#error "AudioAnalyzerManager.generated.h already included, missing '#pragma once' in AudioAnalyzerManager.h"
#endif
#define PARALLELCUBEAUDIOANALYZER_AudioAnalyzerManager_generated_h

#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_25_DELEGATE \
struct _Script_ParallelcubeAudioAnalyzer_eventConstructSoundWaveDelegate_Parms \
{ \
	UAudioAnalyzerSoundWave* SoundWaveResult; \
	bool BoolResult; \
}; \
static inline void FConstructSoundWaveDelegate_DelegateWrapper(const FMulticastScriptDelegate& ConstructSoundWaveDelegate, UAudioAnalyzerSoundWave* SoundWaveResult, bool BoolResult) \
{ \
	_Script_ParallelcubeAudioAnalyzer_eventConstructSoundWaveDelegate_Parms Parms; \
	Parms.SoundWaveResult=SoundWaveResult; \
	Parms.BoolResult=BoolResult ? true : false; \
	ConstructSoundWaveDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_24_DELEGATE \
struct _Script_ParallelcubeAudioAnalyzer_eventInitAudioDelegate_Parms \
{ \
	bool BoolResult; \
}; \
static inline void FInitAudioDelegate_DelegateWrapper(const FMulticastScriptDelegate& InitAudioDelegate, bool BoolResult) \
{ \
	_Script_ParallelcubeAudioAnalyzer_eventInitAudioDelegate_Parms Parms; \
	Parms.BoolResult=BoolResult ? true : false; \
	InitAudioDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_23_DELEGATE \
struct _Script_ParallelcubeAudioAnalyzer_eventCaptureDelegate_Parms \
{ \
	TArray<uint8> CaptureBuffer; \
}; \
static inline void FCaptureDelegate_DelegateWrapper(const FMulticastScriptDelegate& CaptureDelegate, TArray<uint8> const& CaptureBuffer) \
{ \
	_Script_ParallelcubeAudioAnalyzer_eventCaptureDelegate_Parms Parms; \
	Parms.CaptureBuffer=CaptureBuffer; \
	CaptureDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_22_DELEGATE \
static inline void FPlaybackDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlaybackDelegate) \
{ \
	PlaybackDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_SPARSE_DATA
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannelFResult(); \
	friend struct Z_Construct_UClass_UChannelFResult_Statics; \
public: \
	DECLARE_CLASS(UChannelFResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelFResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUChannelFResult(); \
	friend struct Z_Construct_UClass_UChannelFResult_Statics; \
public: \
	DECLARE_CLASS(UChannelFResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelFResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannelFResult(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannelFResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelFResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelFResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelFResult(UChannelFResult&&); \
	NO_API UChannelFResult(const UChannelFResult&); \
public:


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelFResult(UChannelFResult&&); \
	NO_API UChannelFResult(const UChannelFResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelFResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelFResult); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChannelFResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_PRIVATE_PROPERTY_OFFSET
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_66_PROLOG
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_RPC_WRAPPERS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_INCLASS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_INCLASS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<class UChannelFResult>();

#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_SPARSE_DATA
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannelIResult(); \
	friend struct Z_Construct_UClass_UChannelIResult_Statics; \
public: \
	DECLARE_CLASS(UChannelIResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelIResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUChannelIResult(); \
	friend struct Z_Construct_UClass_UChannelIResult_Statics; \
public: \
	DECLARE_CLASS(UChannelIResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelIResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannelIResult(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannelIResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelIResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelIResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelIResult(UChannelIResult&&); \
	NO_API UChannelIResult(const UChannelIResult&); \
public:


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelIResult(UChannelIResult&&); \
	NO_API UChannelIResult(const UChannelIResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelIResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelIResult); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChannelIResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_PRIVATE_PROPERTY_OFFSET
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_118_PROLOG
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_RPC_WRAPPERS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_INCLASS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_INCLASS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<class UChannelIResult>();

#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_SPARSE_DATA
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChannelResult); \
	DECLARE_FUNCTION(execGetNumChannels);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannelBResult(); \
	friend struct Z_Construct_UClass_UChannelBResult_Statics; \
public: \
	DECLARE_CLASS(UChannelBResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelBResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUChannelBResult(); \
	friend struct Z_Construct_UClass_UChannelBResult_Statics; \
public: \
	DECLARE_CLASS(UChannelBResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UChannelBResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannelBResult(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannelBResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelBResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelBResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelBResult(UChannelBResult&&); \
	NO_API UChannelBResult(const UChannelBResult&); \
public:


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelBResult(UChannelBResult&&); \
	NO_API UChannelBResult(const UChannelBResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelBResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelBResult); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChannelBResult)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_PRIVATE_PROPERTY_OFFSET
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_169_PROLOG
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_RPC_WRAPPERS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_INCLASS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_INCLASS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<class UChannelBResult>();

#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_SPARSE_DATA
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAsyncInitAudioRunning); \
	DECLARE_FUNCTION(execSetEnableMetadataLoad); \
	DECLARE_FUNCTION(execAmplitudeToDB); \
	DECLARE_FUNCTION(execFrequencyToMIDI); \
	DECLARE_FUNCTION(execGetInputAudioDevices); \
	DECLARE_FUNCTION(execGetOutputAudioDevices); \
	DECLARE_FUNCTION(execFolderExists); \
	DECLARE_FUNCTION(execDeleteFolder); \
	DECLARE_FUNCTION(execCreateDirectoryTree); \
	DECLARE_FUNCTION(execDeleteFolderFilesByFilename); \
	DECLARE_FUNCTION(execDeleteFolderFilesByExtension); \
	DECLARE_FUNCTION(execGetFolderFiles); \
	DECLARE_FUNCTION(execGetAndroidProjectFolder); \
	DECLARE_FUNCTION(execGetAmplitudeSectionByChannel); \
	DECLARE_FUNCTION(execGetAmplitudeSection); \
	DECLARE_FUNCTION(execGetPitchTrackingByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageAndVarianceByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsWThresholdByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWThresholdByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingByChannel); \
	DECLARE_FUNCTION(execGetSpectrumPeaksByChannel); \
	DECLARE_FUNCTION(execGetSpectrumByChannel); \
	DECLARE_FUNCTION(execGetAmplitudeByChannel); \
	DECLARE_FUNCTION(execGetPitchTracking); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageAndVariance); \
	DECLARE_FUNCTION(execGetBeatTrackingAverage); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsWThreshold); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimits); \
	DECLARE_FUNCTION(execGetBeatTrackingWThreshold); \
	DECLARE_FUNCTION(execGetBeatTracking); \
	DECLARE_FUNCTION(execGetSpectrumPeaks); \
	DECLARE_FUNCTION(execGetSpectrum); \
	DECLARE_FUNCTION(execGetAmplitude); \
	DECLARE_FUNCTION(execInitPitchTrackingConfig); \
	DECLARE_FUNCTION(execInitBeatTrackingConfigWLimits); \
	DECLARE_FUNCTION(execInitBeatTrackingConfig); \
	DECLARE_FUNCTION(execInitSpectrumConfigWLimits); \
	DECLARE_FUNCTION(execInitSpectrumConfig); \
	DECLARE_FUNCTION(execInitAmplitudeConfig); \
	DECLARE_FUNCTION(execGetOVRDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetStreamDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetAudioMetadataArt); \
	DECLARE_FUNCTION(execGetAudioMetadata); \
	DECLARE_FUNCTION(execGetLoopbackDeviceAudioInfo); \
	DECLARE_FUNCTION(execGetCapturerDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetPlayerDeviceAudioInfo); \
	DECLARE_FUNCTION(execGetMetadataArt); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetLinkedAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponentRemainingLoops); \
	DECLARE_FUNCTION(execIsAudioComponentPaused); \
	DECLARE_FUNCTION(execIsAudioComponentPlaying); \
	DECLARE_FUNCTION(execGetAudioComponentTotalDuration); \
	DECLARE_FUNCTION(execGetAudioComponentPlaybackTime); \
	DECLARE_FUNCTION(execSetAudioComponentPlaybackTime); \
	DECLARE_FUNCTION(execSetPausedAudioComponent); \
	DECLARE_FUNCTION(execPauseAudioComponent); \
	DECLARE_FUNCTION(execAsyncStopAudioComponent); \
	DECLARE_FUNCTION(execStopAudioComponent); \
	DECLARE_FUNCTION(execPlayAudioComponent); \
	DECLARE_FUNCTION(execGetOVRCaptureTime); \
	DECLARE_FUNCTION(execIsOVRCapturing); \
	DECLARE_FUNCTION(execStopOVRCapture); \
	DECLARE_FUNCTION(execStartOVRCapture); \
	DECLARE_FUNCTION(execGetStreamCaptureTime); \
	DECLARE_FUNCTION(execIsStreamCapturing); \
	DECLARE_FUNCTION(execCloseStreamCapture); \
	DECLARE_FUNCTION(execFeedStreamCapture); \
	DECLARE_FUNCTION(execOpenStreamCapture); \
	DECLARE_FUNCTION(execGetAudioTotalDuration); \
	DECLARE_FUNCTION(execGetLoopbackCaptureTime); \
	DECLARE_FUNCTION(execIsLoopbackCapturing); \
	DECLARE_FUNCTION(execStopLoopback); \
	DECLARE_FUNCTION(execStartLoopback); \
	DECLARE_FUNCTION(execSetCaptureVolume); \
	DECLARE_FUNCTION(execGetCaptureVolume); \
	DECLARE_FUNCTION(execGetCaptureTime); \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCapture); \
	DECLARE_FUNCTION(execGetRemainingLoops); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execSetPlaybackVolume); \
	DECLARE_FUNCTION(execGetPlaybackVolume); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlayEx); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execUnlinkAudioComponent); \
	DECLARE_FUNCTION(execLinkAudioComponent); \
	DECLARE_FUNCTION(execGetDefaultDevicesOVRAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicesOVRAudio); \
	DECLARE_FUNCTION(execUnloadOVRAudio); \
	DECLARE_FUNCTION(execInitOVRAudio); \
	DECLARE_FUNCTION(execUnloadSoundWave); \
	DECLARE_FUNCTION(execUnloadExtractorAudio); \
	DECLARE_FUNCTION(execGetSoundWave); \
	DECLARE_FUNCTION(execIsAsyncConstructSoundWaveRunning); \
	DECLARE_FUNCTION(execAsyncConstructSoundWave); \
	DECLARE_FUNCTION(execConstructSoundWave); \
	DECLARE_FUNCTION(execIsAsyncInitExtractorAudioRunning); \
	DECLARE_FUNCTION(execAsyncInitExtractorAudio); \
	DECLARE_FUNCTION(execInitExtractorAudio); \
	DECLARE_FUNCTION(execGetDefaultDeviceStreamAudio); \
	DECLARE_FUNCTION(execSetDefaultDeviceStreamAudio); \
	DECLARE_FUNCTION(execUnloadStreamAudio); \
	DECLARE_FUNCTION(execInitStreamAudio); \
	DECLARE_FUNCTION(execGetDefaultDeviceLoopbackAudio); \
	DECLARE_FUNCTION(execSetDefaultDeviceLoopbackAudio); \
	DECLARE_FUNCTION(execUnloadLoopbackAudio); \
	DECLARE_FUNCTION(execInitLoopbackAudioEx); \
	DECLARE_FUNCTION(execInitLoopbackAudio); \
	DECLARE_FUNCTION(execGetDefaultDevicesCapturerAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicesCapturerAudio); \
	DECLARE_FUNCTION(execUnloadCapturerAudio); \
	DECLARE_FUNCTION(execInitCapturerAudioEx); \
	DECLARE_FUNCTION(execInitCapturerAudio); \
	DECLARE_FUNCTION(execGetDefaultDevicePlayerAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicePlayerAudio); \
	DECLARE_FUNCTION(execUnloadPlayerAudio); \
	DECLARE_FUNCTION(execIsAsyncInitPlayerAudioRunning); \
	DECLARE_FUNCTION(execAsyncInitPlayerAudio); \
	DECLARE_FUNCTION(execInitPlayerAudioEx); \
	DECLARE_FUNCTION(execInitPlayerAudio);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAsyncInitAudioRunning); \
	DECLARE_FUNCTION(execSetEnableMetadataLoad); \
	DECLARE_FUNCTION(execAmplitudeToDB); \
	DECLARE_FUNCTION(execFrequencyToMIDI); \
	DECLARE_FUNCTION(execGetInputAudioDevices); \
	DECLARE_FUNCTION(execGetOutputAudioDevices); \
	DECLARE_FUNCTION(execFolderExists); \
	DECLARE_FUNCTION(execDeleteFolder); \
	DECLARE_FUNCTION(execCreateDirectoryTree); \
	DECLARE_FUNCTION(execDeleteFolderFilesByFilename); \
	DECLARE_FUNCTION(execDeleteFolderFilesByExtension); \
	DECLARE_FUNCTION(execGetFolderFiles); \
	DECLARE_FUNCTION(execGetAndroidProjectFolder); \
	DECLARE_FUNCTION(execGetAmplitudeSectionByChannel); \
	DECLARE_FUNCTION(execGetAmplitudeSection); \
	DECLARE_FUNCTION(execGetPitchTrackingByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageAndVarianceByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsWThresholdByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingWThresholdByChannel); \
	DECLARE_FUNCTION(execGetBeatTrackingByChannel); \
	DECLARE_FUNCTION(execGetSpectrumPeaksByChannel); \
	DECLARE_FUNCTION(execGetSpectrumByChannel); \
	DECLARE_FUNCTION(execGetAmplitudeByChannel); \
	DECLARE_FUNCTION(execGetPitchTracking); \
	DECLARE_FUNCTION(execGetBeatTrackingAverageAndVariance); \
	DECLARE_FUNCTION(execGetBeatTrackingAverage); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimitsWThreshold); \
	DECLARE_FUNCTION(execGetBeatTrackingWLimits); \
	DECLARE_FUNCTION(execGetBeatTrackingWThreshold); \
	DECLARE_FUNCTION(execGetBeatTracking); \
	DECLARE_FUNCTION(execGetSpectrumPeaks); \
	DECLARE_FUNCTION(execGetSpectrum); \
	DECLARE_FUNCTION(execGetAmplitude); \
	DECLARE_FUNCTION(execInitPitchTrackingConfig); \
	DECLARE_FUNCTION(execInitBeatTrackingConfigWLimits); \
	DECLARE_FUNCTION(execInitBeatTrackingConfig); \
	DECLARE_FUNCTION(execInitSpectrumConfigWLimits); \
	DECLARE_FUNCTION(execInitSpectrumConfig); \
	DECLARE_FUNCTION(execInitAmplitudeConfig); \
	DECLARE_FUNCTION(execGetOVRDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetStreamDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetAudioMetadataArt); \
	DECLARE_FUNCTION(execGetAudioMetadata); \
	DECLARE_FUNCTION(execGetLoopbackDeviceAudioInfo); \
	DECLARE_FUNCTION(execGetCapturerDevicesAudioInfo); \
	DECLARE_FUNCTION(execGetPlayerDeviceAudioInfo); \
	DECLARE_FUNCTION(execGetMetadataArt); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetLinkedAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponentRemainingLoops); \
	DECLARE_FUNCTION(execIsAudioComponentPaused); \
	DECLARE_FUNCTION(execIsAudioComponentPlaying); \
	DECLARE_FUNCTION(execGetAudioComponentTotalDuration); \
	DECLARE_FUNCTION(execGetAudioComponentPlaybackTime); \
	DECLARE_FUNCTION(execSetAudioComponentPlaybackTime); \
	DECLARE_FUNCTION(execSetPausedAudioComponent); \
	DECLARE_FUNCTION(execPauseAudioComponent); \
	DECLARE_FUNCTION(execAsyncStopAudioComponent); \
	DECLARE_FUNCTION(execStopAudioComponent); \
	DECLARE_FUNCTION(execPlayAudioComponent); \
	DECLARE_FUNCTION(execGetOVRCaptureTime); \
	DECLARE_FUNCTION(execIsOVRCapturing); \
	DECLARE_FUNCTION(execStopOVRCapture); \
	DECLARE_FUNCTION(execStartOVRCapture); \
	DECLARE_FUNCTION(execGetStreamCaptureTime); \
	DECLARE_FUNCTION(execIsStreamCapturing); \
	DECLARE_FUNCTION(execCloseStreamCapture); \
	DECLARE_FUNCTION(execFeedStreamCapture); \
	DECLARE_FUNCTION(execOpenStreamCapture); \
	DECLARE_FUNCTION(execGetAudioTotalDuration); \
	DECLARE_FUNCTION(execGetLoopbackCaptureTime); \
	DECLARE_FUNCTION(execIsLoopbackCapturing); \
	DECLARE_FUNCTION(execStopLoopback); \
	DECLARE_FUNCTION(execStartLoopback); \
	DECLARE_FUNCTION(execSetCaptureVolume); \
	DECLARE_FUNCTION(execGetCaptureVolume); \
	DECLARE_FUNCTION(execGetCaptureTime); \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCapture); \
	DECLARE_FUNCTION(execGetRemainingLoops); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetTotalDuration); \
	DECLARE_FUNCTION(execSetPlaybackVolume); \
	DECLARE_FUNCTION(execGetPlaybackVolume); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlayEx); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execUnlinkAudioComponent); \
	DECLARE_FUNCTION(execLinkAudioComponent); \
	DECLARE_FUNCTION(execGetDefaultDevicesOVRAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicesOVRAudio); \
	DECLARE_FUNCTION(execUnloadOVRAudio); \
	DECLARE_FUNCTION(execInitOVRAudio); \
	DECLARE_FUNCTION(execUnloadSoundWave); \
	DECLARE_FUNCTION(execUnloadExtractorAudio); \
	DECLARE_FUNCTION(execGetSoundWave); \
	DECLARE_FUNCTION(execIsAsyncConstructSoundWaveRunning); \
	DECLARE_FUNCTION(execAsyncConstructSoundWave); \
	DECLARE_FUNCTION(execConstructSoundWave); \
	DECLARE_FUNCTION(execIsAsyncInitExtractorAudioRunning); \
	DECLARE_FUNCTION(execAsyncInitExtractorAudio); \
	DECLARE_FUNCTION(execInitExtractorAudio); \
	DECLARE_FUNCTION(execGetDefaultDeviceStreamAudio); \
	DECLARE_FUNCTION(execSetDefaultDeviceStreamAudio); \
	DECLARE_FUNCTION(execUnloadStreamAudio); \
	DECLARE_FUNCTION(execInitStreamAudio); \
	DECLARE_FUNCTION(execGetDefaultDeviceLoopbackAudio); \
	DECLARE_FUNCTION(execSetDefaultDeviceLoopbackAudio); \
	DECLARE_FUNCTION(execUnloadLoopbackAudio); \
	DECLARE_FUNCTION(execInitLoopbackAudioEx); \
	DECLARE_FUNCTION(execInitLoopbackAudio); \
	DECLARE_FUNCTION(execGetDefaultDevicesCapturerAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicesCapturerAudio); \
	DECLARE_FUNCTION(execUnloadCapturerAudio); \
	DECLARE_FUNCTION(execInitCapturerAudioEx); \
	DECLARE_FUNCTION(execInitCapturerAudio); \
	DECLARE_FUNCTION(execGetDefaultDevicePlayerAudio); \
	DECLARE_FUNCTION(execSetDefaultDevicePlayerAudio); \
	DECLARE_FUNCTION(execUnloadPlayerAudio); \
	DECLARE_FUNCTION(execIsAsyncInitPlayerAudioRunning); \
	DECLARE_FUNCTION(execAsyncInitPlayerAudio); \
	DECLARE_FUNCTION(execInitPlayerAudioEx); \
	DECLARE_FUNCTION(execInitPlayerAudio);


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerManager(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerManager_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerManager)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_INCLASS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerManager(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerManager_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParallelcubeAudioAnalyzer"), NO_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerManager)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioAnalyzerManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerManager(UAudioAnalyzerManager&&); \
	NO_API UAudioAnalyzerManager(const UAudioAnalyzerManager&); \
public:


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioAnalyzerManager(UAudioAnalyzerManager&&); \
	NO_API UAudioAnalyzerManager(const UAudioAnalyzerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioAnalyzerManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioAnalyzerManager)


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___amplitudeByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _amplitudeByChannel); } \
	FORCEINLINE static uint32 __PPO___frequencyByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _frequencyByChannel); } \
	FORCEINLINE static uint32 __PPO___averageFrequencyByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _averageFrequencyByChannel); } \
	FORCEINLINE static uint32 __PPO___frequencyPeaksByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _frequencyPeaksByChannel); } \
	FORCEINLINE static uint32 __PPO___frequencyPeaksEnergyByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _frequencyPeaksEnergyByChannel); } \
	FORCEINLINE static uint32 __PPO___beatOnsetByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _beatOnsetByChannel); } \
	FORCEINLINE static uint32 __PPO___frequencyBTByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _frequencyBTByChannel); } \
	FORCEINLINE static uint32 __PPO___averageFrequencyBTByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _averageFrequencyBTByChannel); } \
	FORCEINLINE static uint32 __PPO___varianceFrequencyBTByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _varianceFrequencyBTByChannel); } \
	FORCEINLINE static uint32 __PPO___BPMCurrentByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _BPMCurrentByChannel); } \
	FORCEINLINE static uint32 __PPO___BPMTotalByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _BPMTotalByChannel); } \
	FORCEINLINE static uint32 __PPO___pitchTrackingByChannel() { return STRUCT_OFFSET(UAudioAnalyzerManager, _pitchTrackingByChannel); } \
	FORCEINLINE static uint32 __PPO___soundWave() { return STRUCT_OFFSET(UAudioAnalyzerManager, _soundWave); }


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_221_PROLOG
#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_RPC_WRAPPERS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_INCLASS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_PRIVATE_PROPERTY_OFFSET \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_SPARSE_DATA \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_INCLASS_NO_PURE_DECLS \
	ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARCue4_26_Plugins_Marketplace_AudioAnalyzer_Source_AudioAnalyzer_Classes_AudioAnalyzerManager_h


#define FOREACH_ENUM_EAUDIODEPTH(op) \
	op(EAudioDepth::B_16) \
	op(EAudioDepth::B_32) 

enum class EAudioDepth : uint8;
template<> PARALLELCUBEAUDIOANALYZER_API UEnum* StaticEnum<EAudioDepth>();

#define FOREACH_ENUM_EAUDIOFORMAT(op) \
	op(EAudioFormat::Unsigned_Int) \
	op(EAudioFormat::Signed_Int) \
	op(EAudioFormat::Float) 

enum class EAudioFormat : uint8;
template<> PARALLELCUBEAUDIOANALYZER_API UEnum* StaticEnum<EAudioFormat>();

#define FOREACH_ENUM_ECHANNELSELECTIONMODE(op) \
	op(EChannelSelectionMode::All_in_one) \
	op(EChannelSelectionMode::Select_one) \
	op(EChannelSelectionMode::Split_all) 

enum class EChannelSelectionMode : uint8;
template<> PARALLELCUBEAUDIOANALYZER_API UEnum* StaticEnum<EChannelSelectionMode>();

#define FOREACH_ENUM_ESPECTRUMTYPE(op) \
	op(ESpectrumType::ST_Linear) \
	op(ESpectrumType::ST_Log) 

enum class ESpectrumType : uint8;
template<> PARALLELCUBEAUDIOANALYZER_API UEnum* StaticEnum<ESpectrumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
