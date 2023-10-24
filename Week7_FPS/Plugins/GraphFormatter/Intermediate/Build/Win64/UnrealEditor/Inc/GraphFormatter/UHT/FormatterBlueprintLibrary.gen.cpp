// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/FormatterBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormatterBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterGraph();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterGraph_NoRegister();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterNode();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterNode_NoRegister();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterPin();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UFormatterPin_NoRegister();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UGraphLayoutLibrary();
	GRAPHFORMATTER_API UClass* Z_Construct_UClass_UGraphLayoutLibrary_NoRegister();
	GRAPHFORMATTER_API UEnum* Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection();
	GRAPHFORMATTER_API UEnum* Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm();
	GRAPHFORMATTER_API UScriptStruct* Z_Construct_UScriptStruct_FGraphFormatterSettings();
	UPackage* Z_Construct_UPackage__Script_GraphFormatter();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphFormatterSettings;
class UScriptStruct* FGraphFormatterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphFormatterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphFormatterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphFormatterSettings, (UObject*)Z_Construct_UPackage__Script_GraphFormatter(), TEXT("GraphFormatterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GraphFormatterSettings.OuterSingleton;
}
template<> GRAPHFORMATTER_API UScriptStruct* StaticStruct<FGraphFormatterSettings>()
{
	return FGraphFormatterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOrderingIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOrderingIterations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositioningAlgorithm_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositioningAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositioningAlgorithm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphFormatterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_HorizontalSpacing = { "HorizontalSpacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphFormatterSettings, HorizontalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_HorizontalSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_VerticalSpacing = { "VerticalSpacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphFormatterSettings, VerticalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_VerticalSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxLayerNodes = { "MaxLayerNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphFormatterSettings, MaxLayerNodes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxLayerNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData[] = {
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxOrderingIterations = { "MaxOrderingIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphFormatterSettings, MaxOrderingIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxOrderingIterations_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData[] = {
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm = { "PositioningAlgorithm", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphFormatterSettings, PositioningAlgorithm), Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm_MetaData) }; // 1785273686
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_HorizontalSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_VerticalSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxLayerNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_MaxOrderingIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewProp_PositioningAlgorithm,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
		nullptr,
		&NewStructOps,
		"GraphFormatterSettings",
		Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::PropPointers),
		sizeof(FGraphFormatterSettings),
		alignof(FGraphFormatterSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGraphFormatterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_GraphFormatterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphFormatterSettings.InnerSingleton, Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GraphFormatterSettings.InnerSingleton;
	}
	void UFormatterPin::StaticRegisterNativesUFormatterPin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFormatterPin);
	UClass* Z_Construct_UClass_UFormatterPin_NoRegister()
	{
		return UFormatterPin::StaticClass();
	}
	struct Z_Construct_UClass_UFormatterPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFormatterPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterPin_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Graph Formatter" },
		{ "IncludePath", "FormatterBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFormatterPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFormatterPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFormatterPin_Statics::ClassParams = {
		&UFormatterPin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterPin_Statics::Class_MetaDataParams), Z_Construct_UClass_UFormatterPin_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFormatterPin()
	{
		if (!Z_Registration_Info_UClass_UFormatterPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFormatterPin.OuterSingleton, Z_Construct_UClass_UFormatterPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFormatterPin.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UClass* StaticClass<UFormatterPin>()
	{
		return UFormatterPin::StaticClass();
	}
	UFormatterPin::UFormatterPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFormatterPin);
	UFormatterPin::~UFormatterPin() {}
	void UFormatterNode::StaticRegisterNativesUFormatterNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFormatterNode);
	UClass* Z_Construct_UClass_UFormatterNode_NoRegister()
	{
		return UFormatterNode::StaticClass();
	}
	struct Z_Construct_UClass_UFormatterNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFormatterNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterNode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Graph Formatter" },
		{ "IncludePath", "FormatterBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFormatterNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFormatterNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFormatterNode_Statics::ClassParams = {
		&UFormatterNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFormatterNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFormatterNode()
	{
		if (!Z_Registration_Info_UClass_UFormatterNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFormatterNode.OuterSingleton, Z_Construct_UClass_UFormatterNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFormatterNode.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UClass* StaticClass<UFormatterNode>()
	{
		return UFormatterNode::StaticClass();
	}
	UFormatterNode::UFormatterNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFormatterNode);
	UFormatterNode::~UFormatterNode() {}
	void UFormatterGraph::StaticRegisterNativesUFormatterGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFormatterGraph);
	UClass* Z_Construct_UClass_UFormatterGraph_NoRegister()
	{
		return UFormatterGraph::StaticClass();
	}
	struct Z_Construct_UClass_UFormatterGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFormatterGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFormatterGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Graph Formatter" },
		{ "IncludePath", "FormatterBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFormatterGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFormatterGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFormatterGraph_Statics::ClassParams = {
		&UFormatterGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFormatterGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UFormatterGraph_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFormatterGraph()
	{
		if (!Z_Registration_Info_UClass_UFormatterGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFormatterGraph.OuterSingleton, Z_Construct_UClass_UFormatterGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFormatterGraph.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UClass* StaticClass<UFormatterGraph>()
	{
		return UFormatterGraph::StaticClass();
	}
	UFormatterGraph::UFormatterGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFormatterGraph);
	UFormatterGraph::~UFormatterGraph() {}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execGetBoundMap)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UFormatterNode*,FBox2D>*)Z_Param__Result=UGraphLayoutLibrary::GetBoundMap(Z_Param_Graph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execShiftBy)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_GET_STRUCT(FVector2D,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGraphLayoutLibrary::ShiftBy(Z_Param_Graph,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execGetTotalBound)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox2D*)Z_Param__Result=UGraphLayoutLibrary::GetTotalBound(Z_Param_Graph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execFormat)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGraphLayoutLibrary::Format(Z_Param_Graph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execApplySettings)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_GET_STRUCT(FGraphFormatterSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGraphLayoutLibrary::ApplySettings(Z_Param_Graph,Z_Param_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execConnect)
	{
		P_GET_OBJECT(UFormatterPin,Z_Param_From);
		P_GET_OBJECT(UFormatterPin,Z_Param_To);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGraphLayoutLibrary::Connect(Z_Param_From,Z_Param_To);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execAddPin)
	{
		P_GET_OBJECT(UFormatterNode,Z_Param_Node);
		P_GET_STRUCT(FVector2D,Z_Param_Offset);
		P_GET_ENUM(EFormatterPinDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFormatterPin**)Z_Param__Result=UGraphLayoutLibrary::AddPin(Z_Param_Node,Z_Param_Offset,EFormatterPinDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execAddNode)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_GET_OBJECT(UFormatterGraph,Z_Param_SubGraph);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFormatterNode**)Z_Param__Result=UGraphLayoutLibrary::AddNode(Z_Param_Graph,Z_Param_Position,Z_Param_Size,Z_Param_SubGraph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execDestroyGraph)
	{
		P_GET_OBJECT(UFormatterGraph,Z_Param_Graph);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGraphLayoutLibrary::DestroyGraph(Z_Param_Graph);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGraphLayoutLibrary::execCreateGraph)
	{
		P_GET_UBOOL(Z_Param_InIsVertical);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFormatterGraph**)Z_Param__Result=UGraphLayoutLibrary::CreateGraph(Z_Param_InIsVertical);
		P_NATIVE_END;
	}
	void UGraphLayoutLibrary::StaticRegisterNativesUGraphLayoutLibrary()
	{
		UClass* Class = UGraphLayoutLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNode", &UGraphLayoutLibrary::execAddNode },
			{ "AddPin", &UGraphLayoutLibrary::execAddPin },
			{ "ApplySettings", &UGraphLayoutLibrary::execApplySettings },
			{ "Connect", &UGraphLayoutLibrary::execConnect },
			{ "CreateGraph", &UGraphLayoutLibrary::execCreateGraph },
			{ "DestroyGraph", &UGraphLayoutLibrary::execDestroyGraph },
			{ "Format", &UGraphLayoutLibrary::execFormat },
			{ "GetBoundMap", &UGraphLayoutLibrary::execGetBoundMap },
			{ "GetTotalBound", &UGraphLayoutLibrary::execGetTotalBound },
			{ "ShiftBy", &UGraphLayoutLibrary::execShiftBy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics
	{
		struct GraphLayoutLibrary_eventAddNode_Parms
		{
			UFormatterGraph* Graph;
			FVector2D Position;
			FVector2D Size;
			UFormatterGraph* SubGraph;
			UFormatterNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubGraph;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddNode_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddNode_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddNode_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_SubGraph = { "SubGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddNode_Parms, SubGraph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddNode_Parms, ReturnValue), Z_Construct_UClass_UFormatterNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_SubGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "CPP_Default_SubGraph", "None" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "AddNode", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::GraphLayoutLibrary_eventAddNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::GraphLayoutLibrary_eventAddNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_AddNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_AddNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics
	{
		struct GraphLayoutLibrary_eventAddPin_Parms
		{
			UFormatterNode* Node;
			FVector2D Offset;
			EFormatterPinDirection Direction;
			UFormatterPin* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddPin_Parms, Node), Z_Construct_UClass_UFormatterNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddPin_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddPin_Parms, Direction), Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection, METADATA_PARAMS(0, nullptr) }; // 536306837
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventAddPin_Parms, ReturnValue), Z_Construct_UClass_UFormatterPin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "AddPin", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::GraphLayoutLibrary_eventAddPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::GraphLayoutLibrary_eventAddPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_AddPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_AddPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics
	{
		struct GraphLayoutLibrary_eventApplySettings_Parms
		{
			UFormatterGraph* Graph;
			FGraphFormatterSettings Settings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventApplySettings_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventApplySettings_Parms, Settings), Z_Construct_UScriptStruct_FGraphFormatterSettings, METADATA_PARAMS(0, nullptr) }; // 29099350
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "ApplySettings", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::GraphLayoutLibrary_eventApplySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::GraphLayoutLibrary_eventApplySettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics
	{
		struct GraphLayoutLibrary_eventConnect_Parms
		{
			UFormatterPin* From;
			UFormatterPin* To;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventConnect_Parms, From), Z_Construct_UClass_UFormatterPin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventConnect_Parms, To), Z_Construct_UClass_UFormatterPin_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::NewProp_To,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::GraphLayoutLibrary_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::GraphLayoutLibrary_eventConnect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics
	{
		struct GraphLayoutLibrary_eventCreateGraph_Parms
		{
			bool InIsVertical;
			UFormatterGraph* ReturnValue;
		};
		static void NewProp_InIsVertical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsVertical;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_InIsVertical_SetBit(void* Obj)
	{
		((GraphLayoutLibrary_eventCreateGraph_Parms*)Obj)->InIsVertical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_InIsVertical = { "InIsVertical", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GraphLayoutLibrary_eventCreateGraph_Parms), &Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_InIsVertical_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventCreateGraph_Parms, ReturnValue), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_InIsVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "CreateGraph", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::GraphLayoutLibrary_eventCreateGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::GraphLayoutLibrary_eventCreateGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics
	{
		struct GraphLayoutLibrary_eventDestroyGraph_Parms
		{
			UFormatterGraph* Graph;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventDestroyGraph_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::NewProp_Graph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "DestroyGraph", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::GraphLayoutLibrary_eventDestroyGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::GraphLayoutLibrary_eventDestroyGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics
	{
		struct GraphLayoutLibrary_eventFormat_Parms
		{
			UFormatterGraph* Graph;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventFormat_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::NewProp_Graph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "Format", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::GraphLayoutLibrary_eventFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::GraphLayoutLibrary_eventFormat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_Format()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_Format_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics
	{
		struct GraphLayoutLibrary_eventGetBoundMap_Parms
		{
			UFormatterGraph* Graph;
			TMap<UFormatterNode*,FBox2D> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventGetBoundMap_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFormatterNode_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventGetBoundMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "GetBoundMap", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::GraphLayoutLibrary_eventGetBoundMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::GraphLayoutLibrary_eventGetBoundMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics
	{
		struct GraphLayoutLibrary_eventGetTotalBound_Parms
		{
			UFormatterGraph* Graph;
			FBox2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventGetTotalBound_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventGetTotalBound_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "GetTotalBound", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::GraphLayoutLibrary_eventGetTotalBound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::GraphLayoutLibrary_eventGetTotalBound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics
	{
		struct GraphLayoutLibrary_eventShiftBy_Parms
		{
			UFormatterGraph* Graph;
			FVector2D Offset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventShiftBy_Parms, Graph), Z_Construct_UClass_UFormatterGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GraphLayoutLibrary_eventShiftBy_Parms, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Formatter" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphLayoutLibrary, nullptr, "ShiftBy", nullptr, nullptr, Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::GraphLayoutLibrary_eventShiftBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::GraphLayoutLibrary_eventShiftBy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphLayoutLibrary);
	UClass* Z_Construct_UClass_UGraphLayoutLibrary_NoRegister()
	{
		return UGraphLayoutLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGraphLayoutLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphLayoutLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphFormatter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphLayoutLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGraphLayoutLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_AddNode, "AddNode" }, // 1982865733
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_AddPin, "AddPin" }, // 1197189453
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_ApplySettings, "ApplySettings" }, // 2201555211
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_Connect, "Connect" }, // 3147900121
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_CreateGraph, "CreateGraph" }, // 1387313906
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_DestroyGraph, "DestroyGraph" }, // 3379576307
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_Format, "Format" }, // 3306148606
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_GetBoundMap, "GetBoundMap" }, // 2212551248
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_GetTotalBound, "GetTotalBound" }, // 4263576109
		{ &Z_Construct_UFunction_UGraphLayoutLibrary_ShiftBy, "ShiftBy" }, // 3753920569
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphLayoutLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphLayoutLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Graph Formatter" },
		{ "IncludePath", "FormatterBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/FormatterBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphLayoutLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphLayoutLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphLayoutLibrary_Statics::ClassParams = {
		&UGraphLayoutLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphLayoutLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphLayoutLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGraphLayoutLibrary()
	{
		if (!Z_Registration_Info_UClass_UGraphLayoutLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphLayoutLibrary.OuterSingleton, Z_Construct_UClass_UGraphLayoutLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGraphLayoutLibrary.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UClass* StaticClass<UGraphLayoutLibrary>()
	{
		return UGraphLayoutLibrary::StaticClass();
	}
	UGraphLayoutLibrary::UGraphLayoutLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphLayoutLibrary);
	UGraphLayoutLibrary::~UGraphLayoutLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FGraphFormatterSettings::StaticStruct, Z_Construct_UScriptStruct_FGraphFormatterSettings_Statics::NewStructOps, TEXT("GraphFormatterSettings"), &Z_Registration_Info_UScriptStruct_GraphFormatterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphFormatterSettings), 29099350U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFormatterPin, UFormatterPin::StaticClass, TEXT("UFormatterPin"), &Z_Registration_Info_UClass_UFormatterPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFormatterPin), 1341366315U) },
		{ Z_Construct_UClass_UFormatterNode, UFormatterNode::StaticClass, TEXT("UFormatterNode"), &Z_Registration_Info_UClass_UFormatterNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFormatterNode), 3686092530U) },
		{ Z_Construct_UClass_UFormatterGraph, UFormatterGraph::StaticClass, TEXT("UFormatterGraph"), &Z_Registration_Info_UClass_UFormatterGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFormatterGraph), 2558880468U) },
		{ Z_Construct_UClass_UGraphLayoutLibrary, UGraphLayoutLibrary::StaticClass, TEXT("UGraphLayoutLibrary"), &Z_Registration_Info_UClass_UGraphLayoutLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphLayoutLibrary), 4101228119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_1246996775(TEXT("/Script/GraphFormatter"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
