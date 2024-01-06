// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Public/Door_Actor_Temp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor_Actor_Temp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor_Actor_Temp();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor_Actor_Temp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	void ADoor_Actor_Temp::StaticRegisterNativesADoor_Actor_Temp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor_Actor_Temp);
	UClass* Z_Construct_UClass_ADoor_Actor_Temp_NoRegister()
	{
		return ADoor_Actor_Temp::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Actor_Temp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Actor_Temp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Actor_Temp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Actor_Temp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door_Actor_Temp.h" },
		{ "ModuleRelativePath", "Public/Door_Actor_Temp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Actor_Temp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor_Actor_Temp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Actor_Temp_Statics::ClassParams = {
		&ADoor_Actor_Temp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Actor_Temp_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Actor_Temp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADoor_Actor_Temp()
	{
		if (!Z_Registration_Info_UClass_ADoor_Actor_Temp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor_Actor_Temp.OuterSingleton, Z_Construct_UClass_ADoor_Actor_Temp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoor_Actor_Temp.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<ADoor_Actor_Temp>()
	{
		return ADoor_Actor_Temp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor_Actor_Temp);
	ADoor_Actor_Temp::~ADoor_Actor_Temp() {}
	struct Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Door_Actor_Temp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Door_Actor_Temp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoor_Actor_Temp, ADoor_Actor_Temp::StaticClass, TEXT("ADoor_Actor_Temp"), &Z_Registration_Info_UClass_ADoor_Actor_Temp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor_Actor_Temp), 3275751435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Door_Actor_Temp_h_1892598516(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Door_Actor_Temp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Door_Actor_Temp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
