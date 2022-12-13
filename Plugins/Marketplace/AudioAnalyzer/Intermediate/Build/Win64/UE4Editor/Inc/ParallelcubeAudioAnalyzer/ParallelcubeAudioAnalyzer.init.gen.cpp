// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParallelcubeAudioAnalyzer_init() {}
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature();
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegate__DelegateSignature();
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_CaptureDelegate__DelegateSignature();
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_InitAudioDelegate__DelegateSignature();
	PARALLELCUBEAUDIOANALYZER_API UFunction* Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_ConstructSoundWaveDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegateSoundWave__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_PlaybackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_CaptureDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_InitAudioDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ParallelcubeAudioAnalyzer_ConstructSoundWaveDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ParallelcubeAudioAnalyzer",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB3445B85,
				0xA01B1D62,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
