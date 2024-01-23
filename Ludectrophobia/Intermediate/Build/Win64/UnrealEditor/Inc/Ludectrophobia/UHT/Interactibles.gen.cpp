// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Interactibles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractibles() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	void UInteractibles::StaticRegisterNativesUInteractibles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractibles);
	UClass* Z_Construct_UClass_UInteractibles_NoRegister()
	{
		return UInteractibles::StaticClass();
	}
	struct Z_Construct_UClass_UInteractibles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractibles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractibles_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractibles_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactibles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractibles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractibles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractibles_Statics::ClassParams = {
		&UInteractibles::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractibles_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractibles_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractibles()
	{
		if (!Z_Registration_Info_UClass_UInteractibles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractibles.OuterSingleton, Z_Construct_UClass_UInteractibles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractibles.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<UInteractibles>()
	{
		return UInteractibles::StaticClass();
	}
	UInteractibles::UInteractibles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractibles);
	UInteractibles::~UInteractibles() {}
	struct Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Interactibles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Interactibles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractibles, UInteractibles::StaticClass, TEXT("UInteractibles"), &Z_Registration_Info_UClass_UInteractibles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractibles), 2812096789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Interactibles_h_4012017503(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Interactibles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Interactibles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
