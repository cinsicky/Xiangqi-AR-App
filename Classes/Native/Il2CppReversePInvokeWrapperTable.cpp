#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Void
struct Void_t1185182177;




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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CameraDevice_OnPermissionNotify_m647978383(intptr_t ___obj0, int32_t ___status1, char* ___msg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CloudRecognizer_OnInit_m1749339042(intptr_t ___obj0, int32_t ___status1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CloudRecognizer_OnMessage_m2097203463(intptr_t ___obj0, int32_t ___status1, intptr_t ___listobj2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EngineNative_Log_m2515932672(char* ___str0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EngineNativeIOS_Log_m1591597085(char* ___str0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ImageTracker_OnLoad_m4293333313(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ImageTracker_OnUnload_m506534443(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ObjectTracker_OnLoad_m3273564477(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ObjectTracker_OnUnload_m2685857590(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RecorderNative_OnStatusNotify_m1241673738(intptr_t ___obj0, int32_t ___status1, char* ___msg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RecorderNative_OnPermissionNotify_m1602265046(intptr_t ___obj0, int32_t ___status1, char* ___msg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoPlayer_OnStatusChange_m3051132405(intptr_t ___obj0, int32_t ___status1);
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[12] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CameraDevice_OnPermissionNotify_m647978383),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CloudRecognizer_OnInit_m1749339042),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CloudRecognizer_OnMessage_m2097203463),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EngineNative_Log_m2515932672),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EngineNativeIOS_Log_m1591597085),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ImageTracker_OnLoad_m4293333313),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ImageTracker_OnUnload_m506534443),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectTracker_OnLoad_m3273564477),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ObjectTracker_OnUnload_m2685857590),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RecorderNative_OnStatusNotify_m1241673738),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RecorderNative_OnPermissionNotify_m1602265046),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_VideoPlayer_OnStatusChange_m3051132405),
};
