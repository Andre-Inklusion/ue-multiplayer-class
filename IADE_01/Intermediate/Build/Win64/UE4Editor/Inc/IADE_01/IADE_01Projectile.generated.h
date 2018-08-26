// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef IADE_01_IADE_01Projectile_generated_h
#error "IADE_01Projectile.generated.h already included, missing '#pragma once' in IADE_01Projectile.h"
#endif
#define IADE_01_IADE_01Projectile_generated_h

#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIADE_01Projectile(); \
	friend struct Z_Construct_UClass_AIADE_01Projectile_Statics; \
public: \
	DECLARE_CLASS(AIADE_01Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IADE_01"), NO_API) \
	DECLARE_SERIALIZER(AIADE_01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAIADE_01Projectile(); \
	friend struct Z_Construct_UClass_AIADE_01Projectile_Statics; \
public: \
	DECLARE_CLASS(AIADE_01Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IADE_01"), NO_API) \
	DECLARE_SERIALIZER(AIADE_01Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIADE_01Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIADE_01Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIADE_01Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIADE_01Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIADE_01Projectile(AIADE_01Projectile&&); \
	NO_API AIADE_01Projectile(const AIADE_01Projectile&); \
public:


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIADE_01Projectile(AIADE_01Projectile&&); \
	NO_API AIADE_01Projectile(const AIADE_01Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIADE_01Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIADE_01Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIADE_01Projectile)


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AIADE_01Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AIADE_01Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AIADE_01Projectile, ExplosionEffect); }


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_11_PROLOG
#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_RPC_WRAPPERS \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_INCLASS \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IADE_01_Source_IADE_01_IADE_01Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_INCLASS_NO_PURE_DECLS \
	IADE_01_Source_IADE_01_IADE_01Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IADE_01_Source_IADE_01_IADE_01Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
