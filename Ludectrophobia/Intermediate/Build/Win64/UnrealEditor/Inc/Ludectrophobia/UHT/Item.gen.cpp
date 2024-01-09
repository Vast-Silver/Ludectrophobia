// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ludectrophobia/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UItem();
	LUDECTROPHOBIA_API UClass* Z_Construct_UClass_UItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Ludectrophobia();
// End Cross Module References
	DEFINE_FUNCTION(IItem::execuse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->use_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItem::execdrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->drop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItem::execgrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->grab_Implementation();
		P_NATIVE_END;
	}
	void IItem::drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_drop instead.");
	}
	void IItem::grab()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_grab instead.");
	}
	void IItem::use()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_use instead.");
	}
	void UItem::StaticRegisterNativesUItem()
	{
		UClass* Class = UItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "drop", &IItem::execdrop },
			{ "grab", &IItem::execgrab },
			{ "use", &IItem::execuse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItem_drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "drop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_drop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItem_drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_grab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_grab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "grab", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_grab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_grab_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItem_grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItem_use_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_use_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "use", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_use_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_use_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UItem_use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Ludectrophobia,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_drop, "drop" }, // 3603016494
		{ &Z_Construct_UFunction_UItem_grab, "grab" }, // 3201871968
		{ &Z_Construct_UFunction_UItem_use, "use" }, // 4158888846
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UItem()
	{
		if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItem.OuterSingleton;
	}
	template<> LUDECTROPHOBIA_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	UItem::UItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
	UItem::~UItem() {}
	static FName NAME_UItem_drop = FName(TEXT("drop"));
	void IItem::Execute_drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItem::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItem_drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItem*)(O->GetNativeInterfaceAddress(UItem::StaticClass())))
		{
			I->drop_Implementation();
		}
	}
	static FName NAME_UItem_grab = FName(TEXT("grab"));
	void IItem::Execute_grab(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItem::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItem_grab);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItem*)(O->GetNativeInterfaceAddress(UItem::StaticClass())))
		{
			I->grab_Implementation();
		}
	}
	static FName NAME_UItem_use = FName(TEXT("use"));
	void IItem::Execute_use(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItem::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItem_use);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItem*)(O->GetNativeInterfaceAddress(UItem::StaticClass())))
		{
			I->use_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 458030260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Item_h_2413414571(TEXT("/Script/Ludectrophobia"),
		Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_melih_OneDrive_Uni_Bremen_3__Semester_Media_Engineering_ProgrammierSpiel_Ludectrophobia_Ludectrophobia_Source_Ludectrophobia_Public_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
