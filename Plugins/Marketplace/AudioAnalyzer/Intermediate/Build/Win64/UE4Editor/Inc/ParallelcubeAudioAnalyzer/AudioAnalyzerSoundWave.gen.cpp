// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzer/Public/AudioAnalyzerSoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioAnalyzerSoundWave() {}
// Cross Module References
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer();
	PARALLELCUBEAUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSoundWave_NoRegister();
	PARALLELCUBEAUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerSoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer, nullptr, "PlaybackDelegateSoundWave__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execSpawnSoundAttached)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundAttenuation,Z_Param_Attenuation_Settings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->SpawnSoundAttached(Z_Param_AttachToComponent,Z_Param_AttachPointName,Z_Param_Location,Z_Param_Rotation,EAttachLocation::Type(Z_Param_LocationType),Z_Param_bStopWhenAttachedToDestroyed,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_Attenuation_Settings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execSpawnSoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundAttenuation,Z_Param_Attenuation_Settings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->SpawnSoundAtLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_Attenuation_Settings,Z_Param_ConcurrencySettings,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execPlaySoundAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundAttenuation,Z_Param_Attenuation_Settings);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundAtLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Rotation,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_Attenuation_Settings,Z_Param_ConcurrencySettings,Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execCreateSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->CreateSound2D(Z_Param_WorldContextObject,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execSpawnSound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_UBOOL(Z_Param_bPersistAcrossLevelTransition);
		P_GET_UBOOL(Z_Param_bAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAudioComponent**)Z_Param__Result=P_THIS->SpawnSound2D(Z_Param_WorldContextObject,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_ConcurrencySettings,Z_Param_bPersistAcrossLevelTransition,Z_Param_bAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execPlaySound2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_Loops);
		P_GET_OBJECT(USoundConcurrency,Z_Param_ConcurrencySettings);
		P_GET_OBJECT(AActor,Z_Param_OwningActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound2D(Z_Param_WorldContextObject,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_Loops,Z_Param_ConcurrencySettings,Z_Param_OwningActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execGetRemainingLoops)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainingLoops();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execGetTotalDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTotalDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execSetPlaybackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackTime(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execGetPlaybackTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_Pause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_Pause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execPauseSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioAnalyzerSoundWave::execAsyncStopSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncStopSound();
		P_NATIVE_END;
	}
	void UAudioAnalyzerSoundWave::StaticRegisterNativesUAudioAnalyzerSoundWave()
	{
		UClass* Class = UAudioAnalyzerSoundWave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncStopSound", &UAudioAnalyzerSoundWave::execAsyncStopSound },
			{ "CreateSound2D", &UAudioAnalyzerSoundWave::execCreateSound2D },
			{ "GetDuration", &UAudioAnalyzerSoundWave::execGetDuration },
			{ "GetPlaybackTime", &UAudioAnalyzerSoundWave::execGetPlaybackTime },
			{ "GetRemainingLoops", &UAudioAnalyzerSoundWave::execGetRemainingLoops },
			{ "GetTotalDuration", &UAudioAnalyzerSoundWave::execGetTotalDuration },
			{ "IsPaused", &UAudioAnalyzerSoundWave::execIsPaused },
			{ "IsPlaying", &UAudioAnalyzerSoundWave::execIsPlaying },
			{ "PauseSound", &UAudioAnalyzerSoundWave::execPauseSound },
			{ "PlaySound2D", &UAudioAnalyzerSoundWave::execPlaySound2D },
			{ "PlaySoundAtLocation", &UAudioAnalyzerSoundWave::execPlaySoundAtLocation },
			{ "SetPaused", &UAudioAnalyzerSoundWave::execSetPaused },
			{ "SetPlaybackTime", &UAudioAnalyzerSoundWave::execSetPlaybackTime },
			{ "SpawnSound2D", &UAudioAnalyzerSoundWave::execSpawnSound2D },
			{ "SpawnSoundAtLocation", &UAudioAnalyzerSoundWave::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", &UAudioAnalyzerSoundWave::execSpawnSoundAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Stops playback\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Stops playback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "AsyncStopSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics
	{
		struct AudioAnalyzerSoundWave_eventCreateSound2D_Parms
		{
			const UObject* WorldContextObject;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventCreateSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventCreateSound2D_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventCreateSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventCreateSound2D_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventCreateSound2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/**\n\x09* Creates a sound with no attenuation, perfect for UI sounds. This does NOT play the sound\n\x09*\n\x09* * Not Replicated.\n\x09* @param WorldContextObject\x09\x09\x09\x09World Context Object\n\x09* @param VolumeMultiplier\x09\x09\x09\x09Multiplied with the volume to make the sound louder or softer.\n\x09* @param PitchMultiplier\x09\x09\x09\x09Multiplies the pitch.\n\x09* @param StartTime\x09\x09\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param ConcurrencySettings\x09\x09\x09Override concurrency settings package to play sound with\n\x09* @param bPersistAcrossLevelTransition\x09Whether the sound should continue to play when the map it was played in is unloaded\n\x09* @param bAutoDestroy\x09\x09\x09\x09\x09Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09* @return An audio component to manipulate the created sound\n\x09*/" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Creates a sound with no attenuation, perfect for UI sounds. This does NOT play the sound\n\n* Not Replicated.\n@param WorldContextObject                             World Context Object\n@param VolumeMultiplier                               Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier                                Multiplies the pitch.\n@param StartTime                                              How far in to the sound to begin playback at\n@param Loops                                                  Number of Loops (Default: 1)\n@param ConcurrencySettings                    Override concurrency settings package to play sound with\n@param bPersistAcrossLevelTransition  Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy                                   Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the created sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "CreateSound2D", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventCreateSound2D_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics
	{
		struct AudioAnalyzerSoundWave_eventGetDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns total player playback duration\n\x09* @return Playback duration\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns total player playback duration\n@return Playback duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "GetDuration", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventGetDuration_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics
	{
		struct AudioAnalyzerSoundWave_eventGetPlaybackTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns current playback position in seconds\n\x09* @return Playback position\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns current playback position in seconds\n@return Playback position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "GetPlaybackTime", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventGetPlaybackTime_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics
	{
		struct AudioAnalyzerSoundWave_eventGetRemainingLoops_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventGetRemainingLoops_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns remaining loops to play\n\x09* @return remaining loops\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns remaining loops to play\n@return remaining loops" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "GetRemainingLoops", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventGetRemainingLoops_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics
	{
		struct AudioAnalyzerSoundWave_eventGetTotalDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventGetTotalDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns total player playback duration\n\x09* @return Playback duration\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns total player playback duration\n@return Playback duration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "GetTotalDuration", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventGetTotalDuration_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics
	{
		struct AudioAnalyzerSoundWave_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventIsPaused_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns playback pause state\n\x09* @return playback is paused\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns playback pause state\n@return playback is paused" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "IsPaused", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventIsPaused_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics
	{
		struct AudioAnalyzerSoundWave_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventIsPlaying_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Returns playback playing state\n\x09* @return playback is playing\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Returns playback playing state\n@return playback is playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "IsPlaying", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventIsPlaying_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Pauses playback if the device is in playing state\n\x09* UnPauses playback if the device has been paused previously\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Pauses playback if the device is in playing state\nUnPauses playback if the device has been paused previously" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "PauseSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics
	{
		struct AudioAnalyzerSoundWave_eventPlaySound2D_Parms
		{
			const UObject* WorldContextObject;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundConcurrency* ConcurrencySettings;
			AActor* OwningActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySound2D_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/**\n\x09* Plays a sound directly with no attenuation, perfect for UI sounds.\n\x09*\n\x09* * Fire and Forget.\n\x09* * Not Replicated.\n\x09* @param WorldContextObject\x09\x09World Context Object\n\x09* @param VolumeMultiplier\x09\x09Multiplied with the volume to make the sound louder or softer.\n\x09* @param PitchMultiplier\x09\x09Multiplies the pitch.\n\x09* @param StartTime\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param ConcurrencySettings\x09Override concurrency settings package to play sound with\n\x09* @param OwningActor\x09\x09\x09The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner.\n\x09*/" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Plays a sound directly with no attenuation, perfect for UI sounds.\n\n* Fire and Forget.\n* Not Replicated.\n@param WorldContextObject             World Context Object\n@param VolumeMultiplier               Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier                Multiplies the pitch.\n@param StartTime                              How far in to the sound to begin playback at\n@param Loops                                  Number of Loops (Default: 1)\n@param ConcurrencySettings    Override concurrency settings package to play sound with\n@param OwningActor                    The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "PlaySound2D", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventPlaySound2D_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics
	{
		struct AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundAttenuation* Attenuation_Settings;
			USoundConcurrency* ConcurrencySettings;
			AActor* OwningActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attenuation_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Attenuation_Settings = { "Attenuation_Settings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, Attenuation_Settings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_Attenuation_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::NewProp_OwningActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/**\n\x09* Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n\x09* @param WorldContextObject\x09\x09\x09\x09World Context Object\n\x09* @param Location\x09\x09\x09\x09\x09\x09World position to play sound at\n\x09* @param Rotation\x09\x09\x09\x09\x09\x09World rotation to play sound at\n\x09* @param VolumeMultiplier\x09\x09\x09\x09Volume multiplier\n\x09* @param PitchMultiplier\x09\x09\x09\x09PitchMultiplier\n\x09* @param StartTime\x09\x09\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param Attenuation_Settings\x09\x09\x09Override attenuation settings package to play sound with\n\x09* @param ConcurrencySettings\x09\x09\x09Override concurrency settings package to play sound with\n\x09* @param OwningActor\x09\x09\x09\x09\x09The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner.\n\x09*/" },
		{ "CPP_Default_Attenuation_Settings", "None" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_OwningActor", "None" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Plays a sound at the given location. This is a fire and forget sound and does not travel with any actor. Replication is also not handled at this point.\n@param WorldContextObject                             World Context Object\n@param Location                                               World position to play sound at\n@param Rotation                                               World rotation to play sound at\n@param VolumeMultiplier                               Volume multiplier\n@param PitchMultiplier                                PitchMultiplier\n@param StartTime                                              How far in to the sound to begin playback at\n@param Loops                                                  Number of Loops (Default: 1)\n@param Attenuation_Settings                   Override attenuation settings package to play sound with\n@param ConcurrencySettings                    Override concurrency settings package to play sound with\n@param OwningActor                                    The actor to use as the \"owner\" for concurrency settings purposes. Allows PlaySound calls to do a concurrency limit per owner." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "PlaySoundAtLocation", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventPlaySoundAtLocation_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics
	{
		struct AudioAnalyzerSoundWave_eventSetPaused_Parms
		{
			bool Pause;
		};
		static void NewProp_Pause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::NewProp_Pause_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSetPaused_Parms*)Obj)->Pause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::NewProp_Pause = { "Pause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSetPaused_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::NewProp_Pause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::NewProp_Pause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Sets the playback state on pause/unpause state\n\x09* @param Pause\x09\x09\x09\x09New pause state\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Sets the playback state on pause/unpause state\n@param Pause                          New pause state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "SetPaused", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventSetPaused_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics
	{
		struct AudioAnalyzerSoundWave_eventSetPlaybackTime_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSetPlaybackTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Playback" },
		{ "Comment", "/**\n\x09* Sets current playback position\n\x09* @param Time\x09\x09New playback position in seconds\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Sets current playback position\n@param Time           New playback position in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "SetPlaybackTime", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventSetPlaybackTime_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics
	{
		struct AudioAnalyzerSoundWave_eventSpawnSound2D_Parms
		{
			const UObject* WorldContextObject;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundConcurrency* ConcurrencySettings;
			bool bPersistAcrossLevelTransition;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSpawnSound2D_Parms*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSpawnSound2D_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/**\n\x09* Spawns a sound with no attenuation, perfect for UI sounds.\n\x09*\n\x09* * Not Replicated.\n\x09* @param WorldContextObject\x09\x09\x09\x09World Context Object\n\x09* @param VolumeMultiplier\x09\x09\x09\x09Multiplied with the volume to make the sound louder or softer.\n\x09* @param PitchMultiplier\x09\x09\x09\x09Multiplies the pitch.\n\x09* @param StartTime\x09\x09\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param ConcurrencySettings\x09\x09\x09Override concurrency settings package to play sound with\n\x09* @param bPersistAcrossLevelTransition\x09Whether the sound should continue to play when the map it was played in is unloaded\n\x09* @param bAutoDestroy\x09\x09\x09\x09\x09Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09* @return An audio component to manipulate the spawned sound\n\x09*/" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bPersistAcrossLevelTransition", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Spawns a sound with no attenuation, perfect for UI sounds.\n\n* Not Replicated.\n@param WorldContextObject                             World Context Object\n@param VolumeMultiplier                               Multiplied with the volume to make the sound louder or softer.\n@param PitchMultiplier                                Multiplies the pitch.\n@param StartTime                                              How far in to the sound to begin playback at\n@param Loops                                                  Number of Loops (Default: 1)\n@param ConcurrencySettings                    Override concurrency settings package to play sound with\n@param bPersistAcrossLevelTransition  Whether the sound should continue to play when the map it was played in is unloaded\n@param bAutoDestroy                                   Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "SpawnSound2D", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventSpawnSound2D_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics
	{
		struct AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundAttenuation* Attenuation_Settings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attenuation_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Attenuation_Settings = { "Attenuation_Settings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, Attenuation_Settings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_Attenuation_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/**\n\x09* Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n\x09* @param WorldContextObject\x09\x09\x09\x09World Context Object\n\x09* @param Location\x09\x09\x09\x09\x09\x09World position to play sound at\n\x09* @param Rotation\x09\x09\x09\x09\x09\x09World rotation to play sound at\n\x09* @param VolumeMultiplier\x09\x09\x09\x09Volume multiplier\n\x09* @param PitchMultiplier\x09\x09\x09\x09PitchMultiplier\n\x09* @param StartTime\x09\x09\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param Attenuation_Settings\x09\x09\x09Override attenuation settings package to play sound with\n\x09* @param ConcurrencySettings\x09\x09\x09Override concurrency settings package to play sound with\n\x09* @param bAutoDestroy\x09\x09\x09\x09\x09Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09* @return An audio component to manipulate the spawned sound\n\x09*/" },
		{ "CPP_Default_Attenuation_Settings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Spawns a sound at the given location. This does not travel with any actor. Replication is also not handled at this point.\n@param WorldContextObject                             World Context Object\n@param Location                                               World position to play sound at\n@param Rotation                                               World rotation to play sound at\n@param VolumeMultiplier                               Volume multiplier\n@param PitchMultiplier                                PitchMultiplier\n@param StartTime                                              How far in to the sound to begin playback at\n@param Loops                                                  Number of Loops (Default: 1)\n@param Attenuation_Settings                   Override attenuation settings package to play sound with\n@param ConcurrencySettings                    Override concurrency settings package to play sound with\n@param bAutoDestroy                                   Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "SpawnSoundAtLocation", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventSpawnSoundAtLocation_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics
	{
		struct AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms
		{
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			int32 Loops;
			USoundAttenuation* Attenuation_Settings;
			USoundConcurrency* ConcurrencySettings;
			bool bAutoDestroy;
			UAudioComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Loops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Attenuation_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConcurrencySettings;
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Loops = { "Loops", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, Loops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Attenuation_Settings = { "Attenuation_Settings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, Attenuation_Settings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms), &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Loops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_Attenuation_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ConcurrencySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "AudioAnalyzerManager|SoundWave|Override" },
		{ "Comment", "/** Plays a sound attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n\x09* @param AttachToComponent\x09\x09\x09\x09""Component to attach to.\n\x09* @param AttachPointName\x09\x09\x09\x09Optional named point within the AttachComponent to play the sound at\n\x09* @param Location\x09\x09\x09\x09\x09\x09""Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n\x09* @param Rotation\x09\x09\x09\x09\x09\x09""Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n\x09* @param LocationType\x09\x09\x09\x09\x09Specifies whether Location is a relative offset or an absolute world position\n\x09* @param bStopWhenAttachedToDestroyed\x09Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09* @param VolumeMultiplier\x09\x09\x09\x09Volume multiplier\n\x09* @param PitchMultiplier\x09\x09\x09\x09PitchMultiplier\n\x09* @param StartTime\x09\x09\x09\x09\x09\x09How far in to the sound to begin playback at\n\x09* @param Loops\x09\x09\x09\x09\x09\x09\x09Number of Loops (Default: 1)\n\x09* @param Attenuation_Settings\x09\x09\x09Override attenuation settings package to play sound with\n\x09* @param ConcurrencySettings\x09\x09\x09Override concurrency settings package to play sound with\n\x09* @param bAutoDestroy\x09\x09\x09\x09\x09Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n\x09* @return An audio component to manipulate the spawned sound\n\x09*/" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_Attenuation_Settings", "None" },
		{ "CPP_Default_bAutoDestroy", "true" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_ConcurrencySettings", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_Loops", "1" },
		{ "CPP_Default_PitchMultiplier", "1.000000" },
		{ "CPP_Default_Rotation", "" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "CPP_Default_VolumeMultiplier", "1.000000" },
		{ "Keywords", "play" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Plays a sound attached to and following the specified component. This is a fire and forget sound. Replication is also not handled at this point.\n@param AttachToComponent                              Component to attach to.\n@param AttachPointName                                Optional named point within the AttachComponent to play the sound at\n@param Location                                               Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world position that will be translated to a relative offset\n@param Rotation                                               Depending on the value of Location Type this is either a relative offset from the attach component/point or an absolute world rotation that will be translated to a relative offset\n@param LocationType                                   Specifies whether Location is a relative offset or an absolute world position\n@param bStopWhenAttachedToDestroyed   Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n@param VolumeMultiplier                               Volume multiplier\n@param PitchMultiplier                                PitchMultiplier\n@param StartTime                                              How far in to the sound to begin playback at\n@param Loops                                                  Number of Loops (Default: 1)\n@param Attenuation_Settings                   Override attenuation settings package to play sound with\n@param ConcurrencySettings                    Override concurrency settings package to play sound with\n@param bAutoDestroy                                   Whether the returned audio component will be automatically cleaned up when the sound finishes (by completing or stopping) or whether it can be reactivated\n@return An audio component to manipulate the spawned sound" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioAnalyzerSoundWave, nullptr, "SpawnSoundAttached", nullptr, nullptr, sizeof(AudioAnalyzerSoundWave_eventSpawnSoundAttached_Parms), Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioAnalyzerSoundWave_NoRegister()
	{
		return UAudioAnalyzerSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlaybackLoopFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaybackLoopFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStopFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStopFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_AsyncStopSound, "AsyncStopSound" }, // 452947971
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_CreateSound2D, "CreateSound2D" }, // 2104391125
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetDuration, "GetDuration" }, // 1598927750
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetPlaybackTime, "GetPlaybackTime" }, // 3931264566
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetRemainingLoops, "GetRemainingLoops" }, // 2053309042
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_GetTotalDuration, "GetTotalDuration" }, // 3459956014
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPaused, "IsPaused" }, // 574760074
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_IsPlaying, "IsPlaying" }, // 929316360
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_PauseSound, "PauseSound" }, // 1879301760
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySound2D, "PlaySound2D" }, // 3473847225
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_PlaySoundAtLocation, "PlaySoundAtLocation" }, // 3928164767
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPaused, "SetPaused" }, // 1919658816
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SetPlaybackTime, "SetPlaybackTime" }, // 1983031837
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSound2D, "SpawnSound2D" }, // 1832533205
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAtLocation, "SpawnSoundAtLocation" }, // 2947359448
		{ &Z_Construct_UFunction_UAudioAnalyzerSoundWave_SpawnSoundAttached, "SpawnSoundAttached" }, // 2546436158
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* SoundWaveProcedural custom class \n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AudioAnalyzerSoundWave.h" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "SoundWaveProcedural custom class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackFinished_MetaData[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Events" },
		{ "Comment", "/**\n\x09* Event to track the playback end\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Event to track the playback end" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackFinished = { "OnPlaybackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioAnalyzerSoundWave, OnPlaybackFinished), Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackLoopFinished_MetaData[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Events" },
		{ "Comment", "/**\n\x09* Event to track the playback end\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Event to track the playback end" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackLoopFinished = { "OnPlaybackLoopFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioAnalyzerSoundWave, OnPlaybackLoopFinished), Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackLoopFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackLoopFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnStopFinished_MetaData[] = {
		{ "Category", "AudioAnalyzerManager|SoundWave|Events" },
		{ "Comment", "/**\n\x09* Event to track the playback end\n\x09*/" },
		{ "ModuleRelativePath", "Public/AudioAnalyzerSoundWave.h" },
		{ "ToolTip", "Event to track the playback end" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnStopFinished = { "OnStopFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioAnalyzerSoundWave, OnStopFinished), Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnStopFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnStopFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnPlaybackLoopFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::NewProp_OnStopFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioAnalyzerSoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::ClassParams = {
		&UAudioAnalyzerSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioAnalyzerSoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioAnalyzerSoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioAnalyzerSoundWave, 3032388503);
	template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<UAudioAnalyzerSoundWave>()
	{
		return UAudioAnalyzerSoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioAnalyzerSoundWave(Z_Construct_UClass_UAudioAnalyzerSoundWave, &UAudioAnalyzerSoundWave::StaticClass, TEXT("/Script/ParallelcubeAudioAnalyzer"), TEXT("UAudioAnalyzerSoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioAnalyzerSoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
