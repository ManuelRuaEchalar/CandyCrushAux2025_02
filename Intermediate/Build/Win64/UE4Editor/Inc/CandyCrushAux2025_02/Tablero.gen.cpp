// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CandyCrushAux2025_02/Tablero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTablero() {}
// Cross Module References
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ATablero_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ATablero();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CandyCrushAux2025_02();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloque_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATablero::execGenerarTablero)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerarTablero();
		P_NATIVE_END;
	}
	void ATablero::StaticRegisterNativesATablero()
	{
		UClass* Class = ATablero::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerarTablero", &ATablero::execGenerarTablero },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATablero_GenerarTablero_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATablero_GenerarTablero_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tablero" },
		{ "Comment", "// Funci\xc3\xb3n para generar el tablero\n" },
		{ "ModuleRelativePath", "Tablero.h" },
		{ "ToolTip", "Funci\xc3\xb3n para generar el tablero" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATablero_GenerarTablero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATablero, nullptr, "GenerarTablero", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATablero_GenerarTablero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATablero_GenerarTablero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATablero_GenerarTablero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATablero_GenerarTablero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATablero_NoRegister()
	{
		return ATablero::StaticClass();
	}
	struct Z_Construct_UClass_ATablero_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilasTablero_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FilasTablero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnasTablero_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnasTablero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EspaciadoBloques_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EspaciadoBloques;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bloques_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloques_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bloques;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATablero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CandyCrushAux2025_02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATablero_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATablero_GenerarTablero, "GenerarTablero" }, // 3468700380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tablero.h" },
		{ "ModuleRelativePath", "Tablero.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Componentes de c\xc3\xa1mara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tablero.h" },
		{ "ToolTip", "Componentes de c\xc3\xa1mara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tablero.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_FilasTablero_MetaData[] = {
		{ "Category", "Tablero" },
		{ "Comment", "// Dimensiones del tablero\n" },
		{ "ModuleRelativePath", "Tablero.h" },
		{ "ToolTip", "Dimensiones del tablero" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_FilasTablero = { "FilasTablero", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, FilasTablero), METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_FilasTablero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_FilasTablero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_ColumnasTablero_MetaData[] = {
		{ "Category", "Tablero" },
		{ "ModuleRelativePath", "Tablero.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_ColumnasTablero = { "ColumnasTablero", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, ColumnasTablero), METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_ColumnasTablero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_ColumnasTablero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_EspaciadoBloques_MetaData[] = {
		{ "Category", "Tablero" },
		{ "ModuleRelativePath", "Tablero.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_EspaciadoBloques = { "EspaciadoBloques", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, EspaciadoBloques), METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_EspaciadoBloques_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_EspaciadoBloques_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_Bloques_Inner = { "Bloques", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATablero_Statics::NewProp_Bloques_MetaData[] = {
		{ "Category", "Tablero" },
		{ "Comment", "// Array para almacenar los bloques\n" },
		{ "ModuleRelativePath", "Tablero.h" },
		{ "ToolTip", "Array para almacenar los bloques" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATablero_Statics::NewProp_Bloques = { "Bloques", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATablero, Bloques), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::NewProp_Bloques_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::NewProp_Bloques_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATablero_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_FilasTablero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_ColumnasTablero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_EspaciadoBloques,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_Bloques_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATablero_Statics::NewProp_Bloques,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATablero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATablero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATablero_Statics::ClassParams = {
		&ATablero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATablero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATablero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATablero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATablero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATablero, 84901867);
	template<> CANDYCRUSHAUX2025_02_API UClass* StaticClass<ATablero>()
	{
		return ATablero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATablero(Z_Construct_UClass_ATablero, &ATablero::StaticClass, TEXT("/Script/CandyCrushAux2025_02"), TEXT("ATablero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATablero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
