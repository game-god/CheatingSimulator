// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CheatingSimPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheatingSimPlayerController() {}
// Cross Module References
	CHEATINGSIMULATOR_API UClass* Z_Construct_UClass_ACheatingSimPlayerController_NoRegister();
	CHEATINGSIMULATOR_API UClass* Z_Construct_UClass_ACheatingSimPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CheatingSimulator();
// End Cross Module References
	void ACheatingSimPlayerController::StaticRegisterNativesACheatingSimPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACheatingSimPlayerController_NoRegister()
	{
		return ACheatingSimPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACheatingSimPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_CheatingSimulator,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CheatingSimPlayerController.h" },
				{ "ModuleRelativePath", "CheatingSimPlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACheatingSimPlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACheatingSimPlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheatingSimPlayerController, 4217200265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheatingSimPlayerController(Z_Construct_UClass_ACheatingSimPlayerController, &ACheatingSimPlayerController::StaticClass, TEXT("/Script/CheatingSimulator"), TEXT("ACheatingSimPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheatingSimPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
