// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : int32;
#ifdef WITCH_HUNT_Witch_HuntGameModeBase_generated_h
#error "Witch_HuntGameModeBase.generated.h already included, missing '#pragma once' in Witch_HuntGameModeBase.h"
#endif
#define WITCH_HUNT_Witch_HuntGameModeBase_generated_h

#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWitch_HuntGameModeBase(); \
	friend struct Z_Construct_UClass_AWitch_HuntGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWitch_HuntGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(AWitch_HuntGameModeBase)


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAWitch_HuntGameModeBase(); \
	friend struct Z_Construct_UClass_AWitch_HuntGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AWitch_HuntGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(AWitch_HuntGameModeBase)


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWitch_HuntGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWitch_HuntGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWitch_HuntGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWitch_HuntGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWitch_HuntGameModeBase(AWitch_HuntGameModeBase&&); \
	NO_API AWitch_HuntGameModeBase(const AWitch_HuntGameModeBase&); \
public:


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWitch_HuntGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWitch_HuntGameModeBase(AWitch_HuntGameModeBase&&); \
	NO_API AWitch_HuntGameModeBase(const AWitch_HuntGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWitch_HuntGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWitch_HuntGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWitch_HuntGameModeBase)


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET
#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_21_PROLOG
#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_RPC_WRAPPERS \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_INCLASS \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Witch_Hunt_Source_Witch_Hunt_Witch_HuntGameModeBase_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
