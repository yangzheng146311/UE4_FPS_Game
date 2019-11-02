// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SPickUpActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPickUpActor() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASPickUpActor_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASPickUpActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASPowerUpActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void ASPickUpActor::StaticRegisterNativesASPickUpActor()
	{
	}
	UClass* Z_Construct_UClass_ASPickUpActor_NoRegister()
	{
		return ASPickUpActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASPickUpActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SPickUpActor.h" },
				{ "ModuleRelativePath", "Public/SPickUpActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[] = {
				{ "Category", "Pickups" },
				{ "ModuleRelativePath", "Public/SPickUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTime = { UE4CodeGen_Private::EPropertyClass::Float, "CooldownTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(ASPickUpActor, CooldownTime), METADATA_PARAMS(NewProp_CooldownTime_MetaData, ARRAY_COUNT(NewProp_CooldownTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerUpClass_MetaData[] = {
				{ "Category", "Pickups" },
				{ "ModuleRelativePath", "Public/SPickUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PowerUpClass = { UE4CodeGen_Private::EPropertyClass::Class, "PowerUpClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000801, 1, nullptr, STRUCT_OFFSET(ASPickUpActor, PowerUpClass), Z_Construct_UClass_ASPowerUpActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PowerUpClass_MetaData, ARRAY_COUNT(NewProp_PowerUpClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalComp = { UE4CodeGen_Private::EPropertyClass::Object, "DecalComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASPickUpActor, DecalComp), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_DecalComp_MetaData, ARRAY_COUNT(NewProp_DecalComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SPickUpActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComp = { UE4CodeGen_Private::EPropertyClass::Object, "SphereComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASPickUpActor, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_SphereComp_MetaData, ARRAY_COUNT(NewProp_SphereComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CooldownTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerUpClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASPickUpActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASPickUpActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ASPickUpActor, 596276747);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPickUpActor(Z_Construct_UClass_ASPickUpActor, &ASPickUpActor::StaticClass, TEXT("/Script/Shooter"), TEXT("ASPickUpActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickUpActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
