// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundCue;
#ifdef SHOOTER_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define SHOOTER_SWeapon_generated_h

#define Shooter_Source_Shooter_Public_SWeapon_h_14_GENERATED_BODY \
	friend SHOOTER_API class UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace(); \
	SHOOTER_API static class UScriptStruct* StaticStruct();


#define Shooter_Source_Shooter_Public_SWeapon_h_26_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSoundCue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundCue**)Z_Param__Result=P_THIS->GetSoundCue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SWeapon_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSoundCue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundCue**)Z_Param__Result=P_THIS->GetSoundCue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SWeapon_h_26_EVENT_PARMS
#define Shooter_Source_Shooter_Public_SWeapon_h_26_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Public_SWeapon_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SWeapon_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SWeapon_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define Shooter_Source_Shooter_Public_SWeapon_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define Shooter_Source_Shooter_Public_SWeapon_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShootingSound() { return STRUCT_OFFSET(ASWeapon, ShootingSound); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ASWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TraceEffect() { return STRUCT_OFFSET(ASWeapon, TraceEffect); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ASWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenShots() { return STRUCT_OFFSET(ASWeapon, TimeBetweenShots); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ASWeapon, HitScanTrace); }


#define Shooter_Source_Shooter_Public_SWeapon_h_23_PROLOG \
	Shooter_Source_Shooter_Public_SWeapon_h_26_EVENT_PARMS


#define Shooter_Source_Shooter_Public_SWeapon_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SWeapon_h_26_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SWeapon_h_26_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_INCLASS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SWeapon_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SWeapon_h_26_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SWeapon_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SWeapon_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
