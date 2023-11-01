// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FormatterGraph.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPHFORMATTER_FormatterGraph_generated_h
#error "FormatterGraph.generated.h already included, missing '#pragma once' in FormatterGraph.h"
#endif
#define GRAPHFORMATTER_FormatterGraph_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GraphFormatter_Source_GraphFormatter_Private_FormatterGraph_h


#define FOREACH_ENUM_EGRAPHFORMATTERPOSITIONINGALGORITHM(op) \
	op(EGraphFormatterPositioningAlgorithm::EEvenlyInLayer) \
	op(EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodTop) \
	op(EGraphFormatterPositioningAlgorithm::EFastAndSimpleMethodMedian) \
	op(EGraphFormatterPositioningAlgorithm::ELayerSweep) 

enum class EGraphFormatterPositioningAlgorithm : uint8;
template<> struct TIsUEnumClass<EGraphFormatterPositioningAlgorithm> { enum { Value = true }; };
template<> GRAPHFORMATTER_API UEnum* StaticEnum<EGraphFormatterPositioningAlgorithm>();

#define FOREACH_ENUM_EFORMATTERPINDIRECTION(op) \
	op(EFormatterPinDirection::In) \
	op(EFormatterPinDirection::Out) \
	op(EFormatterPinDirection::InOut) 

enum class EFormatterPinDirection : uint8;
template<> struct TIsUEnumClass<EFormatterPinDirection> { enum { Value = true }; };
template<> GRAPHFORMATTER_API UEnum* StaticEnum<EFormatterPinDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
