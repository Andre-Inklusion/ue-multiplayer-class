// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IADE_01/IADE_01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIADE_01GameMode() {}
// Cross Module References
	IADE_01_API UClass* Z_Construct_UClass_AIADE_01GameMode_NoRegister();
	IADE_01_API UClass* Z_Construct_UClass_AIADE_01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IADE_01();
// End Cross Module References
	void AIADE_01GameMode::StaticRegisterNativesAIADE_01GameMode()
	{
	}
	UClass* Z_Construct_UClass_AIADE_01GameMode_NoRegister()
	{
		return AIADE_01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIADE_01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIADE_01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IADE_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIADE_01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IADE_01GameMode.h" },
		{ "ModuleRelativePath", "IADE_01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIADE_01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIADE_01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIADE_01GameMode_Statics::ClassParams = {
		&AIADE_01GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AIADE_01GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIADE_01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIADE_01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIADE_01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIADE_01GameMode, 1499533471);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIADE_01GameMode(Z_Construct_UClass_AIADE_01GameMode, &AIADE_01GameMode::StaticClass, TEXT("/Script/IADE_01"), TEXT("AIADE_01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIADE_01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
