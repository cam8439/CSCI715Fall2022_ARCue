// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioAnalyzer/Public/Texturizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturizer() {}
// Cross Module References
	PARALLELCUBEAUDIOANALYZER_API UClass* Z_Construct_UClass_UTexturizer_NoRegister();
	PARALLELCUBEAUDIOANALYZER_API UClass* Z_Construct_UClass_UTexturizer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTexturizer::execIntsToCanvas)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_ints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntsToCanvas(Z_Param_Out_ints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexturizer::execFloatsToCanvas)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_floats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FloatsToCanvas(Z_Param_Out_floats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexturizer::execClearCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexturizer::execUpdateCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTexturizer::execInitializeCanvas)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCanvas(Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	void UTexturizer::StaticRegisterNativesUTexturizer()
	{
		UClass* Class = UTexturizer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCanvas", &UTexturizer::execClearCanvas },
			{ "FloatsToCanvas", &UTexturizer::execFloatsToCanvas },
			{ "InitializeCanvas", &UTexturizer::execInitializeCanvas },
			{ "IntsToCanvas", &UTexturizer::execIntsToCanvas },
			{ "UpdateCanvas", &UTexturizer::execUpdateCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "/**\n\x09* Reset texture canvas\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Reset texture canvas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturizer, nullptr, "ClearCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexturizer_ClearCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexturizer_ClearCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics
	{
		struct Texturizer_eventFloatsToCanvas_Parms
		{
			TArray<float> floats;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_floats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_floats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_floats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats_Inner = { "floats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats = { "floats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texturizer_eventFloatsToCanvas_Parms, floats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::NewProp_floats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "/**\n\x09* Convert float array into canvas pixels\n\x09* @param floats\x09\x09""Float container\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Convert float array into canvas pixels\n@param floats         Float container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturizer, nullptr, "FloatsToCanvas", nullptr, nullptr, sizeof(Texturizer_eventFloatsToCanvas_Parms), Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexturizer_FloatsToCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexturizer_FloatsToCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics
	{
		struct Texturizer_eventInitializeCanvas_Parms
		{
			int32 Width;
			int32 Height;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Width_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texturizer_eventInitializeCanvas_Parms, Width), METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texturizer_eventInitializeCanvas_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Height_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::NewProp_Height,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "/**\n\x09* Initializes the texture canvas\n\x09* @param Width\x09\x09Horizontal pixels\n\x09* @param Height\x09\x09Vertical pixels\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Initializes the texture canvas\n@param Width          Horizontal pixels\n@param Height         Vertical pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturizer, nullptr, "InitializeCanvas", nullptr, nullptr, sizeof(Texturizer_eventInitializeCanvas_Parms), Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexturizer_InitializeCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexturizer_InitializeCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics
	{
		struct Texturizer_eventIntsToCanvas_Parms
		{
			TArray<int32> ints;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints_Inner = { "ints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints = { "ints", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Texturizer_eventIntsToCanvas_Parms, ints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::NewProp_ints,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "/**\n\x09* Convert int32 array into canvas pixels\n\x09* @param ints\x09\x09Int32 container\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Convert int32 array into canvas pixels\n@param ints           Int32 container" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturizer, nullptr, "IntsToCanvas", nullptr, nullptr, sizeof(Texturizer_eventIntsToCanvas_Parms), Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexturizer_IntsToCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexturizer_IntsToCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "/**\n\x09* Force update texture canvas\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Force update texture canvas" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexturizer, nullptr, "UpdateCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTexturizer_UpdateCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTexturizer_UpdateCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTexturizer_NoRegister()
	{
		return UTexturizer::StaticClass();
	}
	struct Z_Construct_UClass_UTexturizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dynamicCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dynamicCanvas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexturizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ParallelcubeAudioAnalyzer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTexturizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTexturizer_ClearCanvas, "ClearCanvas" }, // 288371864
		{ &Z_Construct_UFunction_UTexturizer_FloatsToCanvas, "FloatsToCanvas" }, // 3448932031
		{ &Z_Construct_UFunction_UTexturizer_InitializeCanvas, "InitializeCanvas" }, // 406522055
		{ &Z_Construct_UFunction_UTexturizer_IntsToCanvas, "IntsToCanvas" }, // 2499933840
		{ &Z_Construct_UFunction_UTexturizer_UpdateCanvas, "UpdateCanvas" }, // 2153116578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexturizer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* @brief Texturizer\n*\n* Tool to convert analysis values into a Texture2D\n*/" },
		{ "IncludePath", "Texturizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "@brief Texturizer\n\nTool to convert analysis values into a Texture2D" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexturizer_Statics::NewProp_dynamicCanvas_MetaData[] = {
		{ "Category", "Variables" },
		{ "Comment", "/**\n\x09* Texture2D result\n\x09*/" },
		{ "ModuleRelativePath", "Public/Texturizer.h" },
		{ "ToolTip", "Texture2D result" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTexturizer_Statics::NewProp_dynamicCanvas = { "dynamicCanvas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexturizer, dynamicCanvas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexturizer_Statics::NewProp_dynamicCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexturizer_Statics::NewProp_dynamicCanvas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexturizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexturizer_Statics::NewProp_dynamicCanvas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexturizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexturizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTexturizer_Statics::ClassParams = {
		&UTexturizer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTexturizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexturizer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexturizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexturizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexturizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTexturizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTexturizer, 1253831206);
	template<> PARALLELCUBEAUDIOANALYZER_API UClass* StaticClass<UTexturizer>()
	{
		return UTexturizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexturizer(Z_Construct_UClass_UTexturizer, &UTexturizer::StaticClass, TEXT("/Script/ParallelcubeAudioAnalyzer"), TEXT("UTexturizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexturizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
