// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/ChooseNextWayPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooseNextWayPoint() {}
// Cross Module References
	WITCH_HUNT_API UClass* Z_Construct_UClass_UChooseNextWayPoint_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_UChooseNextWayPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UChooseNextWayPoint::StaticRegisterNativesUChooseNextWayPoint()
	{
	}
	UClass* Z_Construct_UClass_UChooseNextWayPoint_NoRegister()
	{
		return UChooseNextWayPoint::StaticClass();
	}
	struct Z_Construct_UClass_UChooseNextWayPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaypointKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChooseNextWayPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooseNextWayPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChooseNextWayPoint.h" },
		{ "ModuleRelativePath", "ChooseNextWayPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_WaypointKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ChooseNextWayPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_WaypointKey = { UE4CodeGen_Private::EPropertyClass::Struct, "WaypointKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UChooseNextWayPoint, WaypointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_WaypointKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_WaypointKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_IndexKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "ChooseNextWayPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_IndexKey = { UE4CodeGen_Private::EPropertyClass::Struct, "IndexKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UChooseNextWayPoint, IndexKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_IndexKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_IndexKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChooseNextWayPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_WaypointKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChooseNextWayPoint_Statics::NewProp_IndexKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChooseNextWayPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChooseNextWayPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChooseNextWayPoint_Statics::ClassParams = {
		&UChooseNextWayPoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UChooseNextWayPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UChooseNextWayPoint_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UChooseNextWayPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChooseNextWayPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChooseNextWayPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChooseNextWayPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChooseNextWayPoint, 3342997939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChooseNextWayPoint(Z_Construct_UClass_UChooseNextWayPoint, &UChooseNextWayPoint::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("UChooseNextWayPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooseNextWayPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
