// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Lever.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLever() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ALever();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ALever_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UInteractibles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(ALever::execSetTargetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewTargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetIndex(Z_Param_NewTargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALever::execSetActive)
	{
		P_GET_UBOOL(Z_Param_NewActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_NewActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALever::execswitch_state)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->switch_state();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALever::execglow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->glow();
		P_NATIVE_END;
	}
	void ALever::StaticRegisterNativesALever()
	{
		UClass* Class = ALever::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "glow", &ALever::execglow },
			{ "SetActive", &ALever::execSetActive },
			{ "SetTargetIndex", &ALever::execSetTargetIndex },
			{ "switch_state", &ALever::execswitch_state },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALever_glow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_glow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Implementiert die Interface-Funktionen\n" },
#endif
		{ "ModuleRelativePath", "Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implementiert die Interface-Funktionen" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_glow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "glow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_glow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_glow_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALever_glow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_glow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALever_SetActive_Statics
	{
		struct Lever_eventSetActive_Parms
		{
			bool NewActive;
		};
		static void NewProp_NewActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALever_SetActive_Statics::NewProp_NewActive_SetBit(void* Obj)
	{
		((Lever_eventSetActive_Parms*)Obj)->NewActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALever_SetActive_Statics::NewProp_NewActive = { "NewActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Lever_eventSetActive_Parms), &Z_Construct_UFunction_ALever_SetActive_Statics::NewProp_NewActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALever_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALever_SetActive_Statics::NewProp_NewActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funktionen, um die Werte von Active und TargetIndex auch zur Laufzeit zu \xef\xbf\xbdndern\n" },
#endif
		{ "ModuleRelativePath", "Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funktionen, um die Werte von Active und TargetIndex auch zur Laufzeit zu \xef\xbf\xbdndern" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "SetActive", nullptr, nullptr, Z_Construct_UFunction_ALever_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALever_SetActive_Statics::Lever_eventSetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_SetActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALever_SetActive_Statics::Lever_eventSetActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALever_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALever_SetTargetIndex_Statics
	{
		struct Lever_eventSetTargetIndex_Parms
		{
			int32 NewTargetIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewTargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALever_SetTargetIndex_Statics::NewProp_NewTargetIndex = { "NewTargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Lever_eventSetTargetIndex_Parms, NewTargetIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALever_SetTargetIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALever_SetTargetIndex_Statics::NewProp_NewTargetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_SetTargetIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Lever.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_SetTargetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "SetTargetIndex", nullptr, nullptr, Z_Construct_UFunction_ALever_SetTargetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetTargetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALever_SetTargetIndex_Statics::Lever_eventSetTargetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetTargetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_SetTargetIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_SetTargetIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALever_SetTargetIndex_Statics::Lever_eventSetTargetIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALever_SetTargetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_SetTargetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALever_switch_state_Statics
	{
		struct Lever_eventswitch_state_Parms
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
	void Z_Construct_UFunction_ALever_switch_state_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Lever_eventswitch_state_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALever_switch_state_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Lever_eventswitch_state_Parms), &Z_Construct_UFunction_ALever_switch_state_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALever_switch_state_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALever_switch_state_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALever_switch_state_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lever" },
		{ "ModuleRelativePath", "Lever.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALever_switch_state_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALever, nullptr, "switch_state", nullptr, nullptr, Z_Construct_UFunction_ALever_switch_state_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_switch_state_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALever_switch_state_Statics::Lever_eventswitch_state_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_switch_state_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALever_switch_state_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALever_switch_state_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALever_switch_state_Statics::Lever_eventswitch_state_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALever_switch_state()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALever_switch_state_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
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
		{ &Z_Construct_UFunction_ALever_glow, "glow" }, // 4177692072
		{ &Z_Construct_UFunction_ALever_SetActive, "SetActive" }, // 72600865
		{ &Z_Construct_UFunction_ALever_SetTargetIndex, "SetTargetIndex" }, // 2843248545
		{ &Z_Construct_UFunction_ALever_switch_state, "switch_state" }, // 4033525114
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lever.h" },
		{ "ModuleRelativePath", "Lever.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_MeshUp_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh-Komponenten f\xef\xbf\xbdr die Zust\xef\xbf\xbdnde \"oben\" und \"unten\"\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh-Komponenten f\xef\xbf\xbdr die Zust\xef\xbf\xbdnde \"oben\" und \"unten\"" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_MeshUp = { "MeshUp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, MeshUp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_MeshUp_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_MeshUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_MeshDown_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lever.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_MeshDown = { "MeshDown", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, MeshDown), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_MeshDown_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_MeshDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable, um den aktiven Zustand des Hebels zu speichern\n" },
#endif
		{ "ModuleRelativePath", "Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable, um den aktiven Zustand des Hebels zu speichern" },
#endif
	};
#endif
	void Z_Construct_UClass_ALever_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((ALever*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALever), &Z_Construct_UClass_ALever_Statics::NewProp_Active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_Active_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_Active_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData[] = {
		{ "Category", "Lever" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable, um das Zielindex zu speichern (z.B. welche T\xef\xbf\xbdr dieser Hebel steuert)\n" },
#endif
		{ "ModuleRelativePath", "Lever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable, um das Zielindex zu speichern (z.B. welche T\xef\xbf\xbdr dieser Hebel steuert)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALever, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData), Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALever_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_MeshUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_MeshDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_Active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALever_Statics::NewProp_TargetIndex,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALever_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractibles_NoRegister, (int32)VTABLE_OFFSET(ALever, IInteractibles), false },  // 2812096789
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
	struct Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Lever_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Lever_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALever, ALever::StaticClass, TEXT("ALever"), &Z_Registration_Info_UClass_ALever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALever), 2601825464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Lever_h_651245926(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Lever_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lars_Documents_Digital_Media_Semester_3_Media_Engineering_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Lever_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
