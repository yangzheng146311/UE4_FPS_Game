// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASCharacter_EndFire();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASCharacter_GetWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ASWeapon_NoRegister();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	SHOOTER_API UFunction* Z_Construct_UFunction_ASCharacter_StartFire();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFire", &ASCharacter::execEndFire },
			{ "GetWeapon", &ASCharacter::execGetWeapon },
			{ "OnHealthChanged", &ASCharacter::execOnHealthChanged },
			{ "StartFire", &ASCharacter::execStartFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASCharacter_EndFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "EndFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_GetWeapon()
	{
		struct SCharacter_eventGetWeapon_Parms
		{
			ASWeapon* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "GetWeapon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SCharacter_eventGetWeapon_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_OnHealthChanged()
	{
		struct SCharacter_eventOnHealthChanged_Parms
		{
			USHealthComponent* HealthComponent;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SCharacter_eventOnHealthChanged_Parms, HealthComponent), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComponent_MetaData, ARRAY_COUNT(NewProp_HealthComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SCharacter_eventOnHealthChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASCharacter_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Weapon" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, "StartFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASCharacter_EndFire, "EndFire" }, // 3954611026
				{ &Z_Construct_UFunction_ASCharacter_GetWeapon, "GetWeapon" }, // 3714556108
				{ &Z_Construct_UFunction_ASCharacter_OnHealthChanged, "OnHealthChanged" }, // 3689848714
				{ &Z_Construct_UFunction_ASCharacter_StartFire, "StartFire" }, // 2617334642
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "SCharacter.h" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempEnergy_MetaData[] = {
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TempEnergy = { UE4CodeGen_Private::EPropertyClass::Float, "TempEnergy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, STRUCT_OFFSET(ASCharacter, TempEnergy), METADATA_PARAMS(NewProp_TempEnergy_MetaData, ARRAY_COUNT(NewProp_TempEnergy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[] = {
				{ "Category", "Energy" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval = { UE4CodeGen_Private::EPropertyClass::Float, "PowerupInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010021, 1, nullptr, STRUCT_OFFSET(ASCharacter, PowerupInterval), METADATA_PARAMS(NewProp_PowerupInterval_MetaData, ARRAY_COUNT(NewProp_PowerupInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetEnergy_MetaData[] = {
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			auto NewProp_bGetEnergy_SetBit = [](void* Obj){ ((ASCharacter*)Obj)->bGetEnergy = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetEnergy = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetEnergy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGetEnergy_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGetEnergy_MetaData, ARRAY_COUNT(NewProp_bGetEnergy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyPercent_MetaData[] = {
				{ "Category", "Energy" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyPercent = { UE4CodeGen_Private::EPropertyClass::Float, "EnergyPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, STRUCT_OFFSET(ASCharacter, EnergyPercent), METADATA_PARAMS(NewProp_EnergyPercent_MetaData, ARRAY_COUNT(NewProp_EnergyPercent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass = { UE4CodeGen_Private::EPropertyClass::Class, "StarterWeaponClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, StarterWeaponClass), Z_Construct_UClass_ASWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_StarterWeaponClass_MetaData, ARRAY_COUNT(NewProp_StarterWeaponClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[] = {
				{ "Category", "Health" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(NewProp_HealthComp_MetaData, ARRAY_COUNT(NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[] = {
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWeapon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000020, 1, nullptr, STRUCT_OFFSET(ASCharacter, CurrentWeapon), Z_Construct_UClass_ASWeapon_NoRegister, METADATA_PARAMS(NewProp_CurrentWeapon_MetaData, ARRAY_COUNT(NewProp_CurrentWeapon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDied_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			auto NewProp_bDied_SetBit = [](void* Obj){ ((ASCharacter*)Obj)->bDied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDied = { UE4CodeGen_Private::EPropertyClass::Bool, "bDied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000034, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDied_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDied_MetaData, ARRAY_COUNT(NewProp_bDied_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
				{ "Category", "Player" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0.100000" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, ZoomInterpSpeed), METADATA_PARAMS(NewProp_ZoomInterpSpeed_MetaData, ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
				{ "Category", "Player" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV = { UE4CodeGen_Private::EPropertyClass::Float, "ZoomedFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASCharacter, ZoomedFOV), METADATA_PARAMS(NewProp_ZoomedFOV_MetaData, ARRAY_COUNT(NewProp_ZoomedFOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmComp_MetaData, ARRAY_COUNT(NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComp_MetaData, ARRAY_COUNT(NewProp_CameraComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TempEnergy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerupInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGetEnergy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnergyPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StarterWeaponClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWeapon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomInterpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZoomedFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASCharacter::StaticClass,
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
	IMPLEMENT_CLASS(ASCharacter, 3269714790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASCharacter(Z_Construct_UClass_ASCharacter, &ASCharacter::StaticClass, TEXT("/Script/Shooter"), TEXT("ASCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
