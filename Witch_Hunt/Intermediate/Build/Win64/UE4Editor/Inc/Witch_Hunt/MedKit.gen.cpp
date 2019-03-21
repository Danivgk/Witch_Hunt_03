// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/MedKit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMedKit() {}
// Cross Module References
	WITCH_HUNT_API UClass* Z_Construct_UClass_AMedKit_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AMedKit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AMedKit_OnOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AMedKit::StaticRegisterNativesAMedKit()
	{
		UClass* Class = AMedKit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &AMedKit::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMedKit_OnOverlap_Statics
	{
		struct MedKit_eventOnOverlap_Parms
		{
			AActor* MyOverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyOverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMedKit_OnOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MedKit_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMedKit_OnOverlap_Statics::NewProp_MyOverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "MyOverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MedKit_eventOnOverlap_Parms, MyOverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMedKit_OnOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedKit_OnOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMedKit_OnOverlap_Statics::NewProp_MyOverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMedKit_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MedKit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMedKit_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMedKit, "OnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MedKit_eventOnOverlap_Parms), Z_Construct_UFunction_AMedKit_OnOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMedKit_OnOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMedKit_OnOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMedKit_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMedKit_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMedKit_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMedKit_NoRegister()
	{
		return AMedKit::StaticClass();
	}
	struct Z_Construct_UClass_AMedKit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMedKit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMedKit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMedKit_OnOverlap, "OnOverlap" }, // 3284884326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedKit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MedKit.h" },
		{ "ModuleRelativePath", "MedKit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMedKit_Statics::NewProp_ZValue_MetaData[] = {
		{ "Category", "MedKit Movement" },
		{ "ModuleRelativePath", "MedKit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMedKit_Statics::NewProp_ZValue = { UE4CodeGen_Private::EPropertyClass::Float, "ZValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMedKit, ZValue), METADATA_PARAMS(Z_Construct_UClass_AMedKit_Statics::NewProp_ZValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMedKit_Statics::NewProp_ZValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMedKit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMedKit_Statics::NewProp_ZValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMedKit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMedKit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMedKit_Statics::ClassParams = {
		&AMedKit::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMedKit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMedKit_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMedKit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMedKit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMedKit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMedKit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMedKit, 1098076026);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMedKit(Z_Construct_UClass_AMedKit, &AMedKit::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("AMedKit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMedKit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
