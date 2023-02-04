// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tor_przeszkod/Platforma.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatforma() {}
// Cross Module References
	TOR_PRZESZKOD_API UClass* Z_Construct_UClass_APlatforma_NoRegister();
	TOR_PRZESZKOD_API UClass* Z_Construct_UClass_APlatforma();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tor_przeszkod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void APlatforma::StaticRegisterNativesAPlatforma()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatforma);
	UClass* Z_Construct_UClass_APlatforma_NoRegister()
	{
		return APlatforma::StaticClass();
	}
	struct Z_Construct_UClass_APlatforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_szybkosc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_szybkosc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_odleglosc_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_max_odleglosc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_szybkosc_obracania_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_szybkosc_obracania;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tor_przeszkod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforma.h" },
		{ "ModuleRelativePath", "Platforma.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_MetaData[] = {
		{ "Category", "Ruch" },
		{ "ModuleRelativePath", "Platforma.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc = { "szybkosc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforma, szybkosc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforma_Statics::NewProp_max_odleglosc_MetaData[] = {
		{ "Category", "Ruch" },
		{ "ModuleRelativePath", "Platforma.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatforma_Statics::NewProp_max_odleglosc = { "max_odleglosc", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforma, max_odleglosc), METADATA_PARAMS(Z_Construct_UClass_APlatforma_Statics::NewProp_max_odleglosc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforma_Statics::NewProp_max_odleglosc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_obracania_MetaData[] = {
		{ "Category", "Rotacja" },
		{ "ModuleRelativePath", "Platforma.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_obracania = { "szybkosc_obracania", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatforma, szybkosc_obracania), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_obracania_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_obracania_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatforma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforma_Statics::NewProp_max_odleglosc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatforma_Statics::NewProp_szybkosc_obracania,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatforma>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatforma_Statics::ClassParams = {
		&APlatforma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatforma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatforma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatforma()
	{
		if (!Z_Registration_Info_UClass_APlatforma.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatforma.OuterSingleton, Z_Construct_UClass_APlatforma_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatforma.OuterSingleton;
	}
	template<> TOR_PRZESZKOD_API UClass* StaticClass<APlatforma>()
	{
		return APlatforma::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatforma);
	struct Z_CompiledInDeferFile_FID_Tor_przeszkod_Source_Tor_przeszkod_Platforma_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tor_przeszkod_Source_Tor_przeszkod_Platforma_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatforma, APlatforma::StaticClass, TEXT("APlatforma"), &Z_Registration_Info_UClass_APlatforma, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatforma), 3726748624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tor_przeszkod_Source_Tor_przeszkod_Platforma_h_2443792995(TEXT("/Script/Tor_przeszkod"),
		Z_CompiledInDeferFile_FID_Tor_przeszkod_Source_Tor_przeszkod_Platforma_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tor_przeszkod_Source_Tor_przeszkod_Platforma_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
