﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2505268354;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t3937572137;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t1293400621;
// System.Resources.ResourceReader
struct ResourceReader_t853969891;
// System.IO.BinaryReader
struct BinaryReader_t4074829028;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t2898448395;
// System.String[]
struct StringU5BU5D_t4198099709;
// System.Int32[]
struct Int32U5BU5D_t4066519435;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t2732994362;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t4190300557;
// System.Resources.IResourceReader
struct IResourceReader_t1266417945;
// System.Collections.Hashtable
struct Hashtable_t2098312635;
// System.Byte[]
struct ByteU5BU5D_t1670971340;
// System.String
struct String_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t2546365181;
// System.Collections.IDictionary
struct IDictionary_t1991762704;
// System.Type
struct Type_t;
// System.Void
struct Void_t3504030303;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t841378631;
// System.Version
struct Version_t4292374471;
// System.Boolean[]
struct BooleanU5BU5D_t3718662053;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t3459418534;
// System.Char[]
struct CharU5BU5D_t1825639776;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1465370083;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1355581967;
// System.Security.Policy.Evidence
struct Evidence_t3864927214;
// System.Security.PermissionSet
struct PermissionSet_t2492576628;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2081000399;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t2928819396;
// System.Globalization.CultureInfo
struct CultureInfo_t2763338914;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t495609529;
// System.Reflection.TypeFilter
struct TypeFilter_t1069015824;
// System.Reflection.Assembly
struct Assembly_t2744270406;
// System.Type[]
struct TypeU5BU5D_t2884687363;
// System.Reflection.MemberFilter
struct MemberFilter_t3837838088;
// System.Delegate
struct Delegate_t3422922067;
// System.IAsyncResult
struct IAsyncResult_t3362452234;
// System.AsyncCallback
struct AsyncCallback_t576240364;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3764131228;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3076292750;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t16915163;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t3029910278;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t757986849;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3085347496_H
#define VALUETYPE_T3085347496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3085347496  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3085347496_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3085347496_marshaled_com
{
};
#endif // VALUETYPE_T3085347496_H
#ifndef CUSTOMATTRIBUTEDATA_T1083865398_H
#define CUSTOMATTRIBUTEDATA_T1083865398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1083865398  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t2505268354 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1083865398, ___ctorInfo_0)); }
	inline ConstructorInfo_t2505268354 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t2505268354 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t2505268354 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1083865398, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1083865398, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1083865398_H
#ifndef ACTIVATIONARGUMENTS_T856003368_H
#define ACTIVATIONARGUMENTS_T856003368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t856003368  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T856003368_H
#ifndef BINDER_T1627552849_H
#define BINDER_T1627552849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t1627552849  : public RuntimeObject
{
public:

public:
};

struct Binder_t1627552849_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t1627552849 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t1627552849_StaticFields, ___default_binder_0)); }
	inline Binder_t1627552849 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t1627552849 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t1627552849 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T1627552849_H
#ifndef CRITICALFINALIZEROBJECT_T566696482_H
#define CRITICALFINALIZEROBJECT_T566696482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t566696482  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T566696482_H
#ifndef MISSING_T1814585015_H
#define MISSING_T1814585015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t1814585015  : public RuntimeObject
{
public:

public:
};

struct Missing_t1814585015_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t1814585015 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t1814585015_StaticFields, ___Value_0)); }
	inline Missing_t1814585015 * get_Value_0() const { return ___Value_0; }
	inline Missing_t1814585015 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t1814585015 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T1814585015_H
#ifndef ISVOLATILE_T3588965887_H
#define ISVOLATILE_T3588965887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t3588965887  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T3588965887_H
#ifndef ATTRIBUTE_T665885215_H
#define ATTRIBUTE_T665885215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t665885215  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T665885215_H
#ifndef RESOURCEENUMERATOR_T1297007826_H
#define RESOURCEENUMERATOR_T1297007826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t1297007826  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t853969891 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1297007826, ___reader_0)); }
	inline ResourceReader_t853969891 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t853969891 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t853969891 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1297007826, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1297007826, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T1297007826_H
#ifndef RESOURCEREADER_T853969891_H
#define RESOURCEREADER_T853969891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t853969891  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t4074829028 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t4198099709* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t4066519435* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t2732994362* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t4190300557* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___reader_0)); }
	inline BinaryReader_t4074829028 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t4074829028 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t4074829028 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___typeNames_5)); }
	inline StringU5BU5D_t4198099709* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t4198099709** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t4198099709* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___hashes_6)); }
	inline Int32U5BU5D_t4066519435* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t4066519435** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t4066519435* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___infos_7)); }
	inline ResourceInfoU5BU5D_t2732994362* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t2732994362** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t2732994362* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t4190300557* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t4190300557** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t4190300557* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t853969891, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T853969891_H
#ifndef RESOURCESET_T4001123846_H
#define RESOURCESET_T4001123846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t4001123846  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t2098312635 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t4001123846, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t4001123846, ___Table_1)); }
	inline Hashtable_t2098312635 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t2098312635 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t2098312635 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t4001123846, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t4001123846, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T4001123846_H
#ifndef RESOLVEEVENTHOLDER_T1355581967_H
#define RESOLVEEVENTHOLDER_T1355581967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t1355581967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T1355581967_H
#ifndef OPCODENAMES_T957449539_H
#define OPCODENAMES_T957449539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodeNames
struct  OpCodeNames_t957449539  : public RuntimeObject
{
public:

public:
};

struct OpCodeNames_t957449539_StaticFields
{
public:
	// System.String[] System.Reflection.Emit.OpCodeNames::names
	StringU5BU5D_t4198099709* ___names_0;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(OpCodeNames_t957449539_StaticFields, ___names_0)); }
	inline StringU5BU5D_t4198099709* get_names_0() const { return ___names_0; }
	inline StringU5BU5D_t4198099709** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(StringU5BU5D_t4198099709* value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODENAMES_T957449539_H
#ifndef STRONGNAMEKEYPAIR_T495609529_H
#define STRONGNAMEKEYPAIR_T495609529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t495609529  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t1670971340* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t1670971340* ____keyPairArray_3;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t495609529, ____publicKey_0)); }
	inline ByteU5BU5D_t1670971340* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t1670971340** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t1670971340* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t495609529, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t495609529, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t495609529, ____keyPairArray_3)); }
	inline ByteU5BU5D_t1670971340* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t1670971340** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t1670971340* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T495609529_H
#ifndef EXCEPTION_T3549777140_H
#define EXCEPTION_T3549777140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3549777140  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2546365181* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3549777140 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2546365181* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2546365181** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2546365181* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___inner_exception_1)); }
	inline Exception_t3549777140 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3549777140 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3549777140 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3549777140, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3549777140_H
