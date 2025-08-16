// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CandyCrushAux2025_02/CandyCrushAux2025_02GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCandyCrushAux2025_02GameModeBase() {}
// Cross Module References
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CandyCrushAux2025_02();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ATablero_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACandyCrushAux2025_02GameModeBase::execCrearTablero)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearTablero();
		P_NATIVE_END;
	}
	void ACandyCrushAux2025_02GameModeBase::StaticRegisterNativesACandyCrushAux2025_02GameModeBase()
	{
		UClass* Class = ACandyCrushAux2025_02GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearTablero", &ACandyCrushAux2025_02GameModeBase::execCrearTablero },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "// Funci\xc3\xb3n para instanciar el tablero\n" },
		{ "ModuleRelativePath", "CandyCrushAux2025_02GameModeBase.h" },
		{ "ToolTip", "Funci\xc3\xb3n para instanciar el tablero" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase, nullptr, "CrearTablero", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_NoRegister()
	{
		return ACandyCrushAux2025_02GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableroActual_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TableroActual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CandyCrushAux2025_02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACandyCrushAux2025_02GameModeBase_CrearTablero, "CrearTablero" }, // 2272166508
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CandyCrushAux2025_02GameModeBase.h" },
		{ "ModuleRelativePath", "CandyCrushAux2025_02GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::NewProp_TableroActual_MetaData[] = {
		{ "Category", "Game" },
		{ "Comment", "// Referencia al tablero\n" },
		{ "ModuleRelativePath", "CandyCrushAux2025_02GameModeBase.h" },
		{ "ToolTip", "Referencia al tablero" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::NewProp_TableroActual = { "TableroActual", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACandyCrushAux2025_02GameModeBase, TableroActual), Z_Construct_UClass_ATablero_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::NewProp_TableroActual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::NewProp_TableroActual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::NewProp_TableroActual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACandyCrushAux2025_02GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::ClassParams = {
		&ACandyCrushAux2025_02GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACandyCrushAux2025_02GameModeBase, 165282608);
	template<> CANDYCRUSHAUX2025_02_API UClass* StaticClass<ACandyCrushAux2025_02GameModeBase>()
	{
		return ACandyCrushAux2025_02GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACandyCrushAux2025_02GameModeBase(Z_Construct_UClass_ACandyCrushAux2025_02GameModeBase, &ACandyCrushAux2025_02GameModeBase::StaticClass, TEXT("/Script/CandyCrushAux2025_02"), TEXT("ACandyCrushAux2025_02GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACandyCrushAux2025_02GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
