// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define SHOOTER_SCharacter_generated_h

#define Shooter_Source_Shooter_Public_SCharacter_h_14_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_SCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_SCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASCharacter(); \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SCharacter_h_14_STANDARD_CONSTRUCTORS \
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


#define Shooter_Source_Shooter_Public_SCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define Shooter_Source_Shooter_Public_SCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); }


#define Shooter_Source_Shooter_Public_SCharacter_h_11_PROLOG
#define Shooter_Source_Shooter_Public_SCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SCharacter_h_14_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SCharacter_h_14_INCLASS \
	Shooter_Source_Shooter_Public_SCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
