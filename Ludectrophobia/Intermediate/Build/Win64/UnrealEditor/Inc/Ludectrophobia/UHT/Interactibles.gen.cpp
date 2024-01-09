// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Public/Interactibles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractibles() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(IInteractibles::execinform_level)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->inform_level_Implementation(Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractibles::execswitch_state)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->switch_state_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractibles::execglow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->glow_Implementation();
		P_NATIVE_END;
	}
	struct Interactibles_eventinform_level_Parms
	{
		int32 Level;
	};
	void IInteractibles::glow()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_glow instead.");
	}
	void IInteractibles::inform_level(int32 Level)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_inform_level instead.");
	}
	void IInteractibles::switch_state()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_switch_state instead.");
	}
	void UInteractibles::StaticRegisterNativesUInteractibles()
	{
		UClass* Class = UInteractibles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "glow", &IInteractibles::execglow },
			{ "inform_level", &IInteractibles::execinform_level },
			{ "switch_state", &IInteractibles::execswitch_state },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractibles_glow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_glow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactibles" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_glow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "glow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_glow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_glow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractibles_glow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_glow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractibles_inform_level_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInteractibles_inform_level_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactibles_eventinform_level_Parms, Level), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractibles_inform_level_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractibles_inform_level_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactibles" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_inform_level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "inform_level", nullptr, nullptr, Z_Construct_UFunction_UInteractibles_inform_level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_inform_level_Statics::PropPointers), sizeof(Interactibles_eventinform_level_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_inform_level_Statics::PropPointers) < 2048);
	static_assert(sizeof(Interactibles_eventinform_level_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractibles_inform_level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_inform_level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractibles_switch_state_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_switch_state_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactibles" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_switch_state_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "switch_state", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_switch_state_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_switch_state_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractibles_switch_state()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_switch_state_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractibles);
	UClass* Z_Construct_UClass_UInteractibles_NoRegister()
	{
		return UInteractibles::StaticClass();
	}
	struct Z_Construct_UClass_UInteractibles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractibles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractibles_glow, "glow" }, // 854379397
		{ &Z_Construct_UFunction_UInteractibles_inform_level, "inform_level" }, // 486638795
		{ &Z_Construct_UFunction_UInteractibles_switch_state, "switch_state" }, // 208866068
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractibles_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractibles_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactibles.h" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	static FName NAME_UInteractibles_glow = FName(TEXT("glow"));
	void IInteractibles::Execute_glow(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_glow);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->glow_Implementation();
		}
	}
	static FName NAME_UInteractibles_inform_level = FName(TEXT("inform_level"));
	void IInteractibles::Execute_inform_level(UObject* O, int32 Level)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		Interactibles_eventinform_level_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_inform_level);
		if (Func)
		{
			Parms.Level=Level;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->inform_level_Implementation(Level);
		}
	}
	static FName NAME_UInteractibles_switch_state = FName(TEXT("switch_state"));
	void IInteractibles::Execute_switch_state(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_switch_state);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->switch_state_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractibles, UInteractibles::StaticClass, TEXT("UInteractibles"), &Z_Registration_Info_UClass_UInteractibles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractibles), 4043604270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_2010142349(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