#ifndef RESOURCEMANAGER_T1685028194_H
#define RESOURCEMANAGER_T1685028194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t1685028194  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t1685028194, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t1685028194_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t2098312635 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t2098312635 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t1685028194_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t2098312635 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t2098312635 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t2098312635 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t1685028194_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t2098312635 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t2098312635 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t2098312635 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t1685028194_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t1685028194_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T1685028194_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef POINTER_T987873005_H
#define POINTER_T987873005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t987873005  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t987873005, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t987873005, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T987873005_H
#ifndef MODULEBUILDERTOKENGENERATOR_T75459755_H
#define MODULEBUILDERTOKENGENERATOR_T75459755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct  ModuleBuilderTokenGenerator_t75459755  : public RuntimeObject
{
public:
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.ModuleBuilderTokenGenerator::mb
	ModuleBuilder_t841378631 * ___mb_0;

public:
	inline static int32_t get_offset_of_mb_0() { return static_cast<int32_t>(offsetof(ModuleBuilderTokenGenerator_t75459755, ___mb_0)); }
	inline ModuleBuilder_t841378631 * get_mb_0() const { return ___mb_0; }
	inline ModuleBuilder_t841378631 ** get_address_of_mb_0() { return &___mb_0; }
	inline void set_mb_0(ModuleBuilder_t841378631 * value)
	{
		___mb_0 = value;
		Il2CppCodeGenWriteBarrier((&___mb_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEBUILDERTOKENGENERATOR_T75459755_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2108827203_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2108827203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t2108827203  : public Attribute_t665885215
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t4292374471 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2108827203, ___ver_0)); }
	inline Version_t4292374471 * get_ver_0() const { return ___ver_0; }
	inline Version_t4292374471 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t4292374471 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2108827203_H
#ifndef RUNTIMERESOURCESET_T3835955587_H
#define RUNTIMERESOURCESET_T3835955587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3835955587  : public ResourceSet_t4001123846
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T3835955587_H
#ifndef TARGETINVOCATIONEXCEPTION_T1940010541_H
#define TARGETINVOCATIONEXCEPTION_T1940010541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t1940010541  : public Exception_t3549777140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T1940010541_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3312973617_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3312973617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t3312973617  : public Attribute_t665885215
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3312973617, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3312973617_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef PARAMETERMODIFIER_T2731709273_H
#define PARAMETERMODIFIER_T2731709273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t2731709273 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t3718662053* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t2731709273, ____byref_0)); }
	inline BooleanU5BU5D_t3718662053* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t3718662053** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t3718662053* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t2731709273_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t2731709273_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T2731709273_H
#ifndef METHODBASE_T2148529606_H
#define METHODBASE_T2148529606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t2148529606  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T2148529606_H
#ifndef RESOURCECACHEITEM_T3754271844_H
#define RESOURCECACHEITEM_T3754271844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t3754271844 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t3754271844, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t3754271844, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t3754271844_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t3754271844_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T3754271844_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T28993770_H
#define COMDEFAULTINTERFACEATTRIBUTE_T28993770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t28993770  : public Attribute_t665885215
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t28993770, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T28993770_H
#ifndef RESOURCEINFO_T1257820283_H
#define RESOURCEINFO_T1257820283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t1257820283 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t1257820283, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t1257820283, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t1257820283, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1257820283_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t1257820283_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T1257820283_H
#ifndef TARGETEXCEPTION_T1200690211_H
#define TARGETEXCEPTION_T1200690211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t1200690211  : public Exception_t3549777140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T1200690211_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T2747691624_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T2747691624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t2747691624  : public Attribute_t665885215
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t2747691624, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T2747691624_H
#ifndef STRINGFREEZINGATTRIBUTE_T1702161960_H
#define STRINGFREEZINGATTRIBUTE_T1702161960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t1702161960  : public Attribute_t665885215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T1702161960_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t3459418534 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t3459418534 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t3459418534 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t3459418534 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef ENUM_T4240642473_H
#define ENUM_T4240642473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4240642473  : public ValueType_t3085347496
{
public:

public:
};

struct Enum_t4240642473_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1825639776* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4240642473_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1825639776* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1825639776** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1825639776* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4240642473_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4240642473_marshaled_com
{
};
#endif // ENUM_T4240642473_H
#ifndef OPCODE_T2832213683_H
#define OPCODE_T2832213683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCode
struct  OpCode_t2832213683 
{
public:
	// System.Byte System.Reflection.Emit.OpCode::op1
	uint8_t ___op1_0;
	// System.Byte System.Reflection.Emit.OpCode::op2
	uint8_t ___op2_1;
	// System.Byte System.Reflection.Emit.OpCode::push
	uint8_t ___push_2;
	// System.Byte System.Reflection.Emit.OpCode::pop
	uint8_t ___pop_3;
	// System.Byte System.Reflection.Emit.OpCode::size
	uint8_t ___size_4;
	// System.Byte System.Reflection.Emit.OpCode::type
	uint8_t ___type_5;
	// System.Byte System.Reflection.Emit.OpCode::args
	uint8_t ___args_6;
	// System.Byte System.Reflection.Emit.OpCode::flow
	uint8_t ___flow_7;

public:
	inline static int32_t get_offset_of_op1_0() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___op1_0)); }
	inline uint8_t get_op1_0() const { return ___op1_0; }
	inline uint8_t* get_address_of_op1_0() { return &___op1_0; }
	inline void set_op1_0(uint8_t value)
	{
		___op1_0 = value;
	}

	inline static int32_t get_offset_of_op2_1() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___op2_1)); }
	inline uint8_t get_op2_1() const { return ___op2_1; }
	inline uint8_t* get_address_of_op2_1() { return &___op2_1; }
	inline void set_op2_1(uint8_t value)
	{
		___op2_1 = value;
	}

	inline static int32_t get_offset_of_push_2() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___push_2)); }
	inline uint8_t get_push_2() const { return ___push_2; }
	inline uint8_t* get_address_of_push_2() { return &___push_2; }
	inline void set_push_2(uint8_t value)
	{
		___push_2 = value;
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___pop_3)); }
	inline uint8_t get_pop_3() const { return ___pop_3; }
	inline uint8_t* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(uint8_t value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___size_4)); }
	inline uint8_t get_size_4() const { return ___size_4; }
	inline uint8_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint8_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___type_5)); }
	inline uint8_t get_type_5() const { return ___type_5; }
	inline uint8_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(uint8_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___args_6)); }
	inline uint8_t get_args_6() const { return ___args_6; }
	inline uint8_t* get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(uint8_t value)
	{
		___args_6 = value;
	}

	inline static int32_t get_offset_of_flow_7() { return static_cast<int32_t>(offsetof(OpCode_t2832213683, ___flow_7)); }
	inline uint8_t get_flow_7() const { return ___flow_7; }
	inline uint8_t* get_address_of_flow_7() { return &___flow_7; }
	inline void set_flow_7(uint8_t value)
	{
		___flow_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T2832213683_H
#ifndef VOID_T3504030303_H
#define VOID_T3504030303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3504030303 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3504030303_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T4262248275_H
#define ASSEMBLYCOMPANYATTRIBUTE_T4262248275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t4262248275  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t4262248275, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T4262248275_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T460704221_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T460704221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t460704221  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t460704221, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T460704221_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T3110755769_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T3110755769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t3110755769  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t3110755769, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T3110755769_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T3576670981_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T3576670981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t3576670981  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t3576670981, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T3576670981_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T52663705_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T52663705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t52663705  : public Attribute_t665885215
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t52663705, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T52663705_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T4229074898_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T4229074898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t4229074898  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t4229074898, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T4229074898_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T2156535805_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T2156535805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t2156535805  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t2156535805, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T2156535805_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T3040582320_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T3040582320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t3040582320 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3040582320, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t3040582320, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3040582320_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t3040582320_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T3040582320_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T3108723999_H
#define ASSEMBLYKEYFILEATTRIBUTE_T3108723999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t3108723999  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t3108723999, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T3108723999_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T2029372340_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T2029372340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t2029372340  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t2029372340, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T2029372340_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1112882465_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1112882465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1112882465  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1112882465, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1112882465_H
#ifndef SYSTEMEXCEPTION_T3990923988_H
#define SYSTEMEXCEPTION_T3990923988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3990923988  : public Exception_t3549777140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3990923988_H
#ifndef DEFAULT_T1083985009_H
#define DEFAULT_T1083985009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t1083985009  : public Binder_t1627552849
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T1083985009_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T815879748_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T815879748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t815879748  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t815879748, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T815879748_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T38607131_H
#define TARGETPARAMETERCOUNTEXCEPTION_T38607131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t38607131  : public Exception_t3549777140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T38607131_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T3753430261_H
#define ASSEMBLYTITLEATTRIBUTE_T3753430261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t3753430261  : public Attribute_t665885215
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t3753430261, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T3753430261_H
#ifndef CER_T3241692816_H
#define CER_T3241692816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t3241692816 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t3241692816, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CER_T3241692816_H
#ifndef COMPILATIONRELAXATIONS_T2406078246_H
#define COMPILATIONRELAXATIONS_T2406078246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t2406078246 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t2406078246, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONS_T2406078246_H
#ifndef CALLINGCONVENTION_T3614799473_H
#define CALLINGCONVENTION_T3614799473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3614799473 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3614799473, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T3614799473_H
#ifndef LOADHINT_T3244628977_H
#define LOADHINT_T3244628977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3244628977 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t3244628977, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADHINT_T3244628977_H
#ifndef CHARSET_T948153764_H
#define CHARSET_T948153764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t948153764 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t948153764, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARSET_T948153764_H
#ifndef ASSEMBLYHASHALGORITHM_T3743487490_H
#define ASSEMBLYHASHALGORITHM_T3743487490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t3743487490 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t3743487490, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T3743487490_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T716090837_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T716090837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t716090837 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t716090837, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T716090837_H
#ifndef UNMANAGEDTYPE_T2014453602_H
#define UNMANAGEDTYPE_T2014453602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2014453602 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2014453602, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T2014453602_H
#ifndef TYPEATTRIBUTES_T1219511507_H
#define TYPEATTRIBUTES_T1219511507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t1219511507 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t1219511507, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTRIBUTES_T1219511507_H
#ifndef RUNTIMEFIELDHANDLE_T2545333905_H
#define RUNTIMEFIELDHANDLE_T2545333905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2545333905 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2545333905, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2545333905_H
#ifndef EXTERNALEXCEPTION_T4279254957_H
#define EXTERNALEXCEPTION_T4279254957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t4279254957  : public SystemException_t3990923988
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T4279254957_H
#ifndef CLASSINTERFACETYPE_T3954891227_H
#define CLASSINTERFACETYPE_T3954891227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t3954891227 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t3954891227, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACETYPE_T3954891227_H
#ifndef CONSISTENCY_T3724496849_H
#define CONSISTENCY_T3724496849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t3724496849 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t3724496849, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSISTENCY_T3724496849_H
#ifndef PREDEFINEDRESOURCETYPE_T2423267561_H
#define PREDEFINEDRESOURCETYPE_T2423267561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t2423267561 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t2423267561, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDEFINEDRESOURCETYPE_T2423267561_H
#ifndef DELEGATE_T3422922067_H
#define DELEGATE_T3422922067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3422922067  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1465370083 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3422922067, ___data_8)); }
	inline DelegateData_t1465370083 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1465370083 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1465370083 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3422922067_H
#ifndef PROCESSORARCHITECTURE_T3124710346_H
#define PROCESSORARCHITECTURE_T3124710346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t3124710346 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t3124710346, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T3124710346_H
#ifndef OPCODES_T137770049_H
#define OPCODES_T137770049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.OpCodes
struct  OpCodes_t137770049  : public RuntimeObject
{
public:

public:
};

struct OpCodes_t137770049_StaticFields
{
public:
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Nop
	OpCode_t2832213683  ___Nop_0;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Break
	OpCode_t2832213683  ___Break_1;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_0
	OpCode_t2832213683  ___Ldarg_0_2;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_1
	OpCode_t2832213683  ___Ldarg_1_3;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_2
	OpCode_t2832213683  ___Ldarg_2_4;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_3
	OpCode_t2832213683  ___Ldarg_3_5;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_0
	OpCode_t2832213683  ___Ldloc_0_6;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_1
	OpCode_t2832213683  ___Ldloc_1_7;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_2
	OpCode_t2832213683  ___Ldloc_2_8;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_3
	OpCode_t2832213683  ___Ldloc_3_9;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_0
	OpCode_t2832213683  ___Stloc_0_10;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_1
	OpCode_t2832213683  ___Stloc_1_11;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_2
	OpCode_t2832213683  ___Stloc_2_12;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_3
	OpCode_t2832213683  ___Stloc_3_13;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg_S
	OpCode_t2832213683  ___Ldarg_S_14;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga_S
	OpCode_t2832213683  ___Ldarga_S_15;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg_S
	OpCode_t2832213683  ___Starg_S_16;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc_S
	OpCode_t2832213683  ___Ldloc_S_17;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca_S
	OpCode_t2832213683  ___Ldloca_S_18;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc_S
	OpCode_t2832213683  ___Stloc_S_19;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldnull
	OpCode_t2832213683  ___Ldnull_20;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_M1
	OpCode_t2832213683  ___Ldc_I4_M1_21;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_0
	OpCode_t2832213683  ___Ldc_I4_0_22;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_1
	OpCode_t2832213683  ___Ldc_I4_1_23;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_2
	OpCode_t2832213683  ___Ldc_I4_2_24;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_3
	OpCode_t2832213683  ___Ldc_I4_3_25;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_4
	OpCode_t2832213683  ___Ldc_I4_4_26;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_5
	OpCode_t2832213683  ___Ldc_I4_5_27;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_6
	OpCode_t2832213683  ___Ldc_I4_6_28;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_7
	OpCode_t2832213683  ___Ldc_I4_7_29;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_8
	OpCode_t2832213683  ___Ldc_I4_8_30;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4_S
	OpCode_t2832213683  ___Ldc_I4_S_31;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I4
	OpCode_t2832213683  ___Ldc_I4_32;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_I8
	OpCode_t2832213683  ___Ldc_I8_33;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R4
	OpCode_t2832213683  ___Ldc_R4_34;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldc_R8
	OpCode_t2832213683  ___Ldc_R8_35;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Dup
	OpCode_t2832213683  ___Dup_36;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Pop
	OpCode_t2832213683  ___Pop_37;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Jmp
	OpCode_t2832213683  ___Jmp_38;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Call
	OpCode_t2832213683  ___Call_39;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Calli
	OpCode_t2832213683  ___Calli_40;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ret
	OpCode_t2832213683  ___Ret_41;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br_S
	OpCode_t2832213683  ___Br_S_42;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse_S
	OpCode_t2832213683  ___Brfalse_S_43;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue_S
	OpCode_t2832213683  ___Brtrue_S_44;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq_S
	OpCode_t2832213683  ___Beq_S_45;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_S
	OpCode_t2832213683  ___Bge_S_46;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_S
	OpCode_t2832213683  ___Bgt_S_47;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_S
	OpCode_t2832213683  ___Ble_S_48;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_S
	OpCode_t2832213683  ___Blt_S_49;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un_S
	OpCode_t2832213683  ___Bne_Un_S_50;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un_S
	OpCode_t2832213683  ___Bge_Un_S_51;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un_S
	OpCode_t2832213683  ___Bgt_Un_S_52;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un_S
	OpCode_t2832213683  ___Ble_Un_S_53;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un_S
	OpCode_t2832213683  ___Blt_Un_S_54;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Br
	OpCode_t2832213683  ___Br_55;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brfalse
	OpCode_t2832213683  ___Brfalse_56;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Brtrue
	OpCode_t2832213683  ___Brtrue_57;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Beq
	OpCode_t2832213683  ___Beq_58;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge
	OpCode_t2832213683  ___Bge_59;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt
	OpCode_t2832213683  ___Bgt_60;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble
	OpCode_t2832213683  ___Ble_61;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt
	OpCode_t2832213683  ___Blt_62;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bne_Un
	OpCode_t2832213683  ___Bne_Un_63;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bge_Un
	OpCode_t2832213683  ___Bge_Un_64;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Bgt_Un
	OpCode_t2832213683  ___Bgt_Un_65;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ble_Un
	OpCode_t2832213683  ___Ble_Un_66;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Blt_Un
	OpCode_t2832213683  ___Blt_Un_67;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Switch
	OpCode_t2832213683  ___Switch_68;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I1
	OpCode_t2832213683  ___Ldind_I1_69;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U1
	OpCode_t2832213683  ___Ldind_U1_70;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I2
	OpCode_t2832213683  ___Ldind_I2_71;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U2
	OpCode_t2832213683  ___Ldind_U2_72;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I4
	OpCode_t2832213683  ___Ldind_I4_73;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_U4
	OpCode_t2832213683  ___Ldind_U4_74;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I8
	OpCode_t2832213683  ___Ldind_I8_75;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_I
	OpCode_t2832213683  ___Ldind_I_76;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R4
	OpCode_t2832213683  ___Ldind_R4_77;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_R8
	OpCode_t2832213683  ___Ldind_R8_78;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldind_Ref
	OpCode_t2832213683  ___Ldind_Ref_79;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_Ref
	OpCode_t2832213683  ___Stind_Ref_80;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I1
	OpCode_t2832213683  ___Stind_I1_81;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I2
	OpCode_t2832213683  ___Stind_I2_82;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I4
	OpCode_t2832213683  ___Stind_I4_83;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I8
	OpCode_t2832213683  ___Stind_I8_84;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R4
	OpCode_t2832213683  ___Stind_R4_85;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_R8
	OpCode_t2832213683  ___Stind_R8_86;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add
	OpCode_t2832213683  ___Add_87;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub
	OpCode_t2832213683  ___Sub_88;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul
	OpCode_t2832213683  ___Mul_89;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div
	OpCode_t2832213683  ___Div_90;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Div_Un
	OpCode_t2832213683  ___Div_Un_91;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem
	OpCode_t2832213683  ___Rem_92;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rem_Un
	OpCode_t2832213683  ___Rem_Un_93;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::And
	OpCode_t2832213683  ___And_94;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Or
	OpCode_t2832213683  ___Or_95;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Xor
	OpCode_t2832213683  ___Xor_96;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shl
	OpCode_t2832213683  ___Shl_97;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr
	OpCode_t2832213683  ___Shr_98;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Shr_Un
	OpCode_t2832213683  ___Shr_Un_99;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Neg
	OpCode_t2832213683  ___Neg_100;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Not
	OpCode_t2832213683  ___Not_101;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I1
	OpCode_t2832213683  ___Conv_I1_102;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I2
	OpCode_t2832213683  ___Conv_I2_103;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I4
	OpCode_t2832213683  ___Conv_I4_104;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I8
	OpCode_t2832213683  ___Conv_I8_105;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R4
	OpCode_t2832213683  ___Conv_R4_106;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R8
	OpCode_t2832213683  ___Conv_R8_107;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U4
	OpCode_t2832213683  ___Conv_U4_108;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U8
	OpCode_t2832213683  ___Conv_U8_109;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Callvirt
	OpCode_t2832213683  ___Callvirt_110;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpobj
	OpCode_t2832213683  ___Cpobj_111;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldobj
	OpCode_t2832213683  ___Ldobj_112;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldstr
	OpCode_t2832213683  ___Ldstr_113;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newobj
	OpCode_t2832213683  ___Newobj_114;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Castclass
	OpCode_t2832213683  ___Castclass_115;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Isinst
	OpCode_t2832213683  ___Isinst_116;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_R_Un
	OpCode_t2832213683  ___Conv_R_Un_117;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox
	OpCode_t2832213683  ___Unbox_118;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Throw
	OpCode_t2832213683  ___Throw_119;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldfld
	OpCode_t2832213683  ___Ldfld_120;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldflda
	OpCode_t2832213683  ___Ldflda_121;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stfld
	OpCode_t2832213683  ___Stfld_122;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsfld
	OpCode_t2832213683  ___Ldsfld_123;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldsflda
	OpCode_t2832213683  ___Ldsflda_124;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stsfld
	OpCode_t2832213683  ___Stsfld_125;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stobj
	OpCode_t2832213683  ___Stobj_126;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1_Un
	OpCode_t2832213683  ___Conv_Ovf_I1_Un_127;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2_Un
	OpCode_t2832213683  ___Conv_Ovf_I2_Un_128;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4_Un
	OpCode_t2832213683  ___Conv_Ovf_I4_Un_129;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8_Un
	OpCode_t2832213683  ___Conv_Ovf_I8_Un_130;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1_Un
	OpCode_t2832213683  ___Conv_Ovf_U1_Un_131;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2_Un
	OpCode_t2832213683  ___Conv_Ovf_U2_Un_132;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4_Un
	OpCode_t2832213683  ___Conv_Ovf_U4_Un_133;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8_Un
	OpCode_t2832213683  ___Conv_Ovf_U8_Un_134;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I_Un
	OpCode_t2832213683  ___Conv_Ovf_I_Un_135;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U_Un
	OpCode_t2832213683  ___Conv_Ovf_U_Un_136;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Box
	OpCode_t2832213683  ___Box_137;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Newarr
	OpCode_t2832213683  ___Newarr_138;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldlen
	OpCode_t2832213683  ___Ldlen_139;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelema
	OpCode_t2832213683  ___Ldelema_140;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I1
	OpCode_t2832213683  ___Ldelem_I1_141;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U1
	OpCode_t2832213683  ___Ldelem_U1_142;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I2
	OpCode_t2832213683  ___Ldelem_I2_143;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U2
	OpCode_t2832213683  ___Ldelem_U2_144;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I4
	OpCode_t2832213683  ___Ldelem_I4_145;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_U4
	OpCode_t2832213683  ___Ldelem_U4_146;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I8
	OpCode_t2832213683  ___Ldelem_I8_147;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_I
	OpCode_t2832213683  ___Ldelem_I_148;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R4
	OpCode_t2832213683  ___Ldelem_R4_149;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_R8
	OpCode_t2832213683  ___Ldelem_R8_150;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem_Ref
	OpCode_t2832213683  ___Ldelem_Ref_151;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I
	OpCode_t2832213683  ___Stelem_I_152;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I1
	OpCode_t2832213683  ___Stelem_I1_153;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I2
	OpCode_t2832213683  ___Stelem_I2_154;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I4
	OpCode_t2832213683  ___Stelem_I4_155;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_I8
	OpCode_t2832213683  ___Stelem_I8_156;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R4
	OpCode_t2832213683  ___Stelem_R4_157;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_R8
	OpCode_t2832213683  ___Stelem_R8_158;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem_Ref
	OpCode_t2832213683  ___Stelem_Ref_159;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldelem
	OpCode_t2832213683  ___Ldelem_160;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stelem
	OpCode_t2832213683  ___Stelem_161;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unbox_Any
	OpCode_t2832213683  ___Unbox_Any_162;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I1
	OpCode_t2832213683  ___Conv_Ovf_I1_163;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U1
	OpCode_t2832213683  ___Conv_Ovf_U1_164;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I2
	OpCode_t2832213683  ___Conv_Ovf_I2_165;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U2
	OpCode_t2832213683  ___Conv_Ovf_U2_166;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I4
	OpCode_t2832213683  ___Conv_Ovf_I4_167;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U4
	OpCode_t2832213683  ___Conv_Ovf_U4_168;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I8
	OpCode_t2832213683  ___Conv_Ovf_I8_169;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U8
	OpCode_t2832213683  ___Conv_Ovf_U8_170;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanyval
	OpCode_t2832213683  ___Refanyval_171;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ckfinite
	OpCode_t2832213683  ___Ckfinite_172;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mkrefany
	OpCode_t2832213683  ___Mkrefany_173;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldtoken
	OpCode_t2832213683  ___Ldtoken_174;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U2
	OpCode_t2832213683  ___Conv_U2_175;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U1
	OpCode_t2832213683  ___Conv_U1_176;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_I
	OpCode_t2832213683  ___Conv_I_177;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_I
	OpCode_t2832213683  ___Conv_Ovf_I_178;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_Ovf_U
	OpCode_t2832213683  ___Conv_Ovf_U_179;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf
	OpCode_t2832213683  ___Add_Ovf_180;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Add_Ovf_Un
	OpCode_t2832213683  ___Add_Ovf_Un_181;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf
	OpCode_t2832213683  ___Mul_Ovf_182;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Mul_Ovf_Un
	OpCode_t2832213683  ___Mul_Ovf_Un_183;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf
	OpCode_t2832213683  ___Sub_Ovf_184;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sub_Ovf_Un
	OpCode_t2832213683  ___Sub_Ovf_Un_185;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfinally
	OpCode_t2832213683  ___Endfinally_186;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave
	OpCode_t2832213683  ___Leave_187;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Leave_S
	OpCode_t2832213683  ___Leave_S_188;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stind_I
	OpCode_t2832213683  ___Stind_I_189;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Conv_U
	OpCode_t2832213683  ___Conv_U_190;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix7
	OpCode_t2832213683  ___Prefix7_191;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix6
	OpCode_t2832213683  ___Prefix6_192;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix5
	OpCode_t2832213683  ___Prefix5_193;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix4
	OpCode_t2832213683  ___Prefix4_194;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix3
	OpCode_t2832213683  ___Prefix3_195;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix2
	OpCode_t2832213683  ___Prefix2_196;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefix1
	OpCode_t2832213683  ___Prefix1_197;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Prefixref
	OpCode_t2832213683  ___Prefixref_198;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Arglist
	OpCode_t2832213683  ___Arglist_199;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ceq
	OpCode_t2832213683  ___Ceq_200;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt
	OpCode_t2832213683  ___Cgt_201;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cgt_Un
	OpCode_t2832213683  ___Cgt_Un_202;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt
	OpCode_t2832213683  ___Clt_203;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Clt_Un
	OpCode_t2832213683  ___Clt_Un_204;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldftn
	OpCode_t2832213683  ___Ldftn_205;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldvirtftn
	OpCode_t2832213683  ___Ldvirtftn_206;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarg
	OpCode_t2832213683  ___Ldarg_207;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldarga
	OpCode_t2832213683  ___Ldarga_208;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Starg
	OpCode_t2832213683  ___Starg_209;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloc
	OpCode_t2832213683  ___Ldloc_210;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Ldloca
	OpCode_t2832213683  ___Ldloca_211;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Stloc
	OpCode_t2832213683  ___Stloc_212;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Localloc
	OpCode_t2832213683  ___Localloc_213;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Endfilter
	OpCode_t2832213683  ___Endfilter_214;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Unaligned
	OpCode_t2832213683  ___Unaligned_215;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Volatile
	OpCode_t2832213683  ___Volatile_216;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Tailcall
	OpCode_t2832213683  ___Tailcall_217;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initobj
	OpCode_t2832213683  ___Initobj_218;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Constrained
	OpCode_t2832213683  ___Constrained_219;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Cpblk
	OpCode_t2832213683  ___Cpblk_220;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Initblk
	OpCode_t2832213683  ___Initblk_221;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Rethrow
	OpCode_t2832213683  ___Rethrow_222;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Sizeof
	OpCode_t2832213683  ___Sizeof_223;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Refanytype
	OpCode_t2832213683  ___Refanytype_224;
	// System.Reflection.Emit.OpCode System.Reflection.Emit.OpCodes::Readonly
	OpCode_t2832213683  ___Readonly_225;

public:
	inline static int32_t get_offset_of_Nop_0() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Nop_0)); }
	inline OpCode_t2832213683  get_Nop_0() const { return ___Nop_0; }
	inline OpCode_t2832213683 * get_address_of_Nop_0() { return &___Nop_0; }
	inline void set_Nop_0(OpCode_t2832213683  value)
	{
		___Nop_0 = value;
	}

	inline static int32_t get_offset_of_Break_1() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Break_1)); }
	inline OpCode_t2832213683  get_Break_1() const { return ___Break_1; }
	inline OpCode_t2832213683 * get_address_of_Break_1() { return &___Break_1; }
	inline void set_Break_1(OpCode_t2832213683  value)
	{
		___Break_1 = value;
	}

	inline static int32_t get_offset_of_Ldarg_0_2() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_0_2)); }
	inline OpCode_t2832213683  get_Ldarg_0_2() const { return ___Ldarg_0_2; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_0_2() { return &___Ldarg_0_2; }
	inline void set_Ldarg_0_2(OpCode_t2832213683  value)
	{
		___Ldarg_0_2 = value;
	}

	inline static int32_t get_offset_of_Ldarg_1_3() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_1_3)); }
	inline OpCode_t2832213683  get_Ldarg_1_3() const { return ___Ldarg_1_3; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_1_3() { return &___Ldarg_1_3; }
	inline void set_Ldarg_1_3(OpCode_t2832213683  value)
	{
		___Ldarg_1_3 = value;
	}

	inline static int32_t get_offset_of_Ldarg_2_4() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_2_4)); }
	inline OpCode_t2832213683  get_Ldarg_2_4() const { return ___Ldarg_2_4; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_2_4() { return &___Ldarg_2_4; }
	inline void set_Ldarg_2_4(OpCode_t2832213683  value)
	{
		___Ldarg_2_4 = value;
	}

	inline static int32_t get_offset_of_Ldarg_3_5() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_3_5)); }
	inline OpCode_t2832213683  get_Ldarg_3_5() const { return ___Ldarg_3_5; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_3_5() { return &___Ldarg_3_5; }
	inline void set_Ldarg_3_5(OpCode_t2832213683  value)
	{
		___Ldarg_3_5 = value;
	}

	inline static int32_t get_offset_of_Ldloc_0_6() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_0_6)); }
	inline OpCode_t2832213683  get_Ldloc_0_6() const { return ___Ldloc_0_6; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_0_6() { return &___Ldloc_0_6; }
	inline void set_Ldloc_0_6(OpCode_t2832213683  value)
	{
		___Ldloc_0_6 = value;
	}

	inline static int32_t get_offset_of_Ldloc_1_7() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_1_7)); }
	inline OpCode_t2832213683  get_Ldloc_1_7() const { return ___Ldloc_1_7; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_1_7() { return &___Ldloc_1_7; }
	inline void set_Ldloc_1_7(OpCode_t2832213683  value)
	{
		___Ldloc_1_7 = value;
	}

	inline static int32_t get_offset_of_Ldloc_2_8() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_2_8)); }
	inline OpCode_t2832213683  get_Ldloc_2_8() const { return ___Ldloc_2_8; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_2_8() { return &___Ldloc_2_8; }
	inline void set_Ldloc_2_8(OpCode_t2832213683  value)
	{
		___Ldloc_2_8 = value;
	}

	inline static int32_t get_offset_of_Ldloc_3_9() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_3_9)); }
	inline OpCode_t2832213683  get_Ldloc_3_9() const { return ___Ldloc_3_9; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_3_9() { return &___Ldloc_3_9; }
	inline void set_Ldloc_3_9(OpCode_t2832213683  value)
	{
		___Ldloc_3_9 = value;
	}

	inline static int32_t get_offset_of_Stloc_0_10() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_0_10)); }
	inline OpCode_t2832213683  get_Stloc_0_10() const { return ___Stloc_0_10; }
	inline OpCode_t2832213683 * get_address_of_Stloc_0_10() { return &___Stloc_0_10; }
	inline void set_Stloc_0_10(OpCode_t2832213683  value)
	{
		___Stloc_0_10 = value;
	}

	inline static int32_t get_offset_of_Stloc_1_11() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_1_11)); }
	inline OpCode_t2832213683  get_Stloc_1_11() const { return ___Stloc_1_11; }
	inline OpCode_t2832213683 * get_address_of_Stloc_1_11() { return &___Stloc_1_11; }
	inline void set_Stloc_1_11(OpCode_t2832213683  value)
	{
		___Stloc_1_11 = value;
	}

	inline static int32_t get_offset_of_Stloc_2_12() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_2_12)); }
	inline OpCode_t2832213683  get_Stloc_2_12() const { return ___Stloc_2_12; }
	inline OpCode_t2832213683 * get_address_of_Stloc_2_12() { return &___Stloc_2_12; }
	inline void set_Stloc_2_12(OpCode_t2832213683  value)
	{
		___Stloc_2_12 = value;
	}

	inline static int32_t get_offset_of_Stloc_3_13() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_3_13)); }
	inline OpCode_t2832213683  get_Stloc_3_13() const { return ___Stloc_3_13; }
	inline OpCode_t2832213683 * get_address_of_Stloc_3_13() { return &___Stloc_3_13; }
	inline void set_Stloc_3_13(OpCode_t2832213683  value)
	{
		___Stloc_3_13 = value;
	}

	inline static int32_t get_offset_of_Ldarg_S_14() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_S_14)); }
	inline OpCode_t2832213683  get_Ldarg_S_14() const { return ___Ldarg_S_14; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_S_14() { return &___Ldarg_S_14; }
	inline void set_Ldarg_S_14(OpCode_t2832213683  value)
	{
		___Ldarg_S_14 = value;
	}

	inline static int32_t get_offset_of_Ldarga_S_15() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarga_S_15)); }
	inline OpCode_t2832213683  get_Ldarga_S_15() const { return ___Ldarga_S_15; }
	inline OpCode_t2832213683 * get_address_of_Ldarga_S_15() { return &___Ldarga_S_15; }
	inline void set_Ldarga_S_15(OpCode_t2832213683  value)
	{
		___Ldarga_S_15 = value;
	}

	inline static int32_t get_offset_of_Starg_S_16() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Starg_S_16)); }
	inline OpCode_t2832213683  get_Starg_S_16() const { return ___Starg_S_16; }
	inline OpCode_t2832213683 * get_address_of_Starg_S_16() { return &___Starg_S_16; }
	inline void set_Starg_S_16(OpCode_t2832213683  value)
	{
		___Starg_S_16 = value;
	}

	inline static int32_t get_offset_of_Ldloc_S_17() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_S_17)); }
	inline OpCode_t2832213683  get_Ldloc_S_17() const { return ___Ldloc_S_17; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_S_17() { return &___Ldloc_S_17; }
	inline void set_Ldloc_S_17(OpCode_t2832213683  value)
	{
		___Ldloc_S_17 = value;
	}

	inline static int32_t get_offset_of_Ldloca_S_18() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloca_S_18)); }
	inline OpCode_t2832213683  get_Ldloca_S_18() const { return ___Ldloca_S_18; }
	inline OpCode_t2832213683 * get_address_of_Ldloca_S_18() { return &___Ldloca_S_18; }
	inline void set_Ldloca_S_18(OpCode_t2832213683  value)
	{
		___Ldloca_S_18 = value;
	}

	inline static int32_t get_offset_of_Stloc_S_19() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_S_19)); }
	inline OpCode_t2832213683  get_Stloc_S_19() const { return ___Stloc_S_19; }
	inline OpCode_t2832213683 * get_address_of_Stloc_S_19() { return &___Stloc_S_19; }
	inline void set_Stloc_S_19(OpCode_t2832213683  value)
	{
		___Stloc_S_19 = value;
	}

	inline static int32_t get_offset_of_Ldnull_20() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldnull_20)); }
	inline OpCode_t2832213683  get_Ldnull_20() const { return ___Ldnull_20; }
	inline OpCode_t2832213683 * get_address_of_Ldnull_20() { return &___Ldnull_20; }
	inline void set_Ldnull_20(OpCode_t2832213683  value)
	{
		___Ldnull_20 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_M1_21() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_M1_21)); }
	inline OpCode_t2832213683  get_Ldc_I4_M1_21() const { return ___Ldc_I4_M1_21; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_M1_21() { return &___Ldc_I4_M1_21; }
	inline void set_Ldc_I4_M1_21(OpCode_t2832213683  value)
	{
		___Ldc_I4_M1_21 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_0_22() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_0_22)); }
	inline OpCode_t2832213683  get_Ldc_I4_0_22() const { return ___Ldc_I4_0_22; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_0_22() { return &___Ldc_I4_0_22; }
	inline void set_Ldc_I4_0_22(OpCode_t2832213683  value)
	{
		___Ldc_I4_0_22 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_1_23() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_1_23)); }
	inline OpCode_t2832213683  get_Ldc_I4_1_23() const { return ___Ldc_I4_1_23; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_1_23() { return &___Ldc_I4_1_23; }
	inline void set_Ldc_I4_1_23(OpCode_t2832213683  value)
	{
		___Ldc_I4_1_23 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_2_24() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_2_24)); }
	inline OpCode_t2832213683  get_Ldc_I4_2_24() const { return ___Ldc_I4_2_24; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_2_24() { return &___Ldc_I4_2_24; }
	inline void set_Ldc_I4_2_24(OpCode_t2832213683  value)
	{
		___Ldc_I4_2_24 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_3_25() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_3_25)); }
	inline OpCode_t2832213683  get_Ldc_I4_3_25() const { return ___Ldc_I4_3_25; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_3_25() { return &___Ldc_I4_3_25; }
	inline void set_Ldc_I4_3_25(OpCode_t2832213683  value)
	{
		___Ldc_I4_3_25 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_4_26() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_4_26)); }
	inline OpCode_t2832213683  get_Ldc_I4_4_26() const { return ___Ldc_I4_4_26; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_4_26() { return &___Ldc_I4_4_26; }
	inline void set_Ldc_I4_4_26(OpCode_t2832213683  value)
	{
		___Ldc_I4_4_26 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_5_27() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_5_27)); }
	inline OpCode_t2832213683  get_Ldc_I4_5_27() const { return ___Ldc_I4_5_27; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_5_27() { return &___Ldc_I4_5_27; }
	inline void set_Ldc_I4_5_27(OpCode_t2832213683  value)
	{
		___Ldc_I4_5_27 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_6_28() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_6_28)); }
	inline OpCode_t2832213683  get_Ldc_I4_6_28() const { return ___Ldc_I4_6_28; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_6_28() { return &___Ldc_I4_6_28; }
	inline void set_Ldc_I4_6_28(OpCode_t2832213683  value)
	{
		___Ldc_I4_6_28 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_7_29() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_7_29)); }
	inline OpCode_t2832213683  get_Ldc_I4_7_29() const { return ___Ldc_I4_7_29; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_7_29() { return &___Ldc_I4_7_29; }
	inline void set_Ldc_I4_7_29(OpCode_t2832213683  value)
	{
		___Ldc_I4_7_29 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_8_30() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_8_30)); }
	inline OpCode_t2832213683  get_Ldc_I4_8_30() const { return ___Ldc_I4_8_30; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_8_30() { return &___Ldc_I4_8_30; }
	inline void set_Ldc_I4_8_30(OpCode_t2832213683  value)
	{
		___Ldc_I4_8_30 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_S_31() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_S_31)); }
	inline OpCode_t2832213683  get_Ldc_I4_S_31() const { return ___Ldc_I4_S_31; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_S_31() { return &___Ldc_I4_S_31; }
	inline void set_Ldc_I4_S_31(OpCode_t2832213683  value)
	{
		___Ldc_I4_S_31 = value;
	}

	inline static int32_t get_offset_of_Ldc_I4_32() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I4_32)); }
	inline OpCode_t2832213683  get_Ldc_I4_32() const { return ___Ldc_I4_32; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I4_32() { return &___Ldc_I4_32; }
	inline void set_Ldc_I4_32(OpCode_t2832213683  value)
	{
		___Ldc_I4_32 = value;
	}

	inline static int32_t get_offset_of_Ldc_I8_33() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_I8_33)); }
	inline OpCode_t2832213683  get_Ldc_I8_33() const { return ___Ldc_I8_33; }
	inline OpCode_t2832213683 * get_address_of_Ldc_I8_33() { return &___Ldc_I8_33; }
	inline void set_Ldc_I8_33(OpCode_t2832213683  value)
	{
		___Ldc_I8_33 = value;
	}

	inline static int32_t get_offset_of_Ldc_R4_34() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_R4_34)); }
	inline OpCode_t2832213683  get_Ldc_R4_34() const { return ___Ldc_R4_34; }
	inline OpCode_t2832213683 * get_address_of_Ldc_R4_34() { return &___Ldc_R4_34; }
	inline void set_Ldc_R4_34(OpCode_t2832213683  value)
	{
		___Ldc_R4_34 = value;
	}

	inline static int32_t get_offset_of_Ldc_R8_35() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldc_R8_35)); }
	inline OpCode_t2832213683  get_Ldc_R8_35() const { return ___Ldc_R8_35; }
	inline OpCode_t2832213683 * get_address_of_Ldc_R8_35() { return &___Ldc_R8_35; }
	inline void set_Ldc_R8_35(OpCode_t2832213683  value)
	{
		___Ldc_R8_35 = value;
	}

	inline static int32_t get_offset_of_Dup_36() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Dup_36)); }
	inline OpCode_t2832213683  get_Dup_36() const { return ___Dup_36; }
	inline OpCode_t2832213683 * get_address_of_Dup_36() { return &___Dup_36; }
	inline void set_Dup_36(OpCode_t2832213683  value)
	{
		___Dup_36 = value;
	}

	inline static int32_t get_offset_of_Pop_37() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Pop_37)); }
	inline OpCode_t2832213683  get_Pop_37() const { return ___Pop_37; }
	inline OpCode_t2832213683 * get_address_of_Pop_37() { return &___Pop_37; }
	inline void set_Pop_37(OpCode_t2832213683  value)
	{
		___Pop_37 = value;
	}

	inline static int32_t get_offset_of_Jmp_38() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Jmp_38)); }
	inline OpCode_t2832213683  get_Jmp_38() const { return ___Jmp_38; }
	inline OpCode_t2832213683 * get_address_of_Jmp_38() { return &___Jmp_38; }
	inline void set_Jmp_38(OpCode_t2832213683  value)
	{
		___Jmp_38 = value;
	}

	inline static int32_t get_offset_of_Call_39() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Call_39)); }
	inline OpCode_t2832213683  get_Call_39() const { return ___Call_39; }
	inline OpCode_t2832213683 * get_address_of_Call_39() { return &___Call_39; }
	inline void set_Call_39(OpCode_t2832213683  value)
	{
		___Call_39 = value;
	}

	inline static int32_t get_offset_of_Calli_40() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Calli_40)); }
	inline OpCode_t2832213683  get_Calli_40() const { return ___Calli_40; }
	inline OpCode_t2832213683 * get_address_of_Calli_40() { return &___Calli_40; }
	inline void set_Calli_40(OpCode_t2832213683  value)
	{
		___Calli_40 = value;
	}

	inline static int32_t get_offset_of_Ret_41() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ret_41)); }
	inline OpCode_t2832213683  get_Ret_41() const { return ___Ret_41; }
	inline OpCode_t2832213683 * get_address_of_Ret_41() { return &___Ret_41; }
	inline void set_Ret_41(OpCode_t2832213683  value)
	{
		___Ret_41 = value;
	}

	inline static int32_t get_offset_of_Br_S_42() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Br_S_42)); }
	inline OpCode_t2832213683  get_Br_S_42() const { return ___Br_S_42; }
	inline OpCode_t2832213683 * get_address_of_Br_S_42() { return &___Br_S_42; }
	inline void set_Br_S_42(OpCode_t2832213683  value)
	{
		___Br_S_42 = value;
	}

	inline static int32_t get_offset_of_Brfalse_S_43() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Brfalse_S_43)); }
	inline OpCode_t2832213683  get_Brfalse_S_43() const { return ___Brfalse_S_43; }
	inline OpCode_t2832213683 * get_address_of_Brfalse_S_43() { return &___Brfalse_S_43; }
	inline void set_Brfalse_S_43(OpCode_t2832213683  value)
	{
		___Brfalse_S_43 = value;
	}

	inline static int32_t get_offset_of_Brtrue_S_44() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Brtrue_S_44)); }
	inline OpCode_t2832213683  get_Brtrue_S_44() const { return ___Brtrue_S_44; }
	inline OpCode_t2832213683 * get_address_of_Brtrue_S_44() { return &___Brtrue_S_44; }
	inline void set_Brtrue_S_44(OpCode_t2832213683  value)
	{
		___Brtrue_S_44 = value;
	}

	inline static int32_t get_offset_of_Beq_S_45() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Beq_S_45)); }
	inline OpCode_t2832213683  get_Beq_S_45() const { return ___Beq_S_45; }
	inline OpCode_t2832213683 * get_address_of_Beq_S_45() { return &___Beq_S_45; }
	inline void set_Beq_S_45(OpCode_t2832213683  value)
	{
		___Beq_S_45 = value;
	}

	inline static int32_t get_offset_of_Bge_S_46() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bge_S_46)); }
	inline OpCode_t2832213683  get_Bge_S_46() const { return ___Bge_S_46; }
	inline OpCode_t2832213683 * get_address_of_Bge_S_46() { return &___Bge_S_46; }
	inline void set_Bge_S_46(OpCode_t2832213683  value)
	{
		___Bge_S_46 = value;
	}

	inline static int32_t get_offset_of_Bgt_S_47() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bgt_S_47)); }
	inline OpCode_t2832213683  get_Bgt_S_47() const { return ___Bgt_S_47; }
	inline OpCode_t2832213683 * get_address_of_Bgt_S_47() { return &___Bgt_S_47; }
	inline void set_Bgt_S_47(OpCode_t2832213683  value)
	{
		___Bgt_S_47 = value;
	}

	inline static int32_t get_offset_of_Ble_S_48() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ble_S_48)); }
	inline OpCode_t2832213683  get_Ble_S_48() const { return ___Ble_S_48; }
	inline OpCode_t2832213683 * get_address_of_Ble_S_48() { return &___Ble_S_48; }
	inline void set_Ble_S_48(OpCode_t2832213683  value)
	{
		___Ble_S_48 = value;
	}

	inline static int32_t get_offset_of_Blt_S_49() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Blt_S_49)); }
	inline OpCode_t2832213683  get_Blt_S_49() const { return ___Blt_S_49; }
	inline OpCode_t2832213683 * get_address_of_Blt_S_49() { return &___Blt_S_49; }
	inline void set_Blt_S_49(OpCode_t2832213683  value)
	{
		___Blt_S_49 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_S_50() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bne_Un_S_50)); }
	inline OpCode_t2832213683  get_Bne_Un_S_50() const { return ___Bne_Un_S_50; }
	inline OpCode_t2832213683 * get_address_of_Bne_Un_S_50() { return &___Bne_Un_S_50; }
	inline void set_Bne_Un_S_50(OpCode_t2832213683  value)
	{
		___Bne_Un_S_50 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_S_51() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bge_Un_S_51)); }
	inline OpCode_t2832213683  get_Bge_Un_S_51() const { return ___Bge_Un_S_51; }
	inline OpCode_t2832213683 * get_address_of_Bge_Un_S_51() { return &___Bge_Un_S_51; }
	inline void set_Bge_Un_S_51(OpCode_t2832213683  value)
	{
		___Bge_Un_S_51 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_S_52() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bgt_Un_S_52)); }
	inline OpCode_t2832213683  get_Bgt_Un_S_52() const { return ___Bgt_Un_S_52; }
	inline OpCode_t2832213683 * get_address_of_Bgt_Un_S_52() { return &___Bgt_Un_S_52; }
	inline void set_Bgt_Un_S_52(OpCode_t2832213683  value)
	{
		___Bgt_Un_S_52 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_S_53() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ble_Un_S_53)); }
	inline OpCode_t2832213683  get_Ble_Un_S_53() const { return ___Ble_Un_S_53; }
	inline OpCode_t2832213683 * get_address_of_Ble_Un_S_53() { return &___Ble_Un_S_53; }
	inline void set_Ble_Un_S_53(OpCode_t2832213683  value)
	{
		___Ble_Un_S_53 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_S_54() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Blt_Un_S_54)); }
	inline OpCode_t2832213683  get_Blt_Un_S_54() const { return ___Blt_Un_S_54; }
	inline OpCode_t2832213683 * get_address_of_Blt_Un_S_54() { return &___Blt_Un_S_54; }
	inline void set_Blt_Un_S_54(OpCode_t2832213683  value)
	{
		___Blt_Un_S_54 = value;
	}

	inline static int32_t get_offset_of_Br_55() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Br_55)); }
	inline OpCode_t2832213683  get_Br_55() const { return ___Br_55; }
	inline OpCode_t2832213683 * get_address_of_Br_55() { return &___Br_55; }
	inline void set_Br_55(OpCode_t2832213683  value)
	{
		___Br_55 = value;
	}

	inline static int32_t get_offset_of_Brfalse_56() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Brfalse_56)); }
	inline OpCode_t2832213683  get_Brfalse_56() const { return ___Brfalse_56; }
	inline OpCode_t2832213683 * get_address_of_Brfalse_56() { return &___Brfalse_56; }
	inline void set_Brfalse_56(OpCode_t2832213683  value)
	{
		___Brfalse_56 = value;
	}

	inline static int32_t get_offset_of_Brtrue_57() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Brtrue_57)); }
	inline OpCode_t2832213683  get_Brtrue_57() const { return ___Brtrue_57; }
	inline OpCode_t2832213683 * get_address_of_Brtrue_57() { return &___Brtrue_57; }
	inline void set_Brtrue_57(OpCode_t2832213683  value)
	{
		___Brtrue_57 = value;
	}

	inline static int32_t get_offset_of_Beq_58() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Beq_58)); }
	inline OpCode_t2832213683  get_Beq_58() const { return ___Beq_58; }
	inline OpCode_t2832213683 * get_address_of_Beq_58() { return &___Beq_58; }
	inline void set_Beq_58(OpCode_t2832213683  value)
	{
		___Beq_58 = value;
	}

	inline static int32_t get_offset_of_Bge_59() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bge_59)); }
	inline OpCode_t2832213683  get_Bge_59() const { return ___Bge_59; }
	inline OpCode_t2832213683 * get_address_of_Bge_59() { return &___Bge_59; }
	inline void set_Bge_59(OpCode_t2832213683  value)
	{
		___Bge_59 = value;
	}

	inline static int32_t get_offset_of_Bgt_60() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bgt_60)); }
	inline OpCode_t2832213683  get_Bgt_60() const { return ___Bgt_60; }
	inline OpCode_t2832213683 * get_address_of_Bgt_60() { return &___Bgt_60; }
	inline void set_Bgt_60(OpCode_t2832213683  value)
	{
		___Bgt_60 = value;
	}

	inline static int32_t get_offset_of_Ble_61() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ble_61)); }
	inline OpCode_t2832213683  get_Ble_61() const { return ___Ble_61; }
	inline OpCode_t2832213683 * get_address_of_Ble_61() { return &___Ble_61; }
	inline void set_Ble_61(OpCode_t2832213683  value)
	{
		___Ble_61 = value;
	}

	inline static int32_t get_offset_of_Blt_62() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Blt_62)); }
	inline OpCode_t2832213683  get_Blt_62() const { return ___Blt_62; }
	inline OpCode_t2832213683 * get_address_of_Blt_62() { return &___Blt_62; }
	inline void set_Blt_62(OpCode_t2832213683  value)
	{
		___Blt_62 = value;
	}

	inline static int32_t get_offset_of_Bne_Un_63() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bne_Un_63)); }
	inline OpCode_t2832213683  get_Bne_Un_63() const { return ___Bne_Un_63; }
	inline OpCode_t2832213683 * get_address_of_Bne_Un_63() { return &___Bne_Un_63; }
	inline void set_Bne_Un_63(OpCode_t2832213683  value)
	{
		___Bne_Un_63 = value;
	}

	inline static int32_t get_offset_of_Bge_Un_64() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bge_Un_64)); }
	inline OpCode_t2832213683  get_Bge_Un_64() const { return ___Bge_Un_64; }
	inline OpCode_t2832213683 * get_address_of_Bge_Un_64() { return &___Bge_Un_64; }
	inline void set_Bge_Un_64(OpCode_t2832213683  value)
	{
		___Bge_Un_64 = value;
	}

	inline static int32_t get_offset_of_Bgt_Un_65() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Bgt_Un_65)); }
	inline OpCode_t2832213683  get_Bgt_Un_65() const { return ___Bgt_Un_65; }
	inline OpCode_t2832213683 * get_address_of_Bgt_Un_65() { return &___Bgt_Un_65; }
	inline void set_Bgt_Un_65(OpCode_t2832213683  value)
	{
		___Bgt_Un_65 = value;
	}

	inline static int32_t get_offset_of_Ble_Un_66() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ble_Un_66)); }
	inline OpCode_t2832213683  get_Ble_Un_66() const { return ___Ble_Un_66; }
	inline OpCode_t2832213683 * get_address_of_Ble_Un_66() { return &___Ble_Un_66; }
	inline void set_Ble_Un_66(OpCode_t2832213683  value)
	{
		___Ble_Un_66 = value;
	}

	inline static int32_t get_offset_of_Blt_Un_67() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Blt_Un_67)); }
	inline OpCode_t2832213683  get_Blt_Un_67() const { return ___Blt_Un_67; }
	inline OpCode_t2832213683 * get_address_of_Blt_Un_67() { return &___Blt_Un_67; }
	inline void set_Blt_Un_67(OpCode_t2832213683  value)
	{
		___Blt_Un_67 = value;
	}

	inline static int32_t get_offset_of_Switch_68() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Switch_68)); }
	inline OpCode_t2832213683  get_Switch_68() const { return ___Switch_68; }
	inline OpCode_t2832213683 * get_address_of_Switch_68() { return &___Switch_68; }
	inline void set_Switch_68(OpCode_t2832213683  value)
	{
		___Switch_68 = value;
	}

	inline static int32_t get_offset_of_Ldind_I1_69() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_I1_69)); }
	inline OpCode_t2832213683  get_Ldind_I1_69() const { return ___Ldind_I1_69; }
	inline OpCode_t2832213683 * get_address_of_Ldind_I1_69() { return &___Ldind_I1_69; }
	inline void set_Ldind_I1_69(OpCode_t2832213683  value)
	{
		___Ldind_I1_69 = value;
	}

	inline static int32_t get_offset_of_Ldind_U1_70() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_U1_70)); }
	inline OpCode_t2832213683  get_Ldind_U1_70() const { return ___Ldind_U1_70; }
	inline OpCode_t2832213683 * get_address_of_Ldind_U1_70() { return &___Ldind_U1_70; }
	inline void set_Ldind_U1_70(OpCode_t2832213683  value)
	{
		___Ldind_U1_70 = value;
	}

	inline static int32_t get_offset_of_Ldind_I2_71() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_I2_71)); }
	inline OpCode_t2832213683  get_Ldind_I2_71() const { return ___Ldind_I2_71; }
	inline OpCode_t2832213683 * get_address_of_Ldind_I2_71() { return &___Ldind_I2_71; }
	inline void set_Ldind_I2_71(OpCode_t2832213683  value)
	{
		___Ldind_I2_71 = value;
	}

	inline static int32_t get_offset_of_Ldind_U2_72() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_U2_72)); }
	inline OpCode_t2832213683  get_Ldind_U2_72() const { return ___Ldind_U2_72; }
	inline OpCode_t2832213683 * get_address_of_Ldind_U2_72() { return &___Ldind_U2_72; }
	inline void set_Ldind_U2_72(OpCode_t2832213683  value)
	{
		___Ldind_U2_72 = value;
	}

	inline static int32_t get_offset_of_Ldind_I4_73() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_I4_73)); }
	inline OpCode_t2832213683  get_Ldind_I4_73() const { return ___Ldind_I4_73; }
	inline OpCode_t2832213683 * get_address_of_Ldind_I4_73() { return &___Ldind_I4_73; }
	inline void set_Ldind_I4_73(OpCode_t2832213683  value)
	{
		___Ldind_I4_73 = value;
	}

	inline static int32_t get_offset_of_Ldind_U4_74() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_U4_74)); }
	inline OpCode_t2832213683  get_Ldind_U4_74() const { return ___Ldind_U4_74; }
	inline OpCode_t2832213683 * get_address_of_Ldind_U4_74() { return &___Ldind_U4_74; }
	inline void set_Ldind_U4_74(OpCode_t2832213683  value)
	{
		___Ldind_U4_74 = value;
	}

	inline static int32_t get_offset_of_Ldind_I8_75() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_I8_75)); }
	inline OpCode_t2832213683  get_Ldind_I8_75() const { return ___Ldind_I8_75; }
	inline OpCode_t2832213683 * get_address_of_Ldind_I8_75() { return &___Ldind_I8_75; }
	inline void set_Ldind_I8_75(OpCode_t2832213683  value)
	{
		___Ldind_I8_75 = value;
	}

	inline static int32_t get_offset_of_Ldind_I_76() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_I_76)); }
	inline OpCode_t2832213683  get_Ldind_I_76() const { return ___Ldind_I_76; }
	inline OpCode_t2832213683 * get_address_of_Ldind_I_76() { return &___Ldind_I_76; }
	inline void set_Ldind_I_76(OpCode_t2832213683  value)
	{
		___Ldind_I_76 = value;
	}

	inline static int32_t get_offset_of_Ldind_R4_77() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_R4_77)); }
	inline OpCode_t2832213683  get_Ldind_R4_77() const { return ___Ldind_R4_77; }
	inline OpCode_t2832213683 * get_address_of_Ldind_R4_77() { return &___Ldind_R4_77; }
	inline void set_Ldind_R4_77(OpCode_t2832213683  value)
	{
		___Ldind_R4_77 = value;
	}

	inline static int32_t get_offset_of_Ldind_R8_78() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_R8_78)); }
	inline OpCode_t2832213683  get_Ldind_R8_78() const { return ___Ldind_R8_78; }
	inline OpCode_t2832213683 * get_address_of_Ldind_R8_78() { return &___Ldind_R8_78; }
	inline void set_Ldind_R8_78(OpCode_t2832213683  value)
	{
		___Ldind_R8_78 = value;
	}

	inline static int32_t get_offset_of_Ldind_Ref_79() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldind_Ref_79)); }
	inline OpCode_t2832213683  get_Ldind_Ref_79() const { return ___Ldind_Ref_79; }
	inline OpCode_t2832213683 * get_address_of_Ldind_Ref_79() { return &___Ldind_Ref_79; }
	inline void set_Ldind_Ref_79(OpCode_t2832213683  value)
	{
		___Ldind_Ref_79 = value;
	}

	inline static int32_t get_offset_of_Stind_Ref_80() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_Ref_80)); }
	inline OpCode_t2832213683  get_Stind_Ref_80() const { return ___Stind_Ref_80; }
	inline OpCode_t2832213683 * get_address_of_Stind_Ref_80() { return &___Stind_Ref_80; }
	inline void set_Stind_Ref_80(OpCode_t2832213683  value)
	{
		___Stind_Ref_80 = value;
	}

	inline static int32_t get_offset_of_Stind_I1_81() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_I1_81)); }
	inline OpCode_t2832213683  get_Stind_I1_81() const { return ___Stind_I1_81; }
	inline OpCode_t2832213683 * get_address_of_Stind_I1_81() { return &___Stind_I1_81; }
	inline void set_Stind_I1_81(OpCode_t2832213683  value)
	{
		___Stind_I1_81 = value;
	}

	inline static int32_t get_offset_of_Stind_I2_82() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_I2_82)); }
	inline OpCode_t2832213683  get_Stind_I2_82() const { return ___Stind_I2_82; }
	inline OpCode_t2832213683 * get_address_of_Stind_I2_82() { return &___Stind_I2_82; }
	inline void set_Stind_I2_82(OpCode_t2832213683  value)
	{
		___Stind_I2_82 = value;
	}

	inline static int32_t get_offset_of_Stind_I4_83() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_I4_83)); }
	inline OpCode_t2832213683  get_Stind_I4_83() const { return ___Stind_I4_83; }
	inline OpCode_t2832213683 * get_address_of_Stind_I4_83() { return &___Stind_I4_83; }
	inline void set_Stind_I4_83(OpCode_t2832213683  value)
	{
		___Stind_I4_83 = value;
	}

	inline static int32_t get_offset_of_Stind_I8_84() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_I8_84)); }
	inline OpCode_t2832213683  get_Stind_I8_84() const { return ___Stind_I8_84; }
	inline OpCode_t2832213683 * get_address_of_Stind_I8_84() { return &___Stind_I8_84; }
	inline void set_Stind_I8_84(OpCode_t2832213683  value)
	{
		___Stind_I8_84 = value;
	}

	inline static int32_t get_offset_of_Stind_R4_85() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_R4_85)); }
	inline OpCode_t2832213683  get_Stind_R4_85() const { return ___Stind_R4_85; }
	inline OpCode_t2832213683 * get_address_of_Stind_R4_85() { return &___Stind_R4_85; }
	inline void set_Stind_R4_85(OpCode_t2832213683  value)
	{
		___Stind_R4_85 = value;
	}

	inline static int32_t get_offset_of_Stind_R8_86() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_R8_86)); }
	inline OpCode_t2832213683  get_Stind_R8_86() const { return ___Stind_R8_86; }
	inline OpCode_t2832213683 * get_address_of_Stind_R8_86() { return &___Stind_R8_86; }
	inline void set_Stind_R8_86(OpCode_t2832213683  value)
	{
		___Stind_R8_86 = value;
	}

	inline static int32_t get_offset_of_Add_87() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Add_87)); }
	inline OpCode_t2832213683  get_Add_87() const { return ___Add_87; }
	inline OpCode_t2832213683 * get_address_of_Add_87() { return &___Add_87; }
	inline void set_Add_87(OpCode_t2832213683  value)
	{
		___Add_87 = value;
	}

	inline static int32_t get_offset_of_Sub_88() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Sub_88)); }
	inline OpCode_t2832213683  get_Sub_88() const { return ___Sub_88; }
	inline OpCode_t2832213683 * get_address_of_Sub_88() { return &___Sub_88; }
	inline void set_Sub_88(OpCode_t2832213683  value)
	{
		___Sub_88 = value;
	}

	inline static int32_t get_offset_of_Mul_89() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Mul_89)); }
	inline OpCode_t2832213683  get_Mul_89() const { return ___Mul_89; }
	inline OpCode_t2832213683 * get_address_of_Mul_89() { return &___Mul_89; }
	inline void set_Mul_89(OpCode_t2832213683  value)
	{
		___Mul_89 = value;
	}

	inline static int32_t get_offset_of_Div_90() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Div_90)); }
	inline OpCode_t2832213683  get_Div_90() const { return ___Div_90; }
	inline OpCode_t2832213683 * get_address_of_Div_90() { return &___Div_90; }
	inline void set_Div_90(OpCode_t2832213683  value)
	{
		___Div_90 = value;
	}

	inline static int32_t get_offset_of_Div_Un_91() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Div_Un_91)); }
	inline OpCode_t2832213683  get_Div_Un_91() const { return ___Div_Un_91; }
	inline OpCode_t2832213683 * get_address_of_Div_Un_91() { return &___Div_Un_91; }
	inline void set_Div_Un_91(OpCode_t2832213683  value)
	{
		___Div_Un_91 = value;
	}

	inline static int32_t get_offset_of_Rem_92() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Rem_92)); }
	inline OpCode_t2832213683  get_Rem_92() const { return ___Rem_92; }
	inline OpCode_t2832213683 * get_address_of_Rem_92() { return &___Rem_92; }
	inline void set_Rem_92(OpCode_t2832213683  value)
	{
		___Rem_92 = value;
	}

	inline static int32_t get_offset_of_Rem_Un_93() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Rem_Un_93)); }
	inline OpCode_t2832213683  get_Rem_Un_93() const { return ___Rem_Un_93; }
	inline OpCode_t2832213683 * get_address_of_Rem_Un_93() { return &___Rem_Un_93; }
	inline void set_Rem_Un_93(OpCode_t2832213683  value)
	{
		___Rem_Un_93 = value;
	}

	inline static int32_t get_offset_of_And_94() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___And_94)); }
	inline OpCode_t2832213683  get_And_94() const { return ___And_94; }
	inline OpCode_t2832213683 * get_address_of_And_94() { return &___And_94; }
	inline void set_And_94(OpCode_t2832213683  value)
	{
		___And_94 = value;
	}

	inline static int32_t get_offset_of_Or_95() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Or_95)); }
	inline OpCode_t2832213683  get_Or_95() const { return ___Or_95; }
	inline OpCode_t2832213683 * get_address_of_Or_95() { return &___Or_95; }
	inline void set_Or_95(OpCode_t2832213683  value)
	{
		___Or_95 = value;
	}

	inline static int32_t get_offset_of_Xor_96() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Xor_96)); }
	inline OpCode_t2832213683  get_Xor_96() const { return ___Xor_96; }
	inline OpCode_t2832213683 * get_address_of_Xor_96() { return &___Xor_96; }
	inline void set_Xor_96(OpCode_t2832213683  value)
	{
		___Xor_96 = value;
	}

	inline static int32_t get_offset_of_Shl_97() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Shl_97)); }
	inline OpCode_t2832213683  get_Shl_97() const { return ___Shl_97; }
	inline OpCode_t2832213683 * get_address_of_Shl_97() { return &___Shl_97; }
	inline void set_Shl_97(OpCode_t2832213683  value)
	{
		___Shl_97 = value;
	}

	inline static int32_t get_offset_of_Shr_98() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Shr_98)); }
	inline OpCode_t2832213683  get_Shr_98() const { return ___Shr_98; }
	inline OpCode_t2832213683 * get_address_of_Shr_98() { return &___Shr_98; }
	inline void set_Shr_98(OpCode_t2832213683  value)
	{
		___Shr_98 = value;
	}

	inline static int32_t get_offset_of_Shr_Un_99() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Shr_Un_99)); }
	inline OpCode_t2832213683  get_Shr_Un_99() const { return ___Shr_Un_99; }
	inline OpCode_t2832213683 * get_address_of_Shr_Un_99() { return &___Shr_Un_99; }
	inline void set_Shr_Un_99(OpCode_t2832213683  value)
	{
		___Shr_Un_99 = value;
	}

	inline static int32_t get_offset_of_Neg_100() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Neg_100)); }
	inline OpCode_t2832213683  get_Neg_100() const { return ___Neg_100; }
	inline OpCode_t2832213683 * get_address_of_Neg_100() { return &___Neg_100; }
	inline void set_Neg_100(OpCode_t2832213683  value)
	{
		___Neg_100 = value;
	}

	inline static int32_t get_offset_of_Not_101() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Not_101)); }
	inline OpCode_t2832213683  get_Not_101() const { return ___Not_101; }
	inline OpCode_t2832213683 * get_address_of_Not_101() { return &___Not_101; }
	inline void set_Not_101(OpCode_t2832213683  value)
	{
		___Not_101 = value;
	}

	inline static int32_t get_offset_of_Conv_I1_102() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_I1_102)); }
	inline OpCode_t2832213683  get_Conv_I1_102() const { return ___Conv_I1_102; }
	inline OpCode_t2832213683 * get_address_of_Conv_I1_102() { return &___Conv_I1_102; }
	inline void set_Conv_I1_102(OpCode_t2832213683  value)
	{
		___Conv_I1_102 = value;
	}

	inline static int32_t get_offset_of_Conv_I2_103() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_I2_103)); }
	inline OpCode_t2832213683  get_Conv_I2_103() const { return ___Conv_I2_103; }
	inline OpCode_t2832213683 * get_address_of_Conv_I2_103() { return &___Conv_I2_103; }
	inline void set_Conv_I2_103(OpCode_t2832213683  value)
	{
		___Conv_I2_103 = value;
	}

	inline static int32_t get_offset_of_Conv_I4_104() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_I4_104)); }
	inline OpCode_t2832213683  get_Conv_I4_104() const { return ___Conv_I4_104; }
	inline OpCode_t2832213683 * get_address_of_Conv_I4_104() { return &___Conv_I4_104; }
	inline void set_Conv_I4_104(OpCode_t2832213683  value)
	{
		___Conv_I4_104 = value;
	}

	inline static int32_t get_offset_of_Conv_I8_105() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_I8_105)); }
	inline OpCode_t2832213683  get_Conv_I8_105() const { return ___Conv_I8_105; }
	inline OpCode_t2832213683 * get_address_of_Conv_I8_105() { return &___Conv_I8_105; }
	inline void set_Conv_I8_105(OpCode_t2832213683  value)
	{
		___Conv_I8_105 = value;
	}

	inline static int32_t get_offset_of_Conv_R4_106() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_R4_106)); }
	inline OpCode_t2832213683  get_Conv_R4_106() const { return ___Conv_R4_106; }
	inline OpCode_t2832213683 * get_address_of_Conv_R4_106() { return &___Conv_R4_106; }
	inline void set_Conv_R4_106(OpCode_t2832213683  value)
	{
		___Conv_R4_106 = value;
	}

	inline static int32_t get_offset_of_Conv_R8_107() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_R8_107)); }
	inline OpCode_t2832213683  get_Conv_R8_107() const { return ___Conv_R8_107; }
	inline OpCode_t2832213683 * get_address_of_Conv_R8_107() { return &___Conv_R8_107; }
	inline void set_Conv_R8_107(OpCode_t2832213683  value)
	{
		___Conv_R8_107 = value;
	}

	inline static int32_t get_offset_of_Conv_U4_108() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_U4_108)); }
	inline OpCode_t2832213683  get_Conv_U4_108() const { return ___Conv_U4_108; }
	inline OpCode_t2832213683 * get_address_of_Conv_U4_108() { return &___Conv_U4_108; }
	inline void set_Conv_U4_108(OpCode_t2832213683  value)
	{
		___Conv_U4_108 = value;
	}

	inline static int32_t get_offset_of_Conv_U8_109() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_U8_109)); }
	inline OpCode_t2832213683  get_Conv_U8_109() const { return ___Conv_U8_109; }
	inline OpCode_t2832213683 * get_address_of_Conv_U8_109() { return &___Conv_U8_109; }
	inline void set_Conv_U8_109(OpCode_t2832213683  value)
	{
		___Conv_U8_109 = value;
	}

	inline static int32_t get_offset_of_Callvirt_110() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Callvirt_110)); }
	inline OpCode_t2832213683  get_Callvirt_110() const { return ___Callvirt_110; }
	inline OpCode_t2832213683 * get_address_of_Callvirt_110() { return &___Callvirt_110; }
	inline void set_Callvirt_110(OpCode_t2832213683  value)
	{
		___Callvirt_110 = value;
	}

	inline static int32_t get_offset_of_Cpobj_111() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Cpobj_111)); }
	inline OpCode_t2832213683  get_Cpobj_111() const { return ___Cpobj_111; }
	inline OpCode_t2832213683 * get_address_of_Cpobj_111() { return &___Cpobj_111; }
	inline void set_Cpobj_111(OpCode_t2832213683  value)
	{
		___Cpobj_111 = value;
	}

	inline static int32_t get_offset_of_Ldobj_112() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldobj_112)); }
	inline OpCode_t2832213683  get_Ldobj_112() const { return ___Ldobj_112; }
	inline OpCode_t2832213683 * get_address_of_Ldobj_112() { return &___Ldobj_112; }
	inline void set_Ldobj_112(OpCode_t2832213683  value)
	{
		___Ldobj_112 = value;
	}

	inline static int32_t get_offset_of_Ldstr_113() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldstr_113)); }
	inline OpCode_t2832213683  get_Ldstr_113() const { return ___Ldstr_113; }
	inline OpCode_t2832213683 * get_address_of_Ldstr_113() { return &___Ldstr_113; }
	inline void set_Ldstr_113(OpCode_t2832213683  value)
	{
		___Ldstr_113 = value;
	}

	inline static int32_t get_offset_of_Newobj_114() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Newobj_114)); }
	inline OpCode_t2832213683  get_Newobj_114() const { return ___Newobj_114; }
	inline OpCode_t2832213683 * get_address_of_Newobj_114() { return &___Newobj_114; }
	inline void set_Newobj_114(OpCode_t2832213683  value)
	{
		___Newobj_114 = value;
	}

	inline static int32_t get_offset_of_Castclass_115() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Castclass_115)); }
	inline OpCode_t2832213683  get_Castclass_115() const { return ___Castclass_115; }
	inline OpCode_t2832213683 * get_address_of_Castclass_115() { return &___Castclass_115; }
	inline void set_Castclass_115(OpCode_t2832213683  value)
	{
		___Castclass_115 = value;
	}

	inline static int32_t get_offset_of_Isinst_116() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Isinst_116)); }
	inline OpCode_t2832213683  get_Isinst_116() const { return ___Isinst_116; }
	inline OpCode_t2832213683 * get_address_of_Isinst_116() { return &___Isinst_116; }
	inline void set_Isinst_116(OpCode_t2832213683  value)
	{
		___Isinst_116 = value;
	}

	inline static int32_t get_offset_of_Conv_R_Un_117() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_R_Un_117)); }
	inline OpCode_t2832213683  get_Conv_R_Un_117() const { return ___Conv_R_Un_117; }
	inline OpCode_t2832213683 * get_address_of_Conv_R_Un_117() { return &___Conv_R_Un_117; }
	inline void set_Conv_R_Un_117(OpCode_t2832213683  value)
	{
		___Conv_R_Un_117 = value;
	}

	inline static int32_t get_offset_of_Unbox_118() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Unbox_118)); }
	inline OpCode_t2832213683  get_Unbox_118() const { return ___Unbox_118; }
	inline OpCode_t2832213683 * get_address_of_Unbox_118() { return &___Unbox_118; }
	inline void set_Unbox_118(OpCode_t2832213683  value)
	{
		___Unbox_118 = value;
	}

	inline static int32_t get_offset_of_Throw_119() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Throw_119)); }
	inline OpCode_t2832213683  get_Throw_119() const { return ___Throw_119; }
	inline OpCode_t2832213683 * get_address_of_Throw_119() { return &___Throw_119; }
	inline void set_Throw_119(OpCode_t2832213683  value)
	{
		___Throw_119 = value;
	}

	inline static int32_t get_offset_of_Ldfld_120() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldfld_120)); }
	inline OpCode_t2832213683  get_Ldfld_120() const { return ___Ldfld_120; }
	inline OpCode_t2832213683 * get_address_of_Ldfld_120() { return &___Ldfld_120; }
	inline void set_Ldfld_120(OpCode_t2832213683  value)
	{
		___Ldfld_120 = value;
	}

	inline static int32_t get_offset_of_Ldflda_121() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldflda_121)); }
	inline OpCode_t2832213683  get_Ldflda_121() const { return ___Ldflda_121; }
	inline OpCode_t2832213683 * get_address_of_Ldflda_121() { return &___Ldflda_121; }
	inline void set_Ldflda_121(OpCode_t2832213683  value)
	{
		___Ldflda_121 = value;
	}

	inline static int32_t get_offset_of_Stfld_122() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stfld_122)); }
	inline OpCode_t2832213683  get_Stfld_122() const { return ___Stfld_122; }
	inline OpCode_t2832213683 * get_address_of_Stfld_122() { return &___Stfld_122; }
	inline void set_Stfld_122(OpCode_t2832213683  value)
	{
		___Stfld_122 = value;
	}

	inline static int32_t get_offset_of_Ldsfld_123() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldsfld_123)); }
	inline OpCode_t2832213683  get_Ldsfld_123() const { return ___Ldsfld_123; }
	inline OpCode_t2832213683 * get_address_of_Ldsfld_123() { return &___Ldsfld_123; }
	inline void set_Ldsfld_123(OpCode_t2832213683  value)
	{
		___Ldsfld_123 = value;
	}

	inline static int32_t get_offset_of_Ldsflda_124() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldsflda_124)); }
	inline OpCode_t2832213683  get_Ldsflda_124() const { return ___Ldsflda_124; }
	inline OpCode_t2832213683 * get_address_of_Ldsflda_124() { return &___Ldsflda_124; }
	inline void set_Ldsflda_124(OpCode_t2832213683  value)
	{
		___Ldsflda_124 = value;
	}

	inline static int32_t get_offset_of_Stsfld_125() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stsfld_125)); }
	inline OpCode_t2832213683  get_Stsfld_125() const { return ___Stsfld_125; }
	inline OpCode_t2832213683 * get_address_of_Stsfld_125() { return &___Stsfld_125; }
	inline void set_Stsfld_125(OpCode_t2832213683  value)
	{
		___Stsfld_125 = value;
	}

	inline static int32_t get_offset_of_Stobj_126() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stobj_126)); }
	inline OpCode_t2832213683  get_Stobj_126() const { return ___Stobj_126; }
	inline OpCode_t2832213683 * get_address_of_Stobj_126() { return &___Stobj_126; }
	inline void set_Stobj_126(OpCode_t2832213683  value)
	{
		___Stobj_126 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_Un_127() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I1_Un_127)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I1_Un_127() const { return ___Conv_Ovf_I1_Un_127; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I1_Un_127() { return &___Conv_Ovf_I1_Un_127; }
	inline void set_Conv_Ovf_I1_Un_127(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I1_Un_127 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_Un_128() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I2_Un_128)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I2_Un_128() const { return ___Conv_Ovf_I2_Un_128; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I2_Un_128() { return &___Conv_Ovf_I2_Un_128; }
	inline void set_Conv_Ovf_I2_Un_128(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I2_Un_128 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_Un_129() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I4_Un_129)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I4_Un_129() const { return ___Conv_Ovf_I4_Un_129; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I4_Un_129() { return &___Conv_Ovf_I4_Un_129; }
	inline void set_Conv_Ovf_I4_Un_129(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I4_Un_129 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_Un_130() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I8_Un_130)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I8_Un_130() const { return ___Conv_Ovf_I8_Un_130; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I8_Un_130() { return &___Conv_Ovf_I8_Un_130; }
	inline void set_Conv_Ovf_I8_Un_130(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I8_Un_130 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_Un_131() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U1_Un_131)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U1_Un_131() const { return ___Conv_Ovf_U1_Un_131; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U1_Un_131() { return &___Conv_Ovf_U1_Un_131; }
	inline void set_Conv_Ovf_U1_Un_131(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U1_Un_131 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_Un_132() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U2_Un_132)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U2_Un_132() const { return ___Conv_Ovf_U2_Un_132; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U2_Un_132() { return &___Conv_Ovf_U2_Un_132; }
	inline void set_Conv_Ovf_U2_Un_132(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U2_Un_132 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_Un_133() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U4_Un_133)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U4_Un_133() const { return ___Conv_Ovf_U4_Un_133; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U4_Un_133() { return &___Conv_Ovf_U4_Un_133; }
	inline void set_Conv_Ovf_U4_Un_133(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U4_Un_133 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_Un_134() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U8_Un_134)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U8_Un_134() const { return ___Conv_Ovf_U8_Un_134; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U8_Un_134() { return &___Conv_Ovf_U8_Un_134; }
	inline void set_Conv_Ovf_U8_Un_134(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U8_Un_134 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_Un_135() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I_Un_135)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I_Un_135() const { return ___Conv_Ovf_I_Un_135; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I_Un_135() { return &___Conv_Ovf_I_Un_135; }
	inline void set_Conv_Ovf_I_Un_135(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I_Un_135 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_Un_136() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U_Un_136)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U_Un_136() const { return ___Conv_Ovf_U_Un_136; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U_Un_136() { return &___Conv_Ovf_U_Un_136; }
	inline void set_Conv_Ovf_U_Un_136(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U_Un_136 = value;
	}

	inline static int32_t get_offset_of_Box_137() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Box_137)); }
	inline OpCode_t2832213683  get_Box_137() const { return ___Box_137; }
	inline OpCode_t2832213683 * get_address_of_Box_137() { return &___Box_137; }
	inline void set_Box_137(OpCode_t2832213683  value)
	{
		___Box_137 = value;
	}

	inline static int32_t get_offset_of_Newarr_138() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Newarr_138)); }
	inline OpCode_t2832213683  get_Newarr_138() const { return ___Newarr_138; }
	inline OpCode_t2832213683 * get_address_of_Newarr_138() { return &___Newarr_138; }
	inline void set_Newarr_138(OpCode_t2832213683  value)
	{
		___Newarr_138 = value;
	}

	inline static int32_t get_offset_of_Ldlen_139() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldlen_139)); }
	inline OpCode_t2832213683  get_Ldlen_139() const { return ___Ldlen_139; }
	inline OpCode_t2832213683 * get_address_of_Ldlen_139() { return &___Ldlen_139; }
	inline void set_Ldlen_139(OpCode_t2832213683  value)
	{
		___Ldlen_139 = value;
	}

	inline static int32_t get_offset_of_Ldelema_140() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelema_140)); }
	inline OpCode_t2832213683  get_Ldelema_140() const { return ___Ldelema_140; }
	inline OpCode_t2832213683 * get_address_of_Ldelema_140() { return &___Ldelema_140; }
	inline void set_Ldelema_140(OpCode_t2832213683  value)
	{
		___Ldelema_140 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I1_141() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_I1_141)); }
	inline OpCode_t2832213683  get_Ldelem_I1_141() const { return ___Ldelem_I1_141; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_I1_141() { return &___Ldelem_I1_141; }
	inline void set_Ldelem_I1_141(OpCode_t2832213683  value)
	{
		___Ldelem_I1_141 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U1_142() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_U1_142)); }
	inline OpCode_t2832213683  get_Ldelem_U1_142() const { return ___Ldelem_U1_142; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_U1_142() { return &___Ldelem_U1_142; }
	inline void set_Ldelem_U1_142(OpCode_t2832213683  value)
	{
		___Ldelem_U1_142 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I2_143() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_I2_143)); }
	inline OpCode_t2832213683  get_Ldelem_I2_143() const { return ___Ldelem_I2_143; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_I2_143() { return &___Ldelem_I2_143; }
	inline void set_Ldelem_I2_143(OpCode_t2832213683  value)
	{
		___Ldelem_I2_143 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U2_144() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_U2_144)); }
	inline OpCode_t2832213683  get_Ldelem_U2_144() const { return ___Ldelem_U2_144; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_U2_144() { return &___Ldelem_U2_144; }
	inline void set_Ldelem_U2_144(OpCode_t2832213683  value)
	{
		___Ldelem_U2_144 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I4_145() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_I4_145)); }
	inline OpCode_t2832213683  get_Ldelem_I4_145() const { return ___Ldelem_I4_145; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_I4_145() { return &___Ldelem_I4_145; }
	inline void set_Ldelem_I4_145(OpCode_t2832213683  value)
	{
		___Ldelem_I4_145 = value;
	}

	inline static int32_t get_offset_of_Ldelem_U4_146() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_U4_146)); }
	inline OpCode_t2832213683  get_Ldelem_U4_146() const { return ___Ldelem_U4_146; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_U4_146() { return &___Ldelem_U4_146; }
	inline void set_Ldelem_U4_146(OpCode_t2832213683  value)
	{
		___Ldelem_U4_146 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I8_147() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_I8_147)); }
	inline OpCode_t2832213683  get_Ldelem_I8_147() const { return ___Ldelem_I8_147; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_I8_147() { return &___Ldelem_I8_147; }
	inline void set_Ldelem_I8_147(OpCode_t2832213683  value)
	{
		___Ldelem_I8_147 = value;
	}

	inline static int32_t get_offset_of_Ldelem_I_148() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_I_148)); }
	inline OpCode_t2832213683  get_Ldelem_I_148() const { return ___Ldelem_I_148; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_I_148() { return &___Ldelem_I_148; }
	inline void set_Ldelem_I_148(OpCode_t2832213683  value)
	{
		___Ldelem_I_148 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R4_149() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_R4_149)); }
	inline OpCode_t2832213683  get_Ldelem_R4_149() const { return ___Ldelem_R4_149; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_R4_149() { return &___Ldelem_R4_149; }
	inline void set_Ldelem_R4_149(OpCode_t2832213683  value)
	{
		___Ldelem_R4_149 = value;
	}

	inline static int32_t get_offset_of_Ldelem_R8_150() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_R8_150)); }
	inline OpCode_t2832213683  get_Ldelem_R8_150() const { return ___Ldelem_R8_150; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_R8_150() { return &___Ldelem_R8_150; }
	inline void set_Ldelem_R8_150(OpCode_t2832213683  value)
	{
		___Ldelem_R8_150 = value;
	}

	inline static int32_t get_offset_of_Ldelem_Ref_151() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_Ref_151)); }
	inline OpCode_t2832213683  get_Ldelem_Ref_151() const { return ___Ldelem_Ref_151; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_Ref_151() { return &___Ldelem_Ref_151; }
	inline void set_Ldelem_Ref_151(OpCode_t2832213683  value)
	{
		___Ldelem_Ref_151 = value;
	}

	inline static int32_t get_offset_of_Stelem_I_152() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_I_152)); }
	inline OpCode_t2832213683  get_Stelem_I_152() const { return ___Stelem_I_152; }
	inline OpCode_t2832213683 * get_address_of_Stelem_I_152() { return &___Stelem_I_152; }
	inline void set_Stelem_I_152(OpCode_t2832213683  value)
	{
		___Stelem_I_152 = value;
	}

	inline static int32_t get_offset_of_Stelem_I1_153() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_I1_153)); }
	inline OpCode_t2832213683  get_Stelem_I1_153() const { return ___Stelem_I1_153; }
	inline OpCode_t2832213683 * get_address_of_Stelem_I1_153() { return &___Stelem_I1_153; }
	inline void set_Stelem_I1_153(OpCode_t2832213683  value)
	{
		___Stelem_I1_153 = value;
	}

	inline static int32_t get_offset_of_Stelem_I2_154() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_I2_154)); }
	inline OpCode_t2832213683  get_Stelem_I2_154() const { return ___Stelem_I2_154; }
	inline OpCode_t2832213683 * get_address_of_Stelem_I2_154() { return &___Stelem_I2_154; }
	inline void set_Stelem_I2_154(OpCode_t2832213683  value)
	{
		___Stelem_I2_154 = value;
	}

	inline static int32_t get_offset_of_Stelem_I4_155() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_I4_155)); }
	inline OpCode_t2832213683  get_Stelem_I4_155() const { return ___Stelem_I4_155; }
	inline OpCode_t2832213683 * get_address_of_Stelem_I4_155() { return &___Stelem_I4_155; }
	inline void set_Stelem_I4_155(OpCode_t2832213683  value)
	{
		___Stelem_I4_155 = value;
	}

	inline static int32_t get_offset_of_Stelem_I8_156() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_I8_156)); }
	inline OpCode_t2832213683  get_Stelem_I8_156() const { return ___Stelem_I8_156; }
	inline OpCode_t2832213683 * get_address_of_Stelem_I8_156() { return &___Stelem_I8_156; }
	inline void set_Stelem_I8_156(OpCode_t2832213683  value)
	{
		___Stelem_I8_156 = value;
	}

	inline static int32_t get_offset_of_Stelem_R4_157() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_R4_157)); }
	inline OpCode_t2832213683  get_Stelem_R4_157() const { return ___Stelem_R4_157; }
	inline OpCode_t2832213683 * get_address_of_Stelem_R4_157() { return &___Stelem_R4_157; }
	inline void set_Stelem_R4_157(OpCode_t2832213683  value)
	{
		___Stelem_R4_157 = value;
	}

	inline static int32_t get_offset_of_Stelem_R8_158() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_R8_158)); }
	inline OpCode_t2832213683  get_Stelem_R8_158() const { return ___Stelem_R8_158; }
	inline OpCode_t2832213683 * get_address_of_Stelem_R8_158() { return &___Stelem_R8_158; }
	inline void set_Stelem_R8_158(OpCode_t2832213683  value)
	{
		___Stelem_R8_158 = value;
	}

	inline static int32_t get_offset_of_Stelem_Ref_159() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_Ref_159)); }
	inline OpCode_t2832213683  get_Stelem_Ref_159() const { return ___Stelem_Ref_159; }
	inline OpCode_t2832213683 * get_address_of_Stelem_Ref_159() { return &___Stelem_Ref_159; }
	inline void set_Stelem_Ref_159(OpCode_t2832213683  value)
	{
		___Stelem_Ref_159 = value;
	}

	inline static int32_t get_offset_of_Ldelem_160() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldelem_160)); }
	inline OpCode_t2832213683  get_Ldelem_160() const { return ___Ldelem_160; }
	inline OpCode_t2832213683 * get_address_of_Ldelem_160() { return &___Ldelem_160; }
	inline void set_Ldelem_160(OpCode_t2832213683  value)
	{
		___Ldelem_160 = value;
	}

	inline static int32_t get_offset_of_Stelem_161() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stelem_161)); }
	inline OpCode_t2832213683  get_Stelem_161() const { return ___Stelem_161; }
	inline OpCode_t2832213683 * get_address_of_Stelem_161() { return &___Stelem_161; }
	inline void set_Stelem_161(OpCode_t2832213683  value)
	{
		___Stelem_161 = value;
	}

	inline static int32_t get_offset_of_Unbox_Any_162() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Unbox_Any_162)); }
	inline OpCode_t2832213683  get_Unbox_Any_162() const { return ___Unbox_Any_162; }
	inline OpCode_t2832213683 * get_address_of_Unbox_Any_162() { return &___Unbox_Any_162; }
	inline void set_Unbox_Any_162(OpCode_t2832213683  value)
	{
		___Unbox_Any_162 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I1_163() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I1_163)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I1_163() const { return ___Conv_Ovf_I1_163; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I1_163() { return &___Conv_Ovf_I1_163; }
	inline void set_Conv_Ovf_I1_163(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I1_163 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U1_164() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U1_164)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U1_164() const { return ___Conv_Ovf_U1_164; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U1_164() { return &___Conv_Ovf_U1_164; }
	inline void set_Conv_Ovf_U1_164(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U1_164 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I2_165() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I2_165)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I2_165() const { return ___Conv_Ovf_I2_165; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I2_165() { return &___Conv_Ovf_I2_165; }
	inline void set_Conv_Ovf_I2_165(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I2_165 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U2_166() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U2_166)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U2_166() const { return ___Conv_Ovf_U2_166; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U2_166() { return &___Conv_Ovf_U2_166; }
	inline void set_Conv_Ovf_U2_166(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U2_166 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I4_167() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I4_167)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I4_167() const { return ___Conv_Ovf_I4_167; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I4_167() { return &___Conv_Ovf_I4_167; }
	inline void set_Conv_Ovf_I4_167(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I4_167 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U4_168() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U4_168)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U4_168() const { return ___Conv_Ovf_U4_168; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U4_168() { return &___Conv_Ovf_U4_168; }
	inline void set_Conv_Ovf_U4_168(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U4_168 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I8_169() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I8_169)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I8_169() const { return ___Conv_Ovf_I8_169; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I8_169() { return &___Conv_Ovf_I8_169; }
	inline void set_Conv_Ovf_I8_169(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I8_169 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U8_170() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U8_170)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U8_170() const { return ___Conv_Ovf_U8_170; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U8_170() { return &___Conv_Ovf_U8_170; }
	inline void set_Conv_Ovf_U8_170(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U8_170 = value;
	}

	inline static int32_t get_offset_of_Refanyval_171() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Refanyval_171)); }
	inline OpCode_t2832213683  get_Refanyval_171() const { return ___Refanyval_171; }
	inline OpCode_t2832213683 * get_address_of_Refanyval_171() { return &___Refanyval_171; }
	inline void set_Refanyval_171(OpCode_t2832213683  value)
	{
		___Refanyval_171 = value;
	}

	inline static int32_t get_offset_of_Ckfinite_172() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ckfinite_172)); }
	inline OpCode_t2832213683  get_Ckfinite_172() const { return ___Ckfinite_172; }
	inline OpCode_t2832213683 * get_address_of_Ckfinite_172() { return &___Ckfinite_172; }
	inline void set_Ckfinite_172(OpCode_t2832213683  value)
	{
		___Ckfinite_172 = value;
	}

	inline static int32_t get_offset_of_Mkrefany_173() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Mkrefany_173)); }
	inline OpCode_t2832213683  get_Mkrefany_173() const { return ___Mkrefany_173; }
	inline OpCode_t2832213683 * get_address_of_Mkrefany_173() { return &___Mkrefany_173; }
	inline void set_Mkrefany_173(OpCode_t2832213683  value)
	{
		___Mkrefany_173 = value;
	}

	inline static int32_t get_offset_of_Ldtoken_174() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldtoken_174)); }
	inline OpCode_t2832213683  get_Ldtoken_174() const { return ___Ldtoken_174; }
	inline OpCode_t2832213683 * get_address_of_Ldtoken_174() { return &___Ldtoken_174; }
	inline void set_Ldtoken_174(OpCode_t2832213683  value)
	{
		___Ldtoken_174 = value;
	}

	inline static int32_t get_offset_of_Conv_U2_175() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_U2_175)); }
	inline OpCode_t2832213683  get_Conv_U2_175() const { return ___Conv_U2_175; }
	inline OpCode_t2832213683 * get_address_of_Conv_U2_175() { return &___Conv_U2_175; }
	inline void set_Conv_U2_175(OpCode_t2832213683  value)
	{
		___Conv_U2_175 = value;
	}

	inline static int32_t get_offset_of_Conv_U1_176() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_U1_176)); }
	inline OpCode_t2832213683  get_Conv_U1_176() const { return ___Conv_U1_176; }
	inline OpCode_t2832213683 * get_address_of_Conv_U1_176() { return &___Conv_U1_176; }
	inline void set_Conv_U1_176(OpCode_t2832213683  value)
	{
		___Conv_U1_176 = value;
	}

	inline static int32_t get_offset_of_Conv_I_177() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_I_177)); }
	inline OpCode_t2832213683  get_Conv_I_177() const { return ___Conv_I_177; }
	inline OpCode_t2832213683 * get_address_of_Conv_I_177() { return &___Conv_I_177; }
	inline void set_Conv_I_177(OpCode_t2832213683  value)
	{
		___Conv_I_177 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_I_178() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_I_178)); }
	inline OpCode_t2832213683  get_Conv_Ovf_I_178() const { return ___Conv_Ovf_I_178; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_I_178() { return &___Conv_Ovf_I_178; }
	inline void set_Conv_Ovf_I_178(OpCode_t2832213683  value)
	{
		___Conv_Ovf_I_178 = value;
	}

	inline static int32_t get_offset_of_Conv_Ovf_U_179() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_Ovf_U_179)); }
	inline OpCode_t2832213683  get_Conv_Ovf_U_179() const { return ___Conv_Ovf_U_179; }
	inline OpCode_t2832213683 * get_address_of_Conv_Ovf_U_179() { return &___Conv_Ovf_U_179; }
	inline void set_Conv_Ovf_U_179(OpCode_t2832213683  value)
	{
		___Conv_Ovf_U_179 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_180() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Add_Ovf_180)); }
	inline OpCode_t2832213683  get_Add_Ovf_180() const { return ___Add_Ovf_180; }
	inline OpCode_t2832213683 * get_address_of_Add_Ovf_180() { return &___Add_Ovf_180; }
	inline void set_Add_Ovf_180(OpCode_t2832213683  value)
	{
		___Add_Ovf_180 = value;
	}

	inline static int32_t get_offset_of_Add_Ovf_Un_181() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Add_Ovf_Un_181)); }
	inline OpCode_t2832213683  get_Add_Ovf_Un_181() const { return ___Add_Ovf_Un_181; }
	inline OpCode_t2832213683 * get_address_of_Add_Ovf_Un_181() { return &___Add_Ovf_Un_181; }
	inline void set_Add_Ovf_Un_181(OpCode_t2832213683  value)
	{
		___Add_Ovf_Un_181 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_182() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Mul_Ovf_182)); }
	inline OpCode_t2832213683  get_Mul_Ovf_182() const { return ___Mul_Ovf_182; }
	inline OpCode_t2832213683 * get_address_of_Mul_Ovf_182() { return &___Mul_Ovf_182; }
	inline void set_Mul_Ovf_182(OpCode_t2832213683  value)
	{
		___Mul_Ovf_182 = value;
	}

	inline static int32_t get_offset_of_Mul_Ovf_Un_183() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Mul_Ovf_Un_183)); }
	inline OpCode_t2832213683  get_Mul_Ovf_Un_183() const { return ___Mul_Ovf_Un_183; }
	inline OpCode_t2832213683 * get_address_of_Mul_Ovf_Un_183() { return &___Mul_Ovf_Un_183; }
	inline void set_Mul_Ovf_Un_183(OpCode_t2832213683  value)
	{
		___Mul_Ovf_Un_183 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_184() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Sub_Ovf_184)); }
	inline OpCode_t2832213683  get_Sub_Ovf_184() const { return ___Sub_Ovf_184; }
	inline OpCode_t2832213683 * get_address_of_Sub_Ovf_184() { return &___Sub_Ovf_184; }
	inline void set_Sub_Ovf_184(OpCode_t2832213683  value)
	{
		___Sub_Ovf_184 = value;
	}

	inline static int32_t get_offset_of_Sub_Ovf_Un_185() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Sub_Ovf_Un_185)); }
	inline OpCode_t2832213683  get_Sub_Ovf_Un_185() const { return ___Sub_Ovf_Un_185; }
	inline OpCode_t2832213683 * get_address_of_Sub_Ovf_Un_185() { return &___Sub_Ovf_Un_185; }
	inline void set_Sub_Ovf_Un_185(OpCode_t2832213683  value)
	{
		___Sub_Ovf_Un_185 = value;
	}

	inline static int32_t get_offset_of_Endfinally_186() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Endfinally_186)); }
	inline OpCode_t2832213683  get_Endfinally_186() const { return ___Endfinally_186; }
	inline OpCode_t2832213683 * get_address_of_Endfinally_186() { return &___Endfinally_186; }
	inline void set_Endfinally_186(OpCode_t2832213683  value)
	{
		___Endfinally_186 = value;
	}

	inline static int32_t get_offset_of_Leave_187() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Leave_187)); }
	inline OpCode_t2832213683  get_Leave_187() const { return ___Leave_187; }
	inline OpCode_t2832213683 * get_address_of_Leave_187() { return &___Leave_187; }
	inline void set_Leave_187(OpCode_t2832213683  value)
	{
		___Leave_187 = value;
	}

	inline static int32_t get_offset_of_Leave_S_188() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Leave_S_188)); }
	inline OpCode_t2832213683  get_Leave_S_188() const { return ___Leave_S_188; }
	inline OpCode_t2832213683 * get_address_of_Leave_S_188() { return &___Leave_S_188; }
	inline void set_Leave_S_188(OpCode_t2832213683  value)
	{
		___Leave_S_188 = value;
	}

	inline static int32_t get_offset_of_Stind_I_189() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stind_I_189)); }
	inline OpCode_t2832213683  get_Stind_I_189() const { return ___Stind_I_189; }
	inline OpCode_t2832213683 * get_address_of_Stind_I_189() { return &___Stind_I_189; }
	inline void set_Stind_I_189(OpCode_t2832213683  value)
	{
		___Stind_I_189 = value;
	}

	inline static int32_t get_offset_of_Conv_U_190() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Conv_U_190)); }
	inline OpCode_t2832213683  get_Conv_U_190() const { return ___Conv_U_190; }
	inline OpCode_t2832213683 * get_address_of_Conv_U_190() { return &___Conv_U_190; }
	inline void set_Conv_U_190(OpCode_t2832213683  value)
	{
		___Conv_U_190 = value;
	}

	inline static int32_t get_offset_of_Prefix7_191() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix7_191)); }
	inline OpCode_t2832213683  get_Prefix7_191() const { return ___Prefix7_191; }
	inline OpCode_t2832213683 * get_address_of_Prefix7_191() { return &___Prefix7_191; }
	inline void set_Prefix7_191(OpCode_t2832213683  value)
	{
		___Prefix7_191 = value;
	}

	inline static int32_t get_offset_of_Prefix6_192() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix6_192)); }
	inline OpCode_t2832213683  get_Prefix6_192() const { return ___Prefix6_192; }
	inline OpCode_t2832213683 * get_address_of_Prefix6_192() { return &___Prefix6_192; }
	inline void set_Prefix6_192(OpCode_t2832213683  value)
	{
		___Prefix6_192 = value;
	}

	inline static int32_t get_offset_of_Prefix5_193() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix5_193)); }
	inline OpCode_t2832213683  get_Prefix5_193() const { return ___Prefix5_193; }
	inline OpCode_t2832213683 * get_address_of_Prefix5_193() { return &___Prefix5_193; }
	inline void set_Prefix5_193(OpCode_t2832213683  value)
	{
		___Prefix5_193 = value;
	}

	inline static int32_t get_offset_of_Prefix4_194() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix4_194)); }
	inline OpCode_t2832213683  get_Prefix4_194() const { return ___Prefix4_194; }
	inline OpCode_t2832213683 * get_address_of_Prefix4_194() { return &___Prefix4_194; }
	inline void set_Prefix4_194(OpCode_t2832213683  value)
	{
		___Prefix4_194 = value;
	}

	inline static int32_t get_offset_of_Prefix3_195() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix3_195)); }
	inline OpCode_t2832213683  get_Prefix3_195() const { return ___Prefix3_195; }
	inline OpCode_t2832213683 * get_address_of_Prefix3_195() { return &___Prefix3_195; }
	inline void set_Prefix3_195(OpCode_t2832213683  value)
	{
		___Prefix3_195 = value;
	}

	inline static int32_t get_offset_of_Prefix2_196() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix2_196)); }
	inline OpCode_t2832213683  get_Prefix2_196() const { return ___Prefix2_196; }
	inline OpCode_t2832213683 * get_address_of_Prefix2_196() { return &___Prefix2_196; }
	inline void set_Prefix2_196(OpCode_t2832213683  value)
	{
		___Prefix2_196 = value;
	}

	inline static int32_t get_offset_of_Prefix1_197() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefix1_197)); }
	inline OpCode_t2832213683  get_Prefix1_197() const { return ___Prefix1_197; }
	inline OpCode_t2832213683 * get_address_of_Prefix1_197() { return &___Prefix1_197; }
	inline void set_Prefix1_197(OpCode_t2832213683  value)
	{
		___Prefix1_197 = value;
	}

	inline static int32_t get_offset_of_Prefixref_198() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Prefixref_198)); }
	inline OpCode_t2832213683  get_Prefixref_198() const { return ___Prefixref_198; }
	inline OpCode_t2832213683 * get_address_of_Prefixref_198() { return &___Prefixref_198; }
	inline void set_Prefixref_198(OpCode_t2832213683  value)
	{
		___Prefixref_198 = value;
	}

	inline static int32_t get_offset_of_Arglist_199() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Arglist_199)); }
	inline OpCode_t2832213683  get_Arglist_199() const { return ___Arglist_199; }
	inline OpCode_t2832213683 * get_address_of_Arglist_199() { return &___Arglist_199; }
	inline void set_Arglist_199(OpCode_t2832213683  value)
	{
		___Arglist_199 = value;
	}

	inline static int32_t get_offset_of_Ceq_200() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ceq_200)); }
	inline OpCode_t2832213683  get_Ceq_200() const { return ___Ceq_200; }
	inline OpCode_t2832213683 * get_address_of_Ceq_200() { return &___Ceq_200; }
	inline void set_Ceq_200(OpCode_t2832213683  value)
	{
		___Ceq_200 = value;
	}

	inline static int32_t get_offset_of_Cgt_201() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Cgt_201)); }
	inline OpCode_t2832213683  get_Cgt_201() const { return ___Cgt_201; }
	inline OpCode_t2832213683 * get_address_of_Cgt_201() { return &___Cgt_201; }
	inline void set_Cgt_201(OpCode_t2832213683  value)
	{
		___Cgt_201 = value;
	}

	inline static int32_t get_offset_of_Cgt_Un_202() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Cgt_Un_202)); }
	inline OpCode_t2832213683  get_Cgt_Un_202() const { return ___Cgt_Un_202; }
	inline OpCode_t2832213683 * get_address_of_Cgt_Un_202() { return &___Cgt_Un_202; }
	inline void set_Cgt_Un_202(OpCode_t2832213683  value)
	{
		___Cgt_Un_202 = value;
	}

	inline static int32_t get_offset_of_Clt_203() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Clt_203)); }
	inline OpCode_t2832213683  get_Clt_203() const { return ___Clt_203; }
	inline OpCode_t2832213683 * get_address_of_Clt_203() { return &___Clt_203; }
	inline void set_Clt_203(OpCode_t2832213683  value)
	{
		___Clt_203 = value;
	}

	inline static int32_t get_offset_of_Clt_Un_204() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Clt_Un_204)); }
	inline OpCode_t2832213683  get_Clt_Un_204() const { return ___Clt_Un_204; }
	inline OpCode_t2832213683 * get_address_of_Clt_Un_204() { return &___Clt_Un_204; }
	inline void set_Clt_Un_204(OpCode_t2832213683  value)
	{
		___Clt_Un_204 = value;
	}

	inline static int32_t get_offset_of_Ldftn_205() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldftn_205)); }
	inline OpCode_t2832213683  get_Ldftn_205() const { return ___Ldftn_205; }
	inline OpCode_t2832213683 * get_address_of_Ldftn_205() { return &___Ldftn_205; }
	inline void set_Ldftn_205(OpCode_t2832213683  value)
	{
		___Ldftn_205 = value;
	}

	inline static int32_t get_offset_of_Ldvirtftn_206() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldvirtftn_206)); }
	inline OpCode_t2832213683  get_Ldvirtftn_206() const { return ___Ldvirtftn_206; }
	inline OpCode_t2832213683 * get_address_of_Ldvirtftn_206() { return &___Ldvirtftn_206; }
	inline void set_Ldvirtftn_206(OpCode_t2832213683  value)
	{
		___Ldvirtftn_206 = value;
	}

	inline static int32_t get_offset_of_Ldarg_207() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarg_207)); }
	inline OpCode_t2832213683  get_Ldarg_207() const { return ___Ldarg_207; }
	inline OpCode_t2832213683 * get_address_of_Ldarg_207() { return &___Ldarg_207; }
	inline void set_Ldarg_207(OpCode_t2832213683  value)
	{
		___Ldarg_207 = value;
	}

	inline static int32_t get_offset_of_Ldarga_208() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldarga_208)); }
	inline OpCode_t2832213683  get_Ldarga_208() const { return ___Ldarga_208; }
	inline OpCode_t2832213683 * get_address_of_Ldarga_208() { return &___Ldarga_208; }
	inline void set_Ldarga_208(OpCode_t2832213683  value)
	{
		___Ldarga_208 = value;
	}

	inline static int32_t get_offset_of_Starg_209() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Starg_209)); }
	inline OpCode_t2832213683  get_Starg_209() const { return ___Starg_209; }
	inline OpCode_t2832213683 * get_address_of_Starg_209() { return &___Starg_209; }
	inline void set_Starg_209(OpCode_t2832213683  value)
	{
		___Starg_209 = value;
	}

	inline static int32_t get_offset_of_Ldloc_210() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloc_210)); }
	inline OpCode_t2832213683  get_Ldloc_210() const { return ___Ldloc_210; }
	inline OpCode_t2832213683 * get_address_of_Ldloc_210() { return &___Ldloc_210; }
	inline void set_Ldloc_210(OpCode_t2832213683  value)
	{
		___Ldloc_210 = value;
	}

	inline static int32_t get_offset_of_Ldloca_211() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Ldloca_211)); }
	inline OpCode_t2832213683  get_Ldloca_211() const { return ___Ldloca_211; }
	inline OpCode_t2832213683 * get_address_of_Ldloca_211() { return &___Ldloca_211; }
	inline void set_Ldloca_211(OpCode_t2832213683  value)
	{
		___Ldloca_211 = value;
	}

	inline static int32_t get_offset_of_Stloc_212() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Stloc_212)); }
	inline OpCode_t2832213683  get_Stloc_212() const { return ___Stloc_212; }
	inline OpCode_t2832213683 * get_address_of_Stloc_212() { return &___Stloc_212; }
	inline void set_Stloc_212(OpCode_t2832213683  value)
	{
		___Stloc_212 = value;
	}

	inline static int32_t get_offset_of_Localloc_213() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Localloc_213)); }
	inline OpCode_t2832213683  get_Localloc_213() const { return ___Localloc_213; }
	inline OpCode_t2832213683 * get_address_of_Localloc_213() { return &___Localloc_213; }
	inline void set_Localloc_213(OpCode_t2832213683  value)
	{
		___Localloc_213 = value;
	}

	inline static int32_t get_offset_of_Endfilter_214() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Endfilter_214)); }
	inline OpCode_t2832213683  get_Endfilter_214() const { return ___Endfilter_214; }
	inline OpCode_t2832213683 * get_address_of_Endfilter_214() { return &___Endfilter_214; }
	inline void set_Endfilter_214(OpCode_t2832213683  value)
	{
		___Endfilter_214 = value;
	}

	inline static int32_t get_offset_of_Unaligned_215() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Unaligned_215)); }
	inline OpCode_t2832213683  get_Unaligned_215() const { return ___Unaligned_215; }
	inline OpCode_t2832213683 * get_address_of_Unaligned_215() { return &___Unaligned_215; }
	inline void set_Unaligned_215(OpCode_t2832213683  value)
	{
		___Unaligned_215 = value;
	}

	inline static int32_t get_offset_of_Volatile_216() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Volatile_216)); }
	inline OpCode_t2832213683  get_Volatile_216() const { return ___Volatile_216; }
	inline OpCode_t2832213683 * get_address_of_Volatile_216() { return &___Volatile_216; }
	inline void set_Volatile_216(OpCode_t2832213683  value)
	{
		___Volatile_216 = value;
	}

	inline static int32_t get_offset_of_Tailcall_217() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Tailcall_217)); }
	inline OpCode_t2832213683  get_Tailcall_217() const { return ___Tailcall_217; }
	inline OpCode_t2832213683 * get_address_of_Tailcall_217() { return &___Tailcall_217; }
	inline void set_Tailcall_217(OpCode_t2832213683  value)
	{
		___Tailcall_217 = value;
	}

	inline static int32_t get_offset_of_Initobj_218() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Initobj_218)); }
	inline OpCode_t2832213683  get_Initobj_218() const { return ___Initobj_218; }
	inline OpCode_t2832213683 * get_address_of_Initobj_218() { return &___Initobj_218; }
	inline void set_Initobj_218(OpCode_t2832213683  value)
	{
		___Initobj_218 = value;
	}

	inline static int32_t get_offset_of_Constrained_219() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Constrained_219)); }
	inline OpCode_t2832213683  get_Constrained_219() const { return ___Constrained_219; }
	inline OpCode_t2832213683 * get_address_of_Constrained_219() { return &___Constrained_219; }
	inline void set_Constrained_219(OpCode_t2832213683  value)
	{
		___Constrained_219 = value;
	}

	inline static int32_t get_offset_of_Cpblk_220() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Cpblk_220)); }
	inline OpCode_t2832213683  get_Cpblk_220() const { return ___Cpblk_220; }
	inline OpCode_t2832213683 * get_address_of_Cpblk_220() { return &___Cpblk_220; }
	inline void set_Cpblk_220(OpCode_t2832213683  value)
	{
		___Cpblk_220 = value;
	}

	inline static int32_t get_offset_of_Initblk_221() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Initblk_221)); }
	inline OpCode_t2832213683  get_Initblk_221() const { return ___Initblk_221; }
	inline OpCode_t2832213683 * get_address_of_Initblk_221() { return &___Initblk_221; }
	inline void set_Initblk_221(OpCode_t2832213683  value)
	{
		___Initblk_221 = value;
	}

	inline static int32_t get_offset_of_Rethrow_222() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Rethrow_222)); }
	inline OpCode_t2832213683  get_Rethrow_222() const { return ___Rethrow_222; }
	inline OpCode_t2832213683 * get_address_of_Rethrow_222() { return &___Rethrow_222; }
	inline void set_Rethrow_222(OpCode_t2832213683  value)
	{
		___Rethrow_222 = value;
	}

	inline static int32_t get_offset_of_Sizeof_223() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Sizeof_223)); }
	inline OpCode_t2832213683  get_Sizeof_223() const { return ___Sizeof_223; }
	inline OpCode_t2832213683 * get_address_of_Sizeof_223() { return &___Sizeof_223; }
	inline void set_Sizeof_223(OpCode_t2832213683  value)
	{
		___Sizeof_223 = value;
	}

	inline static int32_t get_offset_of_Refanytype_224() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Refanytype_224)); }
	inline OpCode_t2832213683  get_Refanytype_224() const { return ___Refanytype_224; }
	inline OpCode_t2832213683 * get_address_of_Refanytype_224() { return &___Refanytype_224; }
	inline void set_Refanytype_224(OpCode_t2832213683  value)
	{
		___Refanytype_224 = value;
	}

	inline static int32_t get_offset_of_Readonly_225() { return static_cast<int32_t>(offsetof(OpCodes_t137770049_StaticFields, ___Readonly_225)); }
	inline OpCode_t2832213683  get_Readonly_225() const { return ___Readonly_225; }
	inline OpCode_t2832213683 * get_address_of_Readonly_225() { return &___Readonly_225; }
	inline void set_Readonly_225(OpCode_t2832213683  value)
	{
		___Readonly_225 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODES_T137770049_H
#ifndef STACKBEHAVIOUR_T1114316459_H
#define STACKBEHAVIOUR_T1114316459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t1114316459 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t1114316459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBEHAVIOUR_T1114316459_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T1088092432_H
#define AMBIGUOUSMATCHEXCEPTION_T1088092432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t1088092432  : public SystemException_t3990923988
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T1088092432_H
#ifndef ASSEMBLY_T2744270406_H
#define ASSEMBLY_T2744270406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t2744270406  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1355581967 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3864927214 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t2492576628 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t2492576628 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t2492576628 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t2492576628 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t2492576628 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1355581967 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1355581967 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1355581967 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____evidence_2)); }
	inline Evidence_t3864927214 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t3864927214 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t3864927214 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____minimum_3)); }
	inline PermissionSet_t2492576628 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t2492576628 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t2492576628 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____optional_4)); }
	inline PermissionSet_t2492576628 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t2492576628 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t2492576628 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____refuse_5)); }
	inline PermissionSet_t2492576628 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t2492576628 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t2492576628 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____granted_6)); }
	inline PermissionSet_t2492576628 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t2492576628 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t2492576628 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ____denied_7)); }
	inline PermissionSet_t2492576628 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t2492576628 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t2492576628 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t2744270406, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T2744270406_H
