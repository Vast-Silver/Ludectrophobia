// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Public/Lever.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLever() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ALever();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ALever_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(ALever::execget_active)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->get_active();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALever::execget_target_index)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->get_target_index();
		P_NATIVE_END;
	}
	void ALever::StaticRegisterNativesALever()
	{
		UClass* Class = ALever::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "get_active", &ALever::execget_active },
			{ "get_target_index", &ALever::execget_target_index },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALever_get_active_Statics
	{
		struct Lever_eventget_active_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALever_get_active_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Lever_eventget_active_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALever_get_active_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Lever_eventget_active_Parms), &Z_Construct_UFunction_ALever_get_active_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALever_get_active_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALever_get_active_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_get_active_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_get_active_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "get_active", nullptr, nullptr, Z_Construct_UFunction_ALever_get_active_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_active_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALever_get_active_Statics::Lever_eventget_active_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_active_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_get_active_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_active_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALever_get_active_Statics::Lever_eventget_active_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALever_get_active()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_get_active_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALever_get_target_index_Statics
	{
		struct Lever_eventget_target_index_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALever_get_target_index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Lever_eventget_target_index_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALever_get_target_index_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALever_get_target_index_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_get_target_index_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Eigene Methoden\n" },
#endif
		{ "ModuleRelativePath", "Public/Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Eigene Methoden" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_get_target_index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "get_target_index", nullptr, nullptr, Z_Construct_UFunction_ALever_get_target_index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_target_index_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALever_get_target_index_Statics::Lever_eventget_target_index_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_target_index_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_get_target_index_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_get_target_index_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALever_get_target_index_Statics::Lever_eventget_target_index_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALever_get_target_index()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_get_target_index_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALever);
	UClass* Z_Construct_UClass_ALever_NoRegister()
	{
		return ALever::StaticClass();
	}
	struct Z_Construct_UClass_ALever_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALever_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALever_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALever_get_active, "get_active" }, // 2701989753
		{ &Z_Construct_UFunction_ALever_get_target_index, "get_target_index" }, // 1447037773
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lever.h" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_bActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	void Z_Construct_UClass_ALever_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ALever*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALever), &Z_Construct_UClass_ALever_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_bActive_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_bActive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Public/Lever.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALever_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALever_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractibles_NoRegister, (int32)VTABLE_OFFSET(ALever, IInteractibles), false },  // 4043604270
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALever_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALever>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALever_Statics::ClassParams = {
		&ALever::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALever_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::Class_MetaDataParams), Z_Construct_UClass_ALever_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALever()
	{
		if (!Z_Registration_Info_UClass_ALever.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALever.OuterSingleton, Z_Construct_UClass_ALever_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALever.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<ALever>()
	{
		return ALever::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALever);
	ALever::~ALever() {}
	struct Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Lever_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Lever_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALever, ALever::StaticClass, TEXT("ALever"), &Z_Registration_Info_UClass_ALever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALever), 1486886904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Lever_h_1188340502(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Lever_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Lever_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
