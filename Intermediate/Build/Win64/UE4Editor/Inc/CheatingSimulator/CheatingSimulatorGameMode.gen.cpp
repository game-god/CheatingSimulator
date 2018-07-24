// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CheatingSimulatorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheatingSimulatorGameMode() {}
// Cross Module References
	CHEATINGSIMULATOR_API UClass* Z_Construct_UClass_ACheatingSimulatorGameMode_NoRegister();
	CHEATINGSIMULATOR_API UClass* Z_Construct_UClass_ACheatingSimulatorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CheatingSimulator();
// End Cross Module References
	void ACheatingSimulatorGameMode::StaticRegisterNativesACheatingSimulatorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACheatingSimulatorGameMode_NoRegister()
	{
		return ACheatingSimulatorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ACheatingSimulatorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_CheatingSimulator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CheatingSimulatorGameMode.h" },
				{ "ModuleRelativePath", "CheatingSimulatorGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACheatingSimulatorGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACheatingSimulatorGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheatingSimulatorGameMode, 1405352830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheatingSimulatorGameMode(Z_Construct_UClass_ACheatingSimulatorGameMode, &ACheatingSimulatorGameMode::StaticClass, TEXT("/Script/CheatingSimulator"), TEXT("ACheatingSimulatorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheatingSimulatorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