#ifndef ASSEMBLYNAMEFLAGS_T746203878_H
#define ASSEMBLYNAMEFLAGS_T746203878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t746203878 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t746203878, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T746203878_H
#ifndef BINDINGFLAGS_T1989665580_H
#define BINDINGFLAGS_T1989665580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1989665580 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1989665580, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T1989665580_H
#ifndef CALLINGCONVENTIONS_T1831202217_H
#define CALLINGCONVENTIONS_T1831202217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1831202217 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1831202217, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTIONS_T1831202217_H
#ifndef CONSTRUCTORINFO_T2505268354_H
#define CONSTRUCTORINFO_T2505268354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t2505268354  : public MethodBase_t2148529606
{
public:

public:
};

struct ConstructorInfo_t2505268354_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2505268354_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2505268354_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T2505268354_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T396410804_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T396410804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t396410804 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t3040582320  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t396410804, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t3040582320  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t3040582320 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t3040582320  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t396410804, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t396410804_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t3040582320_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t396410804_marshaled_com
{
	CustomAttributeTypedArgument_t3040582320_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T396410804_H
#ifndef EVENTATTRIBUTES_T2080204238_H
#define EVENTATTRIBUTES_T2080204238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t2080204238 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t2080204238, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTATTRIBUTES_T2080204238_H
#ifndef FIELDATTRIBUTES_T3481955055_H
#define FIELDATTRIBUTES_T3481955055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3481955055 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t3481955055, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDATTRIBUTES_T3481955055_H
#ifndef PROPERTYATTRIBUTES_T232327208_H
#define PROPERTYATTRIBUTES_T232327208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t232327208 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t232327208, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTES_T232327208_H
#ifndef METHODATTRIBUTES_T2235847131_H
#define METHODATTRIBUTES_T2235847131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2235847131 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2235847131, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODATTRIBUTES_T2235847131_H
#ifndef METHODIMPLATTRIBUTES_T4229441494_H
#define METHODIMPLATTRIBUTES_T4229441494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t4229441494 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t4229441494, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTES_T4229441494_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t2148529606
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef MEMBERTYPES_T4102438481_H
#define MEMBERTYPES_T4102438481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t4102438481 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t4102438481, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T4102438481_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef PARAMETERATTRIBUTES_T4013729168_H
#define PARAMETERATTRIBUTES_T4013729168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t4013729168 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t4013729168, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T4013729168_H
#ifndef RUNTIMETYPEHANDLE_T2909979909_H
#define RUNTIMETYPEHANDLE_T2909979909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2909979909 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2909979909, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2909979909_H
#ifndef PINFO_T200884795_H
#define PINFO_T200884795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t200884795 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t200884795, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINFO_T200884795_H
#ifndef MONOEVENTINFO_T3063768381_H
#define MONOEVENTINFO_T3063768381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t3063768381 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2081000399* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3063768381, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2081000399* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2081000399** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2081000399* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3063768381_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2081000399* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3063768381_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2081000399* ___other_methods_7;
};
#endif // MONOEVENTINFO_T3063768381_H
#ifndef PARAMETERINFO_T3966796316_H
#define PARAMETERINFO_T3966796316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t3966796316  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t2928819396 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t3966796316, ___marshalAs_6)); }
	inline UnmanagedMarshal_t2928819396 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t2928819396 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t2928819396 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T3966796316_H
