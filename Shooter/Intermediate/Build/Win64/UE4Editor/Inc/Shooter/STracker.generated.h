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
#ifdef SHOOTER_STracker_generated_h
#error "STracker.generated.h already included, missing '#pragma once' in STracker.h"
#endif
#define SHOOTER_STracker_generated_h

#define Shooter_Source_Shooter_Public_AI_STracker_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage) \
	{ \
		P_GET_OBJECT(USHealthComponent,Z_Param_HealthComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Health); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthDelta); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeDamage(Z_Param_HealthComponent,Z_Param_Health,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTracker(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASTracker(); \
public: \
	DECLARE_CLASS(ASTracker, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTracker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASTracker(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASTracker(); \
public: \
	DECLARE_CLASS(ASTracker, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASTracker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracker(ASTracker&&); \
	NO_API ASTracker(const ASTracker&); \
public:


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTracker(ASTracker&&); \
	NO_API ASTracker(const ASTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTracker)


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASTracker, MeshComp); } \
	FORCEINLINE static uint32 __PPO__HelathComp() { return STRUCT_OFFSET(ASTracker, HelathComp); } \
	FORCEINLINE static uint32 __PPO__SelfDestructSound() { return STRUCT_OFFSET(ASTracker, SelfDestructSound); } \
	FORCEINLINE static uint32 __PPO__ExplodedSound() { return STRUCT_OFFSET(ASTracker, ExplodedSound); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASTracker, SphereComp); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASTracker, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__ExplosionDamage() { return STRUCT_OFFSET(ASTracker, ExplosionDamage); } \
	FORCEINLINE static uint32 __PPO__ExplosionRadius() { return STRUCT_OFFSET(ASTracker, ExplosionRadius); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ASTracker, MovementForce); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ASTracker, RequiredDistanceToTarget); }


#define Shooter_Source_Shooter_Public_AI_STracker_h_14_PROLOG
#define Shooter_Source_Shooter_Public_AI_STracker_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_INCLASS \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_AI_STracker_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_AI_STracker_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_AI_STracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
