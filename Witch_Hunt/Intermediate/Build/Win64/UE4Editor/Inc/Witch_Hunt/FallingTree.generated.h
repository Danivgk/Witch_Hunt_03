// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WITCH_HUNT_FallingTree_generated_h
#error "FallingTree.generated.h already included, missing '#pragma once' in FallingTree.h"
#endif
#define WITCH_HUNT_FallingTree_generated_h

#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_11_DELEGATE \
static inline void FOnFall_DelegateWrapper(const FMulticastScriptDelegate& OnFall) \
{ \
	OnFall.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_RPC_WRAPPERS
#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFallingTree(); \
	friend struct Z_Construct_UClass_UFallingTree_Statics; \
public: \
	DECLARE_CLASS(UFallingTree, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(UFallingTree)


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFallingTree(); \
	friend struct Z_Construct_UClass_UFallingTree_Statics; \
public: \
	DECLARE_CLASS(UFallingTree, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Witch_Hunt"), NO_API) \
	DECLARE_SERIALIZER(UFallingTree)


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFallingTree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFallingTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFallingTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFallingTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFallingTree(UFallingTree&&); \
	NO_API UFallingTree(const UFallingTree&); \
public:


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFallingTree(UFallingTree&&); \
	NO_API UFallingTree(const UFallingTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFallingTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFallingTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFallingTree)


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UFallingTree, PressurePlate); }


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_13_PROLOG
#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_RPC_WRAPPERS \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_INCLASS \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_PRIVATE_PROPERTY_OFFSET \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_INCLASS_NO_PURE_DECLS \
	Witch_Hunt_Source_Witch_Hunt_FallingTree_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Witch_Hunt_Source_Witch_Hunt_FallingTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
