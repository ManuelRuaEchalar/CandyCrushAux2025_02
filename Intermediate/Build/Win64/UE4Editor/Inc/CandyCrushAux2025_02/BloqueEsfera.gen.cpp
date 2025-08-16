// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CandyCrushAux2025_02/BloqueEsfera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueEsfera() {}
// Cross Module References
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueEsfera_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueEsfera();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_CandyCrushAux2025_02();
// End Cross Module References
	void ABloqueEsfera::StaticRegisterNativesABloqueEsfera()
	{
	}
	UClass* Z_Construct_UClass_ABloqueEsfera_NoRegister()
	{
		return ABloqueEsfera::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueEsfera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueEsfera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_CandyCrushAux2025_02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueEsfera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueEsfera.h" },
		{ "ModuleRelativePath", "BloqueEsfera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueEsfera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueEsfera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueEsfera_Statics::ClassParams = {
		&ABloqueEsfera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueEsfera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEsfera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueEsfera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueEsfera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueEsfera, 4137294985);
	template<> CANDYCRUSHAUX2025_02_API UClass* StaticClass<ABloqueEsfera>()
	{
		return ABloqueEsfera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueEsfera(Z_Construct_UClass_ABloqueEsfera, &ABloqueEsfera::StaticClass, TEXT("/Script/CandyCrushAux2025_02"), TEXT("ABloqueEsfera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueEsfera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
