// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Witch_Hunt/Witch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWitch() {}
// Cross Module References
	WITCH_HUNT_API UClass* Z_Construct_UClass_AWitch_NoRegister();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AWitch();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Witch_Hunt();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_DamageTimer();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_GetHealth();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_GetHealthIntText();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_GetMagic();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_GetMagicIntText();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_PlayFlash();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_SetDamageState();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_SetMagicChange();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_SetMagicState();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_SetMagicValue();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_UpdateHealth();
	WITCH_HUNT_API UFunction* Z_Construct_UFunction_AWitch_UpdateMagic();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WITCH_HUNT_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AWitch::StaticRegisterNativesAWitch()
	{
		UClass* Class = AWitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTimer", &AWitch::execDamageTimer },
			{ "GetHealth", &AWitch::execGetHealth },
			{ "GetHealthIntText", &AWitch::execGetHealthIntText },
			{ "GetMagic", &AWitch::execGetMagic },
			{ "GetMagicIntText", &AWitch::execGetMagicIntText },
			{ "PlayFlash", &AWitch::execPlayFlash },
			{ "SetDamageState", &AWitch::execSetDamageState },
			{ "SetMagicChange", &AWitch::execSetMagicChange },
			{ "SetMagicState", &AWitch::execSetMagicState },
			{ "SetMagicValue", &AWitch::execSetMagicValue },
			{ "UpdateHealth", &AWitch::execUpdateHealth },
			{ "UpdateMagic", &AWitch::execUpdateMagic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWitch_DamageTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_DamageTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Damage Timer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_DamageTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "DamageTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_DamageTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_DamageTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_DamageTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_DamageTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_GetHealth_Statics
	{
		struct Witch_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWitch_GetHealth_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Witch_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Get Health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Witch_eventGetHealth_Parms), Z_Construct_UFunction_AWitch_GetHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_GetHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_GetHealthIntText_Statics
	{
		struct Witch_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Witch_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Get Health Text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "GetHealthIntText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Witch_eventGetHealthIntText_Parms), Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_GetHealthIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_GetHealthIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_GetMagic_Statics
	{
		struct Witch_eventGetMagic_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWitch_GetMagic_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Witch_eventGetMagic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_GetMagic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_GetMagic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_GetMagic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Get Magic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_GetMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "GetMagic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Witch_eventGetMagic_Parms), Z_Construct_UFunction_AWitch_GetMagic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetMagic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_GetMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_GetMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_GetMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_GetMagicIntText_Statics
	{
		struct Witch_eventGetMagicIntText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Witch_eventGetMagicIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Get Magic Text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "GetMagicIntText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Witch_eventGetMagicIntText_Parms), Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_GetMagicIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_GetMagicIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_PlayFlash_Statics
	{
		struct Witch_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWitch_PlayFlash_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Witch_eventPlayFlash_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWitch_PlayFlash_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Witch_eventPlayFlash_Parms), &Z_Construct_UFunction_AWitch_PlayFlash_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_PlayFlash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_PlayFlash_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_PlayFlash_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Play Flash" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_PlayFlash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "PlayFlash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(Witch_eventPlayFlash_Parms), Z_Construct_UFunction_AWitch_PlayFlash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_PlayFlash_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_PlayFlash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_PlayFlash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_PlayFlash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_PlayFlash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_SetDamageState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_SetDamageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Set Damage State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_SetDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "SetDamageState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_SetDamageState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_SetDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_SetDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_SetMagicChange_Statics
	{
		struct Witch_eventSetMagicChange_Parms
		{
			float MagicChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWitch_SetMagicChange_Statics::NewProp_MagicChange = { UE4CodeGen_Private::EPropertyClass::Float, "MagicChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Witch_eventSetMagicChange_Parms, MagicChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_SetMagicChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_SetMagicChange_Statics::NewProp_MagicChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_SetMagicChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Set Damage State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_SetMagicChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "SetMagicChange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(Witch_eventSetMagicChange_Parms), Z_Construct_UFunction_AWitch_SetMagicChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_SetMagicChange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_SetMagicChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_SetMagicChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_SetMagicChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_SetMagicChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_SetMagicState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_SetMagicState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Set Damage State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_SetMagicState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "SetMagicState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_SetMagicState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_SetMagicState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_SetMagicState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_SetMagicState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_SetMagicValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_SetMagicValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Set Magic Value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_SetMagicValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "SetMagicValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_SetMagicValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_SetMagicValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_SetMagicValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_SetMagicValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_UpdateHealth_Statics
	{
		struct Witch_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWitch_UpdateHealth_Statics::NewProp_HealthChange = { UE4CodeGen_Private::EPropertyClass::Float, "HealthChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Witch_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWitch_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWitch_UpdateHealth_Statics::NewProp_HealthChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "void ReceivePointDamage(float Damage, const class UDamageType * DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent * HitComponent, FName BoneName, FVector ShotFromDirection, class AController * InstigatedBy, AActor * DamageCauser, const FHitResult & HitInfo);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "UpdateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Witch_eventUpdateHealth_Parms), Z_Construct_UFunction_AWitch_UpdateHealth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWitch_UpdateHealth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_UpdateHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWitch_UpdateMagic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWitch_UpdateMagic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Set Damage State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWitch_UpdateMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWitch, "UpdateMagic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWitch_UpdateMagic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWitch_UpdateMagic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWitch_UpdateMagic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWitch_UpdateMagic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWitch_NoRegister()
	{
		return AWitch::StaticClass();
	}
	struct Z_Construct_UClass_AWitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOverheatMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunOverheatMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunDefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunDefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[];
#endif
		static void NewProp_redFlash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_redFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMagic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullMagic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MagicOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_PointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Magic_PointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Magic_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Witch_Hunt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWitch_DamageTimer, "DamageTimer" }, // 1292463376
		{ &Z_Construct_UFunction_AWitch_GetHealth, "GetHealth" }, // 2721328822
		{ &Z_Construct_UFunction_AWitch_GetHealthIntText, "GetHealthIntText" }, // 4172985200
		{ &Z_Construct_UFunction_AWitch_GetMagic, "GetMagic" }, // 2055133477
		{ &Z_Construct_UFunction_AWitch_GetMagicIntText, "GetMagicIntText" }, // 587192640
		{ &Z_Construct_UFunction_AWitch_PlayFlash, "PlayFlash" }, // 3645898226
		{ &Z_Construct_UFunction_AWitch_SetDamageState, "SetDamageState" }, // 4278384636
		{ &Z_Construct_UFunction_AWitch_SetMagicChange, "SetMagicChange" }, // 4148096344
		{ &Z_Construct_UFunction_AWitch_SetMagicState, "SetMagicState" }, // 3251088240
		{ &Z_Construct_UFunction_AWitch_SetMagicValue, "SetMagicValue" }, // 1063610913
		{ &Z_Construct_UFunction_AWitch_UpdateHealth, "UpdateHealth" }, // 3472499110
		{ &Z_Construct_UFunction_AWitch_UpdateMagic, "UpdateMagic" }, // 2078556175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Witch.h" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AWitch, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_TopDownCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopDownCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AWitch, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_GunOverheatMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_GunOverheatMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GunOverheatMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWitch, GunOverheatMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_GunOverheatMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_GunOverheatMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_GunDefaultMaterial_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_GunDefaultMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "GunDefaultMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWitch, GunDefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_GunDefaultMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_GunDefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_MagicCurve_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_MagicCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MagicCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, MagicCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_MagicCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_MagicCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_redFlash_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	void Z_Construct_UClass_AWitch_Statics::NewProp_redFlash_SetBit(void* Obj)
	{
		((AWitch*)Obj)->redFlash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_redFlash = { UE4CodeGen_Private::EPropertyClass::Bool, "redFlash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AWitch), &Z_Construct_UClass_AWitch_Statics::NewProp_redFlash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_redFlash_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_redFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_MagicValue_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_MagicValue = { UE4CodeGen_Private::EPropertyClass::Float, "MagicValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, MagicValue), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_MagicValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_MagicValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_PreviousMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_PreviousMagic = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousMagic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, PreviousMagic), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_PreviousMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_PreviousMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_MagicPercentage_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_MagicPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "MagicPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, MagicPercentage), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_MagicPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_MagicPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "Magic" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_Magic = { UE4CodeGen_Private::EPropertyClass::Float, "Magic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, Magic), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_FullMagic_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_FullMagic = { UE4CodeGen_Private::EPropertyClass::Float, "FullMagic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, FullMagic), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_FullMagic_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_FullMagic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_HealthPercentage_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_HealthPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "HealthPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, HealthPercentage), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_HealthPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, Health), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_FullHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Witch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_FullHealth = { UE4CodeGen_Private::EPropertyClass::Float, "FullHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, FullHealth), METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_FullHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AWitch, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_MagicOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_MagicOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "MagicOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWitch, MagicOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_MagicOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_MagicOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_Magic_PointLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_Magic_PointLocation = { UE4CodeGen_Private::EPropertyClass::Object, "Magic_PointLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AWitch, Magic_PointLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_PointLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_PointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWitch_Statics::NewProp_Magic_Point_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Witch.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWitch_Statics::NewProp_Magic_Point = { UE4CodeGen_Private::EPropertyClass::Object, "Magic_Point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AWitch, Magic_Point), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_Point_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::NewProp_Magic_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_TopDownCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_GunOverheatMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_GunDefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_MagicCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_redFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_MagicValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_PreviousMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_MagicPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_Magic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_FullMagic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_HealthPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_FullHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_MagicOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_Magic_PointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWitch_Statics::NewProp_Magic_Point,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWitch_Statics::ClassParams = {
		&AWitch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AWitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWitch, 2756505510);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWitch(Z_Construct_UClass_AWitch, &AWitch::StaticClass, TEXT("/Script/Witch_Hunt"), TEXT("AWitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
