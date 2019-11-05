// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_SGameMode_generated_h
#error "SGameMode.generated.h already included, missing '#pragma once' in SGameMode.h"
#endif
#define SHOOTER_SGameMode_generated_h

#define Shooter_Source_Shooter_Public_SGameMode_h_18_RPC_WRAPPERS
#define Shooter_Source_Shooter_Public_SGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Shooter_Source_Shooter_Public_SGameMode_h_18_EVENT_PARMS
#define Shooter_Source_Shooter_Public_SGameMode_h_18_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Public_SGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASGameMode(); \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASGameMode(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASGameMode(); \
public: \
	DECLARE_CLASS(ASGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Shooter_Source_Shooter_Public_SGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public:


#define Shooter_Source_Shooter_Public_SGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameMode(ASGameMode&&); \
	NO_API ASGameMode(const ASGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameMode)


#define Shooter_Source_Shooter_Public_SGameMode_h_18_PRIVATE_PROPERTY_OFFSET
#define Shooter_Source_Shooter_Public_SGameMode_h_15_PROLOG \
	Shooter_Source_Shooter_Public_SGameMode_h_18_EVENT_PARMS


#define Shooter_Source_Shooter_Public_SGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SGameMode_h_18_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_INCLASS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