#ifndef PARAMETERBUILDER_T3375981901_H
#define PARAMETERBUILDER_T3375981901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t3375981901  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3375981901, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3375981901, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3375981901, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T3375981901_H
#ifndef MULTICASTDELEGATE_T1689649088_H
#define MULTICASTDELEGATE_T1689649088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1689649088  : public Delegate_t3422922067
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1689649088 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1689649088 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1689649088, ___prev_9)); }
	inline MulticastDelegate_t1689649088 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1689649088 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1689649088 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1689649088, ___kpm_next_10)); }
	inline MulticastDelegate_t1689649088 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1689649088 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1689649088 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1689649088_H
#ifndef UNMANAGEDMARSHAL_T2928819396_H
#define UNMANAGEDMARSHAL_T2928819396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t2928819396  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t2928819396, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T2928819396_H
#ifndef ASSEMBLYNAME_T1940597335_H
#define ASSEMBLYNAME_T1940597335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t1940597335  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t2763338914 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t495609529 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t1670971340* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t1670971340* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t4292374471 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___cultureinfo_6)); }
	inline CultureInfo_t2763338914 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t2763338914 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t2763338914 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___keypair_9)); }
	inline StrongNameKeyPair_t495609529 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t495609529 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t495609529 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___publicKey_10)); }
	inline ByteU5BU5D_t1670971340* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t1670971340** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t1670971340* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___keyToken_11)); }
	inline ByteU5BU5D_t1670971340* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t1670971340** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t1670971340* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___version_13)); }
	inline Version_t4292374471 * get_version_13() const { return ___version_13; }
	inline Version_t4292374471 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t4292374471 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t1940597335, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T1940597335_H
