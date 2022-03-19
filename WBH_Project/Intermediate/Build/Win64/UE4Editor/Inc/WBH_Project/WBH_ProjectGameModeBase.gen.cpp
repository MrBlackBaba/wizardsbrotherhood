// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WBH_Project/WBH_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBH_ProjectGameModeBase() {}
// Cross Module References
	WBH_PROJECT_API UClass* Z_Construct_UClass_AWBH_ProjectGameModeBase_NoRegister();
	WBH_PROJECT_API UClass* Z_Construct_UClass_AWBH_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WBH_Project();
// End Cross Module References
	void AWBH_ProjectGameModeBase::StaticRegisterNativesAWBH_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWBH_ProjectGameModeBase_NoRegister()
	{
		return AWBH_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WBH_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WBH_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "WBH_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWBH_ProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::ClassParams = {
		&AWBH_ProjectGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWBH_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWBH_ProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWBH_ProjectGameModeBase, 3712300145);
	template<> WBH_PROJECT_API UClass* StaticClass<AWBH_ProjectGameModeBase>()
	{
		return AWBH_ProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWBH_ProjectGameModeBase(Z_Construct_UClass_AWBH_ProjectGameModeBase, &AWBH_ProjectGameModeBase::StaticClass, TEXT("/Script/WBH_Project"), TEXT("AWBH_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWBH_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
