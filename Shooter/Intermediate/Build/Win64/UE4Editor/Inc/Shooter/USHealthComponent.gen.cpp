// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/USHealthComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSHealthComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_UUSHealthComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_UUSHealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UFunction* Z_Construct_UFunction_UUSHealthComponent_HandleTakeAnyDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void UUSHealthComponent::StaticRegisterNativesUUSHealthComponent()
	{
		UClass* Class = UUSHealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTakeAnyDamage", &UUSHealthComponent::execHandleTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UUSHealthComponent_HandleTakeAnyDamage()
	{
		struct USHealthComponent_eventHandleTakeAnyDamage_Parms
		{
			AActor* DamagedActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(USHealthComponent_eventHandleTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(USHealthComponent_eventHandleTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(USHealthComponent_eventHandleTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(USHealthComponent_eventHandleTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DamagedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(USHealthComponent_eventHandleTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamagedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UUSHealthComponent, "HandleTakeAnyDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(USHealthComponent_eventHandleTakeAnyDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUSHealthComponent_NoRegister()
	{
		return UUSHealthComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UUSHealthComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UUSHealthComponent_HandleTakeAnyDamage, "HandleTakeAnyDamage" }, // 1110741123
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Components/USHealthComponent.h" },
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
				{ "Category", "HealthComponent" },
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(UUSHealthComponent, CurrentHealth), METADATA_PARAMS(NewProp_CurrentHealth_MetaData, ARRAY_COUNT(NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[] = {
				{ "Category", "HealthComponent" },
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(UUSHealthComponent, DefaultHealth), METADATA_PARAMS(NewProp_DefaultHealth_MetaData, ARRAY_COUNT(NewProp_DefaultHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultHealth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUSHealthComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUSHealthComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UUSHealthComponent, 1830407749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUSHealthComponent(Z_Construct_UClass_UUSHealthComponent, &UUSHealthComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("UUSHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUSHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
