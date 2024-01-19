// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	void ADoor::StaticRegisterNativesADoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorRahmenMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorRahmenMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_open_MetaData[];
#endif
		static void NewProp_is_open_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_open;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_unlocked_MetaData[];
#endif
		static void NewProp_is_unlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_unlocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh-Komponente f\xef\xbf\xbdr die Darstellung der T\xef\xbf\xbdr\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh-Komponente f\xef\xbf\xbdr die Darstellung der T\xef\xbf\xbdr" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorRahmenMesh_MetaData[] = {
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorRahmenMesh = { "DoorRahmenMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorRahmenMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorRahmenMesh_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_DoorRahmenMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_is_open_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// T\xef\xbf\xbdr-Statusvariablen\n" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "T\xef\xbf\xbdr-Statusvariablen" },
#endif
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_is_open_SetBit(void* Obj)
	{
		((ADoor*)Obj)->is_open = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_is_open = { "is_open", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_is_open_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_is_open_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_is_open_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_SetBit(void* Obj)
	{
		((ADoor*)Obj)->is_unlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked = { "is_unlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorRahmenMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_is_open,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADoor()
	{
		if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoor.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
	ADoor::~ADoor() {}
	struct Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3286256893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_330651399(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
