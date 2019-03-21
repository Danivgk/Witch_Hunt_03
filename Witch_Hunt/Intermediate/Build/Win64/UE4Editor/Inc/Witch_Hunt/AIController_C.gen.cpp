// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/AIController_C.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController_C() {}
// Cross Module References
	WITCH_HUNT_API UClass* Z_Construct_UClass_AAIController_C_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AAIController_C();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
// End Cross Module References
	void AAIController_C::StaticRegisterNativesAAIController_C()
	{
	}
	UClass* Z_Construct_UClass_AAIController_C_NoRegister()
	{
		return AAIController_C::StaticClass();
	}
	struct Z_Construct_UClass_AAIController_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIController_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_C_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIController_C.h" },
		{ "ModuleRelativePath", "AIController_C.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIController_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController_C>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIController_C_Statics::ClassParams = {
		&AAIController_C::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAIController_C_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIController_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIController_C()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIController_C_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIController_C, 2754910409);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIController_C(Z_Construct_UClass_AAIController_C, &AAIController_C::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("AAIController_C"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController_C);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
