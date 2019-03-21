// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/FallingTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFallingTree() {}
// Cross Module References
	WITCH_HUNT_API UFunction* Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	WITCH_HUNT_API UClass* Z_Construct_UClass_UFallingTree_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_UFallingTree();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FallingTree.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Witch_Hunt, "OnFall__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFallingTree::StaticRegisterNativesUFallingTree()
	{
	}
	UClass* Z_Construct_UClass_UFallingTree_NoRegister()
	{
		return UFallingTree::StaticClass();
	}
	struct Z_Construct_UClass_UFallingTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOnFall_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FOnFall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFallingTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFallingTree_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FallingTree.h" },
		{ "ModuleRelativePath", "FallingTree.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFallingTree_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "FallingTree" },
		{ "ModuleRelativePath", "FallingTree.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFallingTree_Statics::NewProp_PressurePlate = { UE4CodeGen_Private::EPropertyClass::Object, "PressurePlate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UFallingTree, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFallingTree_Statics::NewProp_PressurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFallingTree_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFallingTree_Statics::NewProp_FOnFall_MetaData[] = {
		{ "ModuleRelativePath", "FallingTree.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFallingTree_Statics::NewProp_FOnFall = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "FOnFall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFallingTree, FOnFall), Z_Construct_UDelegateFunction_Witch_Hunt_OnFall__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFallingTree_Statics::NewProp_FOnFall_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFallingTree_Statics::NewProp_FOnFall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFallingTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFallingTree_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFallingTree_Statics::NewProp_FOnFall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFallingTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFallingTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFallingTree_Statics::ClassParams = {
		&UFallingTree::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UFallingTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFallingTree_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFallingTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFallingTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFallingTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFallingTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFallingTree, 4189085166);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFallingTree(Z_Construct_UClass_UFallingTree, &UFallingTree::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("UFallingTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFallingTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
