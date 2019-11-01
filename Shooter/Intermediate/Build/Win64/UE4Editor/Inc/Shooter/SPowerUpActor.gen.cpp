// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPowerUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerUpActor() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASPowerUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASPowerUpActor_OnActived();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASPowerUpActor_OnExpired();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup();
// End Cross Module References
	static FName NAME_ASPowerUpActor_OnActived = FName(TEXT("OnActived"));
	void ASPowerUpActor::OnActived()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnActived),NULL);
	}
	static FName NAME_ASPowerUpActor_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerUpActor::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnExpired),NULL);
	}
	static FName NAME_ASPowerUpActor_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerUpActor::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerUpActor_OnPowerupTicked),NULL);
	}
	void ASPowerUpActor::StaticRegisterNativesASPowerUpActor()
	{
		UClass* Class = ASPowerUpActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTickPowerup", &ASPowerUpActor::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnActived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, "OnActived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, "OnExpired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, "OnPowerupTicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerUpActor, "OnTickPowerup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister()
	{
		return ASPowerUpActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPowerUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASPowerUpActor_OnActived, "OnActived" }, // 3434167226
				{ &Z_Construct_UFunction_ASPowerUpActor_OnExpired, "OnExpired" }, // 2679097881
				{ &Z_Construct_UFunction_ASPowerUpActor_OnPowerupTicked, "OnPowerupTicked" }, // 3668845202
				{ &Z_Construct_UFunction_ASPowerUpActor_OnTickPowerup, "OnTickPowerup" }, // 4188820329
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPowerUpActor.h" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PowerupInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ASPowerUpActor, PowerupInterval), METADATA_PARAMS(NewProp_PowerupInterval_MetaData, ARRAY_COUNT(NewProp_PowerupInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNrOfTicks_MetaData[] = {
				{ "Category", "Powerups" },
				{ "ModuleRelativePath", "Public/SPowerUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNrOfTicks = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNrOfTicks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASPowerUpActor, TotalNrOfTicks), METADATA_PARAMS(NewProp_TotalNrOfTicks_MetaData, ARRAY_COUNT(NewProp_TotalNrOfTicks_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerupInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalNrOfTicks,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPowerUpActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPowerUpActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerUpActor, 4229793141);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerUpActor(Z_Construct_UClass_ASPowerUpActor, &ASPowerUpActor::StaticClass, TEXT("/Script/Shooter"), TEXT("ASPowerUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
