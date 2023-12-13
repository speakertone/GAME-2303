// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/FormatterGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFormatterGraph() {}
// Cross Module References
	GRAPHFORMATTER_API UEnum* Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection();
	GRAPHFORMATTER_API UEnum* Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm();
	UPackage* Z_Construct_UPackage__Script_GraphFormatter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm;
	static UEnum* EGraphFormatterPositioningAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm, (UObject*)Z_Construct_UPackage__Script_GraphFormatter(), TEXT("EGraphFormatterPositioningAlgorithm"));
		}
		return Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UEnum* StaticEnum<EGraphFormatterPositioningAlgorithm>()
	{
		return EGraphFormatterPositioningAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enumerators[] = {
		{ "EGraphFormatterPositioningAlgorithm::EEvenlyInLayer", (int64)EGraphFormatterPositioningAlgorithm::EEvenlyInLayer },
		{ "EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodTop", (int64)EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodTop },
		{ "EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodMedian", (int64)EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodMedian },
		{ "EGraphFormatterPositioningAlgorithm::ELayerSweep", (int64)EGraphFormatterPositioningAlgorithm::ELayerSweep },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "EEvenlyInLayer.DisplayName", "Place node evenly in layer" },
		{ "EEvenlyInLayer.Name", "EGraphFormatterPositioningAlgorithm::EEvenlyInLayer" },
		{ "EFastAndSimpleMethodMedian.DisplayName", "FAS Median" },
		{ "EFastAndSimpleMethodMedian.Name", "EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodMedian" },
		{ "EFastAndSimpleMethodTop.DisplayName", "FAS Top" },
		{ "EFastAndSimpleMethodTop.Name", "EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodTop" },
		{ "ELayerSweep.DisplayName", "Layer sweep" },
		{ "ELayerSweep.Name", "EGraphFormatterPositioningAlgorithm::ELayerSweep" },
		{ "ModuleRelativePath", "Private/FormatterGraph.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GraphFormatter,
		nullptr,
		"EGraphFormatterPositioningAlgorithm",
		"EGraphFormatterPositioningAlgorithm",
		Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.InnerSingleton, Z_Construct_UEnum_GraphFormatter_EGraphFormatterPositioningAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFormatterPinDirection;
	static UEnum* EFormatterPinDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFormatterPinDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFormatterPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection, (UObject*)Z_Construct_UPackage__Script_GraphFormatter(), TEXT("EFormatterPinDirection"));
		}
		return Z_Registration_Info_UEnum_EFormatterPinDirection.OuterSingleton;
	}
	template<> GRAPHFORMATTER_API UEnum* StaticEnum<EFormatterPinDirection>()
	{
		return EFormatterPinDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enumerators[] = {
		{ "EFormatterPinDirection::In", (int64)EFormatterPinDirection::In },
		{ "EFormatterPinDirection::Out", (int64)EFormatterPinDirection::Out },
		{ "EFormatterPinDirection::InOut", (int64)EFormatterPinDirection::InOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enum_MetaDataParams[] = {
		{ "In.Name", "EFormatterPinDirection::In" },
		{ "InOut.Name", "EFormatterPinDirection::InOut" },
		{ "ModuleRelativePath", "Private/FormatterGraph.h" },
		{ "Out.Name", "EFormatterPinDirection::Out" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GraphFormatter,
		nullptr,
		"EFormatterPinDirection",
		"EFormatterPinDirection",
		Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection()
	{
		if (!Z_Registration_Info_UEnum_EFormatterPinDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFormatterPinDirection.InnerSingleton, Z_Construct_UEnum_GraphFormatter_EFormatterPinDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFormatterPinDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h_Statics::EnumInfo[] = {
		{ EGraphFormatterPositioningAlgorithm_StaticEnum, TEXT("EGraphFormatterPositioningAlgorithm"), &Z_Registration_Info_UEnum_EGraphFormatterPositioningAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1785273686U) },
		{ EFormatterPinDirection_StaticEnum, TEXT("EFormatterPinDirection"), &Z_Registration_Info_UEnum_EFormatterPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 536306837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h_1410186356(TEXT("/Script/GraphFormatter"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_theco_Documents_Unreal_Projects_Week15_FinalBP_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
