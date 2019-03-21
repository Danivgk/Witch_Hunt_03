// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WITCH_HUNT_Witch_generated_h
#error "Witch.generated.h already included, missing '#pragma once' in Witch.h"
#endif
#define WITCH_HUNT_Witch_generated_h

#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicChange(Z_Param_MagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicChange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MagicChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicChange(Z_Param_MagicChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWitch(); \
	friend struct Z_Construct_UClass_AWitch_Statics; \
public: \
	DECLARE_CLASS(AWitch, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(AWitch)


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWitch(); \
	friend struct Z_Construct_UClass_AWitch_Statics; \
public: \
	DECLARE_CLASS(AWitch, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(AWitch)


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWitch(AWitch&&); \
	NO_API AWitch(const AWitch&); \
public:


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWitch(AWitch&&); \
	NO_API AWitch(const AWitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWitch)


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Magic_Point() { return STRUCT_OFFSET(AWitch, Magic_Point); } \
	FORCEINLINE static uint32 __PPO__Magic_PointLocation() { return STRUCT_OFFSET(AWitch, Magic_PointLocation); } \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AWitch, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AWitch, CameraBoom); }


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_11_PROLOG
#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_RPC_WRAPPERS \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_INCLASS \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Witch_Hunt_Source_Witch_Hunt_Witch_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_INCLASS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_Witch_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Witch_Hunt_Source_Witch_Hunt_Witch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
