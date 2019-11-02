// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SHOOTER_SPowerUpActor_generated_h
#error "SPowerUpActor.generated.h already included, missing '#pragma once' in SPowerUpActor.h"
#endif
#define SHOOTER_SPowerUpActor_generated_h

#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTickPowerup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTickPowerup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PowerupActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PowerupActive(); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_EVENT_PARMS \
	struct SPowerUpActor_eventOnActived_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct SPowerUpActor_eventOnPowerupStateChanged_Parms \
	{ \
		bool bNewActive; \
	};


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerUpActor(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASPowerUpActor(); \
public: \
	DECLARE_CLASS(ASPowerUpActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASPowerUpActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerUpActor(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASPowerUpActor(); \
public: \
	DECLARE_CLASS(ASPowerUpActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASPowerUpActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerUpActor(ASPowerUpActor&&); \
	NO_API ASPowerUpActor(const ASPowerUpActor&); \
public:


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerUpActor(ASPowerUpActor&&); \
	NO_API ASPowerUpActor(const ASPowerUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerUpActor)


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TotalNrOfTicks() { return STRUCT_OFFSET(ASPowerUpActor, TotalNrOfTicks); } \
	FORCEINLINE static uint32 __PPO__bIsPowerupActive() { return STRUCT_OFFSET(ASPowerUpActor, bIsPowerupActive); }


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_9_PROLOG \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_EVENT_PARMS


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_INCLASS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SPowerUpActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SPowerUpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SPowerUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
