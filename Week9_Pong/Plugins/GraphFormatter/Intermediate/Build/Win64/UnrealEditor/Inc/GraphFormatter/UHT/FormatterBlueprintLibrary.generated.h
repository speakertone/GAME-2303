// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FormatterBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFormatterGraph;
class UFormatterNode;
class UFormatterNode; 
class UFormatterPin;
enum class EFormatterPinDirection : uint8;
struct FGraphFormatterSettings;
#ifdef GRAPHFORMATTER_FormatterBlueprintLibrary_generated_h
#error "FormatterBlueprintLibrary.generated.h already included, missing '#pragma once' in FormatterBlueprintLibrary.h"
#endif
#define GRAPHFORMATTER_FormatterBlueprintLibrary_generated_h

#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics; \
	GRAPHFORMATTER_API static class UScriptStruct* StaticStruct();


template<> GRAPHFORMATTER_API UScriptStruct* StaticStruct<struct FGraphFormatterSettings>();

#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_SPARSE_DATA
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFormatterPin(); \
	friend struct Z_Construct_UClass_UFormatterPin_Statics; \
public: \
	DECLARE_CLASS(UFormatterPin, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GraphFormatter"), NO_API) \
	DECLARE_SERIALIZER(UFormatterPin)


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFormatterPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFormatterPin(UFormatterPin&&); \
	NO_API UFormatterPin(const UFormatterPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFormatterPin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFormatterPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFormatterPin) \
	NO_API virtual ~UFormatterPin();


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_33_PROLOG
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_SPARSE_DATA \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHFORMATTER_API UClass* StaticClass<class UFormatterPin>();

#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_SPARSE_DATA
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFormatterNode(); \
	friend struct Z_Construct_UClass_UFormatterNode_Statics; \
public: \
	DECLARE_CLASS(UFormatterNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GraphFormatter"), NO_API) \
	DECLARE_SERIALIZER(UFormatterNode)


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFormatterNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFormatterNode(UFormatterNode&&); \
	NO_API UFormatterNode(const UFormatterNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFormatterNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFormatterNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFormatterNode) \
	NO_API virtual ~UFormatterNode();


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_42_PROLOG
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_SPARSE_DATA \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHFORMATTER_API UClass* StaticClass<class UFormatterNode>();

#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_SPARSE_DATA
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFormatterGraph(); \
	friend struct Z_Construct_UClass_UFormatterGraph_Statics; \
public: \
	DECLARE_CLASS(UFormatterGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GraphFormatter"), NO_API) \
	DECLARE_SERIALIZER(UFormatterGraph)


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFormatterGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFormatterGraph(UFormatterGraph&&); \
	NO_API UFormatterGraph(const UFormatterGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFormatterGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFormatterGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFormatterGraph) \
	NO_API virtual ~UFormatterGraph();


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_51_PROLOG
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_SPARSE_DATA \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHFORMATTER_API UClass* StaticClass<class UFormatterGraph>();

#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_SPARSE_DATA
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundMap); \
	DECLARE_FUNCTION(execShiftBy); \
	DECLARE_FUNCTION(execGetTotalBound); \
	DECLARE_FUNCTION(execFormat); \
	DECLARE_FUNCTION(execApplySettings); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execAddPin); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execDestroyGraph); \
	DECLARE_FUNCTION(execCreateGraph);


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_ACCESSORS
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphLayoutLibrary(); \
	friend struct Z_Construct_UClass_UGraphLayoutLibrary_Statics; \
public: \
	DECLARE_CLASS(UGraphLayoutLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GraphFormatter"), NO_API) \
	DECLARE_SERIALIZER(UGraphLayoutLibrary)


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphLayoutLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphLayoutLibrary(UGraphLayoutLibrary&&); \
	NO_API UGraphLayoutLibrary(const UGraphLayoutLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphLayoutLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphLayoutLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphLayoutLibrary) \
	NO_API virtual ~UGraphLayoutLibrary();


#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_60_PROLOG
#define FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_ACCESSORS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPHFORMATTER_API UClass* StaticClass<class UGraphLayoutLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
