// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/FormatterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormatterSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterSettings();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterSettings_NoRegister();
	GRAPHFORMATTER_API UEnum* Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm();
	UPackage* Z_Construct_UPackage__Script_GraphFormatter();
// End Cross Module References
	void UFormatterSettings::StaticRegisterNativesUFormatterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFormatterSettings);
	UClass* Z_Construct_UClass_UFormatterSettings_NoRegister()
	{
		return UFormatterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFormatterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoDetectGraphEditor_MetaData[];
#endif
		static void NewProp_AutoDetectGraphEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoDetectGraphEditor;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportedAssetTypes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SupportedAssetTypes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAssetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SupportedAssetTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableToolbar_MetaData[];
#endif
		static void NewProp_DisableToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableToolbar;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositioningAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositioningAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositioningAlgorithm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentBorder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommentBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLayerNodes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLayerNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBlueprintParameterGroup_MetaData[];
#endif
		static void NewProp_bEnableBlueprintParameterGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBlueprintParameterGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingFactorOfParameterGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpacingFactorOfParameterGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOrderingIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOrderingIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromHorizontalDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromVerticalDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromVerticalDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromHorizontalDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromVerticalDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromVerticalDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFormatterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FormatterSettings.h" },
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable auto detect Graph Editor */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable auto detect Graph Editor" },
#endif
	};
#endif
	void Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor_SetBit(void* Obj)
	{
		((UFormatterSettings*)Obj)->AutoDetectGraphEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor = { "AutoDetectGraphEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFormatterSettings), &Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_ValueProp = { "SupportedAssetTypes", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_Key_KeyProp = { "SupportedAssetTypes_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All Asset types supported */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All Asset types supported" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes = { "SupportedAssetTypes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, SupportedAssetTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toolbar toggle */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toolbar toggle" },
#endif
	};
#endif
	void Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar_SetBit(void* Obj)
	{
		((UFormatterSettings*)Obj)->DisableToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar = { "DisableToolbar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFormatterSettings), &Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Positioning algorithm*/" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Positioning algorithm" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm = { "PositioningAlgorithm", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, PositioningAlgorithm), Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData) }; // 1785273686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_CommentBorder_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Border thickness */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Border thickness" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_CommentBorder = { "CommentBorder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, CommentBorder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_CommentBorder_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_CommentBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spacing between two layers */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spacing between two layers" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_HorizontalSpacing = { "HorizontalSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, HorizontalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spacing between two nodes */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spacing between two nodes" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_VerticalSpacing = { "VerticalSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, VerticalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of nodes per layer, 0 indicates no restriction */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of nodes per layer, 0 indicates no restriction" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxLayerNodes = { "MaxLayerNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, MaxLayerNodes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to enable parameter grouping in Blueprint Editor */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to enable parameter grouping in Blueprint Editor" },
#endif
	};
#endif
	void Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup_SetBit(void* Obj)
	{
		((UFormatterSettings*)Obj)->bEnableBlueprintParameterGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup = { "bEnableBlueprintParameterGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFormatterSettings), &Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SpacingFactorOfParameterGroup_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Spacing factor that multiply with HorizontalSpacing and VerticalSpacing in parameter group */" },
#endif
		{ "EditCondition", "bEnableBlueprintParameterGroup" },
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spacing factor that multiply with HorizontalSpacing and VerticalSpacing in parameter group" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SpacingFactorOfParameterGroup = { "SpacingFactorOfParameterGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, SpacingFactorOfParameterGroup), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SpacingFactorOfParameterGroup_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SpacingFactorOfParameterGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex ordering max iterations */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex ordering max iterations" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxOrderingIterations = { "MaxOrderingIterations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, MaxOrderingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Graph Formatter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Straight connections old settings */" },
#endif
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Straight connections old settings" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta = { "ForwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, ForwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta = { "ForwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, ForwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta = { "BackwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, BackwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta = { "BackwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFormatterSettings, BackwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData), Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFormatterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_AutoDetectGraphEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SupportedAssetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_DisableToolbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_PositioningAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_CommentBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_HorizontalSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_VerticalSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxLayerNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_bEnableBlueprintParameterGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_SpacingFactorOfParameterGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_MaxOrderingIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFormatterSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFormatterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFormatterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFormatterSettings_Statics::ClassParams = {
		&UFormatterSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFormatterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFormatterSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFormatterSettings()
	{
		if (!Z_Registration_Info_UClass_UFormatterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFormatterSettings.OuterSingleton, Z_Construct_UClass_UFormatterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFormatterSettings.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UClass* StaticClass<UFormatterSettings>()
	{
		return UFormatterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFormatterSettings);
	UFormatterSettings::~UFormatterSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFormatterSettings, UFormatterSettings::StaticClass, TEXT("UFormatterSettings"), &Z_Registration_Info_UClass_UFormatterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFormatterSettings), 1396261563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterSettings_h_1137448125(TEXT("/Script/GraphFormatter"),
		Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
