// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTER_USHealthComponent_generated_h
#error "USHealthComponent.generated.h already included, missing '#pragma once' in USHealthComponent.h"
#endif
#define SHOOTER_USHealthComponent_generated_h

#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUSHealthComponent(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_UUSHealthComponent(); \
public: \
	DECLARE_CLASS(UUSHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UUSHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUSHealthComponent(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_UUSHealthComponent(); \
public: \
	DECLARE_CLASS(UUSHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(UUSHealthComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUSHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUSHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUSHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUSHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUSHealthComponent(UUSHealthComponent&&); \
	NO_API UUSHealthComponent(const UUSHealthComponent&); \
public:


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUSHealthComponent(UUSHealthComponent&&); \
	NO_API UUSHealthComponent(const UUSHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUSHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUSHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUSHealthComponent)


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UUSHealthComponent, DefaultHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(UUSHealthComponent, CurrentHealth); }


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_10_PROLOG
#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_INCLASS \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_Components_USHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_Components_USHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
