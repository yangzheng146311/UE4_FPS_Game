// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASWeapon;
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SHOOTER_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define SHOOTER_SCharacter_generated_h

#define Shooter_Source_Shooter_Public_SCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASWeapon**)Z_Param__Result=P_THIS->GetWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
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


#define Shooter_Source_Shooter_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ASWeapon**)Z_Param__Result=P_THIS->GetWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
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


#define Shooter_Source_Shooter_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define Shooter_Source_Shooter_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define Shooter_Source_Shooter_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(ASCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__bDied() { return STRUCT_OFFSET(ASCharacter, bDied); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ASCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__EnergyPercent() { return STRUCT_OFFSET(ASCharacter, EnergyPercent); }


#define Shooter_Source_Shooter_Public_SCharacter_h_13_PROLOG
#define Shooter_Source_Shooter_Public_SCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SCharacter_h_16_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SCharacter_h_16_INCLASS \
	Shooter_Source_Shooter_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
