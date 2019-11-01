// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_SPickUpActor_generated_h
#error "SPickUpActor.generated.h already included, missing '#pragma once' in SPickUpActor.h"
#endif
#define SHOOTER_SPickUpActor_generated_h

#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPickUpActor(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASPickUpActor(); \
public: \
	DECLARE_CLASS(ASPickUpActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASPickUpActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASPickUpActor(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASPickUpActor(); \
public: \
	DECLARE_CLASS(ASPickUpActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASPickUpActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPickUpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPickUpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickUpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickUpActor(ASPickUpActor&&); \
	NO_API ASPickUpActor(const ASPickUpActor&); \
public:


#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPickUpActor(ASPickUpActor&&); \
	NO_API ASPickUpActor(const ASPickUpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPickUpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPickUpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPickUpActor)


#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASPickUpActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(ASPickUpActor, DecalComp); }


#define Shooter_Source_Shooter_Public_SPickUpActor_h_13_PROLOG
#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_INCLASS \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SPickUpActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SPickUpActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SPickUpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
