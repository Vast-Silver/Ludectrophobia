// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/DoorKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoorKey();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_ADoorKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(ADoorKey::execsetUsedKey)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setUsedKey(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoorKey::execgetUsedKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getUsedKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoorKey::execsetPickedKey)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setPickedKey(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoorKey::execgetPickedKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->getPickedKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoorKey::execgrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->grab();
		P_NATIVE_END;
	}
	void ADoorKey::StaticRegisterNativesADoorKey()
	{
		UClass* Class = ADoorKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getPickedKey", &ADoorKey::execgetPickedKey },
			{ "getUsedKey", &ADoorKey::execgetUsedKey },
			{ "grab", &ADoorKey::execgrab },
			{ "setPickedKey", &ADoorKey::execsetPickedKey },
			{ "setUsedKey", &ADoorKey::execsetUsedKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoorKey_getPickedKey_Statics
	{
		struct DoorKey_eventgetPickedKey_Parms
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
	void Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorKey_eventgetPickedKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorKey_eventgetPickedKey_Parms), &Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters and setters for picked_key\n" },
#endif
		{ "ModuleRelativePath", "DoorKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters and setters for picked_key" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "getPickedKey", nullptr, nullptr, Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::DoorKey_eventgetPickedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::DoorKey_eventgetPickedKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorKey_getPickedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorKey_getPickedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorKey_getUsedKey_Statics
	{
		struct DoorKey_eventgetUsedKey_Parms
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
	void Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DoorKey_eventgetUsedKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorKey_eventgetUsedKey_Parms), &Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters and setters for used_key\n" },
#endif
		{ "ModuleRelativePath", "DoorKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters and setters for used_key" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "getUsedKey", nullptr, nullptr, Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::DoorKey_eventgetUsedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::DoorKey_eventgetUsedKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorKey_getUsedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorKey_getUsedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorKey_grab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_grab_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * @brief Function to simulate picking up the key. Hides the key mesh and sets picked_key to true.\n     */" },
#endif
		{ "ModuleRelativePath", "DoorKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Function to simulate picking up the key. Hides the key mesh and sets picked_key to true." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "grab", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_grab_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorKey_grab_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ADoorKey_grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorKey_grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorKey_setPickedKey_Statics
	{
		struct DoorKey_eventsetPickedKey_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::NewProp_state_SetBit(void* Obj)
	{
		((DoorKey_eventsetPickedKey_Parms*)Obj)->state = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorKey_eventsetPickedKey_Parms), &Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::NewProp_state_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "setPickedKey", nullptr, nullptr, Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::DoorKey_eventsetPickedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::DoorKey_eventsetPickedKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorKey_setPickedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorKey_setPickedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoorKey_setUsedKey_Statics
	{
		struct DoorKey_eventsetUsedKey_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::NewProp_state_SetBit(void* Obj)
	{
		((DoorKey_eventsetUsedKey_Parms*)Obj)->state = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DoorKey_eventsetUsedKey_Parms), &Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::NewProp_state_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DoorKey.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoorKey, nullptr, "setUsedKey", nullptr, nullptr, Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::DoorKey_eventsetUsedKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::DoorKey_eventsetUsedKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADoorKey_setUsedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoorKey_setUsedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorKey);
	UClass* Z_Construct_UClass_ADoorKey_NoRegister()
	{
		return ADoorKey::StaticClass();
	}
	struct Z_Construct_UClass_ADoorKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoorKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoorKey_getPickedKey, "getPickedKey" }, // 1883255313
		{ &Z_Construct_UFunction_ADoorKey_getUsedKey, "getUsedKey" }, // 1824504586
		{ &Z_Construct_UFunction_ADoorKey_grab, "grab" }, // 3680073123
		{ &Z_Construct_UFunction_ADoorKey_setPickedKey, "setPickedKey" }, // 768234751
		{ &Z_Construct_UFunction_ADoorKey_setUsedKey, "setUsedKey" }, // 2544102181
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief ADoorKey Class - Manages the behavior and state of key actors in the game.\n */" },
#endif
		{ "IncludePath", "DoorKey.h" },
		{ "ModuleRelativePath", "DoorKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief ADoorKey Class - Manages the behavior and state of key actors in the game." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorKey_Statics::NewProp_KeyMesh_MetaData[] = {
		{ "Category", "DoorKey" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mesh component representing the key */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh component representing the key" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorKey_Statics::NewProp_KeyMesh = { "KeyMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorKey, KeyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::NewProp_KeyMesh_MetaData), Z_Construct_UClass_ADoorKey_Statics::NewProp_KeyMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorKey_Statics::NewProp_KeyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorKey_Statics::ClassParams = {
		&ADoorKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoorKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorKey_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorKey_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADoorKey()
	{
		if (!Z_Registration_Info_UClass_ADoorKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorKey.OuterSingleton, Z_Construct_UClass_ADoorKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorKey.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<ADoorKey>()
	{
		return ADoorKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorKey);
	ADoorKey::~ADoorKey() {}
	struct Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_DoorKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_DoorKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorKey, ADoorKey::StaticClass, TEXT("ADoorKey"), &Z_Registration_Info_UClass_ADoorKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorKey), 161519344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_DoorKey_h_964322142(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_DoorKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kraken_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_DoorKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
