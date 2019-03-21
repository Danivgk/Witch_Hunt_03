// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/Witch_HuntGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitch_HuntGameModeBase() {}
// Cross Module References
	WITCH_HUNT_API UEnum* Z_Construct_UEnum_Witch_Hunt_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AWitch_HuntGameModeBase_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AWitch_HuntGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState();
// End Cross Module References
	static UEnum* EGamePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Witch_Hunt_EGamePlayState, Z_Construct_UPackage__Script_Witch_Hunt(), TEXT("EGamePlayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePlayState(EGamePlayState_StaticEnum, TEXT("/Script/Witch_Hunt"), TEXT("EGamePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Witch_Hunt_EGamePlayState_CRC() { return 659645816U; }
	UEnum* Z_Construct_UEnum_Witch_Hunt_EGamePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Witch_Hunt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePlayState"), 0, Get_Z_Construct_UEnum_Witch_Hunt_EGamePlayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
				{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
				{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Witch_HuntGameModeBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Witch_Hunt,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGamePlayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGamePlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AWitch_HuntGameModeBase::StaticRegisterNativesAWitch_HuntGameModeBase()
	{
		UClass* Class = AWitch_HuntGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AWitch_HuntGameModeBase::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics
	{
		struct Witch_HuntGameModeBase_eventGetCurrentState_Parms
		{
			EGamePlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Witch_HuntGameModeBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Witch_Hunt_EGamePlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch_HuntGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch_HuntGameModeBase, "GetCurrentState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54040401, sizeof(Witch_HuntGameModeBase_eventGetCurrentState_Parms), Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWitch_HuntGameModeBase_NoRegister()
	{
		return AWitch_HuntGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWitch_HuntGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWitch_HuntGameModeBase_GetCurrentState, "GetCurrentState" }, // 3273008361
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Witch_HuntGameModeBase.h" },
		{ "ModuleRelativePath", "Witch_HuntGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitch_HuntGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::ClassParams = {
		&AWitch_HuntGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitch_HuntGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWitch_HuntGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWitch_HuntGameModeBase, 4191387024);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWitch_HuntGameModeBase(Z_Construct_UClass_AWitch_HuntGameModeBase, &AWitch_HuntGameModeBase::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("AWitch_HuntGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitch_HuntGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
