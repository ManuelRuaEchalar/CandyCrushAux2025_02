// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CandyCrushAux2025_02/BloqueCono.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueCono() {}
// Cross Module References
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueCono_NoRegister();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloqueCono();
	CANDYCRUSHAUX2025_02_API UClass* Z_Construct_UClass_ABloque();
	UPackage* Z_Construct_UPackage__Script_CandyCrushAux2025_02();
// End Cross Module References
	void ABloqueCono::StaticRegisterNativesABloqueCono()
	{
	}
	UClass* Z_Construct_UClass_ABloqueCono_NoRegister()
	{
		return ABloqueCono::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueCono_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueCono_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque,
		(UObject* (*)())Z_Construct_UPackage__Script_CandyCrushAux2025_02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueCono_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueCono.h" },
		{ "ModuleRelativePath", "BloqueCono.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueCono_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueCono>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueCono_Statics::ClassParams = {
		&ABloqueCono::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueCono_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueCono_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueCono()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueCono_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueCono, 1346616288);
	template<> CANDYCRUSHAUX2025_02_API UClass* StaticClass<ABloqueCono>()
	{
		return ABloqueCono::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueCono(Z_Construct_UClass_ABloqueCono, &ABloqueCono::StaticClass, TEXT("/Script/CandyCrushAux2025_02"), TEXT("ABloqueCono"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueCono);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
