// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestUnrealProjectNGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestUnrealProjectNGameModeBase() {}
// Cross Module References
	TESTUNREALPROJECTN_API UClass* Z_Construct_UClass_ATestUnrealProjectNGameModeBase_NoRegister();
	TESTUNREALPROJECTN_API UClass* Z_Construct_UClass_ATestUnrealProjectNGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestUnrealProjectN();
// End Cross Module References
	void ATestUnrealProjectNGameModeBase::StaticRegisterNativesATestUnrealProjectNGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATestUnrealProjectNGameModeBase_NoRegister()
	{
		return ATestUnrealProjectNGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestUnrealProjectNGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TestUnrealProjectN,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TestUnrealProjectNGameModeBase.h" },
				{ "ModuleRelativePath", "TestUnrealProjectNGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestUnrealProjectNGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestUnrealProjectNGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ATestUnrealProjectNGameModeBase, 1387208702);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestUnrealProjectNGameModeBase(Z_Construct_UClass_ATestUnrealProjectNGameModeBase, &ATestUnrealProjectNGameModeBase::StaticClass, TEXT("/Script/TestUnrealProjectN"), TEXT("ATestUnrealProjectNGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestUnrealProjectNGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
