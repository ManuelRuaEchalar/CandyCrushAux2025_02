// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CandyCrushAux2025_02/BloqueCapsula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCapsula() {}
// Cross Module References
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueCapsula_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueCapsula();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_CandyCrushAux2025_02();
// End Cross Module References
	void ABloqueCapsula::StaticRegisterNativesABloqueCapsula()
	{
	}
	UClass* Z_Construct_UClass_ABloqueCapsula_NoRegister()
	{
		return ABloqueCapsula::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueCapsula_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueCapsula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_CandyCrushAux2025_02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueCapsula_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueCapsula.h" },
		{ "ModuleRelativePath", "BloqueCapsula.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueCapsula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCapsula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCapsula_Statics::ClassParams = {
		&ABloqueCapsula::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueCapsula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCapsula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueCapsula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueCapsula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueCapsula, 1079358025);
	template<> CANDYCRUSHAUX2025_02_API UClass* StaticClass<ABloqueCapsula>()
	{
		return ABloqueCapsula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueCapsula(Z_Construct_UClass_ABloqueCapsula, &ABloqueCapsula::StaticClass, TEXT("/Script/CandyCrushAux2025_02"), TEXT("ABloqueCapsula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCapsula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
