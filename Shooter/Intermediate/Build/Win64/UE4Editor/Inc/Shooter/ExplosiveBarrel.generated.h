// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SHOOTER_ExplosiveBarrel_generated_h
#error "ExplosiveBarrel.generated.h already included, missing '#pragma once' in ExplosiveBarrel.h"
#endif
#define SHOOTER_ExplosiveBarrel_generated_h

#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHealthChanged(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_AExplosiveBarrel(); \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveBarrel(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_AExplosiveBarrel(); \
public: \
	DECLARE_CLASS(AExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveBarrel) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public:


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveBarrel(AExplosiveBarrel&&); \
	NO_API AExplosiveBarrel(const AExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveBarrel)


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AExplosiveBarrel, MeshComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(AExplosiveBarrel, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosiveMaterial() { return STRUCT_OFFSET(AExplosiveBarrel, ExplosiveMaterial); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(AExplosiveBarrel, HealthComp); } \
	FORCEINLINE static uint32 __PPO__RadialForceComp() { return STRUCT_OFFSET(AExplosiveBarrel, RadialForceComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionImpulse() { return STRUCT_OFFSET(AExplosiveBarrel, ExplosionImpulse); }


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_12_PROLOG
#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_INCLASS \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_ExplosiveBarrel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_ExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
