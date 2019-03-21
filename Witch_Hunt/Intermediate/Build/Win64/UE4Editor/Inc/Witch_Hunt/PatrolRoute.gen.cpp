// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/PatrolRoute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolRoute() {}
// Cross Module References
	WITCH_HUNT_API UClass* Z_Construct_UClass_UPatrolRoute_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_UPatrolRoute();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPatrolRoute::StaticRegisterNativesUPatrolRoute()
	{
	}
	UClass* Z_Construct_UClass_UPatrolRoute_NoRegister()
	{
		return UPatrolRoute::StaticClass();
	}
	struct Z_Construct_UClass_UPatrolRoute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatrolRoute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolRoute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PatrolRoute.h" },
		{ "ModuleRelativePath", "PatrolRoute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "Patrol Route" },
		{ "ModuleRelativePath", "PatrolRoute.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000801, 1, nullptr, STRUCT_OFFSET(UPatrolRoute, PatrolPoints), METADATA_PARAMS(Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatrolRoute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatrolRoute_Statics::NewProp_PatrolPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatrolRoute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatrolRoute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPatrolRoute_Statics::ClassParams = {
		&UPatrolRoute::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UPatrolRoute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPatrolRoute_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPatrolRoute_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPatrolRoute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatrolRoute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPatrolRoute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPatrolRoute, 1791964373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPatrolRoute(Z_Construct_UClass_UPatrolRoute, &UPatrolRoute::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("UPatrolRoute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolRoute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