#ifndef MONOPROPERTYINFO_T3561177600_H
#define MONOPROPERTYINFO_T3561177600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3561177600 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3561177600, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3561177600, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3561177600, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3561177600, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3561177600, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3561177600_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3561177600_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T3561177600_H
#ifndef MONOCMETHOD_T2761363192_H
#define MONOCMETHOD_T2761363192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t2761363192  : public ConstructorInfo_t2505268354
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t2761363192, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t2761363192, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t2761363192, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T2761363192_H
#ifndef MODULE_T3443112641_H
#define MODULE_T3443112641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t3443112641  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t2744270406 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t3443112641, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___assembly_4)); }
	inline Assembly_t2744270406 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t2744270406 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t2744270406 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t3443112641, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t3443112641_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t1069015824 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t1069015824 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t3443112641_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t1069015824 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t1069015824 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t1069015824 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t3443112641_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t1069015824 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t1069015824 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t1069015824 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T3443112641_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2909979909  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2909979909  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2909979909 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2909979909  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t2884687363* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3837838088 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3837838088 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3837838088 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t2884687363* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2884687363** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2884687363* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3837838088 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3837838088 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3837838088 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3837838088 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3837838088 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3837838088 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3837838088 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3837838088 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3837838088 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MONOMETHODINFO_T3430742944_H
