// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IADE_01/IADE_01HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIADE_01HUD() {}
// Cross Module References
	IADE_01_API UClass* Z_Construct_UClass_AIADE_01HUD_NoRegister();
	IADE_01_API UClass* Z_Construct_UClass_AIADE_01HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_IADE_01();
// End Cross Module References
	void AIADE_01HUD::StaticRegisterNativesAIADE_01HUD()
	{
	}
	UClass* Z_Construct_UClass_AIADE_01HUD_NoRegister()
	{
		return AIADE_01HUD::StaticClass();
	}
	struct Z_Construct_UClass_AIADE_01HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIADE_01HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IADE_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIADE_01HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "IADE_01HUD.h" },
		{ "ModuleRelativePath", "IADE_01HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIADE_01HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIADE_01HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIADE_01HUD_Statics::ClassParams = {
		&AIADE_01HUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AIADE_01HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIADE_01HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIADE_01HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIADE_01HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIADE_01HUD, 2855382611);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIADE_01HUD(Z_Construct_UClass_AIADE_01HUD, &AIADE_01HUD::StaticClass, TEXT("/Script/IADE_01"), TEXT("AIADE_01HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIADE_01HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
