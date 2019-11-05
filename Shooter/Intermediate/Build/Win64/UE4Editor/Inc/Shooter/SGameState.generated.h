// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWaveState : uint8;
#ifdef SHOOTER_SGameState_generated_h
#error "SGameState.generated.h already included, missing '#pragma once' in SGameState.h"
#endif
#define SHOOTER_SGameState_generated_h

#define Shooter_Source_Shooter_Public_SGameState_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaveState) \
	{ \
		P_GET_ENUM(EWaveState,Z_Param_OldState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_WaveState(EWaveState(Z_Param_OldState)); \
		P_NATIVE_END; \
	}


#define Shooter_Source_Shooter_Public_SGameState_h_28_EVENT_PARMS \
	struct SGameState_eventWaveStateChanged_Parms \
	{ \
		EWaveState NewState; \
		EWaveState OldState; \
	};


#define Shooter_Source_Shooter_Public_SGameState_h_28_CALLBACK_WRAPPERS
#define Shooter_Source_Shooter_Public_SGameState_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASGameState(); \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SGameState_h_28_INCLASS \
private: \
	static void StaticRegisterNativesASGameState(); \
	friend SHOOTER_API class UClass* Z_Construct_UClass_ASGameState(); \
public: \
	DECLARE_CLASS(ASGameState, AGameStateBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASGameState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Shooter_Source_Shooter_Public_SGameState_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public:


#define Shooter_Source_Shooter_Public_SGameState_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameState(ASGameState&&); \
	NO_API ASGameState(const ASGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameState)


#define Shooter_Source_Shooter_Public_SGameState_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaveState() { return STRUCT_OFFSET(ASGameState, WaveState); }


#define Shooter_Source_Shooter_Public_SGameState_h_25_PROLOG \
	Shooter_Source_Shooter_Public_SGameState_h_28_EVENT_PARMS


#define Shooter_Source_Shooter_Public_SGameState_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SGameState_h_28_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SGameState_h_28_RPC_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameState_h_28_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameState_h_28_INCLASS \
	Shooter_Source_Shooter_Public_SGameState_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Shooter_Source_Shooter_Public_SGameState_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Shooter_Source_Shooter_Public_SGameState_h_28_PRIVATE_PROPERTY_OFFSET \
	Shooter_Source_Shooter_Public_SGameState_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SGameState_h_28_CALLBACK_WRAPPERS \
	Shooter_Source_Shooter_Public_SGameState_h_28_INCLASS_NO_PURE_DECLS \
	Shooter_Source_Shooter_Public_SGameState_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Shooter_Source_Shooter_Public_SGameState_h


#define FOREACH_ENUM_EWAVESTATE(op) \
	op(EWaveState::WaitingToStart) \
	op(EWaveState::WaveInProgress) \
	op(EWaveState::WaitingToComplete) \
	op(EWaveState::WaveComplete) \
	op(EWaveState::GameOver) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