#define MONOMETHODINFO_T3430742944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t3430742944 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3430742944, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3430742944, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3430742944, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3430742944, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3430742944, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3430742944_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3430742944_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T3430742944_H
#ifndef CLASSINTERFACEATTRIBUTE_T3453193576_H
#define CLASSINTERFACEATTRIBUTE_T3453193576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t3453193576  : public Attribute_t665885215
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t3453193576, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T3453193576_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T4085979110_H
#define MEMBERINFOSERIALIZATIONHOLDER_T4085979110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t4085979110  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t2884687363* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4085979110, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4085979110, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4085979110, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4085979110, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t4085979110, ____genericArguments_4)); }
	inline TypeU5BU5D_t2884687363* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t2884687363** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t2884687363* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T4085979110_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T3173507791_H
#define DEFAULTDEPENDENCYATTRIBUTE_T3173507791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t3173507791  : public Attribute_t665885215
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t3173507791, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T3173507791_H
#ifndef COMEXCEPTION_T152132313_H
#define COMEXCEPTION_T152132313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t152132313  : public ExternalException_t4279254957
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T152132313_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2545333905  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2545333905  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2545333905 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2545333905  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T2918968502_H
#define RELIABILITYCONTRACTATTRIBUTE_T2918968502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t2918968502  : public Attribute_t665885215
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2918968502, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2918968502, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T2918968502_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOGENERICCMETHOD_T1089375392_H
#define MONOGENERICCMETHOD_T1089375392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t1089375392  : public MonoCMethod_t2761363192
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T1089375392_H
#ifndef ADDEVENTADAPTER_T3459418534_H
#define ADDEVENTADAPTER_T3459418534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t3459418534  : public MulticastDelegate_t1689649088
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T3459418534_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3561177600  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t3764131228 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3561177600  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3561177600 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3561177600  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t3764131228 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t3764131228 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t3764131228 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef TYPEBUILDER_T3858531649_H
#define TYPEBUILDER_T3858531649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t3858531649  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t2884687363* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3076292750* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t16915163* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t3029910278* ___fields_16;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_17;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t841378631 * ___pmodule_18;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t757986849* ___generic_params_19;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_20;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_21;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_22;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_23;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___interfaces_12)); }
	inline TypeU5BU5D_t2884687363* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t2884687363** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t2884687363* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3076292750* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3076292750** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3076292750* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t16915163* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t16915163** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t16915163* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_fields_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___fields_16)); }
	inline FieldBuilderU5BU5D_t3029910278* get_fields_16() const { return ___fields_16; }
	inline FieldBuilderU5BU5D_t3029910278** get_address_of_fields_16() { return &___fields_16; }
	inline void set_fields_16(FieldBuilderU5BU5D_t3029910278* value)
	{
		___fields_16 = value;
		Il2CppCodeGenWriteBarrier((&___fields_16), value);
	}

	inline static int32_t get_offset_of_attrs_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___attrs_17)); }
	inline int32_t get_attrs_17() const { return ___attrs_17; }
	inline int32_t* get_address_of_attrs_17() { return &___attrs_17; }
	inline void set_attrs_17(int32_t value)
	{
		___attrs_17 = value;
	}

	inline static int32_t get_offset_of_pmodule_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___pmodule_18)); }
	inline ModuleBuilder_t841378631 * get_pmodule_18() const { return ___pmodule_18; }
	inline ModuleBuilder_t841378631 ** get_address_of_pmodule_18() { return &___pmodule_18; }
	inline void set_pmodule_18(ModuleBuilder_t841378631 * value)
	{
		___pmodule_18 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_18), value);
	}

	inline static int32_t get_offset_of_generic_params_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___generic_params_19)); }
	inline GenericTypeParameterBuilderU5BU5D_t757986849* get_generic_params_19() const { return ___generic_params_19; }
	inline GenericTypeParameterBuilderU5BU5D_t757986849** get_address_of_generic_params_19() { return &___generic_params_19; }
	inline void set_generic_params_19(GenericTypeParameterBuilderU5BU5D_t757986849* value)
	{
		___generic_params_19 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_19), value);
	}

	inline static int32_t get_offset_of_created_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___created_20)); }
	inline Type_t * get_created_20() const { return ___created_20; }
	inline Type_t ** get_address_of_created_20() { return &___created_20; }
	inline void set_created_20(Type_t * value)
	{
		___created_20 = value;
		Il2CppCodeGenWriteBarrier((&___created_20), value);
	}

	inline static int32_t get_offset_of_fullname_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___fullname_21)); }
	inline String_t* get_fullname_21() const { return ___fullname_21; }
	inline String_t** get_address_of_fullname_21() { return &___fullname_21; }
	inline void set_fullname_21(String_t* value)
	{
		___fullname_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_21), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___createTypeCalled_22)); }
	inline bool get_createTypeCalled_22() const { return ___createTypeCalled_22; }
	inline bool* get_address_of_createTypeCalled_22() { return &___createTypeCalled_22; }
	inline void set_createTypeCalled_22(bool value)
	{
		___createTypeCalled_22 = value;
	}

	inline static int32_t get_offset_of_underlying_type_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t3858531649, ___underlying_type_23)); }
	inline Type_t * get_underlying_type_23() const { return ___underlying_type_23; }
	inline Type_t ** get_address_of_underlying_type_23() { return &___underlying_type_23; }
	inline void set_underlying_type_23(Type_t * value)
	{
		___underlying_type_23 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T3858531649_H
#ifndef GETTERADAPTER_T3764131228_H
#define GETTERADAPTER_T3764131228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t3764131228  : public MulticastDelegate_t1689649088
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T3764131228_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (ModuleBuilderTokenGenerator_t75459755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[1] = 
{
	ModuleBuilderTokenGenerator_t75459755::get_offset_of_mb_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (OpCode_t2832213683)+ sizeof (RuntimeObject), sizeof(OpCode_t2832213683 ), 0, 0 };
extern const int32_t g_FieldOffsetTable301[8] = 
{
	OpCode_t2832213683::get_offset_of_op1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_op2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_push_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_pop_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_size_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	OpCode_t2832213683::get_offset_of_flow_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (OpCodeNames_t957449539), -1, sizeof(OpCodeNames_t957449539_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable302[1] = 
{
	OpCodeNames_t957449539_StaticFields::get_offset_of_names_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (OpCodes_t137770049), -1, sizeof(OpCodes_t137770049_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable303[226] = 
{
	OpCodes_t137770049_StaticFields::get_offset_of_Nop_0(),
	OpCodes_t137770049_StaticFields::get_offset_of_Break_1(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_0_2(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_1_3(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_2_4(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_3_5(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_0_6(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_1_7(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_2_8(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_3_9(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_0_10(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_1_11(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_2_12(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_3_13(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_S_14(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarga_S_15(),
	OpCodes_t137770049_StaticFields::get_offset_of_Starg_S_16(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_S_17(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloca_S_18(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_S_19(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldnull_20(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_M1_21(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_0_22(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_1_23(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_2_24(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_3_25(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_4_26(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_5_27(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_6_28(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_7_29(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_8_30(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_S_31(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I4_32(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_I8_33(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_R4_34(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldc_R8_35(),
	OpCodes_t137770049_StaticFields::get_offset_of_Dup_36(),
	OpCodes_t137770049_StaticFields::get_offset_of_Pop_37(),
	OpCodes_t137770049_StaticFields::get_offset_of_Jmp_38(),
	OpCodes_t137770049_StaticFields::get_offset_of_Call_39(),
	OpCodes_t137770049_StaticFields::get_offset_of_Calli_40(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ret_41(),
	OpCodes_t137770049_StaticFields::get_offset_of_Br_S_42(),
	OpCodes_t137770049_StaticFields::get_offset_of_Brfalse_S_43(),
	OpCodes_t137770049_StaticFields::get_offset_of_Brtrue_S_44(),
	OpCodes_t137770049_StaticFields::get_offset_of_Beq_S_45(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bge_S_46(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bgt_S_47(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ble_S_48(),
	OpCodes_t137770049_StaticFields::get_offset_of_Blt_S_49(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bne_Un_S_50(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bge_Un_S_51(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bgt_Un_S_52(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ble_Un_S_53(),
	OpCodes_t137770049_StaticFields::get_offset_of_Blt_Un_S_54(),
	OpCodes_t137770049_StaticFields::get_offset_of_Br_55(),
	OpCodes_t137770049_StaticFields::get_offset_of_Brfalse_56(),
	OpCodes_t137770049_StaticFields::get_offset_of_Brtrue_57(),
	OpCodes_t137770049_StaticFields::get_offset_of_Beq_58(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bge_59(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bgt_60(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ble_61(),
	OpCodes_t137770049_StaticFields::get_offset_of_Blt_62(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bne_Un_63(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bge_Un_64(),
	OpCodes_t137770049_StaticFields::get_offset_of_Bgt_Un_65(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ble_Un_66(),
	OpCodes_t137770049_StaticFields::get_offset_of_Blt_Un_67(),
	OpCodes_t137770049_StaticFields::get_offset_of_Switch_68(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_I1_69(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_U1_70(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_I2_71(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_U2_72(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_I4_73(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_U4_74(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_I8_75(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_I_76(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_R4_77(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_R8_78(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldind_Ref_79(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_Ref_80(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_I1_81(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_I2_82(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_I4_83(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_I8_84(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_R4_85(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_R8_86(),
	OpCodes_t137770049_StaticFields::get_offset_of_Add_87(),
	OpCodes_t137770049_StaticFields::get_offset_of_Sub_88(),
	OpCodes_t137770049_StaticFields::get_offset_of_Mul_89(),
	OpCodes_t137770049_StaticFields::get_offset_of_Div_90(),
	OpCodes_t137770049_StaticFields::get_offset_of_Div_Un_91(),
	OpCodes_t137770049_StaticFields::get_offset_of_Rem_92(),
	OpCodes_t137770049_StaticFields::get_offset_of_Rem_Un_93(),
	OpCodes_t137770049_StaticFields::get_offset_of_And_94(),
	OpCodes_t137770049_StaticFields::get_offset_of_Or_95(),
	OpCodes_t137770049_StaticFields::get_offset_of_Xor_96(),
	OpCodes_t137770049_StaticFields::get_offset_of_Shl_97(),
	OpCodes_t137770049_StaticFields::get_offset_of_Shr_98(),
	OpCodes_t137770049_StaticFields::get_offset_of_Shr_Un_99(),
	OpCodes_t137770049_StaticFields::get_offset_of_Neg_100(),
	OpCodes_t137770049_StaticFields::get_offset_of_Not_101(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_I1_102(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_I2_103(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_I4_104(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_I8_105(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_R4_106(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_R8_107(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_U4_108(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_U8_109(),
	OpCodes_t137770049_StaticFields::get_offset_of_Callvirt_110(),
	OpCodes_t137770049_StaticFields::get_offset_of_Cpobj_111(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldobj_112(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldstr_113(),
	OpCodes_t137770049_StaticFields::get_offset_of_Newobj_114(),
	OpCodes_t137770049_StaticFields::get_offset_of_Castclass_115(),
	OpCodes_t137770049_StaticFields::get_offset_of_Isinst_116(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_R_Un_117(),
	OpCodes_t137770049_StaticFields::get_offset_of_Unbox_118(),
	OpCodes_t137770049_StaticFields::get_offset_of_Throw_119(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldfld_120(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldflda_121(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stfld_122(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldsfld_123(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldsflda_124(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stsfld_125(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stobj_126(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I1_Un_127(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I2_Un_128(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I4_Un_129(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I8_Un_130(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U1_Un_131(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U2_Un_132(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U4_Un_133(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U8_Un_134(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I_Un_135(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U_Un_136(),
	OpCodes_t137770049_StaticFields::get_offset_of_Box_137(),
	OpCodes_t137770049_StaticFields::get_offset_of_Newarr_138(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldlen_139(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelema_140(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_I1_141(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_U1_142(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_I2_143(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_U2_144(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_I4_145(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_U4_146(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_I8_147(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_I_148(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_R4_149(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_R8_150(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_Ref_151(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_I_152(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_I1_153(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_I2_154(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_I4_155(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_I8_156(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_R4_157(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_R8_158(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_Ref_159(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldelem_160(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stelem_161(),
	OpCodes_t137770049_StaticFields::get_offset_of_Unbox_Any_162(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I1_163(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U1_164(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I2_165(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U2_166(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I4_167(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U4_168(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I8_169(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U8_170(),
	OpCodes_t137770049_StaticFields::get_offset_of_Refanyval_171(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ckfinite_172(),
	OpCodes_t137770049_StaticFields::get_offset_of_Mkrefany_173(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldtoken_174(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_U2_175(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_U1_176(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_I_177(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_I_178(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_Ovf_U_179(),
	OpCodes_t137770049_StaticFields::get_offset_of_Add_Ovf_180(),
	OpCodes_t137770049_StaticFields::get_offset_of_Add_Ovf_Un_181(),
	OpCodes_t137770049_StaticFields::get_offset_of_Mul_Ovf_182(),
	OpCodes_t137770049_StaticFields::get_offset_of_Mul_Ovf_Un_183(),
	OpCodes_t137770049_StaticFields::get_offset_of_Sub_Ovf_184(),
	OpCodes_t137770049_StaticFields::get_offset_of_Sub_Ovf_Un_185(),
	OpCodes_t137770049_StaticFields::get_offset_of_Endfinally_186(),
	OpCodes_t137770049_StaticFields::get_offset_of_Leave_187(),
	OpCodes_t137770049_StaticFields::get_offset_of_Leave_S_188(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stind_I_189(),
	OpCodes_t137770049_StaticFields::get_offset_of_Conv_U_190(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix7_191(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix6_192(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix5_193(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix4_194(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix3_195(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix2_196(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefix1_197(),
	OpCodes_t137770049_StaticFields::get_offset_of_Prefixref_198(),
	OpCodes_t137770049_StaticFields::get_offset_of_Arglist_199(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ceq_200(),
	OpCodes_t137770049_StaticFields::get_offset_of_Cgt_201(),
	OpCodes_t137770049_StaticFields::get_offset_of_Cgt_Un_202(),
	OpCodes_t137770049_StaticFields::get_offset_of_Clt_203(),
	OpCodes_t137770049_StaticFields::get_offset_of_Clt_Un_204(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldftn_205(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldvirtftn_206(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarg_207(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldarga_208(),
	OpCodes_t137770049_StaticFields::get_offset_of_Starg_209(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloc_210(),
	OpCodes_t137770049_StaticFields::get_offset_of_Ldloca_211(),
	OpCodes_t137770049_StaticFields::get_offset_of_Stloc_212(),
	OpCodes_t137770049_StaticFields::get_offset_of_Localloc_213(),
	OpCodes_t137770049_StaticFields::get_offset_of_Endfilter_214(),
	OpCodes_t137770049_StaticFields::get_offset_of_Unaligned_215(),
	OpCodes_t137770049_StaticFields::get_offset_of_Volatile_216(),
	OpCodes_t137770049_StaticFields::get_offset_of_Tailcall_217(),
	OpCodes_t137770049_StaticFields::get_offset_of_Initobj_218(),
	OpCodes_t137770049_StaticFields::get_offset_of_Constrained_219(),
	OpCodes_t137770049_StaticFields::get_offset_of_Cpblk_220(),
	OpCodes_t137770049_StaticFields::get_offset_of_Initblk_221(),
	OpCodes_t137770049_StaticFields::get_offset_of_Rethrow_222(),
	OpCodes_t137770049_StaticFields::get_offset_of_Sizeof_223(),
	OpCodes_t137770049_StaticFields::get_offset_of_Refanytype_224(),
	OpCodes_t137770049_StaticFields::get_offset_of_Readonly_225(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (ParameterBuilder_t3375981901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[3] = 
{
	ParameterBuilder_t3375981901::get_offset_of_name_0(),
	ParameterBuilder_t3375981901::get_offset_of_attrs_1(),
	ParameterBuilder_t3375981901::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (StackBehaviour_t1114316459)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable305[30] = 
{
	StackBehaviour_t1114316459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (TypeBuilder_t3858531649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable306[16] = 
{
	TypeBuilder_t3858531649::get_offset_of_tname_8(),
	TypeBuilder_t3858531649::get_offset_of_nspace_9(),
	TypeBuilder_t3858531649::get_offset_of_parent_10(),
	TypeBuilder_t3858531649::get_offset_of_nesting_type_11(),
	TypeBuilder_t3858531649::get_offset_of_interfaces_12(),
	TypeBuilder_t3858531649::get_offset_of_num_methods_13(),
	TypeBuilder_t3858531649::get_offset_of_methods_14(),
	TypeBuilder_t3858531649::get_offset_of_ctors_15(),
	TypeBuilder_t3858531649::get_offset_of_fields_16(),
	TypeBuilder_t3858531649::get_offset_of_attrs_17(),
	TypeBuilder_t3858531649::get_offset_of_pmodule_18(),
	TypeBuilder_t3858531649::get_offset_of_generic_params_19(),
	TypeBuilder_t3858531649::get_offset_of_created_20(),
	TypeBuilder_t3858531649::get_offset_of_fullname_21(),
	TypeBuilder_t3858531649::get_offset_of_createTypeCalled_22(),
	TypeBuilder_t3858531649::get_offset_of_underlying_type_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (UnmanagedMarshal_t2928819396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[9] = 
{
	UnmanagedMarshal_t2928819396::get_offset_of_count_0(),
	UnmanagedMarshal_t2928819396::get_offset_of_t_1(),
	UnmanagedMarshal_t2928819396::get_offset_of_tbase_2(),
	UnmanagedMarshal_t2928819396::get_offset_of_guid_3(),
	UnmanagedMarshal_t2928819396::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t2928819396::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t2928819396::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t2928819396::get_offset_of_param_num_7(),
	UnmanagedMarshal_t2928819396::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (AmbiguousMatchException_t1088092432), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (Assembly_t2744270406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[10] = 
{
	Assembly_t2744270406::get_offset_of__mono_assembly_0(),
	Assembly_t2744270406::get_offset_of_resolve_event_holder_1(),
	Assembly_t2744270406::get_offset_of__evidence_2(),
	Assembly_t2744270406::get_offset_of__minimum_3(),
	Assembly_t2744270406::get_offset_of__optional_4(),
	Assembly_t2744270406::get_offset_of__refuse_5(),
	Assembly_t2744270406::get_offset_of__granted_6(),
	Assembly_t2744270406::get_offset_of__denied_7(),
	Assembly_t2744270406::get_offset_of_fromByteArray_8(),
	Assembly_t2744270406::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (ResolveEventHolder_t1355581967), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (AssemblyCompanyAttribute_t4262248275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	AssemblyCompanyAttribute_t4262248275::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (AssemblyConfigurationAttribute_t460704221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	AssemblyConfigurationAttribute_t460704221::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (AssemblyCopyrightAttribute_t3110755769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	AssemblyCopyrightAttribute_t3110755769::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (AssemblyDefaultAliasAttribute_t3576670981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	AssemblyDefaultAliasAttribute_t3576670981::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (AssemblyDelaySignAttribute_t52663705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable315[1] = 
{
	AssemblyDelaySignAttribute_t52663705::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (AssemblyDescriptionAttribute_t4229074898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable316[1] = 
{
	AssemblyDescriptionAttribute_t4229074898::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (AssemblyFileVersionAttribute_t2156535805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	AssemblyFileVersionAttribute_t2156535805::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (AssemblyInformationalVersionAttribute_t2029372340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	AssemblyInformationalVersionAttribute_t2029372340::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (AssemblyKeyFileAttribute_t3108723999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable319[1] = 
{
	AssemblyKeyFileAttribute_t3108723999::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (AssemblyName_t1940597335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable320[15] = 
{
	AssemblyName_t1940597335::get_offset_of_name_0(),
	AssemblyName_t1940597335::get_offset_of_codebase_1(),
	AssemblyName_t1940597335::get_offset_of_major_2(),
	AssemblyName_t1940597335::get_offset_of_minor_3(),
	AssemblyName_t1940597335::get_offset_of_build_4(),
	AssemblyName_t1940597335::get_offset_of_revision_5(),
	AssemblyName_t1940597335::get_offset_of_cultureinfo_6(),
	AssemblyName_t1940597335::get_offset_of_flags_7(),
	AssemblyName_t1940597335::get_offset_of_hashalg_8(),
	AssemblyName_t1940597335::get_offset_of_keypair_9(),
	AssemblyName_t1940597335::get_offset_of_publicKey_10(),
	AssemblyName_t1940597335::get_offset_of_keyToken_11(),
	AssemblyName_t1940597335::get_offset_of_versioncompat_12(),
	AssemblyName_t1940597335::get_offset_of_version_13(),
	AssemblyName_t1940597335::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (AssemblyNameFlags_t746203878)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[6] = 
{
	AssemblyNameFlags_t746203878::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (AssemblyProductAttribute_t1112882465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable322[1] = 
{
	AssemblyProductAttribute_t1112882465::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (AssemblyTitleAttribute_t3753430261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[1] = 
{
	AssemblyTitleAttribute_t3753430261::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (AssemblyTrademarkAttribute_t815879748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[1] = 
{
	AssemblyTrademarkAttribute_t815879748::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (Binder_t1627552849), -1, sizeof(Binder_t1627552849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable325[1] = 
{
	Binder_t1627552849_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (Default_t1083985009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (BindingFlags_t1989665580)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable327[21] = 
{
	BindingFlags_t1989665580::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (CallingConventions_t1831202217)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable328[6] = 
{
	CallingConventions_t1831202217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (ConstructorInfo_t2505268354), -1, sizeof(ConstructorInfo_t2505268354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable329[2] = 
{
	ConstructorInfo_t2505268354_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t2505268354_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (CustomAttributeData_t1083865398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable330[3] = 
{
	CustomAttributeData_t1083865398::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1083865398::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1083865398::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (CustomAttributeNamedArgument_t396410804)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable331[2] = 
{
	CustomAttributeNamedArgument_t396410804::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t396410804::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (CustomAttributeTypedArgument_t3040582320)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[2] = 
{
	CustomAttributeTypedArgument_t3040582320::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t3040582320::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (EventAttributes_t2080204238)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[5] = 
{
	EventAttributes_t2080204238::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable334[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (AddEventAdapter_t3459418534), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (FieldAttributes_t3481955055)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable336[20] = 
{
	FieldAttributes_t3481955055::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (MemberInfoSerializationHolder_t4085979110), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable338[5] = 
{
	MemberInfoSerializationHolder_t4085979110::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t4085979110::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t4085979110::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t4085979110::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t4085979110::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (MemberTypes_t4102438481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable339[10] = 
{
	MemberTypes_t4102438481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (MethodAttributes_t2235847131)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable340[25] = 
{
	MethodAttributes_t2235847131::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (MethodBase_t2148529606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (MethodImplAttributes_t4229441494)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable342[15] = 
{
	MethodImplAttributes_t4229441494::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (Missing_t1814585015), -1, sizeof(Missing_t1814585015_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable344[1] = 
{
	Missing_t1814585015_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (Module_t3443112641), -1, sizeof(Module_t3443112641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable345[10] = 
{
	0,
	Module_t3443112641_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t3443112641_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t3443112641::get_offset_of__impl_3(),
	Module_t3443112641::get_offset_of_assembly_4(),
	Module_t3443112641::get_offset_of_fqname_5(),
	Module_t3443112641::get_offset_of_name_6(),
	Module_t3443112641::get_offset_of_scopename_7(),
	Module_t3443112641::get_offset_of_is_resource_8(),
	Module_t3443112641::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (MonoEventInfo_t3063768381)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[8] = 
{
	MonoEventInfo_t3063768381::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3063768381::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (MonoGenericCMethod_t1089375392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (MonoMethodInfo_t3430742944)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable351[5] = 
{
	MonoMethodInfo_t3430742944::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3430742944::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3430742944::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3430742944::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3430742944::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (MonoCMethod_t2761363192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[3] = 
{
	MonoCMethod_t2761363192::get_offset_of_mhandle_2(),
	MonoCMethod_t2761363192::get_offset_of_name_3(),
	MonoCMethod_t2761363192::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (MonoPropertyInfo_t3561177600)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable354[5] = 
{
	MonoPropertyInfo_t3561177600::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3561177600::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3561177600::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3561177600::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3561177600::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (PInfo_t200884795)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable355[7] = 
{
	PInfo_t200884795::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable356[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (GetterAdapter_t3764131228), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (ParameterAttributes_t4013729168)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable360[12] = 
{
	ParameterAttributes_t4013729168::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (ParameterInfo_t3966796316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[7] = 
{
	ParameterInfo_t3966796316::get_offset_of_ClassImpl_0(),
	ParameterInfo_t3966796316::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t3966796316::get_offset_of_MemberImpl_2(),
	ParameterInfo_t3966796316::get_offset_of_NameImpl_3(),
	ParameterInfo_t3966796316::get_offset_of_PositionImpl_4(),
	ParameterInfo_t3966796316::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t3966796316::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (ParameterModifier_t2731709273)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t2731709273_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable362[1] = 
{
	ParameterModifier_t2731709273::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (Pointer_t987873005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable363[2] = 
{
	Pointer_t987873005::get_offset_of_data_0(),
	Pointer_t987873005::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (ProcessorArchitecture_t3124710346)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable364[6] = 
{
	ProcessorArchitecture_t3124710346::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (PropertyAttributes_t232327208)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[9] = 
{
	PropertyAttributes_t232327208::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (StrongNameKeyPair_t495609529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[4] = 
{
	StrongNameKeyPair_t495609529::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t495609529::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t495609529::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t495609529::get_offset_of__keyPairArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (TargetException_t1200690211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (TargetInvocationException_t1940010541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (TargetParameterCountException_t38607131), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (TypeAttributes_t1219511507)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable371[32] = 
{
	TypeAttributes_t1219511507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (NeutralResourcesLanguageAttribute_t3312973617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[1] = 
{
	NeutralResourcesLanguageAttribute_t3312973617::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (ResourceManager_t1685028194), -1, sizeof(ResourceManager_t1685028194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable374[5] = 
{
	ResourceManager_t1685028194_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t1685028194_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t1685028194_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t1685028194_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t1685028194::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (PredefinedResourceType_t2423267561)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable375[21] = 
{
	PredefinedResourceType_t2423267561::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (ResourceReader_t853969891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[13] = 
{
	ResourceReader_t853969891::get_offset_of_reader_0(),
	ResourceReader_t853969891::get_offset_of_readerLock_1(),
	ResourceReader_t853969891::get_offset_of_formatter_2(),
	ResourceReader_t853969891::get_offset_of_resourceCount_3(),
	ResourceReader_t853969891::get_offset_of_typeCount_4(),
	ResourceReader_t853969891::get_offset_of_typeNames_5(),
	ResourceReader_t853969891::get_offset_of_hashes_6(),
	ResourceReader_t853969891::get_offset_of_infos_7(),
	ResourceReader_t853969891::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t853969891::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t853969891::get_offset_of_resource_ver_10(),
	ResourceReader_t853969891::get_offset_of_cache_11(),
	ResourceReader_t853969891::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (ResourceInfo_t1257820283)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t1257820283_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable377[3] = 
{
	ResourceInfo_t1257820283::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1257820283::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t1257820283::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (ResourceCacheItem_t3754271844)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t3754271844_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable378[2] = 
{
	ResourceCacheItem_t3754271844::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t3754271844::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (ResourceEnumerator_t1297007826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[3] = 
{
	ResourceEnumerator_t1297007826::get_offset_of_reader_0(),
	ResourceEnumerator_t1297007826::get_offset_of_index_1(),
	ResourceEnumerator_t1297007826::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (ResourceSet_t4001123846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable380[4] = 
{
	ResourceSet_t4001123846::get_offset_of_Reader_0(),
	ResourceSet_t4001123846::get_offset_of_Table_1(),
	ResourceSet_t4001123846::get_offset_of_resources_read_2(),
	ResourceSet_t4001123846::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (RuntimeResourceSet_t3835955587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (SatelliteContractVersionAttribute_t2108827203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable382[1] = 
{
	SatelliteContractVersionAttribute_t2108827203::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (CompilationRelaxations_t2406078246)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[2] = 
{
	CompilationRelaxations_t2406078246::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (CompilationRelaxationsAttribute_t2747691624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable384[1] = 
{
	CompilationRelaxationsAttribute_t2747691624::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (DefaultDependencyAttribute_t3173507791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable385[1] = 
{
	DefaultDependencyAttribute_t3173507791::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (IsVolatile_t3588965887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (LoadHint_t3244628977)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable387[4] = 
{
	LoadHint_t3244628977::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (StringFreezingAttribute_t1702161960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (Cer_t3241692816)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[4] = 
{
	Cer_t3241692816::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (Consistency_t3724496849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[5] = 
{
	Consistency_t3724496849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (CriticalFinalizerObject_t566696482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ReliabilityContractAttribute_t2918968502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable392[2] = 
{
	ReliabilityContractAttribute_t2918968502::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t2918968502::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ActivationArguments_t856003368), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (COMException_t152132313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (CallingConvention_t3614799473)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable395[6] = 
{
	CallingConvention_t3614799473::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (CharSet_t948153764)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable396[5] = 
{
	CharSet_t948153764::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (ClassInterfaceAttribute_t3453193576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable397[1] = 
{
	ClassInterfaceAttribute_t3453193576::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (ClassInterfaceType_t3954891227)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable398[4] = 
{
	ClassInterfaceType_t3954891227::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (ComDefaultInterfaceAttribute_t28993770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable399[1] = 
{
	ComDefaultInterfaceAttribute_t28993770::get_offset_of__type_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
