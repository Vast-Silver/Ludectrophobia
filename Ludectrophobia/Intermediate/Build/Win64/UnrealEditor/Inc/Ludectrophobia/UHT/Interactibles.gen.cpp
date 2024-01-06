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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(IInteractibles::execinform_level)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->inform_level_Implementation();
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
	DEFINE_FUNCTION(IInteractibles::execend_focus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->end_focus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractibles::execstart_focus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->start_focus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractibles::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	struct Interactibles_eventOnInteract_Parms
	{
		AActor* Caller;
	};
	void IInteractibles::end_focus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_end_focus instead.");
	}
	void IInteractibles::glow()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_glow instead.");
	}
	void IInteractibles::inform_level()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_inform_level instead.");
	}
	void IInteractibles::OnInteract(AActor* Caller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void IInteractibles::start_focus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_start_focus instead.");
	}
	void IInteractibles::switch_state()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_switch_state instead.");
	}
	void UInteractibles::StaticRegisterNativesUInteractibles()
	{
		UClass* Class = UInteractibles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "end_focus", &IInteractibles::execend_focus },
			{ "glow", &IInteractibles::execglow },
			{ "inform_level", &IInteractibles::execinform_level },
			{ "OnInteract", &IInteractibles::execOnInteract },
			{ "start_focus", &IInteractibles::execstart_focus },
			{ "switch_state", &IInteractibles::execswitch_state },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractibles_end_focus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_end_focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_end_focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "end_focus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_end_focus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_end_focus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractibles_end_focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_end_focus_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//methods for door and lever\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "methods for door and lever" },
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_inform_level_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "inform_level", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_inform_level_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractibles_inform_level()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_inform_level_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractibles_OnInteract_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractibles_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactibles_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractibles_OnInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractibles_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Preparation\n" },
#endif
		{ "ModuleRelativePath", "Public/Interactibles.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Preparation" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractibles_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_OnInteract_Statics::PropPointers), sizeof(Interactibles_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_OnInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_OnInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Interactibles_eventOnInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractibles_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractibles_start_focus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractibles_start_focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interactibles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractibles_start_focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractibles, nullptr, "start_focus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractibles_start_focus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractibles_start_focus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UInteractibles_start_focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractibles_start_focus_Statics::FuncParams);
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
		{ "Category", "Interaction" },
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
		{ &Z_Construct_UFunction_UInteractibles_end_focus, "end_focus" }, // 1399982003
		{ &Z_Construct_UFunction_UInteractibles_glow, "glow" }, // 2862450036
		{ &Z_Construct_UFunction_UInteractibles_inform_level, "inform_level" }, // 1895254775
		{ &Z_Construct_UFunction_UInteractibles_OnInteract, "OnInteract" }, // 3165581386
		{ &Z_Construct_UFunction_UInteractibles_start_focus, "start_focus" }, // 1604342059
		{ &Z_Construct_UFunction_UInteractibles_switch_state, "switch_state" }, // 3775957445
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
	static FName NAME_UInteractibles_end_focus = FName(TEXT("end_focus"));
	void IInteractibles::Execute_end_focus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_end_focus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->end_focus_Implementation();
		}
	}
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
	void IInteractibles::Execute_inform_level(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_inform_level);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->inform_level_Implementation();
		}
	}
	static FName NAME_UInteractibles_OnInteract = FName(TEXT("OnInteract"));
	void IInteractibles::Execute_OnInteract(UObject* O, AActor* Caller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		Interactibles_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_OnInteract);
		if (Func)
		{
			Parms.Caller=Caller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->OnInteract_Implementation(Caller);
		}
	}
	static FName NAME_UInteractibles_start_focus = FName(TEXT("start_focus"));
	void IInteractibles::Execute_start_focus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractibles::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractibles_start_focus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractibles*)(O->GetNativeInterfaceAddress(UInteractibles::StaticClass())))
		{
			I->start_focus_Implementation();
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
		{ Z_Construct_UClass_UInteractibles, UInteractibles::StaticClass, TEXT("UInteractibles"), &Z_Registration_Info_UClass_UInteractibles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractibles), 325828378U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_2180942394(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Interactibles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
