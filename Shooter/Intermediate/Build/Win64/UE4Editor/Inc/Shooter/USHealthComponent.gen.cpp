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
// End Cross Module References
	void UUSHealthComponent::StaticRegisterNativesUUSHealthComponent()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Components/USHealthComponent.h" },
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHealth_MetaData[] = {
				{ "Category", "HealthComponent" },
				{ "ModuleRelativePath", "Public/Components/USHealthComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHealth = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(UUSHealthComponent, DefaultHealth), METADATA_PARAMS(NewProp_DefaultHealth_MetaData, ARRAY_COUNT(NewProp_DefaultHealth_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultHealth,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UUSHealthComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UUSHealthComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UUSHealthComponent, 2891895307);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUSHealthComponent(Z_Construct_UClass_UUSHealthComponent, &UUSHealthComponent::StaticClass, TEXT("/Script/Shooter"), TEXT("UUSHealthComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUSHealthComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
