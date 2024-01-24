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
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(ADoor::execunlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->unlock();
		P_NATIVE_END;
	}
	void ADoor::StaticRegisterNativesADoor()
	{
		UClass* Class = ADoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "unlock", &ADoor::execunlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoor_unlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoor_unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoorUnlock" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Function to simulate using the key. Sets used_key to true.\n     */" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Function to simulate using the key. Sets used_key to true." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "unlock", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_unlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_unlock_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADoor_unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LockMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorAnimation;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_unlock, "unlock" }, // 731829234
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n  * @brief ADoor Class - Manages the behavior and state of door actors in the game.\n  */" },
#endif
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ADoor Class - Manages the behavior and state of door actors in the game." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh component representing the door */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh component representing the door" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_LockMesh_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh component representing the door lock */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh component representing the door lock" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_LockMesh = { "LockMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, LockMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_LockMesh_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_LockMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_DoorAnimation_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Animation sequence to be played when the door is opened. */" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation sequence to be played when the door is opened." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_DoorAnimation = { "DoorAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, DoorAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_DoorAnimation_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_DoorAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_is_open_MetaData[] = {
		{ "Category", "Door" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Door state variables */" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door state variables" },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** True if the Door is unlocked */" },
#endif
		{ "ModuleRelativePath", "Door.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if the Door is unlocked" },
#endif
	};
#endif
	void Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_SetBit(void* Obj)
	{
		((ADoor*)Obj)->is_unlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked = { "is_unlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_MetaData), Z_Construct_UClass_ADoor_Statics::NewProp_is_unlocked_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_LockMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_DoorAnimation,
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
		FuncInfo,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	struct Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3222212993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_2828017047(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
