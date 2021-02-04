#include "il2cpp-config.h"

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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// EasyAR.ARCameraBaseBehaviour
struct ARCameraBaseBehaviour_t712094156;
// EasyAR.ARScene
struct ARScene_t1576376535;
// EasyAR.ARSceneBaseBehaviour
struct ARSceneBaseBehaviour_t3394135702;
// EasyAR.Augmenter
struct Augmenter_t2015478513;
// EasyAR.BarCodeScanner
struct BarCodeScanner_t2130144094;
// EasyAR.Base
struct Base_t1500127977;
// EasyAR.CameraCalibration
struct CameraCalibration_t367929843;
// EasyAR.CameraDevice
struct CameraDevice_t2123284476;
// EasyAR.CameraDevice/CallBack
struct CallBack_t1768481782;
// EasyAR.CameraFrameStreamer
struct CameraFrameStreamer_t4175238345;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t3814910474;
// EasyAR.DeviceUserAbstractBehaviour
struct DeviceUserAbstractBehaviour_t3752823894;
// EasyAR.IEngineNative
struct IEngineNative_t958141741;
// EasyAR.IRecorderNotify
struct IRecorderNotify_t2583557839;
// EasyAR.IRecorderNotify[]
struct IRecorderNotifyU5BU5D_t479666454;
// EasyAR.ImageTarget
struct ImageTarget_t46103797;
// EasyAR.ImageTargetBaseBehaviour
struct ImageTargetBaseBehaviour_t1373064375;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t832957781;
// EasyAR.MeshGenerator
struct MeshGenerator_t2269686654;
// EasyAR.ObjectTarget
struct ObjectTarget_t2319938315;
// EasyAR.ObjectTargetBaseBehaviour
struct ObjectTargetBaseBehaviour_t1067859224;
// EasyAR.ObjectTargetBaseBehaviour[]
struct ObjectTargetBaseBehaviourU5BU5D_t4014961545;
// EasyAR.ObjectTarget[]
struct ObjectTargetU5BU5D_t246046826;
// EasyAR.ObjectTracker
struct ObjectTracker_t4151077153;
// EasyAR.ObjectTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t557056227;
// EasyAR.ObjectTrackerBaseBehaviour
struct ObjectTrackerBaseBehaviour_t1511079792;
// EasyAR.ObjectTrackerBaseBehaviour[]
struct ObjectTrackerBaseBehaviourU5BU5D_t709240017;
// EasyAR.ObjectTracker[]
struct ObjectTrackerU5BU5D_t2323566908;
// EasyAR.QRCodeScannerBaseBehaviour
struct QRCodeScannerBaseBehaviour_t3398722019;
// EasyAR.RealityPlaneBaseBehaviour
struct RealityPlaneBaseBehaviour_t2956186783;
// EasyAR.RealityPlaneBaseBehaviour[]
struct RealityPlaneBaseBehaviourU5BU5D_t2418639366;
// EasyAR.RecorderBaseBehaviour
struct RecorderBaseBehaviour_t2449616875;
// EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2
struct U3CStartAfterGrantedU3Ec__Iterator2_t3540723758;
// EasyAR.RecorderBaseBehaviour/BaseNotify
struct BaseNotify_t3278162484;
// EasyAR.RecorderNative
struct RecorderNative_t2685196317;
// EasyAR.RecorderNative/CallBack
struct CallBack_t877084370;
// EasyAR.RecorderNative[]
struct RecorderNativeU5BU5D_t1141979856;
// EasyAR.RenderCameraBaseBehaviour
struct RenderCameraBaseBehaviour_t1612515119;
// EasyAR.Target
struct Target_t4113221852;
// EasyAR.TargetAbstractBehaviour
struct TargetAbstractBehaviour_t1546528472;
// EasyAR.TargetAbstractBehaviour[]
struct TargetAbstractBehaviourU5BU5D_t2667571913;
// EasyAR.TargetInstance
struct TargetInstance_t1849971935;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t2059196126;
// EasyAR.VideoPlayer
struct VideoPlayer_t947858561;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t3619306023;
// EasyAR.VideoPlayerBaseBehaviour
struct VideoPlayerBaseBehaviour_t4040254494;
// EasyAR.VideoPlayer[]
struct VideoPlayerU5BU5D_t1626256476;
// System.Action`1<EasyAR.DeviceUserAbstractBehaviour>
struct Action_1_t3925291489;
// System.Action`1<EasyAR.TargetAbstractBehaviour>
struct Action_1_t1718996067;
// System.Action`1<System.Int32>
struct Action_1_t3123413348;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,EasyAR.Frame>
struct Action_2_t630539512;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean>
struct Action_2_t1793738231;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.String>
struct Action_2_t3543900955;
// System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D>
struct Action_2_t1241929155;
// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String>
struct Action_2_t2317856371;
// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>
struct Action_2_t4217937665;
// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>
struct Action_2_t4219074802;
// System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>
struct Action_2_t2038586088;
// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.Object>
struct Action_2_t1820581403;
// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>
struct Action_2_t587925928;
// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t3847396958;
// System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t770112511;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t3782157935;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2470008838;
// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target>
struct Action_3_t1017994765;
// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>
struct Action_3_t3935757296;
// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>
struct Action_3_t1170689986;
// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>
struct Action_3_t4037846343;
// System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>
struct Action_3_t1098563045;
// System.Action`3<System.Object,EasyAR.RecorderBaseBehaviour/Status,System.Object>
struct Action_3_t428259129;
// System.Action`3<System.Object,System.Object,System.Boolean>
struct Action_3_t649736746;
// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t1630973389;
// System.Action`4<System.Object,System.Object,System.Object,System.Boolean>
struct Action_4_t1622135069;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<EasyAR.RecorderNative,EasyAR.IRecorderNotify,System.Collections.DictionaryEntry>
struct Transform_1_t2373378390;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,EasyAR.TargetAbstractBehaviour,System.Collections.DictionaryEntry>
struct Transform_1_t2271910757;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,EasyAR.ObjectTracker,System.Collections.DictionaryEntry>
struct Transform_1_t313339076;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,EasyAR.RecorderNative,System.Collections.DictionaryEntry>
struct Transform_1_t3426719320;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,EasyAR.VideoPlayer,System.Collections.DictionaryEntry>
struct Transform_1_t3910995940;
// System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>
struct Dictionary_2_t2229004654;
// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>
struct Dictionary_2_t435241803;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice>
struct Dictionary_2_t345150195;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>
struct Dictionary_2_t2372942872;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>
struct Dictionary_2_t907062036;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>
struct Dictionary_2_t3464691576;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t1301971883;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEqualityComparer`1<EasyAR.RecorderNative>
struct IEqualityComparer_1_t497561039;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2947482199;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t2305032523;
// System.Collections.Generic.List`1<EasyAR.ObjectTarget>
struct List_1_t3792013057;
// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>
struct List_1_t2539933966;
// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>
struct List_1_t2983154534;
// System.Collections.Generic.List`1<EasyAR.Target>
struct List_1_t1290329298;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.EventArgs
struct EventArgs_t3591816995;
// System.EventHandler
struct EventHandler_t1348719766;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;

extern RuntimeClass* ARSceneBaseBehaviour_t3394135702_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1718996067_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3123413348_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t1241929155_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t1793738231_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t2038586088_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t3847396958_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t4217937665_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t587925928_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_3_t1098563045_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_3_t1170689986_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_3_t4037846343_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_4_t1630973389_il2cpp_TypeInfo_var;
extern RuntimeClass* BarCodeScanner_t2130144094_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseNotify_t3278162484_il2cpp_TypeInfo_var;
extern RuntimeClass* CallBack_t3619306023_il2cpp_TypeInfo_var;
extern RuntimeClass* CallBack_t877084370_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraDeviceBaseBehaviour_t1272814475_il2cpp_TypeInfo_var;
extern RuntimeClass* Camera_t4157153871_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2229004654_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2372942872_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3464691576_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t435241803_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t907062036_il2cpp_TypeInfo_var;
extern RuntimeClass* Engine_t1017580842_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t134210547_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t577431115_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_t1348719766_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDeviceUser_t459901323_il2cpp_TypeInfo_var;
extern RuntimeClass* IDevice_t3570696939_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEngineNative_t958141741_il2cpp_TypeInfo_var;
extern RuntimeClass* IRecorderNotify_t2583557839_il2cpp_TypeInfo_var;
extern RuntimeClass* ITarget_t3520026477_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2539933966_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2983154534_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshGenerator_t2269686654_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTargetBaseBehaviour_t1067859224_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTarget_t2319938315_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectTracker_t4151077153_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RecorderNative_t2685196317_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var;
extern RuntimeClass* TargetLoadCallbackC_t557056227_il2cpp_TypeInfo_var;
extern RuntimeClass* Target_t4113221852_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartAfterGrantedU3Ec__Iterator2_t3540723758_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* VideoPlayer_t947858561_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1695400211;
extern String_t* _stringLiteral2271670107;
extern String_t* _stringLiteral26667318;
extern String_t* _stringLiteral273538625;
extern String_t* _stringLiteral2806923157;
extern String_t* _stringLiteral2974894664;
extern String_t* _stringLiteral3415624917;
extern String_t* _stringLiteral3909020583;
extern String_t* _stringLiteral3999243638;
extern String_t* _stringLiteral526544724;
extern String_t* _stringLiteral68549185;
extern const RuntimeMethod* Action_1_Invoke_m4276893973_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m409283076_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m2197225693_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m3275928417_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_m992855389_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m1644397973_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m3140343466_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m3609976976_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m3805726766_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m3982224860_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m1721891905_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m2176069671_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m3917266203_RuntimeMethod_var;
extern const RuntimeMethod* Action_3__ctor_m2023249756_RuntimeMethod_var;
extern const RuntimeMethod* Action_4_Invoke_m1916364534_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m1103776271_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2851123190_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2894020209_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m320765369_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1636683790_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2112035945_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3177263377_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m15735542_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2094784424_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3209091381_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3719059474_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m671122479_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2707527413_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1007627066_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m149810030_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1778299640_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3469708682_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4125734752_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1106331887_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m290080077_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3669525594_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m706897564_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1808314757_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2363031532_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1000706893_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3133083891_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2827875699_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m501805994_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t3523625662_m1459495195_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisTextMesh_t1536577757_m1864569290_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m3753420331_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2463647974_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m393457049_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2940881206_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m477956413_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2307335808_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2354188634_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m1540865493_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1356403844_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m530718370_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m2789470776_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m969939599_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1341370689_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3996350916_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m1689296203_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m2895052643_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3206831396_RuntimeMethod_var;
extern const RuntimeMethod* ObjectTrackerBaseBehaviour_OnTargetLoad_m2558239660_RuntimeMethod_var;
extern const RuntimeMethod* ObjectTrackerBaseBehaviour_OnTargetUnload_m1283897701_RuntimeMethod_var;
extern const RuntimeMethod* ObjectTracker_OnLoad_m3273564477_RuntimeMethod_var;
extern const RuntimeMethod* ObjectTracker_OnUnload_m2685857590_RuntimeMethod_var;
extern const RuntimeMethod* RealityPlaneBaseBehaviour_SetEnable_m2086304484_RuntimeMethod_var;
extern const RuntimeMethod* RealityPlaneBaseBehaviour_SetPlaneTexture_m783861606_RuntimeMethod_var;
extern const RuntimeMethod* RecorderBaseBehaviour_OnPermissionStatus_m3983861993_RuntimeMethod_var;
extern const RuntimeMethod* RecorderNative_OnPermissionNotify_m1602265046_RuntimeMethod_var;
extern const RuntimeMethod* RecorderNative_OnStatusNotify_m1241673738_RuntimeMethod_var;
extern const RuntimeMethod* RenderCameraBaseBehaviour_AdjustPlane_m3755837101_RuntimeMethod_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m881306287_RuntimeMethod_var;
extern const RuntimeMethod* TargetAbstractBehaviour_RegisterSelf_m1389438361_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartAfterGrantedU3Ec__Iterator2_Reset_m249356400_RuntimeMethod_var;
extern const RuntimeMethod* VideoPlayerBaseBehaviour_OnStateChange_m3091572615_RuntimeMethod_var;
extern const RuntimeMethod* VideoPlayer_OnStatusChange_m3051132405_RuntimeMethod_var;
extern const RuntimeType* Camera_t4157153871_0_0_0_var;
extern const uint32_t BaseNotify_RecorderNotify_m457363961_MetadataUsageId;
extern const uint32_t CallBack_BeginInvoke_m1949171959_MetadataUsageId;
extern const uint32_t CallBack_BeginInvoke_m3195143094_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_AddLoader_m225744784_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_Awake_m2284238472_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_Bind_m2734770249_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_CheckSize_m3820784514_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_Init_m205211831_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_OnTargetLoad_m517436547_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_OnTargetUnload_m3319030_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_RemoveLoader_m1156972098_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_Start_m2007576872_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_Update_m3100488742_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour__ctor_m548923136_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_add_TargetLoad_m1490555876_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_add_TargetUnload_m4267598267_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_remove_TargetLoad_m3823376671_MetadataUsageId;
extern const uint32_t ObjectTargetBaseBehaviour_remove_TargetUnload_m53798987_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m293835532_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_Initialize_m1653906377_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_LoadObjectTargetBehaviour_m450404887_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_OnDestroy_m733328988_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_OnTargetLoad_m2558239660_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_OnTargetUnload_m1283897701_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_UnloadObjectTargetBehaviour_m2389908001_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour__ctor_m3729992169_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_add_TargetLoad_m2184662537_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_add_TargetUnload_m1447941304_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_remove_TargetLoad_m4120904953_MetadataUsageId;
extern const uint32_t ObjectTrackerBaseBehaviour_remove_TargetUnload_m3223531478_MetadataUsageId;
extern const uint32_t ObjectTracker_AttachStreamer_m1640299531_MetadataUsageId;
extern const uint32_t ObjectTracker_CheckCallback_m3038324741_MetadataUsageId;
extern const uint32_t ObjectTracker_Dispose_m2902596551_MetadataUsageId;
extern const uint32_t ObjectTracker_LoadTarget_m1512023760_MetadataUsageId;
extern const uint32_t ObjectTracker_OnLoad_m3273564477_MetadataUsageId;
extern const uint32_t ObjectTracker_OnUnload_m2685857590_MetadataUsageId;
extern const uint32_t ObjectTracker_Start_m610592266_MetadataUsageId;
extern const uint32_t ObjectTracker_Stop_m3708047967_MetadataUsageId;
extern const uint32_t ObjectTracker_UnloadTarget_m1929119849_MetadataUsageId;
extern const uint32_t ObjectTracker__cctor_m1023752413_MetadataUsageId;
extern const uint32_t ObjectTracker__ctor_m1267714373_MetadataUsageId;
extern const uint32_t ObjectTracker_add_TargetLoad_m3725398126_MetadataUsageId;
extern const uint32_t ObjectTracker_add_TargetUnload_m2599203727_MetadataUsageId;
extern const uint32_t ObjectTracker_get_SimultaneousNum_m2690320744_MetadataUsageId;
extern const uint32_t ObjectTracker_remove_TargetLoad_m3065119043_MetadataUsageId;
extern const uint32_t ObjectTracker_remove_TargetUnload_m3218471623_MetadataUsageId;
extern const uint32_t ObjectTracker_set_IsMultithreadCallback_m788469232_MetadataUsageId;
extern const uint32_t ObjectTracker_set_SimultaneousNum_m211267763_MetadataUsageId;
extern const uint32_t QRCodeScannerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m3282989132_MetadataUsageId;
extern const uint32_t QRCodeScannerBaseBehaviour_OnDestroy_m1134362481_MetadataUsageId;
extern const uint32_t QRCodeScannerBaseBehaviour_Start_m2638931086_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_Awake_m3453724978_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_MoveToCamera_m4064449008_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_SetEnable_m2086304484_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_SetPlaneTexture_m783861606_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_Update_m2885498581_MetadataUsageId;
extern const uint32_t RealityPlaneBaseBehaviour_setScale_m3017485210_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_OnPermissionStatus_m3983861993_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_RecordFrame_m1672837453_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_StartAfterGranted_m1838242622_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_StartRecording_m2115966297_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_Start_m2983585467_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_StopRecording_m2226944719_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_add_FrameUpdate_m1443117606_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_add_StatusUpdate_m2577268746_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_interStart_m2579126535_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_remove_FrameUpdate_m2435614893_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_remove_StatusUpdate_m1915795370_MetadataUsageId;
extern const uint32_t RecorderBaseBehaviour_updateFrame_m3644515897_MetadataUsageId;
extern const uint32_t RecorderNative_CheckPermissionStatus_m2817455087_MetadataUsageId;
extern const uint32_t RecorderNative_CheckStatus_m1797079174_MetadataUsageId;
extern const uint32_t RecorderNative_Dispose_m2399102437_MetadataUsageId;
extern const uint32_t RecorderNative_OnPermissionNotify_m1602265046_MetadataUsageId;
extern const uint32_t RecorderNative_OnStatusNotify_m1241673738_MetadataUsageId;
extern const uint32_t RecorderNative_RequestPermissions_m145179441_MetadataUsageId;
extern const uint32_t RecorderNative__cctor_m4191304865_MetadataUsageId;
extern const uint32_t RecorderNative__ctor_m3531444284_MetadataUsageId;
extern const uint32_t RecorderNative_add_PermissionStatusNotify_m1198043599_MetadataUsageId;
extern const uint32_t RecorderNative_close_m2655443745_MetadataUsageId;
extern const uint32_t RecorderNative_open_m1153077091_MetadataUsageId;
extern const uint32_t RecorderNative_remove_PermissionStatusNotify_m2796372_MetadataUsageId;
extern const uint32_t RecorderNative_setInputTexture_m2699022696_MetadataUsageId;
extern const uint32_t RecorderNative_setOutputFile_m3433460650_MetadataUsageId;
extern const uint32_t RecorderNative_setProfile_m804966195_MetadataUsageId;
extern const uint32_t RecorderNative_setVideoOrientation_m681130151_MetadataUsageId;
extern const uint32_t RecorderNative_setZoomMode_m1400342881_MetadataUsageId;
extern const uint32_t RecorderNative_set_RecorderNotify_m387417284_MetadataUsageId;
extern const uint32_t RecorderNative_start_m3620055390_MetadataUsageId;
extern const uint32_t RecorderNative_stop_m4117699869_MetadataUsageId;
extern const uint32_t RecorderNative_update_m275877000_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_AdjustPlane_m3755837101_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_Bind_m2432650143_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_Bind_m3745468836_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_ChangeHFlip_m3945789328_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_OnPreCull_m1655182515_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_ResizeGL_m130457591_MetadataUsageId;
extern const uint32_t RenderCameraBaseBehaviour_setRflag_m4166634966_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_AdjustTransform_m3180399727_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_FoundInFrame_m3569256786_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_OnTargetFound_m2385049192_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_OnTargetLost_m1561625043_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_QueryBehaviour_m2705374532_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_RegisterSelf_m1389438361_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_UnregisterSelf_m2366159564_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour__cctor_m1157412960_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_add_TargetFound_m179857582_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_add_TargetLost_m3044370804_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_remove_TargetFound_m1747294212_MetadataUsageId;
extern const uint32_t TargetAbstractBehaviour_remove_TargetLost_m1680756618_MetadataUsageId;
extern const uint32_t TargetInstance_Dispose_m1014673959_MetadataUsageId;
extern const uint32_t TargetInstance_OnPoseSet_m322428646_MetadataUsageId;
extern const uint32_t TargetInstance_QuaternionFromMatrix_m3746477350_MetadataUsageId;
extern const uint32_t TargetInstance__ctor_m957397788_MetadataUsageId;
extern const uint32_t TargetLoadCallbackC_BeginInvoke_m2203805578_MetadataUsageId;
extern const uint32_t Target_Dispose_m2769267903_MetadataUsageId;
extern const uint32_t Target_InitProperties_m1300233393_MetadataUsageId;
extern const uint32_t U3CStartAfterGrantedU3Ec__Iterator2_MoveNext_m351302603_MetadataUsageId;
extern const uint32_t U3CStartAfterGrantedU3Ec__Iterator2_Reset_m249356400_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_AutoScale_m1412679298_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_Awake_m1033491724_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_Init_m137519352_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_OnDestroy_m2270683404_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_Open_m2412370566_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_Update_m3714707289_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_add_VideoErrorEvent_m2520727510_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_add_VideoReachEndEvent_m3640431290_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_add_VideoReadyEvent_m2533316667_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_remove_VideoErrorEvent_m3436853483_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_remove_VideoReachEndEvent_m1970755214_MetadataUsageId;
extern const uint32_t VideoPlayerBaseBehaviour_remove_VideoReadyEvent_m83123560_MetadataUsageId;
extern const uint32_t VideoPlayer_CheckCallback_m2214265936_MetadataUsageId;
extern const uint32_t VideoPlayer_Close_m3121058624_MetadataUsageId;
extern const uint32_t VideoPlayer_CurrentPosition_m1909684705_MetadataUsageId;
extern const uint32_t VideoPlayer_Dispose_m399051954_MetadataUsageId;
extern const uint32_t VideoPlayer_Duration_m2821168845_MetadataUsageId;
extern const uint32_t VideoPlayer_Height_m1210268827_MetadataUsageId;
extern const uint32_t VideoPlayer_IsRenderTextureAvailable_m3280631960_MetadataUsageId;
extern const uint32_t VideoPlayer_OnStatusChange_m3051132405_MetadataUsageId;
extern const uint32_t VideoPlayer_Open_m3943144406_MetadataUsageId;
extern const uint32_t VideoPlayer_Pause_m2964156643_MetadataUsageId;
extern const uint32_t VideoPlayer_Play_m2073570464_MetadataUsageId;
extern const uint32_t VideoPlayer_Seek_m206908203_MetadataUsageId;
extern const uint32_t VideoPlayer_SetRenderTexture_m3415802502_MetadataUsageId;
extern const uint32_t VideoPlayer_SetVideoType_m2255920191_MetadataUsageId;
extern const uint32_t VideoPlayer_Stop_m997760821_MetadataUsageId;
extern const uint32_t VideoPlayer_UpdateFrame_m2944425153_MetadataUsageId;
extern const uint32_t VideoPlayer_Width_m1257430158_MetadataUsageId;
extern const uint32_t VideoPlayer__cctor_m3208687550_MetadataUsageId;
extern const uint32_t VideoPlayer__ctor_m2245464495_MetadataUsageId;
extern const uint32_t VideoPlayer_add_PlayerStatusChanged_m1585868895_MetadataUsageId;
extern const uint32_t VideoPlayer_get_Volume_m2467447207_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_PlayerStatusChanged_m2224334909_MetadataUsageId;
extern const uint32_t VideoPlayer_set_IsMultithreadCallback_m4167417734_MetadataUsageId;
extern const uint32_t VideoPlayer_set_Volume_m673762616_MetadataUsageId;

struct RealityPlaneBaseBehaviourU5BU5D_t2418639366;
struct Int32U5BU5D_t385246372;
struct SingleU5BU5D_t1444911251;
struct Vector3U5BU5D_t1718750761;


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
#ifndef MESHGENERATOR_T2269686654_H
#define MESHGENERATOR_T2269686654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.MeshGenerator
struct  MeshGenerator_t2269686654  : public RuntimeObject
{
public:
	// System.Int32 EasyAR.MeshGenerator::meshXNum
	int32_t ___meshXNum_0;
	// System.Int32 EasyAR.MeshGenerator::meshYNum
	int32_t ___meshYNum_1;
	// UnityEngine.Vector3[] EasyAR.MeshGenerator::vertices
	Vector3U5BU5D_t1718750761* ___vertices_2;
	// UnityEngine.Vector2[] EasyAR.MeshGenerator::uvs
	Vector2U5BU5D_t1457185986* ___uvs_3;
	// System.Int32[] EasyAR.MeshGenerator::triangles
	Int32U5BU5D_t385246372* ___triangles_4;
	// System.Single EasyAR.MeshGenerator::imageWidth
	float ___imageWidth_5;
	// System.Single EasyAR.MeshGenerator::imageHeight
	float ___imageHeight_6;
	// System.Boolean EasyAR.MeshGenerator::invertY
	bool ___invertY_7;

public:
	inline static int32_t get_offset_of_meshXNum_0() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___meshXNum_0)); }
	inline int32_t get_meshXNum_0() const { return ___meshXNum_0; }
	inline int32_t* get_address_of_meshXNum_0() { return &___meshXNum_0; }
	inline void set_meshXNum_0(int32_t value)
	{
		___meshXNum_0 = value;
	}

	inline static int32_t get_offset_of_meshYNum_1() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___meshYNum_1)); }
	inline int32_t get_meshYNum_1() const { return ___meshYNum_1; }
	inline int32_t* get_address_of_meshYNum_1() { return &___meshYNum_1; }
	inline void set_meshYNum_1(int32_t value)
	{
		___meshYNum_1 = value;
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___vertices_2)); }
	inline Vector3U5BU5D_t1718750761* get_vertices_2() const { return ___vertices_2; }
	inline Vector3U5BU5D_t1718750761** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(Vector3U5BU5D_t1718750761* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier((&___vertices_2), value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___uvs_3)); }
	inline Vector2U5BU5D_t1457185986* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_t1457185986** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_t1457185986* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((&___uvs_3), value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___triangles_4)); }
	inline Int32U5BU5D_t385246372* get_triangles_4() const { return ___triangles_4; }
	inline Int32U5BU5D_t385246372** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(Int32U5BU5D_t385246372* value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier((&___triangles_4), value);
	}

	inline static int32_t get_offset_of_imageWidth_5() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___imageWidth_5)); }
	inline float get_imageWidth_5() const { return ___imageWidth_5; }
	inline float* get_address_of_imageWidth_5() { return &___imageWidth_5; }
	inline void set_imageWidth_5(float value)
	{
		___imageWidth_5 = value;
	}

	inline static int32_t get_offset_of_imageHeight_6() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___imageHeight_6)); }
	inline float get_imageHeight_6() const { return ___imageHeight_6; }
	inline float* get_address_of_imageHeight_6() { return &___imageHeight_6; }
	inline void set_imageHeight_6(float value)
	{
		___imageHeight_6 = value;
	}

	inline static int32_t get_offset_of_invertY_7() { return static_cast<int32_t>(offsetof(MeshGenerator_t2269686654, ___invertY_7)); }
	inline bool get_invertY_7() const { return ___invertY_7; }
	inline bool* get_address_of_invertY_7() { return &___invertY_7; }
	inline void set_invertY_7(bool value)
	{
		___invertY_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHGENERATOR_T2269686654_H
#ifndef U3CSTARTAFTERGRANTEDU3EC__ITERATOR2_T3540723758_H
#define U3CSTARTAFTERGRANTEDU3EC__ITERATOR2_T3540723758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2
struct  U3CStartAfterGrantedU3Ec__Iterator2_t3540723758  : public RuntimeObject
{
public:
	// System.Int32 EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::$PC
	int32_t ___U24PC_0;
	// System.Object EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// EasyAR.RecorderBaseBehaviour EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::<>f__this
	RecorderBaseBehaviour_t2449616875 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CStartAfterGrantedU3Ec__Iterator2_t3540723758, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartAfterGrantedU3Ec__Iterator2_t3540723758, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CStartAfterGrantedU3Ec__Iterator2_t3540723758, ___U3CU3Ef__this_2)); }
	inline RecorderBaseBehaviour_t2449616875 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline RecorderBaseBehaviour_t2449616875 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(RecorderBaseBehaviour_t2449616875 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTAFTERGRANTEDU3EC__ITERATOR2_T3540723758_H
#ifndef BASENOTIFY_T3278162484_H
#define BASENOTIFY_T3278162484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/BaseNotify
struct  BaseNotify_t3278162484  : public RuntimeObject
{
public:
	// EasyAR.RecorderBaseBehaviour EasyAR.RecorderBaseBehaviour/BaseNotify::_parent
	RecorderBaseBehaviour_t2449616875 * ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(BaseNotify_t3278162484, ____parent_0)); }
	inline RecorderBaseBehaviour_t2449616875 * get__parent_0() const { return ____parent_0; }
	inline RecorderBaseBehaviour_t2449616875 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RecorderBaseBehaviour_t2449616875 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENOTIFY_T3278162484_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T2229004654_H
#define DICTIONARY_2_T2229004654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>
struct  Dictionary_2_t2229004654  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	RecorderNativeU5BU5D_t1141979856* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IRecorderNotifyU5BU5D_t479666454* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___keySlots_6)); }
	inline RecorderNativeU5BU5D_t1141979856* get_keySlots_6() const { return ___keySlots_6; }
	inline RecorderNativeU5BU5D_t1141979856** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(RecorderNativeU5BU5D_t1141979856* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___valueSlots_7)); }
	inline IRecorderNotifyU5BU5D_t479666454* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IRecorderNotifyU5BU5D_t479666454** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IRecorderNotifyU5BU5D_t479666454* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2229004654_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2373378390 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2229004654_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2373378390 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2373378390 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2373378390 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2229004654_H
#ifndef DICTIONARY_2_T435241803_H
#define DICTIONARY_2_T435241803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>
struct  Dictionary_2_t435241803  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TargetAbstractBehaviourU5BU5D_t2667571913* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___valueSlots_7)); }
	inline TargetAbstractBehaviourU5BU5D_t2667571913* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TargetAbstractBehaviourU5BU5D_t2667571913** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TargetAbstractBehaviourU5BU5D_t2667571913* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t435241803_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2271910757 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t435241803_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2271910757 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2271910757 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2271910757 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T435241803_H
#ifndef DICTIONARY_2_T2372942872_H
#define DICTIONARY_2_T2372942872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>
struct  Dictionary_2_t2372942872  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectTrackerU5BU5D_t2323566908* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___valueSlots_7)); }
	inline ObjectTrackerU5BU5D_t2323566908* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectTrackerU5BU5D_t2323566908** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectTrackerU5BU5D_t2323566908* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2372942872_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t313339076 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2372942872_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t313339076 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t313339076 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t313339076 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2372942872_H
#ifndef DICTIONARY_2_T907062036_H
#define DICTIONARY_2_T907062036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>
struct  Dictionary_2_t907062036  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	RecorderNativeU5BU5D_t1141979856* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___valueSlots_7)); }
	inline RecorderNativeU5BU5D_t1141979856* get_valueSlots_7() const { return ___valueSlots_7; }
	inline RecorderNativeU5BU5D_t1141979856** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(RecorderNativeU5BU5D_t1141979856* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t907062036_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3426719320 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t907062036_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3426719320 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3426719320 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3426719320 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T907062036_H
#ifndef DICTIONARY_2_T3464691576_H
#define DICTIONARY_2_T3464691576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>
struct  Dictionary_2_t3464691576  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	VideoPlayerU5BU5D_t1626256476* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___valueSlots_7)); }
	inline VideoPlayerU5BU5D_t1626256476* get_valueSlots_7() const { return ___valueSlots_7; }
	inline VideoPlayerU5BU5D_t1626256476** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(VideoPlayerU5BU5D_t1626256476* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3464691576_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3910995940 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3464691576_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3910995940 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3910995940 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3910995940 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3464691576_H
#ifndef LIST_1_T3792013057_H
#define LIST_1_T3792013057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EasyAR.ObjectTarget>
struct  List_1_t3792013057  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectTargetU5BU5D_t246046826* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3792013057, ____items_1)); }
	inline ObjectTargetU5BU5D_t246046826* get__items_1() const { return ____items_1; }
	inline ObjectTargetU5BU5D_t246046826** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectTargetU5BU5D_t246046826* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3792013057, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3792013057, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3792013057_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectTargetU5BU5D_t246046826* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3792013057_StaticFields, ___EmptyArray_4)); }
	inline ObjectTargetU5BU5D_t246046826* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectTargetU5BU5D_t246046826** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectTargetU5BU5D_t246046826* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3792013057_H
#ifndef LIST_1_T2539933966_H
#define LIST_1_T2539933966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>
struct  List_1_t2539933966  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectTargetBaseBehaviourU5BU5D_t4014961545* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2539933966, ____items_1)); }
	inline ObjectTargetBaseBehaviourU5BU5D_t4014961545* get__items_1() const { return ____items_1; }
	inline ObjectTargetBaseBehaviourU5BU5D_t4014961545** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectTargetBaseBehaviourU5BU5D_t4014961545* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2539933966, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2539933966, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2539933966_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectTargetBaseBehaviourU5BU5D_t4014961545* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2539933966_StaticFields, ___EmptyArray_4)); }
	inline ObjectTargetBaseBehaviourU5BU5D_t4014961545* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectTargetBaseBehaviourU5BU5D_t4014961545** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectTargetBaseBehaviourU5BU5D_t4014961545* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2539933966_H
#ifndef LIST_1_T2983154534_H
#define LIST_1_T2983154534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>
struct  List_1_t2983154534  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectTrackerBaseBehaviourU5BU5D_t709240017* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2983154534, ____items_1)); }
	inline ObjectTrackerBaseBehaviourU5BU5D_t709240017* get__items_1() const { return ____items_1; }
	inline ObjectTrackerBaseBehaviourU5BU5D_t709240017** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectTrackerBaseBehaviourU5BU5D_t709240017* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2983154534, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2983154534, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2983154534_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectTrackerBaseBehaviourU5BU5D_t709240017* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2983154534_StaticFields, ___EmptyArray_4)); }
	inline ObjectTrackerBaseBehaviourU5BU5D_t709240017* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectTrackerBaseBehaviourU5BU5D_t709240017** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectTrackerBaseBehaviourU5BU5D_t709240017* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2983154534_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
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
#endif // EXCEPTION_T_H
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
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef VECTOR2I_T2668621479_H
#define VECTOR2I_T2668621479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Vector2I
struct  Vector2I_t2668621479 
{
public:
	// System.Int32 EasyAR.Vector2I::x
	int32_t ___x_0;
	// System.Int32 EasyAR.Vector2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2I_t2668621479, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2I_t2668621479, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2I_T2668621479_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef KEYVALUEPAIR_2_T331709525_H
#define KEYVALUEPAIR_2_T331709525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>
struct  KeyValuePair_2_t331709525 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RecorderNative_t2685196317 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t331709525, ___key_0)); }
	inline RecorderNative_t2685196317 * get_key_0() const { return ___key_0; }
	inline RecorderNative_t2685196317 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RecorderNative_t2685196317 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t331709525, ___value_1)); }
	inline RuntimeObject* get_value_1() const { return ___value_1; }
	inline RuntimeObject** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T331709525_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef ENUMERATOR_T134210547_H
#define ENUMERATOR_T134210547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTargetBaseBehaviour>
struct  Enumerator_t134210547 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2539933966 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ObjectTargetBaseBehaviour_t1067859224 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t134210547, ___l_0)); }
	inline List_1_t2539933966 * get_l_0() const { return ___l_0; }
	inline List_1_t2539933966 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2539933966 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t134210547, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t134210547, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t134210547, ___current_3)); }
	inline ObjectTargetBaseBehaviour_t1067859224 * get_current_3() const { return ___current_3; }
	inline ObjectTargetBaseBehaviour_t1067859224 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ObjectTargetBaseBehaviour_t1067859224 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T134210547_H
#ifndef ENUMERATOR_T577431115_H
#define ENUMERATOR_T577431115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTrackerBaseBehaviour>
struct  Enumerator_t577431115 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2983154534 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ObjectTrackerBaseBehaviour_t1511079792 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t577431115, ___l_0)); }
	inline List_1_t2983154534 * get_l_0() const { return ___l_0; }
	inline List_1_t2983154534 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2983154534 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t577431115, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t577431115, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t577431115, ___current_3)); }
	inline ObjectTrackerBaseBehaviour_t1511079792 * get_current_3() const { return ___current_3; }
	inline ObjectTrackerBaseBehaviour_t1511079792 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ObjectTrackerBaseBehaviour_t1511079792 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T577431115_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef CENTERMODE_T929368346_H
#define CENTERMODE_T929368346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARCameraBaseBehaviour/CenterMode
struct  CenterMode_t929368346 
{
public:
	// System.Int32 EasyAR.ARCameraBaseBehaviour/CenterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CenterMode_t929368346, ___value___1)); }
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
#endif // CENTERMODE_T929368346_H
#ifndef BASE_T1500127977_H
#define BASE_T1500127977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Base
struct  Base_t1500127977  : public RuntimeObject
{
public:
	// System.IntPtr EasyAR.Base::Obj
	intptr_t ___Obj_0;
	// System.Boolean EasyAR.Base::Disposed
	bool ___Disposed_1;

public:
	inline static int32_t get_offset_of_Obj_0() { return static_cast<int32_t>(offsetof(Base_t1500127977, ___Obj_0)); }
	inline intptr_t get_Obj_0() const { return ___Obj_0; }
	inline intptr_t* get_address_of_Obj_0() { return &___Obj_0; }
	inline void set_Obj_0(intptr_t value)
	{
		___Obj_0 = value;
	}

	inline static int32_t get_offset_of_Disposed_1() { return static_cast<int32_t>(offsetof(Base_t1500127977, ___Disposed_1)); }
	inline bool get_Disposed_1() const { return ___Disposed_1; }
	inline bool* get_address_of_Disposed_1() { return &___Disposed_1; }
	inline void set_Disposed_1(bool value)
	{
		___Disposed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE_T1500127977_H
#ifndef DEVICE_T447371333_H
#define DEVICE_T447371333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice/Device
struct  Device_t447371333 
{
public:
	// System.Int32 EasyAR.CameraDevice/Device::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Device_t447371333, ___value___1)); }
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
#endif // DEVICE_T447371333_H
#ifndef DEVICETYPE_T1150497816_H
#define DEVICETYPE_T1150497816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDeviceBaseBehaviour/DeviceType
struct  DeviceType_t1150497816 
{
public:
	// System.Int32 EasyAR.CameraDeviceBaseBehaviour/DeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceType_t1150497816, ___value___1)); }
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
#endif // DEVICETYPE_T1150497816_H
#ifndef ROTATIONOFFSETMODE_T2929606258_H
#define ROTATIONOFFSETMODE_T2929606258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Engine/RotationOffsetMode
struct  RotationOffsetMode_t2929606258 
{
public:
	// System.Int32 EasyAR.Engine/RotationOffsetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RotationOffsetMode_t2929606258, ___value___1)); }
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
#endif // ROTATIONOFFSETMODE_T2929606258_H
#ifndef RECORDERPROFILE_T12318831_H
#define RECORDERPROFILE_T12318831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/RecorderProfile
struct  RecorderProfile_t12318831 
{
public:
	// System.Int32 EasyAR.RecorderBaseBehaviour/RecorderProfile::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecorderProfile_t12318831, ___value___1)); }
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
#endif // RECORDERPROFILE_T12318831_H
#ifndef RECORDERZOOMMODE_T1540499348_H
#define RECORDERZOOMMODE_T1540499348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/RecorderZoomMode
struct  RecorderZoomMode_t1540499348 
{
public:
	// System.Int32 EasyAR.RecorderBaseBehaviour/RecorderZoomMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecorderZoomMode_t1540499348, ___value___1)); }
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
#endif // RECORDERZOOMMODE_T1540499348_H
#ifndef STATUS_T3555915932_H
#define STATUS_T3555915932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/Status
struct  Status_t3555915932 
{
public:
	// System.Int32 EasyAR.RecorderBaseBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t3555915932, ___value___1)); }
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
#endif // STATUS_T3555915932_H
#ifndef PERMISSIONSTATUS_T1791714947_H
#define PERMISSIONSTATUS_T1791714947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/PermissionStatus
struct  PermissionStatus_t1791714947 
{
public:
	// System.Int32 EasyAR.RecorderNative/PermissionStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionStatus_t1791714947, ___value___1)); }
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
#endif // PERMISSIONSTATUS_T1791714947_H
#ifndef RECORDVIDEOORIENTATION_T249544986_H
#define RECORDVIDEOORIENTATION_T249544986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/RecordVideoOrientation
struct  RecordVideoOrientation_t249544986 
{
public:
	// System.Int32 EasyAR.RecorderNative/RecordVideoOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecordVideoOrientation_t249544986, ___value___1)); }
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
#endif // RECORDVIDEOORIENTATION_T249544986_H
#ifndef RECORDERPROFILE_T3033304125_H
#define RECORDERPROFILE_T3033304125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/RecorderProfile
struct  RecorderProfile_t3033304125 
{
public:
	// System.Int32 EasyAR.RecorderNative/RecorderProfile::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecorderProfile_t3033304125, ___value___1)); }
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
#endif // RECORDERPROFILE_T3033304125_H
#ifndef RECORDERSTATUS_T1317496905_H
#define RECORDERSTATUS_T1317496905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/RecorderStatus
struct  RecorderStatus_t1317496905 
{
public:
	// System.Int32 EasyAR.RecorderNative/RecorderStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecorderStatus_t1317496905, ___value___1)); }
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
#endif // RECORDERSTATUS_T1317496905_H
#ifndef RECORDERZOOMMODE_T3698861092_H
#define RECORDERZOOMMODE_T3698861092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/RecorderZoomMode
struct  RecorderZoomMode_t3698861092 
{
public:
	// System.Int32 EasyAR.RecorderNative/RecorderZoomMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RecorderZoomMode_t3698861092, ___value___1)); }
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
#endif // RECORDERZOOMMODE_T3698861092_H
#ifndef STORAGETYPE_T1027341324_H
#define STORAGETYPE_T1027341324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.StorageType
struct  StorageType_t1027341324 
{
public:
	// System.Int32 EasyAR.StorageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageType_t1027341324, ___value___1)); }
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
#endif // STORAGETYPE_T1027341324_H
#ifndef TRACKSTATUS_T1585428402_H
#define TRACKSTATUS_T1585428402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetInstance/TrackStatus
struct  TrackStatus_t1585428402 
{
public:
	// System.Int32 EasyAR.TargetInstance/TrackStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackStatus_t1585428402, ___value___1)); }
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
#endif // TRACKSTATUS_T1585428402_H
#ifndef PLAYERSTATUS_T1380209837_H
#define PLAYERSTATUS_T1380209837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayer/PlayerStatus
struct  PlayerStatus_t1380209837 
{
public:
	// System.Int32 EasyAR.VideoPlayer/PlayerStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayerStatus_t1380209837, ___value___1)); }
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
#endif // PLAYERSTATUS_T1380209837_H
#ifndef VIDEOTYPE_T1914702565_H
#define VIDEOTYPE_T1914702565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayer/VideoType
struct  VideoType_t1914702565 
{
public:
	// System.Int32 EasyAR.VideoPlayer/VideoType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoType_t1914702565, ___value___1)); }
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
#endif // VIDEOTYPE_T1914702565_H
#ifndef SCALEMODE_T605707036_H
#define SCALEMODE_T605707036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayerBaseBehaviour/ScaleMode
struct  ScaleMode_t605707036 
{
public:
	// System.Int32 EasyAR.VideoPlayerBaseBehaviour/ScaleMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScaleMode_t605707036, ___value___1)); }
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
#endif // SCALEMODE_T605707036_H
#ifndef SCALEPLANE_T3700096322_H
#define SCALEPLANE_T3700096322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayerBaseBehaviour/ScalePlane
struct  ScalePlane_t3700096322 
{
public:
	// System.Int32 EasyAR.VideoPlayerBaseBehaviour/ScalePlane::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScalePlane_t3700096322, ___value___1)); }
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
#endif // SCALEPLANE_T3700096322_H
#ifndef VIDEOTYPE_T2729381874_H
#define VIDEOTYPE_T2729381874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayerBaseBehaviour/VideoType
struct  VideoType_t2729381874 
{
public:
	// System.Int32 EasyAR.VideoPlayerBaseBehaviour/VideoType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VideoType_t2729381874, ___value___1)); }
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
#endif // VIDEOTYPE_T2729381874_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___1)); }
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
#endif // FILTERMODE_T3761284007_H
#ifndef FONTSTYLE_T82229486_H
#define FONTSTYLE_T82229486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t82229486 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t82229486, ___value___1)); }
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
#endif // FONTSTYLE_T82229486_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___1)); }
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
#endif // SCREENORIENTATION_T1705519499_H
#ifndef TEXTALIGNMENT_T822270402_H
#define TEXTALIGNMENT_T822270402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAlignment
struct  TextAlignment_t822270402 
{
public:
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAlignment_t822270402, ___value___1)); }
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
#endif // TEXTALIGNMENT_T822270402_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef ARSCENE_T1576376535_H
#define ARSCENE_T1576376535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARScene
struct  ARScene_t1576376535  : public Base_t1500127977
{
public:
	// System.Action`1<System.Int32> EasyAR.ARScene::TargetSelfLoad
	Action_1_t3123413348 * ___TargetSelfLoad_2;
	// System.Int32 EasyAR.ARScene::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_3;
	// System.String EasyAR.ARScene::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String EasyAR.ARScene::<Uid>k__BackingField
	String_t* ___U3CUidU3Ek__BackingField_5;
	// System.String EasyAR.ARScene::<MetaData>k__BackingField
	String_t* ___U3CMetaDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_TargetSelfLoad_2() { return static_cast<int32_t>(offsetof(ARScene_t1576376535, ___TargetSelfLoad_2)); }
	inline Action_1_t3123413348 * get_TargetSelfLoad_2() const { return ___TargetSelfLoad_2; }
	inline Action_1_t3123413348 ** get_address_of_TargetSelfLoad_2() { return &___TargetSelfLoad_2; }
	inline void set_TargetSelfLoad_2(Action_1_t3123413348 * value)
	{
		___TargetSelfLoad_2 = value;
		Il2CppCodeGenWriteBarrier((&___TargetSelfLoad_2), value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ARScene_t1576376535, ___U3CIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CIdU3Ek__BackingField_3() const { return ___U3CIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_3() { return &___U3CIdU3Ek__BackingField_3; }
	inline void set_U3CIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ARScene_t1576376535, ___U3CNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameU3Ek__BackingField_4() const { return ___U3CNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_4() { return &___U3CNameU3Ek__BackingField_4; }
	inline void set_U3CNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CUidU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARScene_t1576376535, ___U3CUidU3Ek__BackingField_5)); }
	inline String_t* get_U3CUidU3Ek__BackingField_5() const { return ___U3CUidU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUidU3Ek__BackingField_5() { return &___U3CUidU3Ek__BackingField_5; }
	inline void set_U3CUidU3Ek__BackingField_5(String_t* value)
	{
		___U3CUidU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUidU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CMetaDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARScene_t1576376535, ___U3CMetaDataU3Ek__BackingField_6)); }
	inline String_t* get_U3CMetaDataU3Ek__BackingField_6() const { return ___U3CMetaDataU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CMetaDataU3Ek__BackingField_6() { return &___U3CMetaDataU3Ek__BackingField_6; }
	inline void set_U3CMetaDataU3Ek__BackingField_6(String_t* value)
	{
		___U3CMetaDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaDataU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSCENE_T1576376535_H
#ifndef BARCODESCANNER_T2130144094_H
#define BARCODESCANNER_T2130144094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.BarCodeScanner
struct  BarCodeScanner_t2130144094  : public Base_t1500127977
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODESCANNER_T2130144094_H
#ifndef CAMERACALIBRATION_T367929843_H
#define CAMERACALIBRATION_T367929843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraCalibration
struct  CameraCalibration_t367929843  : public Base_t1500127977
{
public:
	// EasyAR.Vector2I EasyAR.CameraCalibration::<Size>k__BackingField
	Vector2I_t2668621479  ___U3CSizeU3Ek__BackingField_2;
	// UnityEngine.Vector2 EasyAR.CameraCalibration::<FocalLength>k__BackingField
	Vector2_t2156229523  ___U3CFocalLengthU3Ek__BackingField_3;
	// UnityEngine.Vector2 EasyAR.CameraCalibration::<PrinciplePoint>k__BackingField
	Vector2_t2156229523  ___U3CPrinciplePointU3Ek__BackingField_4;
	// UnityEngine.Vector4 EasyAR.CameraCalibration::<DistortionParam>k__BackingField
	Vector4_t3319028937  ___U3CDistortionParamU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraCalibration_t367929843, ___U3CSizeU3Ek__BackingField_2)); }
	inline Vector2I_t2668621479  get_U3CSizeU3Ek__BackingField_2() const { return ___U3CSizeU3Ek__BackingField_2; }
	inline Vector2I_t2668621479 * get_address_of_U3CSizeU3Ek__BackingField_2() { return &___U3CSizeU3Ek__BackingField_2; }
	inline void set_U3CSizeU3Ek__BackingField_2(Vector2I_t2668621479  value)
	{
		___U3CSizeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFocalLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CameraCalibration_t367929843, ___U3CFocalLengthU3Ek__BackingField_3)); }
	inline Vector2_t2156229523  get_U3CFocalLengthU3Ek__BackingField_3() const { return ___U3CFocalLengthU3Ek__BackingField_3; }
	inline Vector2_t2156229523 * get_address_of_U3CFocalLengthU3Ek__BackingField_3() { return &___U3CFocalLengthU3Ek__BackingField_3; }
	inline void set_U3CFocalLengthU3Ek__BackingField_3(Vector2_t2156229523  value)
	{
		___U3CFocalLengthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CPrinciplePointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CameraCalibration_t367929843, ___U3CPrinciplePointU3Ek__BackingField_4)); }
	inline Vector2_t2156229523  get_U3CPrinciplePointU3Ek__BackingField_4() const { return ___U3CPrinciplePointU3Ek__BackingField_4; }
	inline Vector2_t2156229523 * get_address_of_U3CPrinciplePointU3Ek__BackingField_4() { return &___U3CPrinciplePointU3Ek__BackingField_4; }
	inline void set_U3CPrinciplePointU3Ek__BackingField_4(Vector2_t2156229523  value)
	{
		___U3CPrinciplePointU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDistortionParamU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraCalibration_t367929843, ___U3CDistortionParamU3Ek__BackingField_5)); }
	inline Vector4_t3319028937  get_U3CDistortionParamU3Ek__BackingField_5() const { return ___U3CDistortionParamU3Ek__BackingField_5; }
	inline Vector4_t3319028937 * get_address_of_U3CDistortionParamU3Ek__BackingField_5() { return &___U3CDistortionParamU3Ek__BackingField_5; }
	inline void set_U3CDistortionParamU3Ek__BackingField_5(Vector4_t3319028937  value)
	{
		___U3CDistortionParamU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALIBRATION_T367929843_H
#ifndef CAMERADEVICE_T2123284476_H
#define CAMERADEVICE_T2123284476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice
struct  CameraDevice_t2123284476  : public Base_t1500127977
{
public:
	// EasyAR.CameraDevice/Device EasyAR.CameraDevice::OpenedDeviceIfOpened
	int32_t ___OpenedDeviceIfOpened_2;
	// System.Boolean EasyAR.CameraDevice::horizontalFlip
	bool ___horizontalFlip_3;
	// EasyAR.Vector2I EasyAR.CameraDevice::_size
	Vector2I_t2668621479  ____size_4;
	// EasyAR.CameraDevice/CallBack EasyAR.CameraDevice::_permissionCallBack
	CallBack_t1768481782 * ____permissionCallBack_5;
	// System.IntPtr EasyAR.CameraDevice::_permissionObjCallback
	intptr_t ____permissionObjCallback_6;
	// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String> EasyAR.CameraDevice::PermissionStatusNotify
	Action_2_t2317856371 * ___PermissionStatusNotify_8;
	// EasyAR.CameraCalibration EasyAR.CameraDevice::<Calibration>k__BackingField
	CameraCalibration_t367929843 * ___U3CCalibrationU3Ek__BackingField_9;
	// System.Single[] EasyAR.CameraDevice::<SupportedFPS>k__BackingField
	SingleU5BU5D_t1444911251* ___U3CSupportedFPSU3Ek__BackingField_10;
	// EasyAR.Vector2I[] EasyAR.CameraDevice::<SupportedSize>k__BackingField
	Vector2IU5BU5D_t2059196126* ___U3CSupportedSizeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_OpenedDeviceIfOpened_2() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___OpenedDeviceIfOpened_2)); }
	inline int32_t get_OpenedDeviceIfOpened_2() const { return ___OpenedDeviceIfOpened_2; }
	inline int32_t* get_address_of_OpenedDeviceIfOpened_2() { return &___OpenedDeviceIfOpened_2; }
	inline void set_OpenedDeviceIfOpened_2(int32_t value)
	{
		___OpenedDeviceIfOpened_2 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_3() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___horizontalFlip_3)); }
	inline bool get_horizontalFlip_3() const { return ___horizontalFlip_3; }
	inline bool* get_address_of_horizontalFlip_3() { return &___horizontalFlip_3; }
	inline void set_horizontalFlip_3(bool value)
	{
		___horizontalFlip_3 = value;
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____size_4)); }
	inline Vector2I_t2668621479  get__size_4() const { return ____size_4; }
	inline Vector2I_t2668621479 * get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(Vector2I_t2668621479  value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of__permissionCallBack_5() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____permissionCallBack_5)); }
	inline CallBack_t1768481782 * get__permissionCallBack_5() const { return ____permissionCallBack_5; }
	inline CallBack_t1768481782 ** get_address_of__permissionCallBack_5() { return &____permissionCallBack_5; }
	inline void set__permissionCallBack_5(CallBack_t1768481782 * value)
	{
		____permissionCallBack_5 = value;
		Il2CppCodeGenWriteBarrier((&____permissionCallBack_5), value);
	}

	inline static int32_t get_offset_of__permissionObjCallback_6() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ____permissionObjCallback_6)); }
	inline intptr_t get__permissionObjCallback_6() const { return ____permissionObjCallback_6; }
	inline intptr_t* get_address_of__permissionObjCallback_6() { return &____permissionObjCallback_6; }
	inline void set__permissionObjCallback_6(intptr_t value)
	{
		____permissionObjCallback_6 = value;
	}

	inline static int32_t get_offset_of_PermissionStatusNotify_8() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___PermissionStatusNotify_8)); }
	inline Action_2_t2317856371 * get_PermissionStatusNotify_8() const { return ___PermissionStatusNotify_8; }
	inline Action_2_t2317856371 ** get_address_of_PermissionStatusNotify_8() { return &___PermissionStatusNotify_8; }
	inline void set_PermissionStatusNotify_8(Action_2_t2317856371 * value)
	{
		___PermissionStatusNotify_8 = value;
		Il2CppCodeGenWriteBarrier((&___PermissionStatusNotify_8), value);
	}

	inline static int32_t get_offset_of_U3CCalibrationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CCalibrationU3Ek__BackingField_9)); }
	inline CameraCalibration_t367929843 * get_U3CCalibrationU3Ek__BackingField_9() const { return ___U3CCalibrationU3Ek__BackingField_9; }
	inline CameraCalibration_t367929843 ** get_address_of_U3CCalibrationU3Ek__BackingField_9() { return &___U3CCalibrationU3Ek__BackingField_9; }
	inline void set_U3CCalibrationU3Ek__BackingField_9(CameraCalibration_t367929843 * value)
	{
		___U3CCalibrationU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCalibrationU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_U3CSupportedFPSU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CSupportedFPSU3Ek__BackingField_10)); }
	inline SingleU5BU5D_t1444911251* get_U3CSupportedFPSU3Ek__BackingField_10() const { return ___U3CSupportedFPSU3Ek__BackingField_10; }
	inline SingleU5BU5D_t1444911251** get_address_of_U3CSupportedFPSU3Ek__BackingField_10() { return &___U3CSupportedFPSU3Ek__BackingField_10; }
	inline void set_U3CSupportedFPSU3Ek__BackingField_10(SingleU5BU5D_t1444911251* value)
	{
		___U3CSupportedFPSU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSupportedFPSU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CSupportedSizeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476, ___U3CSupportedSizeU3Ek__BackingField_11)); }
	inline Vector2IU5BU5D_t2059196126* get_U3CSupportedSizeU3Ek__BackingField_11() const { return ___U3CSupportedSizeU3Ek__BackingField_11; }
	inline Vector2IU5BU5D_t2059196126** get_address_of_U3CSupportedSizeU3Ek__BackingField_11() { return &___U3CSupportedSizeU3Ek__BackingField_11; }
	inline void set_U3CSupportedSizeU3Ek__BackingField_11(Vector2IU5BU5D_t2059196126* value)
	{
		___U3CSupportedSizeU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSupportedSizeU3Ek__BackingField_11), value);
	}
};

struct CameraDevice_t2123284476_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice> EasyAR.CameraDevice::cameras
	Dictionary_2_t345150195 * ___cameras_7;

public:
	inline static int32_t get_offset_of_cameras_7() { return static_cast<int32_t>(offsetof(CameraDevice_t2123284476_StaticFields, ___cameras_7)); }
	inline Dictionary_2_t345150195 * get_cameras_7() const { return ___cameras_7; }
	inline Dictionary_2_t345150195 ** get_address_of_cameras_7() { return &___cameras_7; }
	inline void set_cameras_7(Dictionary_2_t345150195 * value)
	{
		___cameras_7 = value;
		Il2CppCodeGenWriteBarrier((&___cameras_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_T2123284476_H
#ifndef CAMERAFRAMESTREAMER_T4175238345_H
#define CAMERAFRAMESTREAMER_T4175238345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraFrameStreamer
struct  CameraFrameStreamer_t4175238345  : public Base_t1500127977
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAFRAMESTREAMER_T4175238345_H
#ifndef ENGINE_T1017580842_H
#define ENGINE_T1017580842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Engine
struct  Engine_t1017580842  : public RuntimeObject
{
public:

public:
};

struct Engine_t1017580842_StaticFields
{
public:
	// EasyAR.IEngineNative EasyAR.Engine::instance
	RuntimeObject* ___instance_0;
	// System.Int32 EasyAR.Engine::Rotation
	int32_t ___Rotation_1;
	// UnityEngine.ScreenOrientation EasyAR.Engine::_orientation
	int32_t ____orientation_2;
	// System.Boolean EasyAR.Engine::initialized
	bool ___initialized_3;
	// EasyAR.Engine/RotationOffsetMode EasyAR.Engine::rotationOffset
	int32_t ___rotationOffset_4;
	// System.Boolean EasyAR.Engine::rotationOffsetSet
	bool ___rotationOffsetSet_5;
	// System.Boolean EasyAR.Engine::isPro
	bool ___isPro_6;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___instance_0)); }
	inline RuntimeObject* get_instance_0() const { return ___instance_0; }
	inline RuntimeObject** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(RuntimeObject* value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___Rotation_1)); }
	inline int32_t get_Rotation_1() const { return ___Rotation_1; }
	inline int32_t* get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(int32_t value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of__orientation_2() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ____orientation_2)); }
	inline int32_t get__orientation_2() const { return ____orientation_2; }
	inline int32_t* get_address_of__orientation_2() { return &____orientation_2; }
	inline void set__orientation_2(int32_t value)
	{
		____orientation_2 = value;
	}

	inline static int32_t get_offset_of_initialized_3() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___initialized_3)); }
	inline bool get_initialized_3() const { return ___initialized_3; }
	inline bool* get_address_of_initialized_3() { return &___initialized_3; }
	inline void set_initialized_3(bool value)
	{
		___initialized_3 = value;
	}

	inline static int32_t get_offset_of_rotationOffset_4() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___rotationOffset_4)); }
	inline int32_t get_rotationOffset_4() const { return ___rotationOffset_4; }
	inline int32_t* get_address_of_rotationOffset_4() { return &___rotationOffset_4; }
	inline void set_rotationOffset_4(int32_t value)
	{
		___rotationOffset_4 = value;
	}

	inline static int32_t get_offset_of_rotationOffsetSet_5() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___rotationOffsetSet_5)); }
	inline bool get_rotationOffsetSet_5() const { return ___rotationOffsetSet_5; }
	inline bool* get_address_of_rotationOffsetSet_5() { return &___rotationOffsetSet_5; }
	inline void set_rotationOffsetSet_5(bool value)
	{
		___rotationOffsetSet_5 = value;
	}

	inline static int32_t get_offset_of_isPro_6() { return static_cast<int32_t>(offsetof(Engine_t1017580842_StaticFields, ___isPro_6)); }
	inline bool get_isPro_6() const { return ___isPro_6; }
	inline bool* get_address_of_isPro_6() { return &___isPro_6; }
	inline void set_isPro_6(bool value)
	{
		___isPro_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENGINE_T1017580842_H
#ifndef IMAGETARGET_T46103797_H
#define IMAGETARGET_T46103797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTarget
struct  ImageTarget_t46103797  : public Base_t1500127977
{
public:
	// EasyAR.StorageType EasyAR.ImageTarget::BehaviourStorage
	int32_t ___BehaviourStorage_2;
	// System.String EasyAR.ImageTarget::BehaviourPath
	String_t* ___BehaviourPath_3;
	// System.Action`1<System.Int32> EasyAR.ImageTarget::TargetSelfLoad
	Action_1_t3123413348 * ___TargetSelfLoad_4;
	// System.Int32 EasyAR.ImageTarget::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// System.String EasyAR.ImageTarget::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String EasyAR.ImageTarget::<Uid>k__BackingField
	String_t* ___U3CUidU3Ek__BackingField_7;
	// System.String EasyAR.ImageTarget::<MetaData>k__BackingField
	String_t* ___U3CMetaDataU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_BehaviourStorage_2() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___BehaviourStorage_2)); }
	inline int32_t get_BehaviourStorage_2() const { return ___BehaviourStorage_2; }
	inline int32_t* get_address_of_BehaviourStorage_2() { return &___BehaviourStorage_2; }
	inline void set_BehaviourStorage_2(int32_t value)
	{
		___BehaviourStorage_2 = value;
	}

	inline static int32_t get_offset_of_BehaviourPath_3() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___BehaviourPath_3)); }
	inline String_t* get_BehaviourPath_3() const { return ___BehaviourPath_3; }
	inline String_t** get_address_of_BehaviourPath_3() { return &___BehaviourPath_3; }
	inline void set_BehaviourPath_3(String_t* value)
	{
		___BehaviourPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourPath_3), value);
	}

	inline static int32_t get_offset_of_TargetSelfLoad_4() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___TargetSelfLoad_4)); }
	inline Action_1_t3123413348 * get_TargetSelfLoad_4() const { return ___TargetSelfLoad_4; }
	inline Action_1_t3123413348 ** get_address_of_TargetSelfLoad_4() { return &___TargetSelfLoad_4; }
	inline void set_TargetSelfLoad_4(Action_1_t3123413348 * value)
	{
		___TargetSelfLoad_4 = value;
		Il2CppCodeGenWriteBarrier((&___TargetSelfLoad_4), value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CUidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___U3CUidU3Ek__BackingField_7)); }
	inline String_t* get_U3CUidU3Ek__BackingField_7() const { return ___U3CUidU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUidU3Ek__BackingField_7() { return &___U3CUidU3Ek__BackingField_7; }
	inline void set_U3CUidU3Ek__BackingField_7(String_t* value)
	{
		___U3CUidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUidU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CMetaDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ImageTarget_t46103797, ___U3CMetaDataU3Ek__BackingField_8)); }
	inline String_t* get_U3CMetaDataU3Ek__BackingField_8() const { return ___U3CMetaDataU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CMetaDataU3Ek__BackingField_8() { return &___U3CMetaDataU3Ek__BackingField_8; }
	inline void set_U3CMetaDataU3Ek__BackingField_8(String_t* value)
	{
		___U3CMetaDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaDataU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGET_T46103797_H
#ifndef OBJECTTARGET_T2319938315_H
#define OBJECTTARGET_T2319938315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTarget
struct  ObjectTarget_t2319938315  : public Base_t1500127977
{
public:
	// EasyAR.StorageType EasyAR.ObjectTarget::BehaviourStorage
	int32_t ___BehaviourStorage_2;
	// System.String EasyAR.ObjectTarget::BehaviourPath
	String_t* ___BehaviourPath_3;
	// System.Action`1<System.Int32> EasyAR.ObjectTarget::TargetSelfLoad
	Action_1_t3123413348 * ___TargetSelfLoad_4;
	// System.Int32 EasyAR.ObjectTarget::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
	// System.String EasyAR.ObjectTarget::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String EasyAR.ObjectTarget::<Uid>k__BackingField
	String_t* ___U3CUidU3Ek__BackingField_7;
	// System.String EasyAR.ObjectTarget::<MetaData>k__BackingField
	String_t* ___U3CMetaDataU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_BehaviourStorage_2() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___BehaviourStorage_2)); }
	inline int32_t get_BehaviourStorage_2() const { return ___BehaviourStorage_2; }
	inline int32_t* get_address_of_BehaviourStorage_2() { return &___BehaviourStorage_2; }
	inline void set_BehaviourStorage_2(int32_t value)
	{
		___BehaviourStorage_2 = value;
	}

	inline static int32_t get_offset_of_BehaviourPath_3() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___BehaviourPath_3)); }
	inline String_t* get_BehaviourPath_3() const { return ___BehaviourPath_3; }
	inline String_t** get_address_of_BehaviourPath_3() { return &___BehaviourPath_3; }
	inline void set_BehaviourPath_3(String_t* value)
	{
		___BehaviourPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourPath_3), value);
	}

	inline static int32_t get_offset_of_TargetSelfLoad_4() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___TargetSelfLoad_4)); }
	inline Action_1_t3123413348 * get_TargetSelfLoad_4() const { return ___TargetSelfLoad_4; }
	inline Action_1_t3123413348 ** get_address_of_TargetSelfLoad_4() { return &___TargetSelfLoad_4; }
	inline void set_TargetSelfLoad_4(Action_1_t3123413348 * value)
	{
		___TargetSelfLoad_4 = value;
		Il2CppCodeGenWriteBarrier((&___TargetSelfLoad_4), value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CUidU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CUidU3Ek__BackingField_7)); }
	inline String_t* get_U3CUidU3Ek__BackingField_7() const { return ___U3CUidU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CUidU3Ek__BackingField_7() { return &___U3CUidU3Ek__BackingField_7; }
	inline void set_U3CUidU3Ek__BackingField_7(String_t* value)
	{
		___U3CUidU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUidU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CMetaDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ObjectTarget_t2319938315, ___U3CMetaDataU3Ek__BackingField_8)); }
	inline String_t* get_U3CMetaDataU3Ek__BackingField_8() const { return ___U3CMetaDataU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CMetaDataU3Ek__BackingField_8() { return &___U3CMetaDataU3Ek__BackingField_8; }
	inline void set_U3CMetaDataU3Ek__BackingField_8(String_t* value)
	{
		___U3CMetaDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaDataU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGET_T2319938315_H
#ifndef OBJECTTRACKER_T4151077153_H
#define OBJECTTRACKER_T4151077153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTracker
struct  ObjectTracker_t4151077153  : public Base_t1500127977
{
public:
	// System.Boolean EasyAR.ObjectTracker::IsCheckNeeded
	bool ___IsCheckNeeded_2;
	// System.IntPtr EasyAR.ObjectTracker::_objCallbackLoad
	intptr_t ____objCallbackLoad_3;
	// System.IntPtr EasyAR.ObjectTracker::_objCallbackUnload
	intptr_t ____objCallbackUnload_4;
	// EasyAR.ObjectTracker/TargetLoadCallbackC EasyAR.ObjectTracker::_onload
	TargetLoadCallbackC_t557056227 * ____onload_5;
	// EasyAR.ObjectTracker/TargetLoadCallbackC EasyAR.ObjectTracker::_onunload
	TargetLoadCallbackC_t557056227 * ____onunload_6;
	// System.Boolean EasyAR.ObjectTracker::_isMultithreadCallback
	bool ____isMultithreadCallback_7;
	// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean> EasyAR.ObjectTracker::TargetLoad
	Action_3_t4037846343 * ___TargetLoad_9;
	// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean> EasyAR.ObjectTracker::TargetUnload
	Action_3_t4037846343 * ___TargetUnload_10;

public:
	inline static int32_t get_offset_of_IsCheckNeeded_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ___IsCheckNeeded_2)); }
	inline bool get_IsCheckNeeded_2() const { return ___IsCheckNeeded_2; }
	inline bool* get_address_of_IsCheckNeeded_2() { return &___IsCheckNeeded_2; }
	inline void set_IsCheckNeeded_2(bool value)
	{
		___IsCheckNeeded_2 = value;
	}

	inline static int32_t get_offset_of__objCallbackLoad_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ____objCallbackLoad_3)); }
	inline intptr_t get__objCallbackLoad_3() const { return ____objCallbackLoad_3; }
	inline intptr_t* get_address_of__objCallbackLoad_3() { return &____objCallbackLoad_3; }
	inline void set__objCallbackLoad_3(intptr_t value)
	{
		____objCallbackLoad_3 = value;
	}

	inline static int32_t get_offset_of__objCallbackUnload_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ____objCallbackUnload_4)); }
	inline intptr_t get__objCallbackUnload_4() const { return ____objCallbackUnload_4; }
	inline intptr_t* get_address_of__objCallbackUnload_4() { return &____objCallbackUnload_4; }
	inline void set__objCallbackUnload_4(intptr_t value)
	{
		____objCallbackUnload_4 = value;
	}

	inline static int32_t get_offset_of__onload_5() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ____onload_5)); }
	inline TargetLoadCallbackC_t557056227 * get__onload_5() const { return ____onload_5; }
	inline TargetLoadCallbackC_t557056227 ** get_address_of__onload_5() { return &____onload_5; }
	inline void set__onload_5(TargetLoadCallbackC_t557056227 * value)
	{
		____onload_5 = value;
		Il2CppCodeGenWriteBarrier((&____onload_5), value);
	}

	inline static int32_t get_offset_of__onunload_6() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ____onunload_6)); }
	inline TargetLoadCallbackC_t557056227 * get__onunload_6() const { return ____onunload_6; }
	inline TargetLoadCallbackC_t557056227 ** get_address_of__onunload_6() { return &____onunload_6; }
	inline void set__onunload_6(TargetLoadCallbackC_t557056227 * value)
	{
		____onunload_6 = value;
		Il2CppCodeGenWriteBarrier((&____onunload_6), value);
	}

	inline static int32_t get_offset_of__isMultithreadCallback_7() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ____isMultithreadCallback_7)); }
	inline bool get__isMultithreadCallback_7() const { return ____isMultithreadCallback_7; }
	inline bool* get_address_of__isMultithreadCallback_7() { return &____isMultithreadCallback_7; }
	inline void set__isMultithreadCallback_7(bool value)
	{
		____isMultithreadCallback_7 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_9() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ___TargetLoad_9)); }
	inline Action_3_t4037846343 * get_TargetLoad_9() const { return ___TargetLoad_9; }
	inline Action_3_t4037846343 ** get_address_of_TargetLoad_9() { return &___TargetLoad_9; }
	inline void set_TargetLoad_9(Action_3_t4037846343 * value)
	{
		___TargetLoad_9 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLoad_9), value);
	}

	inline static int32_t get_offset_of_TargetUnload_10() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153, ___TargetUnload_10)); }
	inline Action_3_t4037846343 * get_TargetUnload_10() const { return ___TargetUnload_10; }
	inline Action_3_t4037846343 ** get_address_of_TargetUnload_10() { return &___TargetUnload_10; }
	inline void set_TargetUnload_10(Action_3_t4037846343 * value)
	{
		___TargetUnload_10 = value;
		Il2CppCodeGenWriteBarrier((&___TargetUnload_10), value);
	}
};

struct ObjectTracker_t4151077153_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker> EasyAR.ObjectTracker::trackers
	Dictionary_2_t2372942872 * ___trackers_8;

public:
	inline static int32_t get_offset_of_trackers_8() { return static_cast<int32_t>(offsetof(ObjectTracker_t4151077153_StaticFields, ___trackers_8)); }
	inline Dictionary_2_t2372942872 * get_trackers_8() const { return ___trackers_8; }
	inline Dictionary_2_t2372942872 ** get_address_of_trackers_8() { return &___trackers_8; }
	inline void set_trackers_8(Dictionary_2_t2372942872 * value)
	{
		___trackers_8 = value;
		Il2CppCodeGenWriteBarrier((&___trackers_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKER_T4151077153_H
#ifndef RECORDERNATIVE_T2685196317_H
#define RECORDERNATIVE_T2685196317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative
struct  RecorderNative_t2685196317  : public Base_t1500127977
{
public:
	// EasyAR.RecorderNative/CallBack EasyAR.RecorderNative::_callBack
	CallBack_t877084370 * ____callBack_5;
	// System.IntPtr EasyAR.RecorderNative::_objCallback
	intptr_t ____objCallback_6;
	// EasyAR.RecorderNative/CallBack EasyAR.RecorderNative::_permissionCallBack
	CallBack_t877084370 * ____permissionCallBack_7;
	// System.IntPtr EasyAR.RecorderNative::_permissionObjCallback
	intptr_t ____permissionObjCallback_8;
	// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String> EasyAR.RecorderNative::PermissionStatusNotify
	Action_2_t587925928 * ___PermissionStatusNotify_9;

public:
	inline static int32_t get_offset_of__callBack_5() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____callBack_5)); }
	inline CallBack_t877084370 * get__callBack_5() const { return ____callBack_5; }
	inline CallBack_t877084370 ** get_address_of__callBack_5() { return &____callBack_5; }
	inline void set__callBack_5(CallBack_t877084370 * value)
	{
		____callBack_5 = value;
		Il2CppCodeGenWriteBarrier((&____callBack_5), value);
	}

	inline static int32_t get_offset_of__objCallback_6() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____objCallback_6)); }
	inline intptr_t get__objCallback_6() const { return ____objCallback_6; }
	inline intptr_t* get_address_of__objCallback_6() { return &____objCallback_6; }
	inline void set__objCallback_6(intptr_t value)
	{
		____objCallback_6 = value;
	}

	inline static int32_t get_offset_of__permissionCallBack_7() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____permissionCallBack_7)); }
	inline CallBack_t877084370 * get__permissionCallBack_7() const { return ____permissionCallBack_7; }
	inline CallBack_t877084370 ** get_address_of__permissionCallBack_7() { return &____permissionCallBack_7; }
	inline void set__permissionCallBack_7(CallBack_t877084370 * value)
	{
		____permissionCallBack_7 = value;
		Il2CppCodeGenWriteBarrier((&____permissionCallBack_7), value);
	}

	inline static int32_t get_offset_of__permissionObjCallback_8() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ____permissionObjCallback_8)); }
	inline intptr_t get__permissionObjCallback_8() const { return ____permissionObjCallback_8; }
	inline intptr_t* get_address_of__permissionObjCallback_8() { return &____permissionObjCallback_8; }
	inline void set__permissionObjCallback_8(intptr_t value)
	{
		____permissionObjCallback_8 = value;
	}

	inline static int32_t get_offset_of_PermissionStatusNotify_9() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317, ___PermissionStatusNotify_9)); }
	inline Action_2_t587925928 * get_PermissionStatusNotify_9() const { return ___PermissionStatusNotify_9; }
	inline Action_2_t587925928 ** get_address_of_PermissionStatusNotify_9() { return &___PermissionStatusNotify_9; }
	inline void set_PermissionStatusNotify_9(Action_2_t587925928 * value)
	{
		___PermissionStatusNotify_9 = value;
		Il2CppCodeGenWriteBarrier((&___PermissionStatusNotify_9), value);
	}
};

struct RecorderNative_t2685196317_StaticFields
{
public:
	// System.Object EasyAR.RecorderNative::_mutex
	RuntimeObject * ____mutex_2;
	// System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify> EasyAR.RecorderNative::_notifys
	Dictionary_2_t2229004654 * ____notifys_3;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative> EasyAR.RecorderNative::recorders
	Dictionary_2_t907062036 * ___recorders_4;

public:
	inline static int32_t get_offset_of__mutex_2() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ____mutex_2)); }
	inline RuntimeObject * get__mutex_2() const { return ____mutex_2; }
	inline RuntimeObject ** get_address_of__mutex_2() { return &____mutex_2; }
	inline void set__mutex_2(RuntimeObject * value)
	{
		____mutex_2 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_2), value);
	}

	inline static int32_t get_offset_of__notifys_3() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ____notifys_3)); }
	inline Dictionary_2_t2229004654 * get__notifys_3() const { return ____notifys_3; }
	inline Dictionary_2_t2229004654 ** get_address_of__notifys_3() { return &____notifys_3; }
	inline void set__notifys_3(Dictionary_2_t2229004654 * value)
	{
		____notifys_3 = value;
		Il2CppCodeGenWriteBarrier((&____notifys_3), value);
	}

	inline static int32_t get_offset_of_recorders_4() { return static_cast<int32_t>(offsetof(RecorderNative_t2685196317_StaticFields, ___recorders_4)); }
	inline Dictionary_2_t907062036 * get_recorders_4() const { return ___recorders_4; }
	inline Dictionary_2_t907062036 ** get_address_of_recorders_4() { return &___recorders_4; }
	inline void set_recorders_4(Dictionary_2_t907062036 * value)
	{
		___recorders_4 = value;
		Il2CppCodeGenWriteBarrier((&___recorders_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDERNATIVE_T2685196317_H
#ifndef TARGET_T4113221852_H
#define TARGET_T4113221852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.Target
struct  Target_t4113221852  : public Base_t1500127977
{
public:
	// System.Int32 EasyAR.Target::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;
	// System.String EasyAR.Target::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.String EasyAR.Target::<Uid>k__BackingField
	String_t* ___U3CUidU3Ek__BackingField_4;
	// System.String EasyAR.Target::<MetaData>k__BackingField
	String_t* ___U3CMetaDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Target_t4113221852, ___U3CIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Target_t4113221852, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUidU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Target_t4113221852, ___U3CUidU3Ek__BackingField_4)); }
	inline String_t* get_U3CUidU3Ek__BackingField_4() const { return ___U3CUidU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUidU3Ek__BackingField_4() { return &___U3CUidU3Ek__BackingField_4; }
	inline void set_U3CUidU3Ek__BackingField_4(String_t* value)
	{
		___U3CUidU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUidU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CMetaDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Target_t4113221852, ___U3CMetaDataU3Ek__BackingField_5)); }
	inline String_t* get_U3CMetaDataU3Ek__BackingField_5() const { return ___U3CMetaDataU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CMetaDataU3Ek__BackingField_5() { return &___U3CMetaDataU3Ek__BackingField_5; }
	inline void set_U3CMetaDataU3Ek__BackingField_5(String_t* value)
	{
		___U3CMetaDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMetaDataU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGET_T4113221852_H
#ifndef TARGETINSTANCE_T1849971935_H
#define TARGETINSTANCE_T1849971935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetInstance
struct  TargetInstance_t1849971935  : public Base_t1500127977
{
public:
	// EasyAR.TargetInstance/TrackStatus EasyAR.TargetInstance::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// EasyAR.Target EasyAR.TargetInstance::<Target>k__BackingField
	Target_t4113221852 * ___U3CTargetU3Ek__BackingField_3;
	// UnityEngine.Quaternion EasyAR.TargetInstance::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 EasyAR.TargetInstance::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CTargetU3Ek__BackingField_3)); }
	inline Target_t4113221852 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline Target_t4113221852 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(Target_t4113221852 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTargetU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CRotationU3Ek__BackingField_4)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TargetInstance_t1849971935, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINSTANCE_T1849971935_H
#ifndef VIDEOPLAYER_T947858561_H
#define VIDEOPLAYER_T947858561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayer
struct  VideoPlayer_t947858561  : public Base_t1500127977
{
public:
	// System.Boolean EasyAR.VideoPlayer::IsCheckNeeded
	bool ___IsCheckNeeded_2;
	// System.IntPtr EasyAR.VideoPlayer::_objCallback
	intptr_t ____objCallback_4;
	// EasyAR.VideoPlayer/CallBack EasyAR.VideoPlayer::_callBack
	CallBack_t3619306023 * ____callBack_5;
	// System.Boolean EasyAR.VideoPlayer::_isMultithreadCallback
	bool ____isMultithreadCallback_6;
	// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus> EasyAR.VideoPlayer::PlayerStatusChanged
	Action_2_t3847396958 * ___PlayerStatusChanged_7;

public:
	inline static int32_t get_offset_of_IsCheckNeeded_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561, ___IsCheckNeeded_2)); }
	inline bool get_IsCheckNeeded_2() const { return ___IsCheckNeeded_2; }
	inline bool* get_address_of_IsCheckNeeded_2() { return &___IsCheckNeeded_2; }
	inline void set_IsCheckNeeded_2(bool value)
	{
		___IsCheckNeeded_2 = value;
	}

	inline static int32_t get_offset_of__objCallback_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561, ____objCallback_4)); }
	inline intptr_t get__objCallback_4() const { return ____objCallback_4; }
	inline intptr_t* get_address_of__objCallback_4() { return &____objCallback_4; }
	inline void set__objCallback_4(intptr_t value)
	{
		____objCallback_4 = value;
	}

	inline static int32_t get_offset_of__callBack_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561, ____callBack_5)); }
	inline CallBack_t3619306023 * get__callBack_5() const { return ____callBack_5; }
	inline CallBack_t3619306023 ** get_address_of__callBack_5() { return &____callBack_5; }
	inline void set__callBack_5(CallBack_t3619306023 * value)
	{
		____callBack_5 = value;
		Il2CppCodeGenWriteBarrier((&____callBack_5), value);
	}

	inline static int32_t get_offset_of__isMultithreadCallback_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561, ____isMultithreadCallback_6)); }
	inline bool get__isMultithreadCallback_6() const { return ____isMultithreadCallback_6; }
	inline bool* get_address_of__isMultithreadCallback_6() { return &____isMultithreadCallback_6; }
	inline void set__isMultithreadCallback_6(bool value)
	{
		____isMultithreadCallback_6 = value;
	}

	inline static int32_t get_offset_of_PlayerStatusChanged_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561, ___PlayerStatusChanged_7)); }
	inline Action_2_t3847396958 * get_PlayerStatusChanged_7() const { return ___PlayerStatusChanged_7; }
	inline Action_2_t3847396958 ** get_address_of_PlayerStatusChanged_7() { return &___PlayerStatusChanged_7; }
	inline void set_PlayerStatusChanged_7(Action_2_t3847396958 * value)
	{
		___PlayerStatusChanged_7 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerStatusChanged_7), value);
	}
};

struct VideoPlayer_t947858561_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer> EasyAR.VideoPlayer::players
	Dictionary_2_t3464691576 * ___players_3;

public:
	inline static int32_t get_offset_of_players_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t947858561_StaticFields, ___players_3)); }
	inline Dictionary_2_t3464691576 * get_players_3() const { return ___players_3; }
	inline Dictionary_2_t3464691576 ** get_address_of_players_3() { return &___players_3; }
	inline void set_players_3(Dictionary_2_t3464691576 * value)
	{
		___players_3 = value;
		Il2CppCodeGenWriteBarrier((&___players_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T947858561_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
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
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
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
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
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
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t2129269699 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t2129269699 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef TARGETLOADCALLBACKC_T557056227_H
#define TARGETLOADCALLBACKC_T557056227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTracker/TargetLoadCallbackC
struct  TargetLoadCallbackC_t557056227  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETLOADCALLBACKC_T557056227_H
#ifndef CALLBACK_T877084370_H
#define CALLBACK_T877084370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderNative/CallBack
struct  CallBack_t877084370  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T877084370_H
#ifndef CALLBACK_T3619306023_H
#define CALLBACK_T3619306023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayer/CallBack
struct  CallBack_t3619306023  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T3619306023_H
#ifndef ACTION_1_T1718996067_H
#define ACTION_1_T1718996067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<EasyAR.TargetAbstractBehaviour>
struct  Action_1_t1718996067  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1718996067_H
#ifndef ACTION_1_T3123413348_H
#define ACTION_1_T3123413348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Int32>
struct  Action_1_t3123413348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3123413348_H
#ifndef ACTION_2_T1793738231_H
#define ACTION_2_T1793738231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean>
struct  Action_2_t1793738231  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1793738231_H
#ifndef ACTION_2_T1241929155_H
#define ACTION_2_T1241929155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D>
struct  Action_2_t1241929155  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T1241929155_H
#ifndef ACTION_2_T4217937665_H
#define ACTION_2_T4217937665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>
struct  Action_2_t4217937665  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T4217937665_H
#ifndef ACTION_2_T2038586088_H
#define ACTION_2_T2038586088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>
struct  Action_2_t2038586088  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2038586088_H
#ifndef ACTION_2_T587925928_H
#define ACTION_2_T587925928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>
struct  Action_2_t587925928  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T587925928_H
#ifndef ACTION_2_T3847396958_H
#define ACTION_2_T3847396958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>
struct  Action_2_t3847396958  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3847396958_H
#ifndef ACTION_3_T1170689986_H
#define ACTION_3_T1170689986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>
struct  Action_3_t1170689986  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T1170689986_H
#ifndef ACTION_3_T4037846343_H
#define ACTION_3_T4037846343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>
struct  Action_3_t4037846343  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T4037846343_H
#ifndef ACTION_3_T1098563045_H
#define ACTION_3_T1098563045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>
struct  Action_3_t1098563045  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T1098563045_H
#ifndef ACTION_4_T1630973389_H
#define ACTION_4_T1630973389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct  Action_4_t1630973389  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_4_T1630973389_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef EVENTHANDLER_T1348719766_H
#define EVENTHANDLER_T1348719766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1348719766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1348719766_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ARCAMERABASEBEHAVIOUR_T712094156_H
#define ARCAMERABASEBEHAVIOUR_T712094156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARCameraBaseBehaviour
struct  ARCameraBaseBehaviour_t712094156  : public MonoBehaviour_t3962482529
{
public:
	// EasyAR.Augmenter EasyAR.ARCameraBaseBehaviour::Augmenter
	Augmenter_t2015478513 * ___Augmenter_4;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::RenderReality
	bool ___RenderReality_5;
	// EasyAR.ARCameraBaseBehaviour/CenterMode EasyAR.ARCameraBaseBehaviour::WorldCenter
	int32_t ___WorldCenter_6;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::rFlag
	bool ___rFlag_7;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::texCreated
	bool ___texCreated_8;
	// UnityEngine.Texture2D EasyAR.ARCameraBaseBehaviour::tex
	Texture2D_t3840446185 * ___tex_9;
	// EasyAR.CameraFrameStreamer EasyAR.ARCameraBaseBehaviour::streamer
	CameraFrameStreamer_t4175238345 * ___streamer_10;
	// System.Collections.Generic.List`1<EasyAR.Target> EasyAR.ARCameraBaseBehaviour::previousTargets
	List_1_t1290329298 * ___previousTargets_11;
	// EasyAR.DeviceAbstractBehaviour EasyAR.ARCameraBaseBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_12;
	// System.Boolean EasyAR.ARCameraBaseBehaviour::preRenderReality
	bool ___preRenderReality_13;
	// System.Int32 EasyAR.ARCameraBaseBehaviour::preFrameIdx
	int32_t ___preFrameIdx_14;
	// EasyAR.TargetAbstractBehaviour EasyAR.ARCameraBaseBehaviour::CenterTarget
	TargetAbstractBehaviour_t1546528472 * ___CenterTarget_15;
	// EasyAR.Vector2I EasyAR.ARCameraBaseBehaviour::_size
	Vector2I_t2668621479  ____size_16;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D> EasyAR.ARCameraBaseBehaviour::PlaneTextureCreated
	Action_2_t1241929155 * ___PlaneTextureCreated_17;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,EasyAR.Frame> EasyAR.ARCameraBaseBehaviour::FrameUpdate
	Action_2_t630539512 * ___FrameUpdate_18;
	// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target> EasyAR.ARCameraBaseBehaviour::TargetFound
	Action_3_t1017994765 * ___TargetFound_19;
	// System.Action`3<EasyAR.ARCameraBaseBehaviour,EasyAR.TargetAbstractBehaviour,EasyAR.Target> EasyAR.ARCameraBaseBehaviour::TargetLost
	Action_3_t1017994765 * ___TargetLost_20;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.String> EasyAR.ARCameraBaseBehaviour::TextMessage
	Action_2_t3543900955 * ___TextMessage_21;
	// System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean> EasyAR.ARCameraBaseBehaviour::PlaneTextureRenderChanged
	Action_2_t1793738231 * ___PlaneTextureRenderChanged_22;

public:
	inline static int32_t get_offset_of_Augmenter_4() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___Augmenter_4)); }
	inline Augmenter_t2015478513 * get_Augmenter_4() const { return ___Augmenter_4; }
	inline Augmenter_t2015478513 ** get_address_of_Augmenter_4() { return &___Augmenter_4; }
	inline void set_Augmenter_4(Augmenter_t2015478513 * value)
	{
		___Augmenter_4 = value;
		Il2CppCodeGenWriteBarrier((&___Augmenter_4), value);
	}

	inline static int32_t get_offset_of_RenderReality_5() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___RenderReality_5)); }
	inline bool get_RenderReality_5() const { return ___RenderReality_5; }
	inline bool* get_address_of_RenderReality_5() { return &___RenderReality_5; }
	inline void set_RenderReality_5(bool value)
	{
		___RenderReality_5 = value;
	}

	inline static int32_t get_offset_of_WorldCenter_6() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___WorldCenter_6)); }
	inline int32_t get_WorldCenter_6() const { return ___WorldCenter_6; }
	inline int32_t* get_address_of_WorldCenter_6() { return &___WorldCenter_6; }
	inline void set_WorldCenter_6(int32_t value)
	{
		___WorldCenter_6 = value;
	}

	inline static int32_t get_offset_of_rFlag_7() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___rFlag_7)); }
	inline bool get_rFlag_7() const { return ___rFlag_7; }
	inline bool* get_address_of_rFlag_7() { return &___rFlag_7; }
	inline void set_rFlag_7(bool value)
	{
		___rFlag_7 = value;
	}

	inline static int32_t get_offset_of_texCreated_8() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___texCreated_8)); }
	inline bool get_texCreated_8() const { return ___texCreated_8; }
	inline bool* get_address_of_texCreated_8() { return &___texCreated_8; }
	inline void set_texCreated_8(bool value)
	{
		___texCreated_8 = value;
	}

	inline static int32_t get_offset_of_tex_9() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___tex_9)); }
	inline Texture2D_t3840446185 * get_tex_9() const { return ___tex_9; }
	inline Texture2D_t3840446185 ** get_address_of_tex_9() { return &___tex_9; }
	inline void set_tex_9(Texture2D_t3840446185 * value)
	{
		___tex_9 = value;
		Il2CppCodeGenWriteBarrier((&___tex_9), value);
	}

	inline static int32_t get_offset_of_streamer_10() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___streamer_10)); }
	inline CameraFrameStreamer_t4175238345 * get_streamer_10() const { return ___streamer_10; }
	inline CameraFrameStreamer_t4175238345 ** get_address_of_streamer_10() { return &___streamer_10; }
	inline void set_streamer_10(CameraFrameStreamer_t4175238345 * value)
	{
		___streamer_10 = value;
		Il2CppCodeGenWriteBarrier((&___streamer_10), value);
	}

	inline static int32_t get_offset_of_previousTargets_11() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___previousTargets_11)); }
	inline List_1_t1290329298 * get_previousTargets_11() const { return ___previousTargets_11; }
	inline List_1_t1290329298 ** get_address_of_previousTargets_11() { return &___previousTargets_11; }
	inline void set_previousTargets_11(List_1_t1290329298 * value)
	{
		___previousTargets_11 = value;
		Il2CppCodeGenWriteBarrier((&___previousTargets_11), value);
	}

	inline static int32_t get_offset_of_deviceBehaviour_12() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___deviceBehaviour_12)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_12() const { return ___deviceBehaviour_12; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_12() { return &___deviceBehaviour_12; }
	inline void set_deviceBehaviour_12(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_12 = value;
		Il2CppCodeGenWriteBarrier((&___deviceBehaviour_12), value);
	}

	inline static int32_t get_offset_of_preRenderReality_13() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___preRenderReality_13)); }
	inline bool get_preRenderReality_13() const { return ___preRenderReality_13; }
	inline bool* get_address_of_preRenderReality_13() { return &___preRenderReality_13; }
	inline void set_preRenderReality_13(bool value)
	{
		___preRenderReality_13 = value;
	}

	inline static int32_t get_offset_of_preFrameIdx_14() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___preFrameIdx_14)); }
	inline int32_t get_preFrameIdx_14() const { return ___preFrameIdx_14; }
	inline int32_t* get_address_of_preFrameIdx_14() { return &___preFrameIdx_14; }
	inline void set_preFrameIdx_14(int32_t value)
	{
		___preFrameIdx_14 = value;
	}

	inline static int32_t get_offset_of_CenterTarget_15() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___CenterTarget_15)); }
	inline TargetAbstractBehaviour_t1546528472 * get_CenterTarget_15() const { return ___CenterTarget_15; }
	inline TargetAbstractBehaviour_t1546528472 ** get_address_of_CenterTarget_15() { return &___CenterTarget_15; }
	inline void set_CenterTarget_15(TargetAbstractBehaviour_t1546528472 * value)
	{
		___CenterTarget_15 = value;
		Il2CppCodeGenWriteBarrier((&___CenterTarget_15), value);
	}

	inline static int32_t get_offset_of__size_16() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ____size_16)); }
	inline Vector2I_t2668621479  get__size_16() const { return ____size_16; }
	inline Vector2I_t2668621479 * get_address_of__size_16() { return &____size_16; }
	inline void set__size_16(Vector2I_t2668621479  value)
	{
		____size_16 = value;
	}

	inline static int32_t get_offset_of_PlaneTextureCreated_17() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___PlaneTextureCreated_17)); }
	inline Action_2_t1241929155 * get_PlaneTextureCreated_17() const { return ___PlaneTextureCreated_17; }
	inline Action_2_t1241929155 ** get_address_of_PlaneTextureCreated_17() { return &___PlaneTextureCreated_17; }
	inline void set_PlaneTextureCreated_17(Action_2_t1241929155 * value)
	{
		___PlaneTextureCreated_17 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneTextureCreated_17), value);
	}

	inline static int32_t get_offset_of_FrameUpdate_18() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___FrameUpdate_18)); }
	inline Action_2_t630539512 * get_FrameUpdate_18() const { return ___FrameUpdate_18; }
	inline Action_2_t630539512 ** get_address_of_FrameUpdate_18() { return &___FrameUpdate_18; }
	inline void set_FrameUpdate_18(Action_2_t630539512 * value)
	{
		___FrameUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((&___FrameUpdate_18), value);
	}

	inline static int32_t get_offset_of_TargetFound_19() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TargetFound_19)); }
	inline Action_3_t1017994765 * get_TargetFound_19() const { return ___TargetFound_19; }
	inline Action_3_t1017994765 ** get_address_of_TargetFound_19() { return &___TargetFound_19; }
	inline void set_TargetFound_19(Action_3_t1017994765 * value)
	{
		___TargetFound_19 = value;
		Il2CppCodeGenWriteBarrier((&___TargetFound_19), value);
	}

	inline static int32_t get_offset_of_TargetLost_20() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TargetLost_20)); }
	inline Action_3_t1017994765 * get_TargetLost_20() const { return ___TargetLost_20; }
	inline Action_3_t1017994765 ** get_address_of_TargetLost_20() { return &___TargetLost_20; }
	inline void set_TargetLost_20(Action_3_t1017994765 * value)
	{
		___TargetLost_20 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLost_20), value);
	}

	inline static int32_t get_offset_of_TextMessage_21() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___TextMessage_21)); }
	inline Action_2_t3543900955 * get_TextMessage_21() const { return ___TextMessage_21; }
	inline Action_2_t3543900955 ** get_address_of_TextMessage_21() { return &___TextMessage_21; }
	inline void set_TextMessage_21(Action_2_t3543900955 * value)
	{
		___TextMessage_21 = value;
		Il2CppCodeGenWriteBarrier((&___TextMessage_21), value);
	}

	inline static int32_t get_offset_of_PlaneTextureRenderChanged_22() { return static_cast<int32_t>(offsetof(ARCameraBaseBehaviour_t712094156, ___PlaneTextureRenderChanged_22)); }
	inline Action_2_t1793738231 * get_PlaneTextureRenderChanged_22() const { return ___PlaneTextureRenderChanged_22; }
	inline Action_2_t1793738231 ** get_address_of_PlaneTextureRenderChanged_22() { return &___PlaneTextureRenderChanged_22; }
	inline void set_PlaneTextureRenderChanged_22(Action_2_t1793738231 * value)
	{
		___PlaneTextureRenderChanged_22 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneTextureRenderChanged_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCAMERABASEBEHAVIOUR_T712094156_H
#ifndef DEVICEABSTRACTBEHAVIOUR_T3814910474_H
#define DEVICEABSTRACTBEHAVIOUR_T3814910474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceAbstractBehaviour
struct  DeviceAbstractBehaviour_t3814910474  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean> EasyAR.DeviceAbstractBehaviour::DeviceStart
	Action_2_t4217937665 * ___DeviceStart_4;
	// System.Boolean EasyAR.DeviceAbstractBehaviour::<EasyAR.IDevice.IsOpened>k__BackingField
	bool ___U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_DeviceStart_4() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t3814910474, ___DeviceStart_4)); }
	inline Action_2_t4217937665 * get_DeviceStart_4() const { return ___DeviceStart_4; }
	inline Action_2_t4217937665 ** get_address_of_DeviceStart_4() { return &___DeviceStart_4; }
	inline void set_DeviceStart_4(Action_2_t4217937665 * value)
	{
		___DeviceStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceStart_4), value);
	}

	inline static int32_t get_offset_of_U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t3814910474, ___U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5)); }
	inline bool get_U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5() const { return ___U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5() { return &___U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5; }
	inline void set_U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5(bool value)
	{
		___U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEABSTRACTBEHAVIOUR_T3814910474_H
#ifndef DEVICEUSERABSTRACTBEHAVIOUR_T3752823894_H
#define DEVICEUSERABSTRACTBEHAVIOUR_T3752823894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceUserAbstractBehaviour
struct  DeviceUserAbstractBehaviour_t3752823894  : public MonoBehaviour_t3962482529
{
public:
	// EasyAR.DeviceAbstractBehaviour EasyAR.DeviceUserAbstractBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_4;
	// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStart
	Action_2_t4219074802 * ___WorkStart_5;
	// System.Action`1<EasyAR.DeviceUserAbstractBehaviour> EasyAR.DeviceUserAbstractBehaviour::WorkStop
	Action_1_t3925291489 * ___WorkStop_6;

public:
	inline static int32_t get_offset_of_deviceBehaviour_4() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___deviceBehaviour_4)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_4() const { return ___deviceBehaviour_4; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_4() { return &___deviceBehaviour_4; }
	inline void set_deviceBehaviour_4(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___deviceBehaviour_4), value);
	}

	inline static int32_t get_offset_of_WorkStart_5() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___WorkStart_5)); }
	inline Action_2_t4219074802 * get_WorkStart_5() const { return ___WorkStart_5; }
	inline Action_2_t4219074802 ** get_address_of_WorkStart_5() { return &___WorkStart_5; }
	inline void set_WorkStart_5(Action_2_t4219074802 * value)
	{
		___WorkStart_5 = value;
		Il2CppCodeGenWriteBarrier((&___WorkStart_5), value);
	}

	inline static int32_t get_offset_of_WorkStop_6() { return static_cast<int32_t>(offsetof(DeviceUserAbstractBehaviour_t3752823894, ___WorkStop_6)); }
	inline Action_1_t3925291489 * get_WorkStop_6() const { return ___WorkStop_6; }
	inline Action_1_t3925291489 ** get_address_of_WorkStop_6() { return &___WorkStop_6; }
	inline void set_WorkStop_6(Action_1_t3925291489 * value)
	{
		___WorkStop_6 = value;
		Il2CppCodeGenWriteBarrier((&___WorkStop_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEUSERABSTRACTBEHAVIOUR_T3752823894_H
#ifndef REALITYPLANEBASEBEHAVIOUR_T2956186783_H
#define REALITYPLANEBASEBEHAVIOUR_T2956186783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RealityPlaneBaseBehaviour
struct  RealityPlaneBaseBehaviour_t2956186783  : public MonoBehaviour_t3962482529
{
public:
	// EasyAR.MeshGenerator EasyAR.RealityPlaneBaseBehaviour::meshGenerator
	MeshGenerator_t2269686654 * ___meshGenerator_4;
	// System.Int32 EasyAR.RealityPlaneBaseBehaviour::rotation
	int32_t ___rotation_5;
	// UnityEngine.Vector2 EasyAR.RealityPlaneBaseBehaviour::_scale
	Vector2_t2156229523  ____scale_6;
	// UnityEngine.Quaternion EasyAR.RealityPlaneBaseBehaviour::initRotation
	Quaternion_t2301928331  ___initRotation_7;
	// System.Boolean EasyAR.RealityPlaneBaseBehaviour::hFlip
	bool ___hFlip_8;
	// System.Boolean EasyAR.RealityPlaneBaseBehaviour::isTextureSet
	bool ___isTextureSet_9;

public:
	inline static int32_t get_offset_of_meshGenerator_4() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ___meshGenerator_4)); }
	inline MeshGenerator_t2269686654 * get_meshGenerator_4() const { return ___meshGenerator_4; }
	inline MeshGenerator_t2269686654 ** get_address_of_meshGenerator_4() { return &___meshGenerator_4; }
	inline void set_meshGenerator_4(MeshGenerator_t2269686654 * value)
	{
		___meshGenerator_4 = value;
		Il2CppCodeGenWriteBarrier((&___meshGenerator_4), value);
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ___rotation_5)); }
	inline int32_t get_rotation_5() const { return ___rotation_5; }
	inline int32_t* get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(int32_t value)
	{
		___rotation_5 = value;
	}

	inline static int32_t get_offset_of__scale_6() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ____scale_6)); }
	inline Vector2_t2156229523  get__scale_6() const { return ____scale_6; }
	inline Vector2_t2156229523 * get_address_of__scale_6() { return &____scale_6; }
	inline void set__scale_6(Vector2_t2156229523  value)
	{
		____scale_6 = value;
	}

	inline static int32_t get_offset_of_initRotation_7() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ___initRotation_7)); }
	inline Quaternion_t2301928331  get_initRotation_7() const { return ___initRotation_7; }
	inline Quaternion_t2301928331 * get_address_of_initRotation_7() { return &___initRotation_7; }
	inline void set_initRotation_7(Quaternion_t2301928331  value)
	{
		___initRotation_7 = value;
	}

	inline static int32_t get_offset_of_hFlip_8() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ___hFlip_8)); }
	inline bool get_hFlip_8() const { return ___hFlip_8; }
	inline bool* get_address_of_hFlip_8() { return &___hFlip_8; }
	inline void set_hFlip_8(bool value)
	{
		___hFlip_8 = value;
	}

	inline static int32_t get_offset_of_isTextureSet_9() { return static_cast<int32_t>(offsetof(RealityPlaneBaseBehaviour_t2956186783, ___isTextureSet_9)); }
	inline bool get_isTextureSet_9() const { return ___isTextureSet_9; }
	inline bool* get_address_of_isTextureSet_9() { return &___isTextureSet_9; }
	inline void set_isTextureSet_9(bool value)
	{
		___isTextureSet_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALITYPLANEBASEBEHAVIOUR_T2956186783_H
#ifndef RECORDERBASEBEHAVIOUR_T2449616875_H
#define RECORDERBASEBEHAVIOUR_T2449616875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour
struct  RecorderBaseBehaviour_t2449616875  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean EasyAR.RecorderBaseBehaviour::RequestPlatformPermission
	bool ___RequestPlatformPermission_4;
	// EasyAR.RecorderBaseBehaviour/RecorderProfile EasyAR.RecorderBaseBehaviour::Profile
	int32_t ___Profile_5;
	// EasyAR.RecorderBaseBehaviour/RecorderZoomMode EasyAR.RecorderBaseBehaviour::Mode
	int32_t ___Mode_6;
	// EasyAR.RecorderNative EasyAR.RecorderBaseBehaviour::recorder
	RecorderNative_t2685196317 * ___recorder_7;
	// EasyAR.RecorderBaseBehaviour/BaseNotify EasyAR.RecorderBaseBehaviour::_notify
	BaseNotify_t3278162484 * ____notify_8;
	// System.Int32 EasyAR.RecorderBaseBehaviour::_width
	int32_t ____width_9;
	// System.Int32 EasyAR.RecorderBaseBehaviour::_height
	int32_t ____height_10;
	// System.IntPtr EasyAR.RecorderBaseBehaviour::_texId
	intptr_t ____texId_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::_recording
	bool ____recording_12;
	// System.Nullable`1<System.Boolean> EasyAR.RecorderBaseBehaviour::started
	Nullable_1_t1819850047  ___started_13;
	// System.Collections.IEnumerator EasyAR.RecorderBaseBehaviour::coroutine
	RuntimeObject* ___coroutine_14;
	// UnityEngine.RenderTexture EasyAR.RecorderBaseBehaviour::_coroutine_texture
	RenderTexture_t2108887433 * ____coroutine_texture_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::validate
	bool ___validate_16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::granted
	bool ___granted_17;
	// System.Boolean EasyAR.RecorderBaseBehaviour::coroutineStarted_
	bool ___coroutineStarted__18;
	// System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture> EasyAR.RecorderBaseBehaviour::FrameUpdate
	Action_2_t2038586088 * ___FrameUpdate_19;
	// System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String> EasyAR.RecorderBaseBehaviour::StatusUpdate
	Action_3_t1098563045 * ___StatusUpdate_20;
	// System.String EasyAR.RecorderBaseBehaviour::<OutputFile>k__BackingField
	String_t* ___U3COutputFileU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_RequestPlatformPermission_4() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___RequestPlatformPermission_4)); }
	inline bool get_RequestPlatformPermission_4() const { return ___RequestPlatformPermission_4; }
	inline bool* get_address_of_RequestPlatformPermission_4() { return &___RequestPlatformPermission_4; }
	inline void set_RequestPlatformPermission_4(bool value)
	{
		___RequestPlatformPermission_4 = value;
	}

	inline static int32_t get_offset_of_Profile_5() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___Profile_5)); }
	inline int32_t get_Profile_5() const { return ___Profile_5; }
	inline int32_t* get_address_of_Profile_5() { return &___Profile_5; }
	inline void set_Profile_5(int32_t value)
	{
		___Profile_5 = value;
	}

	inline static int32_t get_offset_of_Mode_6() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___Mode_6)); }
	inline int32_t get_Mode_6() const { return ___Mode_6; }
	inline int32_t* get_address_of_Mode_6() { return &___Mode_6; }
	inline void set_Mode_6(int32_t value)
	{
		___Mode_6 = value;
	}

	inline static int32_t get_offset_of_recorder_7() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___recorder_7)); }
	inline RecorderNative_t2685196317 * get_recorder_7() const { return ___recorder_7; }
	inline RecorderNative_t2685196317 ** get_address_of_recorder_7() { return &___recorder_7; }
	inline void set_recorder_7(RecorderNative_t2685196317 * value)
	{
		___recorder_7 = value;
		Il2CppCodeGenWriteBarrier((&___recorder_7), value);
	}

	inline static int32_t get_offset_of__notify_8() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____notify_8)); }
	inline BaseNotify_t3278162484 * get__notify_8() const { return ____notify_8; }
	inline BaseNotify_t3278162484 ** get_address_of__notify_8() { return &____notify_8; }
	inline void set__notify_8(BaseNotify_t3278162484 * value)
	{
		____notify_8 = value;
		Il2CppCodeGenWriteBarrier((&____notify_8), value);
	}

	inline static int32_t get_offset_of__width_9() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____width_9)); }
	inline int32_t get__width_9() const { return ____width_9; }
	inline int32_t* get_address_of__width_9() { return &____width_9; }
	inline void set__width_9(int32_t value)
	{
		____width_9 = value;
	}

	inline static int32_t get_offset_of__height_10() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____height_10)); }
	inline int32_t get__height_10() const { return ____height_10; }
	inline int32_t* get_address_of__height_10() { return &____height_10; }
	inline void set__height_10(int32_t value)
	{
		____height_10 = value;
	}

	inline static int32_t get_offset_of__texId_11() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____texId_11)); }
	inline intptr_t get__texId_11() const { return ____texId_11; }
	inline intptr_t* get_address_of__texId_11() { return &____texId_11; }
	inline void set__texId_11(intptr_t value)
	{
		____texId_11 = value;
	}

	inline static int32_t get_offset_of__recording_12() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____recording_12)); }
	inline bool get__recording_12() const { return ____recording_12; }
	inline bool* get_address_of__recording_12() { return &____recording_12; }
	inline void set__recording_12(bool value)
	{
		____recording_12 = value;
	}

	inline static int32_t get_offset_of_started_13() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___started_13)); }
	inline Nullable_1_t1819850047  get_started_13() const { return ___started_13; }
	inline Nullable_1_t1819850047 * get_address_of_started_13() { return &___started_13; }
	inline void set_started_13(Nullable_1_t1819850047  value)
	{
		___started_13 = value;
	}

	inline static int32_t get_offset_of_coroutine_14() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___coroutine_14)); }
	inline RuntimeObject* get_coroutine_14() const { return ___coroutine_14; }
	inline RuntimeObject** get_address_of_coroutine_14() { return &___coroutine_14; }
	inline void set_coroutine_14(RuntimeObject* value)
	{
		___coroutine_14 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_14), value);
	}

	inline static int32_t get_offset_of__coroutine_texture_15() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ____coroutine_texture_15)); }
	inline RenderTexture_t2108887433 * get__coroutine_texture_15() const { return ____coroutine_texture_15; }
	inline RenderTexture_t2108887433 ** get_address_of__coroutine_texture_15() { return &____coroutine_texture_15; }
	inline void set__coroutine_texture_15(RenderTexture_t2108887433 * value)
	{
		____coroutine_texture_15 = value;
		Il2CppCodeGenWriteBarrier((&____coroutine_texture_15), value);
	}

	inline static int32_t get_offset_of_validate_16() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___validate_16)); }
	inline bool get_validate_16() const { return ___validate_16; }
	inline bool* get_address_of_validate_16() { return &___validate_16; }
	inline void set_validate_16(bool value)
	{
		___validate_16 = value;
	}

	inline static int32_t get_offset_of_granted_17() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___granted_17)); }
	inline bool get_granted_17() const { return ___granted_17; }
	inline bool* get_address_of_granted_17() { return &___granted_17; }
	inline void set_granted_17(bool value)
	{
		___granted_17 = value;
	}

	inline static int32_t get_offset_of_coroutineStarted__18() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___coroutineStarted__18)); }
	inline bool get_coroutineStarted__18() const { return ___coroutineStarted__18; }
	inline bool* get_address_of_coroutineStarted__18() { return &___coroutineStarted__18; }
	inline void set_coroutineStarted__18(bool value)
	{
		___coroutineStarted__18 = value;
	}

	inline static int32_t get_offset_of_FrameUpdate_19() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___FrameUpdate_19)); }
	inline Action_2_t2038586088 * get_FrameUpdate_19() const { return ___FrameUpdate_19; }
	inline Action_2_t2038586088 ** get_address_of_FrameUpdate_19() { return &___FrameUpdate_19; }
	inline void set_FrameUpdate_19(Action_2_t2038586088 * value)
	{
		___FrameUpdate_19 = value;
		Il2CppCodeGenWriteBarrier((&___FrameUpdate_19), value);
	}

	inline static int32_t get_offset_of_StatusUpdate_20() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___StatusUpdate_20)); }
	inline Action_3_t1098563045 * get_StatusUpdate_20() const { return ___StatusUpdate_20; }
	inline Action_3_t1098563045 ** get_address_of_StatusUpdate_20() { return &___StatusUpdate_20; }
	inline void set_StatusUpdate_20(Action_3_t1098563045 * value)
	{
		___StatusUpdate_20 = value;
		Il2CppCodeGenWriteBarrier((&___StatusUpdate_20), value);
	}

	inline static int32_t get_offset_of_U3COutputFileU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t2449616875, ___U3COutputFileU3Ek__BackingField_21)); }
	inline String_t* get_U3COutputFileU3Ek__BackingField_21() const { return ___U3COutputFileU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3COutputFileU3Ek__BackingField_21() { return &___U3COutputFileU3Ek__BackingField_21; }
	inline void set_U3COutputFileU3Ek__BackingField_21(String_t* value)
	{
		___U3COutputFileU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3COutputFileU3Ek__BackingField_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDERBASEBEHAVIOUR_T2449616875_H
#ifndef RENDERCAMERABASEBEHAVIOUR_T1612515119_H
#define RENDERCAMERABASEBEHAVIOUR_T1612515119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RenderCameraBaseBehaviour
struct  RenderCameraBaseBehaviour_t1612515119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera EasyAR.RenderCameraBaseBehaviour::RenderCamera
	Camera_t4157153871 * ___RenderCamera_4;
	// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::_projection
	Matrix4x4_t1817901843  ____projection_5;
	// EasyAR.Vector2I EasyAR.RenderCameraBaseBehaviour::_camSize
	Vector2I_t2668621479  ____camSize_6;
	// EasyAR.Vector2I EasyAR.RenderCameraBaseBehaviour::_screenSize
	Vector2I_t2668621479  ____screenSize_7;
	// EasyAR.CameraDevice EasyAR.RenderCameraBaseBehaviour::_device
	CameraDevice_t2123284476 * ____device_8;
	// System.Int32 EasyAR.RenderCameraBaseBehaviour::rotation
	int32_t ___rotation_9;
	// System.Boolean EasyAR.RenderCameraBaseBehaviour::hFlip
	bool ___hFlip_10;
	// System.Boolean EasyAR.RenderCameraBaseBehaviour::hFlipChanged
	bool ___hFlipChanged_11;
	// UnityEngine.Vector2 EasyAR.RenderCameraBaseBehaviour::clipPlanes
	Vector2_t2156229523  ___clipPlanes_12;
	// EasyAR.DeviceAbstractBehaviour EasyAR.RenderCameraBaseBehaviour::deviceBehaviour
	DeviceAbstractBehaviour_t3814910474 * ___deviceBehaviour_13;
	// EasyAR.ARCameraBaseBehaviour EasyAR.RenderCameraBaseBehaviour::augmenterBaseBehaviour
	ARCameraBaseBehaviour_t712094156 * ___augmenterBaseBehaviour_14;

public:
	inline static int32_t get_offset_of_RenderCamera_4() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___RenderCamera_4)); }
	inline Camera_t4157153871 * get_RenderCamera_4() const { return ___RenderCamera_4; }
	inline Camera_t4157153871 ** get_address_of_RenderCamera_4() { return &___RenderCamera_4; }
	inline void set_RenderCamera_4(Camera_t4157153871 * value)
	{
		___RenderCamera_4 = value;
		Il2CppCodeGenWriteBarrier((&___RenderCamera_4), value);
	}

	inline static int32_t get_offset_of__projection_5() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____projection_5)); }
	inline Matrix4x4_t1817901843  get__projection_5() const { return ____projection_5; }
	inline Matrix4x4_t1817901843 * get_address_of__projection_5() { return &____projection_5; }
	inline void set__projection_5(Matrix4x4_t1817901843  value)
	{
		____projection_5 = value;
	}

	inline static int32_t get_offset_of__camSize_6() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____camSize_6)); }
	inline Vector2I_t2668621479  get__camSize_6() const { return ____camSize_6; }
	inline Vector2I_t2668621479 * get_address_of__camSize_6() { return &____camSize_6; }
	inline void set__camSize_6(Vector2I_t2668621479  value)
	{
		____camSize_6 = value;
	}

	inline static int32_t get_offset_of__screenSize_7() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____screenSize_7)); }
	inline Vector2I_t2668621479  get__screenSize_7() const { return ____screenSize_7; }
	inline Vector2I_t2668621479 * get_address_of__screenSize_7() { return &____screenSize_7; }
	inline void set__screenSize_7(Vector2I_t2668621479  value)
	{
		____screenSize_7 = value;
	}

	inline static int32_t get_offset_of__device_8() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ____device_8)); }
	inline CameraDevice_t2123284476 * get__device_8() const { return ____device_8; }
	inline CameraDevice_t2123284476 ** get_address_of__device_8() { return &____device_8; }
	inline void set__device_8(CameraDevice_t2123284476 * value)
	{
		____device_8 = value;
		Il2CppCodeGenWriteBarrier((&____device_8), value);
	}

	inline static int32_t get_offset_of_rotation_9() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___rotation_9)); }
	inline int32_t get_rotation_9() const { return ___rotation_9; }
	inline int32_t* get_address_of_rotation_9() { return &___rotation_9; }
	inline void set_rotation_9(int32_t value)
	{
		___rotation_9 = value;
	}

	inline static int32_t get_offset_of_hFlip_10() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___hFlip_10)); }
	inline bool get_hFlip_10() const { return ___hFlip_10; }
	inline bool* get_address_of_hFlip_10() { return &___hFlip_10; }
	inline void set_hFlip_10(bool value)
	{
		___hFlip_10 = value;
	}

	inline static int32_t get_offset_of_hFlipChanged_11() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___hFlipChanged_11)); }
	inline bool get_hFlipChanged_11() const { return ___hFlipChanged_11; }
	inline bool* get_address_of_hFlipChanged_11() { return &___hFlipChanged_11; }
	inline void set_hFlipChanged_11(bool value)
	{
		___hFlipChanged_11 = value;
	}

	inline static int32_t get_offset_of_clipPlanes_12() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___clipPlanes_12)); }
	inline Vector2_t2156229523  get_clipPlanes_12() const { return ___clipPlanes_12; }
	inline Vector2_t2156229523 * get_address_of_clipPlanes_12() { return &___clipPlanes_12; }
	inline void set_clipPlanes_12(Vector2_t2156229523  value)
	{
		___clipPlanes_12 = value;
	}

	inline static int32_t get_offset_of_deviceBehaviour_13() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___deviceBehaviour_13)); }
	inline DeviceAbstractBehaviour_t3814910474 * get_deviceBehaviour_13() const { return ___deviceBehaviour_13; }
	inline DeviceAbstractBehaviour_t3814910474 ** get_address_of_deviceBehaviour_13() { return &___deviceBehaviour_13; }
	inline void set_deviceBehaviour_13(DeviceAbstractBehaviour_t3814910474 * value)
	{
		___deviceBehaviour_13 = value;
		Il2CppCodeGenWriteBarrier((&___deviceBehaviour_13), value);
	}

	inline static int32_t get_offset_of_augmenterBaseBehaviour_14() { return static_cast<int32_t>(offsetof(RenderCameraBaseBehaviour_t1612515119, ___augmenterBaseBehaviour_14)); }
	inline ARCameraBaseBehaviour_t712094156 * get_augmenterBaseBehaviour_14() const { return ___augmenterBaseBehaviour_14; }
	inline ARCameraBaseBehaviour_t712094156 ** get_address_of_augmenterBaseBehaviour_14() { return &___augmenterBaseBehaviour_14; }
	inline void set_augmenterBaseBehaviour_14(ARCameraBaseBehaviour_t712094156 * value)
	{
		___augmenterBaseBehaviour_14 = value;
		Il2CppCodeGenWriteBarrier((&___augmenterBaseBehaviour_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERCAMERABASEBEHAVIOUR_T1612515119_H
#ifndef TARGETABSTRACTBEHAVIOUR_T1546528472_H
#define TARGETABSTRACTBEHAVIOUR_T1546528472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetAbstractBehaviour
struct  TargetAbstractBehaviour_t1546528472  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 EasyAR.TargetAbstractBehaviour::registeredID
	int32_t ___registeredID_5;
	// System.Boolean EasyAR.TargetAbstractBehaviour::isFound
	bool ___isFound_6;
	// System.Boolean EasyAR.TargetAbstractBehaviour::gameObjectActiveControl
	bool ___gameObjectActiveControl_7;
	// System.Action`1<EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::TargetFound
	Action_1_t1718996067 * ___TargetFound_8;
	// System.Action`1<EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::TargetLost
	Action_1_t1718996067 * ___TargetLost_9;

public:
	inline static int32_t get_offset_of_registeredID_5() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472, ___registeredID_5)); }
	inline int32_t get_registeredID_5() const { return ___registeredID_5; }
	inline int32_t* get_address_of_registeredID_5() { return &___registeredID_5; }
	inline void set_registeredID_5(int32_t value)
	{
		___registeredID_5 = value;
	}

	inline static int32_t get_offset_of_isFound_6() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472, ___isFound_6)); }
	inline bool get_isFound_6() const { return ___isFound_6; }
	inline bool* get_address_of_isFound_6() { return &___isFound_6; }
	inline void set_isFound_6(bool value)
	{
		___isFound_6 = value;
	}

	inline static int32_t get_offset_of_gameObjectActiveControl_7() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472, ___gameObjectActiveControl_7)); }
	inline bool get_gameObjectActiveControl_7() const { return ___gameObjectActiveControl_7; }
	inline bool* get_address_of_gameObjectActiveControl_7() { return &___gameObjectActiveControl_7; }
	inline void set_gameObjectActiveControl_7(bool value)
	{
		___gameObjectActiveControl_7 = value;
	}

	inline static int32_t get_offset_of_TargetFound_8() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472, ___TargetFound_8)); }
	inline Action_1_t1718996067 * get_TargetFound_8() const { return ___TargetFound_8; }
	inline Action_1_t1718996067 ** get_address_of_TargetFound_8() { return &___TargetFound_8; }
	inline void set_TargetFound_8(Action_1_t1718996067 * value)
	{
		___TargetFound_8 = value;
		Il2CppCodeGenWriteBarrier((&___TargetFound_8), value);
	}

	inline static int32_t get_offset_of_TargetLost_9() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472, ___TargetLost_9)); }
	inline Action_1_t1718996067 * get_TargetLost_9() const { return ___TargetLost_9; }
	inline Action_1_t1718996067 ** get_address_of_TargetLost_9() { return &___TargetLost_9; }
	inline void set_TargetLost_9(Action_1_t1718996067 * value)
	{
		___TargetLost_9 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLost_9), value);
	}
};

struct TargetAbstractBehaviour_t1546528472_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::allTargetBehaviours
	Dictionary_2_t435241803 * ___allTargetBehaviours_4;

public:
	inline static int32_t get_offset_of_allTargetBehaviours_4() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1546528472_StaticFields, ___allTargetBehaviours_4)); }
	inline Dictionary_2_t435241803 * get_allTargetBehaviours_4() const { return ___allTargetBehaviours_4; }
	inline Dictionary_2_t435241803 ** get_address_of_allTargetBehaviours_4() { return &___allTargetBehaviours_4; }
	inline void set_allTargetBehaviours_4(Dictionary_2_t435241803 * value)
	{
		___allTargetBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier((&___allTargetBehaviours_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETABSTRACTBEHAVIOUR_T1546528472_H
#ifndef VIDEOPLAYERBASEBEHAVIOUR_T4040254494_H
#define VIDEOPLAYERBASEBEHAVIOUR_T4040254494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayerBaseBehaviour
struct  VideoPlayerBaseBehaviour_t4040254494  : public MonoBehaviour_t3962482529
{
public:
	// System.String EasyAR.VideoPlayerBaseBehaviour::Path
	String_t* ___Path_4;
	// EasyAR.StorageType EasyAR.VideoPlayerBaseBehaviour::Storage
	int32_t ___Storage_5;
	// EasyAR.VideoPlayerBaseBehaviour/VideoType EasyAR.VideoPlayerBaseBehaviour::Type
	int32_t ___Type_6;
	// EasyAR.VideoPlayerBaseBehaviour/ScaleMode EasyAR.VideoPlayerBaseBehaviour::VideoScaleMode
	int32_t ___VideoScaleMode_7;
	// EasyAR.VideoPlayerBaseBehaviour/ScalePlane EasyAR.VideoPlayerBaseBehaviour::VideoScalePlane
	int32_t ___VideoScalePlane_8;
	// System.Single EasyAR.VideoPlayerBaseBehaviour::VideoScaleFactorBase
	float ___VideoScaleFactorBase_9;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::EnableAutoPlay
	bool ___EnableAutoPlay_10;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::EnableLoop
	bool ___EnableLoop_11;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::OpenWhenStart
	bool ___OpenWhenStart_12;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::DisplayTextMessage
	bool ___DisplayTextMessage_13;
	// EasyAR.VideoPlayer EasyAR.VideoPlayerBaseBehaviour::VideoPlayer
	VideoPlayer_t947858561 * ___VideoPlayer_14;
	// UnityEngine.Texture2D EasyAR.VideoPlayerBaseBehaviour::videoTex
	Texture2D_t3840446185 * ___videoTex_15;
	// UnityEngine.Vector2 EasyAR.VideoPlayerBaseBehaviour::targetSize
	Vector2_t2156229523  ___targetSize_16;
	// EasyAR.ImageTargetBaseBehaviour EasyAR.VideoPlayerBaseBehaviour::targetBehaviour
	ImageTargetBaseBehaviour_t1373064375 * ___targetBehaviour_17;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::isPlaying
	bool ___isPlaying_18;
	// System.Boolean EasyAR.VideoPlayerBaseBehaviour::needScale
	bool ___needScale_19;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoReadyEvent
	EventHandler_t1348719766 * ___VideoReadyEvent_20;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoReachEndEvent
	EventHandler_t1348719766 * ___VideoReachEndEvent_21;
	// System.EventHandler EasyAR.VideoPlayerBaseBehaviour::VideoErrorEvent
	EventHandler_t1348719766 * ___VideoErrorEvent_22;

public:
	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___Path_4)); }
	inline String_t* get_Path_4() const { return ___Path_4; }
	inline String_t** get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(String_t* value)
	{
		___Path_4 = value;
		Il2CppCodeGenWriteBarrier((&___Path_4), value);
	}

	inline static int32_t get_offset_of_Storage_5() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___Storage_5)); }
	inline int32_t get_Storage_5() const { return ___Storage_5; }
	inline int32_t* get_address_of_Storage_5() { return &___Storage_5; }
	inline void set_Storage_5(int32_t value)
	{
		___Storage_5 = value;
	}

	inline static int32_t get_offset_of_Type_6() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___Type_6)); }
	inline int32_t get_Type_6() const { return ___Type_6; }
	inline int32_t* get_address_of_Type_6() { return &___Type_6; }
	inline void set_Type_6(int32_t value)
	{
		___Type_6 = value;
	}

	inline static int32_t get_offset_of_VideoScaleMode_7() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoScaleMode_7)); }
	inline int32_t get_VideoScaleMode_7() const { return ___VideoScaleMode_7; }
	inline int32_t* get_address_of_VideoScaleMode_7() { return &___VideoScaleMode_7; }
	inline void set_VideoScaleMode_7(int32_t value)
	{
		___VideoScaleMode_7 = value;
	}

	inline static int32_t get_offset_of_VideoScalePlane_8() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoScalePlane_8)); }
	inline int32_t get_VideoScalePlane_8() const { return ___VideoScalePlane_8; }
	inline int32_t* get_address_of_VideoScalePlane_8() { return &___VideoScalePlane_8; }
	inline void set_VideoScalePlane_8(int32_t value)
	{
		___VideoScalePlane_8 = value;
	}

	inline static int32_t get_offset_of_VideoScaleFactorBase_9() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoScaleFactorBase_9)); }
	inline float get_VideoScaleFactorBase_9() const { return ___VideoScaleFactorBase_9; }
	inline float* get_address_of_VideoScaleFactorBase_9() { return &___VideoScaleFactorBase_9; }
	inline void set_VideoScaleFactorBase_9(float value)
	{
		___VideoScaleFactorBase_9 = value;
	}

	inline static int32_t get_offset_of_EnableAutoPlay_10() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___EnableAutoPlay_10)); }
	inline bool get_EnableAutoPlay_10() const { return ___EnableAutoPlay_10; }
	inline bool* get_address_of_EnableAutoPlay_10() { return &___EnableAutoPlay_10; }
	inline void set_EnableAutoPlay_10(bool value)
	{
		___EnableAutoPlay_10 = value;
	}

	inline static int32_t get_offset_of_EnableLoop_11() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___EnableLoop_11)); }
	inline bool get_EnableLoop_11() const { return ___EnableLoop_11; }
	inline bool* get_address_of_EnableLoop_11() { return &___EnableLoop_11; }
	inline void set_EnableLoop_11(bool value)
	{
		___EnableLoop_11 = value;
	}

	inline static int32_t get_offset_of_OpenWhenStart_12() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___OpenWhenStart_12)); }
	inline bool get_OpenWhenStart_12() const { return ___OpenWhenStart_12; }
	inline bool* get_address_of_OpenWhenStart_12() { return &___OpenWhenStart_12; }
	inline void set_OpenWhenStart_12(bool value)
	{
		___OpenWhenStart_12 = value;
	}

	inline static int32_t get_offset_of_DisplayTextMessage_13() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___DisplayTextMessage_13)); }
	inline bool get_DisplayTextMessage_13() const { return ___DisplayTextMessage_13; }
	inline bool* get_address_of_DisplayTextMessage_13() { return &___DisplayTextMessage_13; }
	inline void set_DisplayTextMessage_13(bool value)
	{
		___DisplayTextMessage_13 = value;
	}

	inline static int32_t get_offset_of_VideoPlayer_14() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoPlayer_14)); }
	inline VideoPlayer_t947858561 * get_VideoPlayer_14() const { return ___VideoPlayer_14; }
	inline VideoPlayer_t947858561 ** get_address_of_VideoPlayer_14() { return &___VideoPlayer_14; }
	inline void set_VideoPlayer_14(VideoPlayer_t947858561 * value)
	{
		___VideoPlayer_14 = value;
		Il2CppCodeGenWriteBarrier((&___VideoPlayer_14), value);
	}

	inline static int32_t get_offset_of_videoTex_15() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___videoTex_15)); }
	inline Texture2D_t3840446185 * get_videoTex_15() const { return ___videoTex_15; }
	inline Texture2D_t3840446185 ** get_address_of_videoTex_15() { return &___videoTex_15; }
	inline void set_videoTex_15(Texture2D_t3840446185 * value)
	{
		___videoTex_15 = value;
		Il2CppCodeGenWriteBarrier((&___videoTex_15), value);
	}

	inline static int32_t get_offset_of_targetSize_16() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___targetSize_16)); }
	inline Vector2_t2156229523  get_targetSize_16() const { return ___targetSize_16; }
	inline Vector2_t2156229523 * get_address_of_targetSize_16() { return &___targetSize_16; }
	inline void set_targetSize_16(Vector2_t2156229523  value)
	{
		___targetSize_16 = value;
	}

	inline static int32_t get_offset_of_targetBehaviour_17() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___targetBehaviour_17)); }
	inline ImageTargetBaseBehaviour_t1373064375 * get_targetBehaviour_17() const { return ___targetBehaviour_17; }
	inline ImageTargetBaseBehaviour_t1373064375 ** get_address_of_targetBehaviour_17() { return &___targetBehaviour_17; }
	inline void set_targetBehaviour_17(ImageTargetBaseBehaviour_t1373064375 * value)
	{
		___targetBehaviour_17 = value;
		Il2CppCodeGenWriteBarrier((&___targetBehaviour_17), value);
	}

	inline static int32_t get_offset_of_isPlaying_18() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___isPlaying_18)); }
	inline bool get_isPlaying_18() const { return ___isPlaying_18; }
	inline bool* get_address_of_isPlaying_18() { return &___isPlaying_18; }
	inline void set_isPlaying_18(bool value)
	{
		___isPlaying_18 = value;
	}

	inline static int32_t get_offset_of_needScale_19() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___needScale_19)); }
	inline bool get_needScale_19() const { return ___needScale_19; }
	inline bool* get_address_of_needScale_19() { return &___needScale_19; }
	inline void set_needScale_19(bool value)
	{
		___needScale_19 = value;
	}

	inline static int32_t get_offset_of_VideoReadyEvent_20() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoReadyEvent_20)); }
	inline EventHandler_t1348719766 * get_VideoReadyEvent_20() const { return ___VideoReadyEvent_20; }
	inline EventHandler_t1348719766 ** get_address_of_VideoReadyEvent_20() { return &___VideoReadyEvent_20; }
	inline void set_VideoReadyEvent_20(EventHandler_t1348719766 * value)
	{
		___VideoReadyEvent_20 = value;
		Il2CppCodeGenWriteBarrier((&___VideoReadyEvent_20), value);
	}

	inline static int32_t get_offset_of_VideoReachEndEvent_21() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoReachEndEvent_21)); }
	inline EventHandler_t1348719766 * get_VideoReachEndEvent_21() const { return ___VideoReachEndEvent_21; }
	inline EventHandler_t1348719766 ** get_address_of_VideoReachEndEvent_21() { return &___VideoReachEndEvent_21; }
	inline void set_VideoReachEndEvent_21(EventHandler_t1348719766 * value)
	{
		___VideoReachEndEvent_21 = value;
		Il2CppCodeGenWriteBarrier((&___VideoReachEndEvent_21), value);
	}

	inline static int32_t get_offset_of_VideoErrorEvent_22() { return static_cast<int32_t>(offsetof(VideoPlayerBaseBehaviour_t4040254494, ___VideoErrorEvent_22)); }
	inline EventHandler_t1348719766 * get_VideoErrorEvent_22() const { return ___VideoErrorEvent_22; }
	inline EventHandler_t1348719766 ** get_address_of_VideoErrorEvent_22() { return &___VideoErrorEvent_22; }
	inline void set_VideoErrorEvent_22(EventHandler_t1348719766 * value)
	{
		___VideoErrorEvent_22 = value;
		Il2CppCodeGenWriteBarrier((&___VideoErrorEvent_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYERBASEBEHAVIOUR_T4040254494_H
#ifndef ARSCENEBASEBEHAVIOUR_T3394135702_H
#define ARSCENEBASEBEHAVIOUR_T3394135702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARSceneBaseBehaviour
struct  ARSceneBaseBehaviour_t3394135702  : public TargetAbstractBehaviour_t1546528472
{
public:
	// EasyAR.ARScene EasyAR.ARSceneBaseBehaviour::Target
	ARScene_t1576376535 * ___Target_10;

public:
	inline static int32_t get_offset_of_Target_10() { return static_cast<int32_t>(offsetof(ARSceneBaseBehaviour_t3394135702, ___Target_10)); }
	inline ARScene_t1576376535 * get_Target_10() const { return ___Target_10; }
	inline ARScene_t1576376535 ** get_address_of_Target_10() { return &___Target_10; }
	inline void set_Target_10(ARScene_t1576376535 * value)
	{
		___Target_10 = value;
		Il2CppCodeGenWriteBarrier((&___Target_10), value);
	}
};

struct ARSceneBaseBehaviour_t3394135702_StaticFields
{
public:
	// EasyAR.ARSceneBaseBehaviour EasyAR.ARSceneBaseBehaviour::planeTargetBaseBehaviour
	ARSceneBaseBehaviour_t3394135702 * ___planeTargetBaseBehaviour_11;

public:
	inline static int32_t get_offset_of_planeTargetBaseBehaviour_11() { return static_cast<int32_t>(offsetof(ARSceneBaseBehaviour_t3394135702_StaticFields, ___planeTargetBaseBehaviour_11)); }
	inline ARSceneBaseBehaviour_t3394135702 * get_planeTargetBaseBehaviour_11() const { return ___planeTargetBaseBehaviour_11; }
	inline ARSceneBaseBehaviour_t3394135702 ** get_address_of_planeTargetBaseBehaviour_11() { return &___planeTargetBaseBehaviour_11; }
	inline void set_planeTargetBaseBehaviour_11(ARSceneBaseBehaviour_t3394135702 * value)
	{
		___planeTargetBaseBehaviour_11 = value;
		Il2CppCodeGenWriteBarrier((&___planeTargetBaseBehaviour_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSCENEBASEBEHAVIOUR_T3394135702_H
#ifndef CAMERADEVICEBASEBEHAVIOUR_T1272814475_H
#define CAMERADEVICEBASEBEHAVIOUR_T1272814475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDeviceBaseBehaviour
struct  CameraDeviceBaseBehaviour_t1272814475  : public DeviceAbstractBehaviour_t3814910474
{
public:
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::CaptureWhenStart
	bool ___CaptureWhenStart_6;
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::RequestPlatformPermission
	bool ___RequestPlatformPermission_7;
	// EasyAR.CameraDeviceBaseBehaviour/DeviceType EasyAR.CameraDeviceBaseBehaviour::cameraDeviceType
	int32_t ___cameraDeviceType_8;
	// System.Int32 EasyAR.CameraDeviceBaseBehaviour::cameraIndex
	int32_t ___cameraIndex_9;
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::horizontalFlip
	bool ___horizontalFlip_10;
	// UnityEngine.Vector2 EasyAR.CameraDeviceBaseBehaviour::CameraSize
	Vector2_t2156229523  ___CameraSize_11;
	// System.Single EasyAR.CameraDeviceBaseBehaviour::CameraFPS
	float ___CameraFPS_12;
	// EasyAR.CameraDevice EasyAR.CameraDeviceBaseBehaviour::Device
	CameraDevice_t2123284476 * ___Device_13;
	// EasyAR.CameraFrameStreamer EasyAR.CameraDeviceBaseBehaviour::Streamer
	CameraFrameStreamer_t4175238345 * ___Streamer_14;
	// System.Collections.IEnumerator EasyAR.CameraDeviceBaseBehaviour::coroutine
	RuntimeObject* ___coroutine_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.CameraDeviceBaseBehaviour::validGranted_
	bool ___validGranted__16;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.CameraDeviceBaseBehaviour::granted_
	bool ___granted__17;

public:
	inline static int32_t get_offset_of_CaptureWhenStart_6() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___CaptureWhenStart_6)); }
	inline bool get_CaptureWhenStart_6() const { return ___CaptureWhenStart_6; }
	inline bool* get_address_of_CaptureWhenStart_6() { return &___CaptureWhenStart_6; }
	inline void set_CaptureWhenStart_6(bool value)
	{
		___CaptureWhenStart_6 = value;
	}

	inline static int32_t get_offset_of_RequestPlatformPermission_7() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___RequestPlatformPermission_7)); }
	inline bool get_RequestPlatformPermission_7() const { return ___RequestPlatformPermission_7; }
	inline bool* get_address_of_RequestPlatformPermission_7() { return &___RequestPlatformPermission_7; }
	inline void set_RequestPlatformPermission_7(bool value)
	{
		___RequestPlatformPermission_7 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceType_8() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___cameraDeviceType_8)); }
	inline int32_t get_cameraDeviceType_8() const { return ___cameraDeviceType_8; }
	inline int32_t* get_address_of_cameraDeviceType_8() { return &___cameraDeviceType_8; }
	inline void set_cameraDeviceType_8(int32_t value)
	{
		___cameraDeviceType_8 = value;
	}

	inline static int32_t get_offset_of_cameraIndex_9() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___cameraIndex_9)); }
	inline int32_t get_cameraIndex_9() const { return ___cameraIndex_9; }
	inline int32_t* get_address_of_cameraIndex_9() { return &___cameraIndex_9; }
	inline void set_cameraIndex_9(int32_t value)
	{
		___cameraIndex_9 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_10() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___horizontalFlip_10)); }
	inline bool get_horizontalFlip_10() const { return ___horizontalFlip_10; }
	inline bool* get_address_of_horizontalFlip_10() { return &___horizontalFlip_10; }
	inline void set_horizontalFlip_10(bool value)
	{
		___horizontalFlip_10 = value;
	}

	inline static int32_t get_offset_of_CameraSize_11() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___CameraSize_11)); }
	inline Vector2_t2156229523  get_CameraSize_11() const { return ___CameraSize_11; }
	inline Vector2_t2156229523 * get_address_of_CameraSize_11() { return &___CameraSize_11; }
	inline void set_CameraSize_11(Vector2_t2156229523  value)
	{
		___CameraSize_11 = value;
	}

	inline static int32_t get_offset_of_CameraFPS_12() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___CameraFPS_12)); }
	inline float get_CameraFPS_12() const { return ___CameraFPS_12; }
	inline float* get_address_of_CameraFPS_12() { return &___CameraFPS_12; }
	inline void set_CameraFPS_12(float value)
	{
		___CameraFPS_12 = value;
	}

	inline static int32_t get_offset_of_Device_13() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___Device_13)); }
	inline CameraDevice_t2123284476 * get_Device_13() const { return ___Device_13; }
	inline CameraDevice_t2123284476 ** get_address_of_Device_13() { return &___Device_13; }
	inline void set_Device_13(CameraDevice_t2123284476 * value)
	{
		___Device_13 = value;
		Il2CppCodeGenWriteBarrier((&___Device_13), value);
	}

	inline static int32_t get_offset_of_Streamer_14() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___Streamer_14)); }
	inline CameraFrameStreamer_t4175238345 * get_Streamer_14() const { return ___Streamer_14; }
	inline CameraFrameStreamer_t4175238345 ** get_address_of_Streamer_14() { return &___Streamer_14; }
	inline void set_Streamer_14(CameraFrameStreamer_t4175238345 * value)
	{
		___Streamer_14 = value;
		Il2CppCodeGenWriteBarrier((&___Streamer_14), value);
	}

	inline static int32_t get_offset_of_coroutine_15() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___coroutine_15)); }
	inline RuntimeObject* get_coroutine_15() const { return ___coroutine_15; }
	inline RuntimeObject** get_address_of_coroutine_15() { return &___coroutine_15; }
	inline void set_coroutine_15(RuntimeObject* value)
	{
		___coroutine_15 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_15), value);
	}

	inline static int32_t get_offset_of_validGranted__16() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___validGranted__16)); }
	inline bool get_validGranted__16() const { return ___validGranted__16; }
	inline bool* get_address_of_validGranted__16() { return &___validGranted__16; }
	inline void set_validGranted__16(bool value)
	{
		___validGranted__16 = value;
	}

	inline static int32_t get_offset_of_granted__17() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t1272814475, ___granted__17)); }
	inline bool get_granted__17() const { return ___granted__17; }
	inline bool* get_address_of_granted__17() { return &___granted__17; }
	inline void set_granted__17(bool value)
	{
		___granted__17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICEBASEBEHAVIOUR_T1272814475_H
#ifndef IMAGETARGETBASEBEHAVIOUR_T1373064375_H
#define IMAGETARGETBASEBEHAVIOUR_T1373064375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTargetBaseBehaviour
struct  ImageTargetBaseBehaviour_t1373064375  : public TargetAbstractBehaviour_t1546528472
{
public:
	// EasyAR.StorageType EasyAR.ImageTargetBaseBehaviour::Storage
	int32_t ___Storage_10;
	// System.String EasyAR.ImageTargetBaseBehaviour::Path
	String_t* ___Path_11;
	// System.String EasyAR.ImageTargetBaseBehaviour::Name
	String_t* ___Name_12;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::Size
	Vector2_t2156229523  ___Size_13;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::ActiveTargetOnStart
	bool ___ActiveTargetOnStart_14;
	// EasyAR.ImageTarget EasyAR.ImageTargetBaseBehaviour::Target
	ImageTarget_t46103797 * ___Target_15;
	// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::loaders
	List_1_t2305032523 * ___loaders_16;
	// EasyAR.ImageTrackerBaseBehaviour EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviour
	ImageTrackerBaseBehaviour_t832957781 * ___trackerBaseBehaviour_17;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviourHasSet
	bool ___trackerBaseBehaviourHasSet_18;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::lockSizeRatio
	bool ___lockSizeRatio_19;
	// UnityEngine.Vector3 EasyAR.ImageTargetBaseBehaviour::preScale
	Vector3_t3722313464  ___preScale_20;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::preSize
	Vector2_t2156229523  ___preSize_21;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::alreadysetup
	bool ___alreadysetup_22;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetLoad
	Action_3_t3935757296 * ___TargetLoad_23;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetUnload
	Action_3_t3935757296 * ___TargetUnload_24;

public:
	inline static int32_t get_offset_of_Storage_10() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___Storage_10)); }
	inline int32_t get_Storage_10() const { return ___Storage_10; }
	inline int32_t* get_address_of_Storage_10() { return &___Storage_10; }
	inline void set_Storage_10(int32_t value)
	{
		___Storage_10 = value;
	}

	inline static int32_t get_offset_of_Path_11() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___Path_11)); }
	inline String_t* get_Path_11() const { return ___Path_11; }
	inline String_t** get_address_of_Path_11() { return &___Path_11; }
	inline void set_Path_11(String_t* value)
	{
		___Path_11 = value;
		Il2CppCodeGenWriteBarrier((&___Path_11), value);
	}

	inline static int32_t get_offset_of_Name_12() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___Name_12)); }
	inline String_t* get_Name_12() const { return ___Name_12; }
	inline String_t** get_address_of_Name_12() { return &___Name_12; }
	inline void set_Name_12(String_t* value)
	{
		___Name_12 = value;
		Il2CppCodeGenWriteBarrier((&___Name_12), value);
	}

	inline static int32_t get_offset_of_Size_13() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___Size_13)); }
	inline Vector2_t2156229523  get_Size_13() const { return ___Size_13; }
	inline Vector2_t2156229523 * get_address_of_Size_13() { return &___Size_13; }
	inline void set_Size_13(Vector2_t2156229523  value)
	{
		___Size_13 = value;
	}

	inline static int32_t get_offset_of_ActiveTargetOnStart_14() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___ActiveTargetOnStart_14)); }
	inline bool get_ActiveTargetOnStart_14() const { return ___ActiveTargetOnStart_14; }
	inline bool* get_address_of_ActiveTargetOnStart_14() { return &___ActiveTargetOnStart_14; }
	inline void set_ActiveTargetOnStart_14(bool value)
	{
		___ActiveTargetOnStart_14 = value;
	}

	inline static int32_t get_offset_of_Target_15() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___Target_15)); }
	inline ImageTarget_t46103797 * get_Target_15() const { return ___Target_15; }
	inline ImageTarget_t46103797 ** get_address_of_Target_15() { return &___Target_15; }
	inline void set_Target_15(ImageTarget_t46103797 * value)
	{
		___Target_15 = value;
		Il2CppCodeGenWriteBarrier((&___Target_15), value);
	}

	inline static int32_t get_offset_of_loaders_16() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___loaders_16)); }
	inline List_1_t2305032523 * get_loaders_16() const { return ___loaders_16; }
	inline List_1_t2305032523 ** get_address_of_loaders_16() { return &___loaders_16; }
	inline void set_loaders_16(List_1_t2305032523 * value)
	{
		___loaders_16 = value;
		Il2CppCodeGenWriteBarrier((&___loaders_16), value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviour_17() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___trackerBaseBehaviour_17)); }
	inline ImageTrackerBaseBehaviour_t832957781 * get_trackerBaseBehaviour_17() const { return ___trackerBaseBehaviour_17; }
	inline ImageTrackerBaseBehaviour_t832957781 ** get_address_of_trackerBaseBehaviour_17() { return &___trackerBaseBehaviour_17; }
	inline void set_trackerBaseBehaviour_17(ImageTrackerBaseBehaviour_t832957781 * value)
	{
		___trackerBaseBehaviour_17 = value;
		Il2CppCodeGenWriteBarrier((&___trackerBaseBehaviour_17), value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviourHasSet_18() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___trackerBaseBehaviourHasSet_18)); }
	inline bool get_trackerBaseBehaviourHasSet_18() const { return ___trackerBaseBehaviourHasSet_18; }
	inline bool* get_address_of_trackerBaseBehaviourHasSet_18() { return &___trackerBaseBehaviourHasSet_18; }
	inline void set_trackerBaseBehaviourHasSet_18(bool value)
	{
		___trackerBaseBehaviourHasSet_18 = value;
	}

	inline static int32_t get_offset_of_lockSizeRatio_19() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___lockSizeRatio_19)); }
	inline bool get_lockSizeRatio_19() const { return ___lockSizeRatio_19; }
	inline bool* get_address_of_lockSizeRatio_19() { return &___lockSizeRatio_19; }
	inline void set_lockSizeRatio_19(bool value)
	{
		___lockSizeRatio_19 = value;
	}

	inline static int32_t get_offset_of_preScale_20() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___preScale_20)); }
	inline Vector3_t3722313464  get_preScale_20() const { return ___preScale_20; }
	inline Vector3_t3722313464 * get_address_of_preScale_20() { return &___preScale_20; }
	inline void set_preScale_20(Vector3_t3722313464  value)
	{
		___preScale_20 = value;
	}

	inline static int32_t get_offset_of_preSize_21() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___preSize_21)); }
	inline Vector2_t2156229523  get_preSize_21() const { return ___preSize_21; }
	inline Vector2_t2156229523 * get_address_of_preSize_21() { return &___preSize_21; }
	inline void set_preSize_21(Vector2_t2156229523  value)
	{
		___preSize_21 = value;
	}

	inline static int32_t get_offset_of_alreadysetup_22() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___alreadysetup_22)); }
	inline bool get_alreadysetup_22() const { return ___alreadysetup_22; }
	inline bool* get_address_of_alreadysetup_22() { return &___alreadysetup_22; }
	inline void set_alreadysetup_22(bool value)
	{
		___alreadysetup_22 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_23() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___TargetLoad_23)); }
	inline Action_3_t3935757296 * get_TargetLoad_23() const { return ___TargetLoad_23; }
	inline Action_3_t3935757296 ** get_address_of_TargetLoad_23() { return &___TargetLoad_23; }
	inline void set_TargetLoad_23(Action_3_t3935757296 * value)
	{
		___TargetLoad_23 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLoad_23), value);
	}

	inline static int32_t get_offset_of_TargetUnload_24() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t1373064375, ___TargetUnload_24)); }
	inline Action_3_t3935757296 * get_TargetUnload_24() const { return ___TargetUnload_24; }
	inline Action_3_t3935757296 ** get_address_of_TargetUnload_24() { return &___TargetUnload_24; }
	inline void set_TargetUnload_24(Action_3_t3935757296 * value)
	{
		___TargetUnload_24 = value;
		Il2CppCodeGenWriteBarrier((&___TargetUnload_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETBASEBEHAVIOUR_T1373064375_H
#ifndef OBJECTTARGETBASEBEHAVIOUR_T1067859224_H
#define OBJECTTARGETBASEBEHAVIOUR_T1067859224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTargetBaseBehaviour
struct  ObjectTargetBaseBehaviour_t1067859224  : public TargetAbstractBehaviour_t1546528472
{
public:
	// EasyAR.StorageType EasyAR.ObjectTargetBaseBehaviour::Storage
	int32_t ___Storage_10;
	// System.String EasyAR.ObjectTargetBaseBehaviour::Path
	String_t* ___Path_11;
	// System.String EasyAR.ObjectTargetBaseBehaviour::Name
	String_t* ___Name_12;
	// System.Single EasyAR.ObjectTargetBaseBehaviour::Scale
	float ___Scale_13;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::ActiveTargetOnStart
	bool ___ActiveTargetOnStart_14;
	// EasyAR.ObjectTarget EasyAR.ObjectTargetBaseBehaviour::Target
	ObjectTarget_t2319938315 * ___Target_15;
	// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour> EasyAR.ObjectTargetBaseBehaviour::loaders
	List_1_t2983154534 * ___loaders_16;
	// EasyAR.ObjectTrackerBaseBehaviour EasyAR.ObjectTargetBaseBehaviour::trackerBaseBehaviour
	ObjectTrackerBaseBehaviour_t1511079792 * ___trackerBaseBehaviour_17;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::trackerBaseBehaviourHasSet
	bool ___trackerBaseBehaviourHasSet_18;
	// UnityEngine.Vector3 EasyAR.ObjectTargetBaseBehaviour::preScale
	Vector3_t3722313464  ___preScale_19;
	// System.Single EasyAR.ObjectTargetBaseBehaviour::preSize
	float ___preSize_20;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::alreadysetup
	bool ___alreadysetup_21;
	// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean> EasyAR.ObjectTargetBaseBehaviour::TargetLoad
	Action_3_t1170689986 * ___TargetLoad_22;
	// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean> EasyAR.ObjectTargetBaseBehaviour::TargetUnload
	Action_3_t1170689986 * ___TargetUnload_23;

public:
	inline static int32_t get_offset_of_Storage_10() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___Storage_10)); }
	inline int32_t get_Storage_10() const { return ___Storage_10; }
	inline int32_t* get_address_of_Storage_10() { return &___Storage_10; }
	inline void set_Storage_10(int32_t value)
	{
		___Storage_10 = value;
	}

	inline static int32_t get_offset_of_Path_11() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___Path_11)); }
	inline String_t* get_Path_11() const { return ___Path_11; }
	inline String_t** get_address_of_Path_11() { return &___Path_11; }
	inline void set_Path_11(String_t* value)
	{
		___Path_11 = value;
		Il2CppCodeGenWriteBarrier((&___Path_11), value);
	}

	inline static int32_t get_offset_of_Name_12() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___Name_12)); }
	inline String_t* get_Name_12() const { return ___Name_12; }
	inline String_t** get_address_of_Name_12() { return &___Name_12; }
	inline void set_Name_12(String_t* value)
	{
		___Name_12 = value;
		Il2CppCodeGenWriteBarrier((&___Name_12), value);
	}

	inline static int32_t get_offset_of_Scale_13() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___Scale_13)); }
	inline float get_Scale_13() const { return ___Scale_13; }
	inline float* get_address_of_Scale_13() { return &___Scale_13; }
	inline void set_Scale_13(float value)
	{
		___Scale_13 = value;
	}

	inline static int32_t get_offset_of_ActiveTargetOnStart_14() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___ActiveTargetOnStart_14)); }
	inline bool get_ActiveTargetOnStart_14() const { return ___ActiveTargetOnStart_14; }
	inline bool* get_address_of_ActiveTargetOnStart_14() { return &___ActiveTargetOnStart_14; }
	inline void set_ActiveTargetOnStart_14(bool value)
	{
		___ActiveTargetOnStart_14 = value;
	}

	inline static int32_t get_offset_of_Target_15() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___Target_15)); }
	inline ObjectTarget_t2319938315 * get_Target_15() const { return ___Target_15; }
	inline ObjectTarget_t2319938315 ** get_address_of_Target_15() { return &___Target_15; }
	inline void set_Target_15(ObjectTarget_t2319938315 * value)
	{
		___Target_15 = value;
		Il2CppCodeGenWriteBarrier((&___Target_15), value);
	}

	inline static int32_t get_offset_of_loaders_16() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___loaders_16)); }
	inline List_1_t2983154534 * get_loaders_16() const { return ___loaders_16; }
	inline List_1_t2983154534 ** get_address_of_loaders_16() { return &___loaders_16; }
	inline void set_loaders_16(List_1_t2983154534 * value)
	{
		___loaders_16 = value;
		Il2CppCodeGenWriteBarrier((&___loaders_16), value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviour_17() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___trackerBaseBehaviour_17)); }
	inline ObjectTrackerBaseBehaviour_t1511079792 * get_trackerBaseBehaviour_17() const { return ___trackerBaseBehaviour_17; }
	inline ObjectTrackerBaseBehaviour_t1511079792 ** get_address_of_trackerBaseBehaviour_17() { return &___trackerBaseBehaviour_17; }
	inline void set_trackerBaseBehaviour_17(ObjectTrackerBaseBehaviour_t1511079792 * value)
	{
		___trackerBaseBehaviour_17 = value;
		Il2CppCodeGenWriteBarrier((&___trackerBaseBehaviour_17), value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviourHasSet_18() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___trackerBaseBehaviourHasSet_18)); }
	inline bool get_trackerBaseBehaviourHasSet_18() const { return ___trackerBaseBehaviourHasSet_18; }
	inline bool* get_address_of_trackerBaseBehaviourHasSet_18() { return &___trackerBaseBehaviourHasSet_18; }
	inline void set_trackerBaseBehaviourHasSet_18(bool value)
	{
		___trackerBaseBehaviourHasSet_18 = value;
	}

	inline static int32_t get_offset_of_preScale_19() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___preScale_19)); }
	inline Vector3_t3722313464  get_preScale_19() const { return ___preScale_19; }
	inline Vector3_t3722313464 * get_address_of_preScale_19() { return &___preScale_19; }
	inline void set_preScale_19(Vector3_t3722313464  value)
	{
		___preScale_19 = value;
	}

	inline static int32_t get_offset_of_preSize_20() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___preSize_20)); }
	inline float get_preSize_20() const { return ___preSize_20; }
	inline float* get_address_of_preSize_20() { return &___preSize_20; }
	inline void set_preSize_20(float value)
	{
		___preSize_20 = value;
	}

	inline static int32_t get_offset_of_alreadysetup_21() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___alreadysetup_21)); }
	inline bool get_alreadysetup_21() const { return ___alreadysetup_21; }
	inline bool* get_address_of_alreadysetup_21() { return &___alreadysetup_21; }
	inline void set_alreadysetup_21(bool value)
	{
		___alreadysetup_21 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_22() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___TargetLoad_22)); }
	inline Action_3_t1170689986 * get_TargetLoad_22() const { return ___TargetLoad_22; }
	inline Action_3_t1170689986 ** get_address_of_TargetLoad_22() { return &___TargetLoad_22; }
	inline void set_TargetLoad_22(Action_3_t1170689986 * value)
	{
		___TargetLoad_22 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLoad_22), value);
	}

	inline static int32_t get_offset_of_TargetUnload_23() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t1067859224, ___TargetUnload_23)); }
	inline Action_3_t1170689986 * get_TargetUnload_23() const { return ___TargetUnload_23; }
	inline Action_3_t1170689986 ** get_address_of_TargetUnload_23() { return &___TargetUnload_23; }
	inline void set_TargetUnload_23(Action_3_t1170689986 * value)
	{
		___TargetUnload_23 = value;
		Il2CppCodeGenWriteBarrier((&___TargetUnload_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETBASEBEHAVIOUR_T1067859224_H
#ifndef OBJECTTRACKERBASEBEHAVIOUR_T1511079792_H
#define OBJECTTRACKERBASEBEHAVIOUR_T1511079792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTrackerBaseBehaviour
struct  ObjectTrackerBaseBehaviour_t1511079792  : public DeviceUserAbstractBehaviour_t3752823894
{
public:
	// EasyAR.ObjectTracker EasyAR.ObjectTrackerBaseBehaviour::Tracker
	ObjectTracker_t4151077153 * ___Tracker_7;
	// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour> EasyAR.ObjectTrackerBaseBehaviour::imageTargetBaseBehaviours
	List_1_t2539933966 * ___imageTargetBaseBehaviours_8;
	// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour> EasyAR.ObjectTrackerBaseBehaviour::imageTargetBaseBehaviours_loadqueue
	List_1_t2539933966 * ___imageTargetBaseBehaviours_loadqueue_9;
	// System.Boolean EasyAR.ObjectTrackerBaseBehaviour::_arStarted
	bool ____arStarted_10;
	// EasyAR.CameraDevice EasyAR.ObjectTrackerBaseBehaviour::cameraDevice
	CameraDevice_t2123284476 * ___cameraDevice_11;
	// System.Int32 EasyAR.ObjectTrackerBaseBehaviour::simultaneousNum
	int32_t ___simultaneousNum_12;
	// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ObjectTrackerBaseBehaviour::TargetLoad
	Action_4_t1630973389 * ___TargetLoad_13;
	// System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ObjectTrackerBaseBehaviour::TargetUnload
	Action_4_t1630973389 * ___TargetUnload_14;

public:
	inline static int32_t get_offset_of_Tracker_7() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___Tracker_7)); }
	inline ObjectTracker_t4151077153 * get_Tracker_7() const { return ___Tracker_7; }
	inline ObjectTracker_t4151077153 ** get_address_of_Tracker_7() { return &___Tracker_7; }
	inline void set_Tracker_7(ObjectTracker_t4151077153 * value)
	{
		___Tracker_7 = value;
		Il2CppCodeGenWriteBarrier((&___Tracker_7), value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_8() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___imageTargetBaseBehaviours_8)); }
	inline List_1_t2539933966 * get_imageTargetBaseBehaviours_8() const { return ___imageTargetBaseBehaviours_8; }
	inline List_1_t2539933966 ** get_address_of_imageTargetBaseBehaviours_8() { return &___imageTargetBaseBehaviours_8; }
	inline void set_imageTargetBaseBehaviours_8(List_1_t2539933966 * value)
	{
		___imageTargetBaseBehaviours_8 = value;
		Il2CppCodeGenWriteBarrier((&___imageTargetBaseBehaviours_8), value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_loadqueue_9() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___imageTargetBaseBehaviours_loadqueue_9)); }
	inline List_1_t2539933966 * get_imageTargetBaseBehaviours_loadqueue_9() const { return ___imageTargetBaseBehaviours_loadqueue_9; }
	inline List_1_t2539933966 ** get_address_of_imageTargetBaseBehaviours_loadqueue_9() { return &___imageTargetBaseBehaviours_loadqueue_9; }
	inline void set_imageTargetBaseBehaviours_loadqueue_9(List_1_t2539933966 * value)
	{
		___imageTargetBaseBehaviours_loadqueue_9 = value;
		Il2CppCodeGenWriteBarrier((&___imageTargetBaseBehaviours_loadqueue_9), value);
	}

	inline static int32_t get_offset_of__arStarted_10() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ____arStarted_10)); }
	inline bool get__arStarted_10() const { return ____arStarted_10; }
	inline bool* get_address_of__arStarted_10() { return &____arStarted_10; }
	inline void set__arStarted_10(bool value)
	{
		____arStarted_10 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_11() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___cameraDevice_11)); }
	inline CameraDevice_t2123284476 * get_cameraDevice_11() const { return ___cameraDevice_11; }
	inline CameraDevice_t2123284476 ** get_address_of_cameraDevice_11() { return &___cameraDevice_11; }
	inline void set_cameraDevice_11(CameraDevice_t2123284476 * value)
	{
		___cameraDevice_11 = value;
		Il2CppCodeGenWriteBarrier((&___cameraDevice_11), value);
	}

	inline static int32_t get_offset_of_simultaneousNum_12() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___simultaneousNum_12)); }
	inline int32_t get_simultaneousNum_12() const { return ___simultaneousNum_12; }
	inline int32_t* get_address_of_simultaneousNum_12() { return &___simultaneousNum_12; }
	inline void set_simultaneousNum_12(int32_t value)
	{
		___simultaneousNum_12 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_13() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___TargetLoad_13)); }
	inline Action_4_t1630973389 * get_TargetLoad_13() const { return ___TargetLoad_13; }
	inline Action_4_t1630973389 ** get_address_of_TargetLoad_13() { return &___TargetLoad_13; }
	inline void set_TargetLoad_13(Action_4_t1630973389 * value)
	{
		___TargetLoad_13 = value;
		Il2CppCodeGenWriteBarrier((&___TargetLoad_13), value);
	}

	inline static int32_t get_offset_of_TargetUnload_14() { return static_cast<int32_t>(offsetof(ObjectTrackerBaseBehaviour_t1511079792, ___TargetUnload_14)); }
	inline Action_4_t1630973389 * get_TargetUnload_14() const { return ___TargetUnload_14; }
	inline Action_4_t1630973389 ** get_address_of_TargetUnload_14() { return &___TargetUnload_14; }
	inline void set_TargetUnload_14(Action_4_t1630973389 * value)
	{
		___TargetUnload_14 = value;
		Il2CppCodeGenWriteBarrier((&___TargetUnload_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTRACKERBASEBEHAVIOUR_T1511079792_H
#ifndef QRCODESCANNERBASEBEHAVIOUR_T3398722019_H
#define QRCODESCANNERBASEBEHAVIOUR_T3398722019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.QRCodeScannerBaseBehaviour
struct  QRCodeScannerBaseBehaviour_t3398722019  : public DeviceUserAbstractBehaviour_t3752823894
{
public:
	// EasyAR.BarCodeScanner EasyAR.QRCodeScannerBaseBehaviour::BarCodeScanner
	BarCodeScanner_t2130144094 * ___BarCodeScanner_7;
	// EasyAR.CameraDevice EasyAR.QRCodeScannerBaseBehaviour::cameraDevice
	CameraDevice_t2123284476 * ___cameraDevice_8;

public:
	inline static int32_t get_offset_of_BarCodeScanner_7() { return static_cast<int32_t>(offsetof(QRCodeScannerBaseBehaviour_t3398722019, ___BarCodeScanner_7)); }
	inline BarCodeScanner_t2130144094 * get_BarCodeScanner_7() const { return ___BarCodeScanner_7; }
	inline BarCodeScanner_t2130144094 ** get_address_of_BarCodeScanner_7() { return &___BarCodeScanner_7; }
	inline void set_BarCodeScanner_7(BarCodeScanner_t2130144094 * value)
	{
		___BarCodeScanner_7 = value;
		Il2CppCodeGenWriteBarrier((&___BarCodeScanner_7), value);
	}

	inline static int32_t get_offset_of_cameraDevice_8() { return static_cast<int32_t>(offsetof(QRCodeScannerBaseBehaviour_t3398722019, ___cameraDevice_8)); }
	inline CameraDevice_t2123284476 * get_cameraDevice_8() const { return ___cameraDevice_8; }
	inline CameraDevice_t2123284476 ** get_address_of_cameraDevice_8() { return &___cameraDevice_8; }
	inline void set_cameraDevice_8(CameraDevice_t2123284476 * value)
	{
		___cameraDevice_8 = value;
		Il2CppCodeGenWriteBarrier((&___cameraDevice_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODESCANNERBASEBEHAVIOUR_T3398722019_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// EasyAR.RealityPlaneBaseBehaviour[]
struct RealityPlaneBaseBehaviourU5BU5D_t2418639366  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RealityPlaneBaseBehaviour_t2956186783 * m_Items[1];

public:
	inline RealityPlaneBaseBehaviour_t2956186783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RealityPlaneBaseBehaviour_t2956186783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RealityPlaneBaseBehaviour_t2956186783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RealityPlaneBaseBehaviour_t2956186783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RealityPlaneBaseBehaviour_t2956186783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RealityPlaneBaseBehaviour_t2956186783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m409283076_gshared (Action_1_t3123413348 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Boolean>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m1873999730_gshared (Action_3_t649736746 * __this, RuntimeObject * p0, RuntimeObject * p1, bool p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m4152290082_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517598155_gshared (Dictionary_2_t1301971883 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2521704440_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1045591573_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m4048355558_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_3__ctor_m877594571_gshared (Action_3_t649736746 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`4<System.Object,System.Object,System.Object,System.Boolean>::Invoke(!0,!1,!2,!3)
extern "C" IL2CPP_METHOD_ATTR void Action_4_Invoke_m1798938001_gshared (Action_4_t1622135069 * __this, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, bool p3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m914906257_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m727165395_gshared (KeyValuePair_2_t2530217319 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`3<System.Object,EasyAR.RecorderBaseBehaviour/Status,System.Object>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m46328311_gshared (Action_3_t428259129 * __this, RuntimeObject * p0, int32_t p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m4187243487_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m2735523960_gshared (Action_2_t1820581403 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2895052643_gshared (Nullable_1_t1819850047 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3206831396_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m1689296203_gshared (Nullable_1_t1819850047 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m2376712244_gshared (Action_2_t1820581403 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* GameObject_GetComponentsInChildren_TisRuntimeObject_m693386741_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m1537761784_gshared (Action_2_t2470008838 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m4106380963_gshared (Action_2_t3782157935 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4193450060_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3327106492_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m2604080700_gshared (Action_2_t770112511 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m1711312749_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m1327304802_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m1342613109_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,EasyAR.VideoPlayer/PlayerStatus>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m1256591898_gshared (Action_2_t770112511 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::.ctor()
inline void List_1__ctor_m1341370689 (List_1_t2983154534 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2983154534 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void EasyAR.TargetAbstractBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour__ctor_m1769874139 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::CheckSize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_CheckSize_m3820784514 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::UnloadFromAllTrackers()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::LoadIntoTrackerBehaviour()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m4142119445 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTarget::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTarget__ctor_m1066587512 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m409283076 (Action_1_t3123413348 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3123413348 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m409283076_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.ObjectTarget::add_TargetSelfLoad(System.Action`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTarget_add_TargetSelfLoad_m2841208845 (ObjectTarget_t2319938315 * __this, Action_1_t3123413348 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.TargetAbstractBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_Start_m862032035 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::Init()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Init_m205211831 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTarget::LoadJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTarget_LoadJsonFile_m891460346 (ObjectTarget_t2319938315 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTarget::set_Scale(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ObjectTarget_set_Scale_m2026108309 (ObjectTarget_t2319938315 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTarget::LoadObj(System.String,EasyAR.StorageType,System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTarget_LoadObj_m2039921979 (ObjectTarget_t2319938315 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, float ___scale3, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTargetBaseBehaviour::SetupWithTargetInternal(EasyAR.ObjectTarget)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTarget_t2319938315 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] EasyAR.ObjectTarget::get_BoundingBox()
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* ObjectTarget_get_BoundingBox_m979056378 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Matrix4x4_MultiplyPoint_m1575665487 (Matrix4x4_t1817901843 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawLine_m2464833410 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void EasyAR.TargetAbstractBehaviour::UnregisterSelf()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_UnregisterSelf_m2366159564 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method);
// System.Void EasyAR.Base::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Base_Dispose_m2387565171 (Base_t1500127977 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::GetEnumerator()
inline Enumerator_t577431115  List_1_GetEnumerator_m1356403844 (List_1_t2983154534 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t577431115  (*) (List_1_t2983154534 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTrackerBaseBehaviour>::get_Current()
inline ObjectTrackerBaseBehaviour_t1511079792 * Enumerator_get_Current_m501805994 (Enumerator_t577431115 * __this, const RuntimeMethod* method)
{
	return ((  ObjectTrackerBaseBehaviour_t1511079792 * (*) (Enumerator_t577431115 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::Add(!0)
inline void List_1_Add_m477956413 (List_1_t2983154534 * __this, ObjectTrackerBaseBehaviour_t1511079792 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2983154534 *, ObjectTrackerBaseBehaviour_t1511079792 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTrackerBaseBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m1000706893 (Enumerator_t577431115 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t577431115 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTrackerBaseBehaviour::UnloadObjectTargetBehaviour(EasyAR.ObjectTargetBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_UnloadObjectTargetBehaviour_m2389908001 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTargetBaseBehaviour_t1067859224 * ___imageTargetBaseBehaviour0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::Clear()
inline void List_1_Clear_m2354188634 (List_1_t2983154534 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2983154534 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Boolean EasyAR.Base::get_IsValid()
extern "C" IL2CPP_METHOD_ATTR bool Base_get_IsValid_m1158569161 (Base_t1500127977 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTarget::remove_TargetSelfLoad(System.Action`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTarget_remove_TargetSelfLoad_m494857245 (ObjectTarget_t2319938315 * __this, Action_1_t3123413348 * ___value0, const RuntimeMethod* method);
// System.Int32 EasyAR.ObjectTarget::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectTarget_get_Id_m1981551475 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// System.Void EasyAR.TargetAbstractBehaviour::RegisterSelf(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_RegisterSelf_m1389438361 (TargetAbstractBehaviour_t1546528472 * __this, int32_t ___target_Id0, const RuntimeMethod* method);
// System.String EasyAR.ObjectTarget::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* ObjectTarget_get_Name_m2745302192 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// System.Single EasyAR.ObjectTarget::get_Scale()
extern "C" IL2CPP_METHOD_ATTR float ObjectTarget_get_Scale_m559454442 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::UpdateTargetSize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_Item_m668685504 (Vector3_t3722313464 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::Contains(!0)
inline bool List_1_Contains_m1540865493 (List_1_t2983154534 * __this, ObjectTrackerBaseBehaviour_t1511079792 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2983154534 *, ObjectTrackerBaseBehaviour_t1511079792 *, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>::Remove(!0)
inline bool List_1_Remove_m969939599 (List_1_t2983154534 * __this, ObjectTrackerBaseBehaviour_t1511079792 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2983154534 *, ObjectTrackerBaseBehaviour_t1511079792 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m2006396688 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTrackerBaseBehaviour::LoadObjectTargetBehaviour(EasyAR.ObjectTargetBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_LoadObjectTargetBehaviour_m450404887 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTargetBaseBehaviour_t1067859224 * ___imageTargetBaseBehaviour0, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTarget::LoadJsonString(System.String,EasyAR.StorageType,System.String)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTarget_LoadJsonString_m3534235284 (ObjectTarget_t2319938315 * __this, String_t* ___json0, int32_t ___storageType1, String_t* ___targetname2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<EasyAR.ObjectTarget> EasyAR.ObjectTarget::LoadListFromJsonFile(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR List_1_t3792013057 * ObjectTarget_LoadListFromJsonFile_m1385261573 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<EasyAR.ObjectTarget> EasyAR.ObjectTarget::LoadListFromJsonString(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR List_1_t3792013057 * ObjectTarget_LoadListFromJsonString_m3293858332 (RuntimeObject * __this /* static, unused */, String_t* ___json0, int32_t ___storageType1, const RuntimeMethod* method);
// System.Void System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m2176069671 (Action_3_t1170689986 * __this, ObjectTargetBaseBehaviour_t1067859224 * p0, ObjectTrackerBaseBehaviour_t1511079792 * p1, bool p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t1170689986 *, ObjectTargetBaseBehaviour_t1067859224 *, ObjectTrackerBaseBehaviour_t1511079792 *, bool, const RuntimeMethod*))Action_3_Invoke_m1873999730_gshared)(__this, p0, p1, p2, method);
}
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void EasyAR.TargetAbstractBehaviour::OnTargetLost()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_OnTargetLost_m1561625043 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::OnLoad(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_OnLoad_m3273564477 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::OnUnload(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_OnUnload_m2685857590 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method);
// System.Void EasyAR.Base::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Base__ctor_m3198904856 (Base_t1500127977 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker/TargetLoadCallbackC::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TargetLoadCallbackC__ctor_m401515100 (TargetLoadCallbackC_t557056227 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// EasyAR.IEngineNative EasyAR.Engine::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Engine_get_Instance_m3110472347 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>::Add(!0,!1)
inline void Dictionary_2_Add_m2894020209 (Dictionary_2_t2372942872 * __this, intptr_t p0, ObjectTracker_t4151077153 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2372942872 *, intptr_t, ObjectTracker_t4151077153 *, const RuntimeMethod*))Dictionary_2_Add_m4152290082_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.ObjectTracker::set_IsMultithreadCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_set_IsMultithreadCallback_m788469232 (ObjectTracker_t4151077153 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>::.ctor()
inline void Dictionary_2__ctor_m3469708682 (Dictionary_2_t2372942872 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2372942872 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>::Remove(!0)
inline bool Dictionary_2_Remove_m3719059474 (Dictionary_2_t2372942872 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2372942872 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m2521704440_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3177263377 (Dictionary_2_t2372942872 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2372942872 *, intptr_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m1045591573_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>::get_Item(!0)
inline ObjectTracker_t4151077153 * Dictionary_2_get_Item_m290080077 (Dictionary_2_t2372942872 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  ObjectTracker_t4151077153 * (*) (Dictionary_2_t2372942872 *, intptr_t, const RuntimeMethod*))Dictionary_2_get_Item_m4048355558_gshared)(__this, p0, method);
}
// System.Void EasyAR.Target::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Target__ctor_m4166662760 (Target_t4113221852 * __this, intptr_t ___obj0, const RuntimeMethod* method);
// System.Void System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m1721891905 (Action_3_t4037846343 * __this, ObjectTracker_t4151077153 * p0, Target_t4113221852 * p1, bool p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t4037846343 *, ObjectTracker_t4151077153 *, Target_t4113221852 *, bool, const RuntimeMethod*))Action_3_Invoke_m1873999730_gshared)(__this, p0, p1, p2, method);
}
// System.Void EasyAR.ObjectTracker/TargetLoadCallbackC::Invoke(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TargetLoadCallbackC_Invoke_m551793873 (TargetLoadCallbackC_t557056227 * __this, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>::.ctor()
inline void List_1__ctor_m3996350916 (List_1_t2539933966 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2539933966 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void EasyAR.DeviceUserAbstractBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DeviceUserAbstractBehaviour__ctor_m3248500455 (DeviceUserAbstractBehaviour_t3752823894 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTrackerBaseBehaviour::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_Initialize_m1653906377 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m2023249756 (Action_3_t4037846343 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t4037846343 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_m877594571_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.ObjectTracker::add_TargetLoad(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_add_TargetLoad_m3725398126 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::add_TargetUnload(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_add_TargetUnload_m2599203727 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTracker::AttachStreamer(EasyAR.CameraFrameStreamer)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_AttachStreamer_m1640299531 (ObjectTracker_t4151077153 * __this, CameraFrameStreamer_t4175238345 * ___cam0, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTracker::Start()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_Start_m610592266 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStart()
extern "C" IL2CPP_METHOD_ATTR void DeviceUserAbstractBehaviour_OnWorkStart_m1525210521 (DeviceUserAbstractBehaviour_t3752823894 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>::GetEnumerator()
inline Enumerator_t134210547  List_1_GetEnumerator_m530718370 (List_1_t2539933966 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t134210547  (*) (List_1_t2539933966 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTargetBaseBehaviour>::get_Current()
inline ObjectTargetBaseBehaviour_t1067859224 * Enumerator_get_Current_m2827875699 (Enumerator_t134210547 * __this, const RuntimeMethod* method)
{
	return ((  ObjectTargetBaseBehaviour_t1067859224 * (*) (Enumerator_t134210547 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// EasyAR.Target EasyAR.ObjectTarget::get_Target()
extern "C" IL2CPP_METHOD_ATTR Target_t4113221852 * ObjectTarget_get_Target_m2817985829 (ObjectTarget_t2319938315 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::LoadTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_LoadTarget_m1512023760 (ObjectTracker_t4151077153 * __this, Target_t4113221852 * ___target0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<EasyAR.ObjectTargetBaseBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m3133083891 (Enumerator_t134210547 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t134210547 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStop()
extern "C" IL2CPP_METHOD_ATTR void DeviceUserAbstractBehaviour_OnWorkStop_m2498152144 (DeviceUserAbstractBehaviour_t3752823894 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTracker::Stop()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_Stop_m3708047967 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// System.Int32 EasyAR.ObjectTracker::get_SimultaneousNum()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectTracker_get_SimultaneousNum_m2690320744 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::set_SimultaneousNum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_set_SimultaneousNum_m211267763 (ObjectTracker_t4151077153 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>::Clear()
inline void List_1_Clear_m2307335808 (List_1_t2539933966 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2539933966 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void EasyAR.ObjectTracker::UnloadTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_UnloadTarget_m1929119849 (ObjectTracker_t4151077153 * __this, Target_t4113221852 * ___target0, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker__ctor_m1267714373 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// EasyAR.TargetAbstractBehaviour EasyAR.TargetAbstractBehaviour::QueryBehaviour(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR TargetAbstractBehaviour_t1546528472 * TargetAbstractBehaviour_QueryBehaviour_m2705374532 (RuntimeObject * __this /* static, unused */, Target_t4113221852 * ___target0, const RuntimeMethod* method);
// System.Void EasyAR.ObjectTargetBaseBehaviour::OnTargetLoad(EasyAR.ObjectTrackerBaseBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_OnTargetLoad_m517436547 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___tracker0, bool ___status1, const RuntimeMethod* method);
// System.Void System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>::Invoke(!0,!1,!2,!3)
inline void Action_4_Invoke_m1916364534 (Action_4_t1630973389 * __this, ObjectTrackerBaseBehaviour_t1511079792 * p0, ObjectTargetBaseBehaviour_t1067859224 * p1, Target_t4113221852 * p2, bool p3, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t1630973389 *, ObjectTrackerBaseBehaviour_t1511079792 *, ObjectTargetBaseBehaviour_t1067859224 *, Target_t4113221852 *, bool, const RuntimeMethod*))Action_4_Invoke_m1798938001_gshared)(__this, p0, p1, p2, p3, method);
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::OnTargetUnload(EasyAR.ObjectTrackerBaseBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_OnTargetUnload_m3319030 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___tracker0, bool ___status1, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTracker::get_IsMultithreadCallback()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_get_IsMultithreadCallback_m1139418387 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.ObjectTracker::CheckCallback()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_CheckCallback_m3038324741 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>::Add(!0)
inline void List_1_Add_m2940881206 (List_1_t2539933966 * __this, ObjectTargetBaseBehaviour_t1067859224 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2539933966 *, ObjectTargetBaseBehaviour_t1067859224 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::AddLoader(EasyAR.ObjectTrackerBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_AddLoader_m225744784 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___trackerBehaviour0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>::Remove(!0)
inline bool List_1_Remove_m2789470776 (List_1_t2539933966 * __this, ObjectTargetBaseBehaviour_t1067859224 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t2539933966 *, ObjectTargetBaseBehaviour_t1067859224 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::RemoveLoader(EasyAR.ObjectTrackerBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_RemoveLoader_m1156972098 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___trackerBehaviour0, const RuntimeMethod* method);
// System.Void EasyAR.BarCodeScanner::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BarCodeScanner__ctor_m1413519512 (BarCodeScanner_t2130144094 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.BarCodeScanner::AttachStreamer(EasyAR.CameraFrameStreamer)
extern "C" IL2CPP_METHOD_ATTR bool BarCodeScanner_AttachStreamer_m1056337199 (BarCodeScanner_t2130144094 * __this, CameraFrameStreamer_t4175238345 * ___cam0, const RuntimeMethod* method);
// System.Boolean EasyAR.BarCodeScanner::Start()
extern "C" IL2CPP_METHOD_ATTR bool BarCodeScanner_Start_m3169582739 (BarCodeScanner_t2130144094 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.BarCodeScanner::Stop()
extern "C" IL2CPP_METHOD_ATTR bool BarCodeScanner_Stop_m3139966300 (BarCodeScanner_t2130144094 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * Component_GetComponent_TisMeshFilter_t3523625662_m1103776271 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_AddComponent_TisMeshFilter_t3523625662_m1459495195 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m914906257_gshared)(__this, method);
}
// System.Void EasyAR.MeshGenerator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MeshGenerator__ctor_m3431755699 (MeshGenerator_t2269686654 * __this, const RuntimeMethod* method);
// System.Void EasyAR.Engine::InitializeOrientation()
extern "C" IL2CPP_METHOD_ATTR void Engine_InitializeOrientation_m2665801609 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Mesh EasyAR.MeshGenerator::CreateMash()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshGenerator_CreateMash_m2246740160 (MeshGenerator_t2269686654 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_m1415871686 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void EasyAR.RealityPlaneBaseBehaviour::setScale(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_setScale_m3017485210 (RealityPlaneBaseBehaviour_t2956186783 * __this, int32_t ___rot0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_mesh_m3346355278 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  Mesh_get_bounds_m2004960313 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTexture_m544811714 (Material_t340375123 * __this, Texture_t3661962703 * p0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 EasyAR.Engine::UpdateOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR int32_t Engine_UpdateOrientation_m1578106270 (RuntimeObject * __this /* static, unused */, int32_t ___orientation0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative__ctor_m3531444284 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderBaseBehaviour/BaseNotify::.ctor(EasyAR.RecorderBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void BaseNotify__ctor_m1322478800 (BaseNotify_t3278162484 * __this, RecorderBaseBehaviour_t2449616875 * ___parent0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m3753420331 (KeyValuePair_2_t331709525 * __this, RecorderNative_t2685196317 * p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t331709525 *, RecorderNative_t2685196317 *, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m727165395_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.RecorderNative::set_RecorderNotify(System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_set_RecorderNotify_m387417284 (RecorderNative_t2685196317 * __this, KeyValuePair_2_t331709525  ___value0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::open()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_open_m1153077091 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::CheckStatus()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_CheckStatus_m1797079174 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::close()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_close_m2655443745 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m3917266203 (Action_3_t1098563045 * __this, RecorderBaseBehaviour_t2449616875 * p0, int32_t p1, String_t* p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t1098563045 *, RecorderBaseBehaviour_t2449616875 *, int32_t, String_t*, const RuntimeMethod*))Action_3_Invoke_m46328311_gshared)(__this, p0, p1, p2, method);
}
// System.String EasyAR.RecorderBaseBehaviour::get_OutputFile()
extern "C" IL2CPP_METHOD_ATTR String_t* RecorderBaseBehaviour_get_OutputFile_m2292030030 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void EasyAR.RecorderBaseBehaviour::updateFrame(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_updateFrame_m3644515897 (RecorderBaseBehaviour_t2449616875 * __this, RenderTexture_t2108887433 * ___src0, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>::Invoke(!0,!1)
inline void Action_2_Invoke_m3275928417 (Action_2_t2038586088 * __this, RecorderBaseBehaviour_t2449616875 * p0, RenderTexture_t2108887433 * p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2038586088 *, RecorderBaseBehaviour_t2449616875 *, RenderTexture_t2108887433 *, const RuntimeMethod*))Action_2_Invoke_m4187243487_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3609976976 (Action_2_t587925928 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t587925928 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m2735523960_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.RecorderNative::remove_PermissionStatusNotify(System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_remove_PermissionStatusNotify_m2796372 (RecorderNative_t2685196317 * __this, Action_2_t587925928 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartAfterGrantedU3Ec__Iterator2__ctor_m554998736 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::setOutputFile(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setOutputFile_m3433460650 (RecorderNative_t2685196317 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::setProfile(EasyAR.RecorderNative/RecorderProfile)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setProfile_m804966195 (RecorderNative_t2685196317 * __this, int32_t ___profile0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_m4054748062 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::setInputTexture(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setInputTexture_m2699022696 (RecorderNative_t2685196317 * __this, intptr_t ___texPtr0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::setZoomMode(EasyAR.RecorderNative/RecorderZoomMode)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setZoomMode_m1400342881 (RecorderNative_t2685196317 * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::setVideoOrientation(EasyAR.RecorderNative/RecordVideoOrientation)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setVideoOrientation_m681130151 (RecorderNative_t2685196317 * __this, int32_t ___videoOrientation0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::start()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_start_m3620055390 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m2895052643 (Nullable_1_t1819850047 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1819850047 *, bool, const RuntimeMethod*))Nullable_1__ctor_m2895052643_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3206831396 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3206831396_gshared)(__this, method);
}
// System.Void EasyAR.RecorderNative::stop()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_stop_m4117699869 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyAR.RecorderBaseBehaviour::StartAfterGranted()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecorderBaseBehaviour_StartAfterGranted_m1838242622 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderBaseBehaviour::interStart(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_interStart_m2579126535 (RecorderBaseBehaviour_t2449616875 * __this, RenderTexture_t2108887433 * ___src0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m1689296203 (Nullable_1_t1819850047 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1819850047 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m1689296203_gshared)(__this, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::update()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_update_m275877000 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::add_PermissionStatusNotify(System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_add_PermissionStatusNotify_m1198043599 (RecorderNative_t2685196317 * __this, Action_2_t587925928 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::RequestPermissions()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_RequestPermissions_m145179441 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::CheckPermissionStatus()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_CheckPermissionStatus_m2817455087 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::OnStatusNotify(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_OnStatusNotify_m1241673738 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative::OnPermissionNotify(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_OnPermissionNotify_m1602265046 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void EasyAR.RecorderNative/CallBack::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallBack__ctor_m1259600313 (CallBack_t877084370 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>::Add(!0,!1)
inline void Dictionary_2_Add_m320765369 (Dictionary_2_t907062036 * __this, intptr_t p0, RecorderNative_t2685196317 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t907062036 *, intptr_t, RecorderNative_t2685196317 *, const RuntimeMethod*))Dictionary_2_Add_m4152290082_gshared)(__this, p0, p1, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::.ctor()
inline void Dictionary_2__ctor_m1007627066 (Dictionary_2_t2229004654 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2229004654 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>::.ctor()
inline void Dictionary_2__ctor_m1778299640 (Dictionary_2_t907062036 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t907062036 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::get_Key()
inline RecorderNative_t2685196317 * KeyValuePair_2_get_Key_m2463647974 (KeyValuePair_2_t331709525 * __this, const RuntimeMethod* method)
{
	return ((  RecorderNative_t2685196317 * (*) (KeyValuePair_2_t331709525 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m393457049 (KeyValuePair_2_t331709525 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t331709525 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1808314757 (Dictionary_2_t2229004654 * __this, RecorderNative_t2685196317 * p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2229004654 *, RecorderNative_t2685196317 *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>::Remove(!0)
inline bool Dictionary_2_Remove_m3209091381 (Dictionary_2_t907062036 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t907062036 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m2521704440_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::Remove(!0)
inline bool Dictionary_2_Remove_m2094784424 (Dictionary_2_t2229004654 * __this, RecorderNative_t2685196317 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2229004654 *, RecorderNative_t2685196317 *, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2112035945 (Dictionary_2_t907062036 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t907062036 *, intptr_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m1045591573_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.RecorderNative>::get_Item(!0)
inline RecorderNative_t2685196317 * Dictionary_2_get_Item_m3669525594 (Dictionary_2_t907062036 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  RecorderNative_t2685196317 * (*) (Dictionary_2_t907062036 *, intptr_t, const RuntimeMethod*))Dictionary_2_get_Item_m4048355558_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>::get_Item(!0)
inline RuntimeObject* Dictionary_2_get_Item_m1106331887 (Dictionary_2_t2229004654 * __this, RecorderNative_t2685196317 * p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t2229004654 *, RecorderNative_t2685196317 *, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_m2197225693 (Action_2_t587925928 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t587925928 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m2376712244_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.RecorderNative/CallBack::Invoke(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void CallBack_Invoke_m1254479748 (CallBack_t877084370 * __this, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void EasyAR.Vector2I::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vector2I__ctor_m356857369 (Vector2I_t2668621479 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<EasyAR.RealityPlaneBaseBehaviour>()
inline RealityPlaneBaseBehaviourU5BU5D_t2418639366* GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RealityPlaneBaseBehaviourU5BU5D_t2418639366* (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m693386741_gshared)(__this, method);
}
// System.Void System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3982224860 (Action_2_t1241929155 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1241929155 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1537761784_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.ARCameraBaseBehaviour::add_PlaneTextureCreated(System.Action`2<EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D>)
extern "C" IL2CPP_METHOD_ATTR void ARCameraBaseBehaviour_add_PlaneTextureCreated_m534425965 (ARCameraBaseBehaviour_t712094156 * __this, Action_2_t1241929155 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1644397973 (Action_2_t1793738231 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1793738231 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m4106380963_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.ARCameraBaseBehaviour::add_PlaneTextureRenderChanged(System.Action`2<EasyAR.ARCameraBaseBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ARCameraBaseBehaviour_add_PlaneTextureRenderChanged_m3030977619 (ARCameraBaseBehaviour_t712094156 * __this, Action_2_t1793738231 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3805726766 (Action_2_t4217937665 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4217937665 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m4106380963_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.DeviceAbstractBehaviour::remove_DeviceStart(System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void DeviceAbstractBehaviour_remove_DeviceStart_m2408968851 (DeviceAbstractBehaviour_t3814910474 * __this, Action_2_t4217937665 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.DeviceAbstractBehaviour::add_DeviceStart(System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void DeviceAbstractBehaviour_add_DeviceStart_m415581530 (DeviceAbstractBehaviour_t3814910474 * __this, Action_2_t4217937665 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.RenderCameraBaseBehaviour::DetachAndStop()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_DetachAndStop_m549033475 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RenderCameraBaseBehaviour::AdjustPlane(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_AdjustPlane_m3755837101 (RenderCameraBaseBehaviour_t1612515119 * __this, DeviceAbstractBehaviour_t3814910474 * ___device0, bool ___status1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" IL2CPP_METHOD_ATTR Component_t1923634451 * GameObject_GetComponent_m1027872079 (GameObject_t1113636619 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// EasyAR.CameraCalibration EasyAR.CameraDevice::get_Calibration()
extern "C" IL2CPP_METHOD_ATTR CameraCalibration_t367929843 * CameraDevice_get_Calibration_m939346227 (CameraDevice_t2123284476 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 EasyAR.CameraDevice::ProjectionGL(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  CameraDevice_ProjectionGL_m2462157799 (CameraDevice_t2123284476 * __this, float ___nearPlane0, float ___farPlane1, const RuntimeMethod* method);
// EasyAR.Vector2I EasyAR.CameraDevice::get_Size()
extern "C" IL2CPP_METHOD_ATTR Vector2I_t2668621479  CameraDevice_get_Size_m790945437 (CameraDevice_t2123284476 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 EasyAR.CameraCalibration::get_FocalLength()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  CameraCalibration_get_FocalLength_m107040700 (CameraCalibration_t367929843 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RenderCameraBaseBehaviour::setRflag()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_setRflag_m4166634966 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.CameraDevice::HFlip()
extern "C" IL2CPP_METHOD_ATTR bool CameraDevice_HFlip_m2447342801 (CameraDevice_t2123284476 * __this, const RuntimeMethod* method);
// System.Void EasyAR.RenderCameraBaseBehaviour::ChangeHFlip(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_ChangeHFlip_m3945789328 (RenderCameraBaseBehaviour_t1612515119 * __this, bool ___flip0, const RuntimeMethod* method);
// System.Void EasyAR.RealityPlaneBaseBehaviour::MoveToCamera(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_MoveToCamera_m4064449008 (RealityPlaneBaseBehaviour_t2956186783 * __this, Vector2_t2156229523  ___scale0, float ___distance1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.GL::SetRevertBackfacing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GL_SetRevertBackfacing_m310228429 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::ResizeGL(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  RenderCameraBaseBehaviour_ResizeGL_m130457591 (RenderCameraBaseBehaviour_t1612515119 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m3293177686 (Camera_t4157153871 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Camera_get_projectionMatrix_m667780853 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m1438246590 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Camera_set_aspect_m2625464181 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method);
// System.Void EasyAR.Target::InitProperties()
extern "C" IL2CPP_METHOD_ATTR void Target_InitProperties_m1300233393 (Target_t4113221852 * __this, const RuntimeMethod* method);
// System.Void EasyAR.Target::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Id_m3863582096 (Target_t4113221852 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m2474145239 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void EasyAR.Target::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Name_m2548212472 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void EasyAR.Target::set_Uid(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Uid_m2500311380 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void EasyAR.Target::set_MetaData(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_MetaData_m2754738851 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>::.ctor()
inline void Dictionary_2__ctor_m149810030 (Dictionary_2_t435241803 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t435241803 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2707527413 (Dictionary_2_t435241803 * __this, int32_t p0, TargetAbstractBehaviour_t1546528472 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t435241803 *, int32_t, TargetAbstractBehaviour_t1546528472 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>::Remove(!0)
inline bool Dictionary_2_Remove_m15735542 (Dictionary_2_t435241803 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t435241803 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2363031532 (Dictionary_2_t435241803 * __this, int32_t p0, TargetAbstractBehaviour_t1546528472 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t435241803 *, int32_t, TargetAbstractBehaviour_t1546528472 *, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method);
}
// System.Int32 EasyAR.Target::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Target_get_Id_m388023146 (Target_t4113221852 * __this, const RuntimeMethod* method);
// EasyAR.ARSceneBaseBehaviour EasyAR.ARSceneBaseBehaviour::Instance()
extern "C" IL2CPP_METHOD_ATTR ARSceneBaseBehaviour_t3394135702 * ARSceneBaseBehaviour_Instance_m2315638672 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean EasyAR.ARScene::CanCastFromTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR bool ARScene_CanCastFromTarget_m910037752 (RuntimeObject * __this /* static, unused */, Target_t4113221852 * ___target0, const RuntimeMethod* method);
// System.Int32 EasyAR.ARScene::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t ARScene_get_Id_m4170591269 (ARScene_t1576376535 * __this, const RuntimeMethod* method);
// System.Void EasyAR.ARSceneBaseBehaviour::SetupTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void ARSceneBaseBehaviour_SetupTarget_m3986301973 (ARSceneBaseBehaviour_t3394135702 * __this, Target_t4113221852 * ___target0, const RuntimeMethod* method);
// System.Void System.Action`1<EasyAR.TargetAbstractBehaviour>::Invoke(!0)
inline void Action_1_Invoke_m4276893973 (Action_1_t1718996067 * __this, TargetAbstractBehaviour_t1546528472 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1718996067 *, TargetAbstractBehaviour_t1546528472 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 EasyAR.TargetInstance::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  TargetInstance_get_Position_m3031158248 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion EasyAR.TargetInstance::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  TargetInstance_get_Rotation_m2357670163 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void EasyAR.TargetInstance::set_Status(EasyAR.TargetInstance/TrackStatus)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Status_m2859395047 (TargetInstance_t1849971935 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void EasyAR.TargetInstance::set_Target(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Target_m358807125 (TargetInstance_t1849971935 * __this, Target_t4113221852 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.TargetInstance::OnPoseSet(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_OnPoseSet_m322428646 (TargetInstance_t1849971935 * __this, Matrix4x4_t1817901843  ___pose0, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m134152955 (Matrix4x4_t1817901843 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Matrix4x4_GetColumn_m461504848 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector4_op_Implicit_m1158564884 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion EasyAR.TargetInstance::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  TargetInstance_QuaternionFromMatrix_m3746477350 (TargetInstance_t1849971935 * __this, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method);
// System.Void EasyAR.TargetInstance::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Rotation_m2737320053 (TargetInstance_t1849971935 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method);
// System.Void EasyAR.TargetInstance::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Position_m779885771 (TargetInstance_t1849971935 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::OnStatusChange(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_OnStatusChange_m3051132405 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer/CallBack::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallBack__ctor_m749259251 (CallBack_t3619306023 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>::Add(!0,!1)
inline void Dictionary_2_Add_m2851123190 (Dictionary_2_t3464691576 * __this, intptr_t p0, VideoPlayer_t947858561 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3464691576 *, intptr_t, VideoPlayer_t947858561 *, const RuntimeMethod*))Dictionary_2_Add_m4152290082_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.VideoPlayer::set_IsMultithreadCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_IsMultithreadCallback_m4167417734 (VideoPlayer_t947858561 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>::.ctor()
inline void Dictionary_2__ctor_m4125734752 (Dictionary_2_t3464691576 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3464691576 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>::Remove(!0)
inline bool Dictionary_2_Remove_m671122479 (Dictionary_2_t3464691576 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3464691576 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m2521704440_gshared)(__this, p0, method);
}
// System.Void UnityEngine.GL::InvalidateState()
extern "C" IL2CPP_METHOD_ATTR void GL_InvalidateState_m1525920580 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1636683790 (Dictionary_2_t3464691576 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3464691576 *, intptr_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m1045591573_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>::get_Item(!0)
inline VideoPlayer_t947858561 * Dictionary_2_get_Item_m706897564 (Dictionary_2_t3464691576 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t947858561 * (*) (Dictionary_2_t3464691576 *, intptr_t, const RuntimeMethod*))Dictionary_2_get_Item_m4048355558_gshared)(__this, p0, method);
}
// System.Void System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>::Invoke(!0,!1)
inline void Action_2_Invoke_m992855389 (Action_2_t3847396958 * __this, VideoPlayer_t947858561 * p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3847396958 *, VideoPlayer_t947858561 *, int32_t, const RuntimeMethod*))Action_2_Invoke_m2604080700_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.VideoPlayer/CallBack::Invoke(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CallBack_Invoke_m3809082387 (CallBack_t3619306023 * __this, intptr_t ___obj0, int32_t ___status1, const RuntimeMethod* method);
// System.Single EasyAR.VideoPlayer::get_Volume()
extern "C" IL2CPP_METHOD_ATTR float VideoPlayer_get_Volume_m2467447207 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::set_Volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_Volume_m673762616 (VideoPlayer_t947858561 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<EasyAR.ImageTargetBaseBehaviour>()
inline ImageTargetBaseBehaviour_t1373064375 * Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ImageTargetBaseBehaviour_t1373064375 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m1711312749_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_m2067513003 (Material_t340375123 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m2452486895 (Material_t340375123 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1327304802_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m1327304802_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * GameObject_AddComponent_TisTextMesh_t1536577757_m1864569290 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m914906257_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1956802104 * Resources_GetBuiltinResource_TisFont_t1956802104_m881306287 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m1342613109_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.TextMesh::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_font_m4234894873 (TextMesh_t1536577757 * __this, Font_t1956802104 * p0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Font_get_material_m1471867149 (Font_t1956802104 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_characterSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_characterSize_m3288351180 (TextMesh_t1536577757 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_fontStyle(UnityEngine.FontStyle)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_fontStyle_m1906191495 (TextMesh_t1536577757 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_color_m1285272663 (TextMesh_t1536577757 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_alignment(UnityEngine.TextAlignment)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_alignment_m2348078372 (TextMesh_t1536577757 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer__ctor_m2245464495 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m3140343466 (Action_2_t3847396958 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3847396958 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1256591898_gshared)(__this, p0, p1, method);
}
// System.Void EasyAR.VideoPlayer::add_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_PlayerStatusChanged_m1585868895 (VideoPlayer_t947858561 * __this, Action_2_t3847396958 * ___value0, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayerBaseBehaviour::Init()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Init_m137519352 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayerBaseBehaviour::Open()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Open_m2412370566 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayerBaseBehaviour::Close()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Close_m3458612596 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::get_IsMultithreadCallback()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_get_IsMultithreadCallback_m2235890946 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::CheckCallback()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_CheckCallback_m2214265936 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::UpdateFrame()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_UpdateFrame_m2944425153 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::IsRenderTextureAvailable()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_IsRenderTextureAvailable_m3280631960 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 EasyAR.ImageTarget::get_Size()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  ImageTarget_get_Size_m2913433341 (ImageTarget_t46103797 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_m3858779880 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::AutoScale()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_AutoScale_m1412679298 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::Play()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Play_m2073570464 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::Pause()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Pause_m2964156643 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::SetVideoType(EasyAR.VideoPlayer/VideoType)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetVideoType_m2255920191 (VideoPlayer_t947858561 * __this, int32_t ___type0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * Material_get_mainTexture_m692510677 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::SetRenderTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetRenderTexture_m3415802502 (VideoPlayer_t947858561 * __this, intptr_t ___id0, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::Open(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Open_m3943144406 (VideoPlayer_t947858561 * __this, String_t* ___url0, int32_t ___storageType1, const RuntimeMethod* method);
// System.Void EasyAR.VideoPlayer::Close()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Close_m3121058624 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::Stop()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Stop_m997760821 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayer::Seek(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Seek_m206908203 (VideoPlayer_t947858561 * __this, int32_t ___pos0, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayer::CurrentPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_CurrentPosition_m1909684705 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayer::Width()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Width_m1257430158 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayer::Height()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Height_m1210268827 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayer::Duration()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Duration_m2821168845 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Play()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Play_m951985641 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m2047579917 (EventHandler_t1348719766 * __this, RuntimeObject * p0, EventArgs_t3591816995 * p1, const RuntimeMethod* method);
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Seek(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Seek_m3203380929 (VideoPlayerBaseBehaviour_t4040254494 * __this, int32_t ___position0, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Width()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_Width_m1224601750 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Height()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_Height_m3117882203 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_set_Item_m1772472431 (Vector3_t3722313464 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.ObjectTargetBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour__ctor_m548923136 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour__ctor_m548923136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_Path_11(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_Name_12(L_1);
		__this->set_ActiveTargetOnStart_14((bool)1);
		List_1_t2983154534 * L_2 = (List_1_t2983154534 *)il2cpp_codegen_object_new(List_1_t2983154534_il2cpp_TypeInfo_var);
		List_1__ctor_m1341370689(L_2, /*hidden argument*/List_1__ctor_m1341370689_RuntimeMethod_var);
		__this->set_loaders_16(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		TargetAbstractBehaviour__ctor_m1769874139(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::add_TargetLoad(System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_add_TargetLoad_m1490555876 (ObjectTargetBaseBehaviour_t1067859224 * __this, Action_3_t1170689986 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_add_TargetLoad_m1490555876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1170689986 * L_0 = __this->get_TargetLoad_22();
		Action_3_t1170689986 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_22(((Action_3_t1170689986 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1170689986_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::remove_TargetLoad(System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_remove_TargetLoad_m3823376671 (ObjectTargetBaseBehaviour_t1067859224 * __this, Action_3_t1170689986 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_remove_TargetLoad_m3823376671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1170689986 * L_0 = __this->get_TargetLoad_22();
		Action_3_t1170689986 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_22(((Action_3_t1170689986 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1170689986_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::add_TargetUnload(System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_add_TargetUnload_m4267598267 (ObjectTargetBaseBehaviour_t1067859224 * __this, Action_3_t1170689986 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_add_TargetUnload_m4267598267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1170689986 * L_0 = __this->get_TargetUnload_23();
		Action_3_t1170689986 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_23(((Action_3_t1170689986 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1170689986_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::remove_TargetUnload(System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_remove_TargetUnload_m53798987 (ObjectTargetBaseBehaviour_t1067859224 * __this, Action_3_t1170689986 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_remove_TargetUnload_m53798987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1170689986 * L_0 = __this->get_TargetUnload_23();
		Action_3_t1170689986 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_23(((Action_3_t1170689986 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1170689986_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::EasyAR.ITarget.OnFoundInFrame()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_EasyAR_ITarget_OnFoundInFrame_m1951463603 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	{
		ObjectTargetBaseBehaviour_CheckSize_m3820784514(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour> EasyAR.ObjectTargetBaseBehaviour::get_Loaders()
extern "C" IL2CPP_METHOD_ATTR List_1_t2983154534 * ObjectTargetBaseBehaviour_get_Loaders_m594530302 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2983154534 * L_0 = __this->get_loaders_16();
		return L_0;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::set_Loaders(System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_set_Loaders_m1688708373 (ObjectTargetBaseBehaviour_t1067859224 * __this, List_1_t2983154534 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::Bind(EasyAR.ObjectTrackerBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Bind_m2734770249 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_Bind_m2734770249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTrackerBaseBehaviour_t1511079792 * L_0 = __this->get_trackerBaseBehaviour_17();
		ObjectTrackerBaseBehaviour_t1511079792 * L_1 = ___behaviour0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586(__this, /*hidden argument*/NULL);
		ObjectTrackerBaseBehaviour_t1511079792 * L_3 = ___behaviour0;
		__this->set_trackerBaseBehaviour_17(L_3);
		ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::Awake()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Awake_m2284238472 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_Awake_m2284238472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_2);
		Renderer_set_enabled_m1727253150(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::Init()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Init_m205211831 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_Init_m205211831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		ObjectTarget_t2319938315 * L_1 = (ObjectTarget_t2319938315 *)il2cpp_codegen_object_new(ObjectTarget_t2319938315_il2cpp_TypeInfo_var);
		ObjectTarget__ctor_m1066587512(L_1, /*hidden argument*/NULL);
		__this->set_Target_15(L_1);
		ObjectTarget_t2319938315 * L_2 = __this->get_Target_15();
		intptr_t L_3 = (intptr_t)TargetAbstractBehaviour_RegisterSelf_m1389438361_RuntimeMethod_var;
		Action_1_t3123413348 * L_4 = (Action_1_t3123413348 *)il2cpp_codegen_object_new(Action_1_t3123413348_il2cpp_TypeInfo_var);
		Action_1__ctor_m409283076(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m409283076_RuntimeMethod_var);
		NullCheck(L_2);
		ObjectTarget_add_TargetSelfLoad_m2841208845(L_2, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Start_m2007576872 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_Start_m2007576872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		TargetAbstractBehaviour_Start_m862032035(__this, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_Init_m205211831(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_ActiveTargetOnStart_14();
		if (!L_0)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_1 = __this->get_alreadysetup_21();
		if (L_1)
		{
			goto IL_00d9;
		}
	}
	{
		V_0 = (bool)0;
		int32_t L_2 = __this->get_Storage_10();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)256))))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_3 = __this->get_Path_11();
		NullCheck(L_3);
		bool L_4 = String_EndsWith_m1901926500(L_3, _stringLiteral2806923157, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0093;
		}
	}

IL_0049:
	{
		ObjectTarget_t2319938315 * L_5 = __this->get_Target_15();
		String_t* L_6 = __this->get_Path_11();
		int32_t L_7 = __this->get_Storage_10();
		String_t* L_8 = __this->get_Name_12();
		NullCheck(L_5);
		bool L_9 = ObjectTarget_LoadJsonFile_m891460346(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		float L_11 = __this->get_Scale_13();
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_008e;
		}
	}
	{
		ObjectTarget_t2319938315 * L_12 = __this->get_Target_15();
		float L_13 = __this->get_Scale_13();
		NullCheck(L_12);
		ObjectTarget_set_Scale_m2026108309(L_12, L_13, /*hidden argument*/NULL);
	}

IL_008e:
	{
		goto IL_00b7;
	}

IL_0093:
	{
		ObjectTarget_t2319938315 * L_14 = __this->get_Target_15();
		String_t* L_15 = __this->get_Path_11();
		int32_t L_16 = __this->get_Storage_10();
		String_t* L_17 = __this->get_Name_12();
		float L_18 = __this->get_Scale_13();
		NullCheck(L_14);
		bool L_19 = ObjectTarget_LoadObj_m2039921979(L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_00b7:
	{
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		ObjectTarget_t2319938315 * L_21 = __this->get_Target_15();
		ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165(__this, L_21, /*hidden argument*/NULL);
		goto IL_00d9;
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral68549185, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_Update_m3100488742 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_Update_m3100488742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t1817901843  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Matrix4x4_t1817901843  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Matrix4x4_t1817901843  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Matrix4x4_t1817901843  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Matrix4x4_t1817901843  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Matrix4x4_t1817901843  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Matrix4x4_t1817901843  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Matrix4x4_t1817901843  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Matrix4x4_t1817901843  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Matrix4x4_t1817901843  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Matrix4x4_t1817901843  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Matrix4x4_t1817901843  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Matrix4x4_t1817901843  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Matrix4x4_t1817901843  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Matrix4x4_t1817901843  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Matrix4x4_t1817901843  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Matrix4x4_t1817901843  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Matrix4x4_t1817901843  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Matrix4x4_t1817901843  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Matrix4x4_t1817901843  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Matrix4x4_t1817901843  V_22;
	memset(&V_22, 0, sizeof(V_22));
	Matrix4x4_t1817901843  V_23;
	memset(&V_23, 0, sizeof(V_23));
	Matrix4x4_t1817901843  V_24;
	memset(&V_24, 0, sizeof(V_24));
	Matrix4x4_t1817901843  V_25;
	memset(&V_25, 0, sizeof(V_25));
	{
		ObjectTargetBaseBehaviour_CheckSize_m3820784514(__this, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0596;
		}
	}

IL_001b:
	{
		float L_2 = __this->get_Scale_13();
		V_0 = ((float)((float)(1.0f)/(float)L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (90.0f), L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_6 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (180.0f), L_5, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_7 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Matrix4x4_t1817901843  L_9 = Transform_get_localToWorldMatrix_m4155710351(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Quaternion_t2301928331  L_10 = V_1;
		ObjectTarget_t2319938315 * L_11 = __this->get_Target_15();
		NullCheck(L_11);
		Vector3U5BU5D_t1718750761* L_12 = ObjectTarget_get_BoundingBox_m979056378(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_10, (*(Vector3_t3722313464 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		float L_14 = V_0;
		Vector3_t3722313464  L_15 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_2), L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Matrix4x4_t1817901843  L_18 = Transform_get_localToWorldMatrix_m4155710351(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		Quaternion_t2301928331  L_19 = V_1;
		ObjectTarget_t2319938315 * L_20 = __this->get_Target_15();
		NullCheck(L_20);
		Vector3U5BU5D_t1718750761* L_21 = ObjectTarget_get_BoundingBox_m979056378(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t3722313464  L_22 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_19, (*(Vector3_t3722313464 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		float L_23 = V_0;
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_3), L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_16, L_25, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Matrix4x4_t1817901843  L_27 = Transform_get_localToWorldMatrix_m4155710351(L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		Quaternion_t2301928331  L_28 = V_1;
		ObjectTarget_t2319938315 * L_29 = __this->get_Target_15();
		NullCheck(L_29);
		Vector3U5BU5D_t1718750761* L_30 = ObjectTarget_get_BoundingBox_m979056378(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t3722313464  L_31 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_28, (*(Vector3_t3722313464 *)((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		float L_32 = V_0;
		Vector3_t3722313464  L_33 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_4), L_33, /*hidden argument*/NULL);
		Transform_t3600365921 * L_35 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Matrix4x4_t1817901843  L_36 = Transform_get_localToWorldMatrix_m4155710351(L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		Quaternion_t2301928331  L_37 = V_1;
		ObjectTarget_t2319938315 * L_38 = __this->get_Target_15();
		NullCheck(L_38);
		Vector3U5BU5D_t1718750761* L_39 = ObjectTarget_get_BoundingBox_m979056378(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_37, (*(Vector3_t3722313464 *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))), /*hidden argument*/NULL);
		float L_41 = V_0;
		Vector3_t3722313464  L_42 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_5), L_42, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_34, L_43, /*hidden argument*/NULL);
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Matrix4x4_t1817901843  L_45 = Transform_get_localToWorldMatrix_m4155710351(L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		Quaternion_t2301928331  L_46 = V_1;
		ObjectTarget_t2319938315 * L_47 = __this->get_Target_15();
		NullCheck(L_47);
		Vector3U5BU5D_t1718750761* L_48 = ObjectTarget_get_BoundingBox_m979056378(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t3722313464  L_49 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_46, (*(Vector3_t3722313464 *)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))), /*hidden argument*/NULL);
		float L_50 = V_0;
		Vector3_t3722313464  L_51 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		Vector3_t3722313464  L_52 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_6), L_51, /*hidden argument*/NULL);
		Transform_t3600365921 * L_53 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Matrix4x4_t1817901843  L_54 = Transform_get_localToWorldMatrix_m4155710351(L_53, /*hidden argument*/NULL);
		V_7 = L_54;
		Quaternion_t2301928331  L_55 = V_1;
		ObjectTarget_t2319938315 * L_56 = __this->get_Target_15();
		NullCheck(L_56);
		Vector3U5BU5D_t1718750761* L_57 = ObjectTarget_get_BoundingBox_m979056378(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t3722313464  L_58 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_55, (*(Vector3_t3722313464 *)((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))), /*hidden argument*/NULL);
		float L_59 = V_0;
		Vector3_t3722313464  L_60 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		Vector3_t3722313464  L_61 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_7), L_60, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_52, L_61, /*hidden argument*/NULL);
		Transform_t3600365921 * L_62 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_62);
		Matrix4x4_t1817901843  L_63 = Transform_get_localToWorldMatrix_m4155710351(L_62, /*hidden argument*/NULL);
		V_8 = L_63;
		Quaternion_t2301928331  L_64 = V_1;
		ObjectTarget_t2319938315 * L_65 = __this->get_Target_15();
		NullCheck(L_65);
		Vector3U5BU5D_t1718750761* L_66 = ObjectTarget_get_BoundingBox_m979056378(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t3722313464  L_67 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_64, (*(Vector3_t3722313464 *)((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))), /*hidden argument*/NULL);
		float L_68 = V_0;
		Vector3_t3722313464  L_69 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		Vector3_t3722313464  L_70 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_8), L_69, /*hidden argument*/NULL);
		Transform_t3600365921 * L_71 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Matrix4x4_t1817901843  L_72 = Transform_get_localToWorldMatrix_m4155710351(L_71, /*hidden argument*/NULL);
		V_9 = L_72;
		Quaternion_t2301928331  L_73 = V_1;
		ObjectTarget_t2319938315 * L_74 = __this->get_Target_15();
		NullCheck(L_74);
		Vector3U5BU5D_t1718750761* L_75 = ObjectTarget_get_BoundingBox_m979056378(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Vector3_t3722313464  L_76 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_73, (*(Vector3_t3722313464 *)((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		float L_77 = V_0;
		Vector3_t3722313464  L_78 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_76, L_77, /*hidden argument*/NULL);
		Vector3_t3722313464  L_79 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_9), L_78, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_70, L_79, /*hidden argument*/NULL);
		Transform_t3600365921 * L_80 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_80);
		Matrix4x4_t1817901843  L_81 = Transform_get_localToWorldMatrix_m4155710351(L_80, /*hidden argument*/NULL);
		V_10 = L_81;
		Quaternion_t2301928331  L_82 = V_1;
		ObjectTarget_t2319938315 * L_83 = __this->get_Target_15();
		NullCheck(L_83);
		Vector3U5BU5D_t1718750761* L_84 = ObjectTarget_get_BoundingBox_m979056378(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		Vector3_t3722313464  L_85 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_82, (*(Vector3_t3722313464 *)((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)))), /*hidden argument*/NULL);
		float L_86 = V_0;
		Vector3_t3722313464  L_87 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
		Vector3_t3722313464  L_88 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_10), L_87, /*hidden argument*/NULL);
		Transform_t3600365921 * L_89 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		Matrix4x4_t1817901843  L_90 = Transform_get_localToWorldMatrix_m4155710351(L_89, /*hidden argument*/NULL);
		V_11 = L_90;
		Quaternion_t2301928331  L_91 = V_1;
		ObjectTarget_t2319938315 * L_92 = __this->get_Target_15();
		NullCheck(L_92);
		Vector3U5BU5D_t1718750761* L_93 = ObjectTarget_get_BoundingBox_m979056378(L_92, /*hidden argument*/NULL);
		NullCheck(L_93);
		Vector3_t3722313464  L_94 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_91, (*(Vector3_t3722313464 *)((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)))), /*hidden argument*/NULL);
		float L_95 = V_0;
		Vector3_t3722313464  L_96 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_94, L_95, /*hidden argument*/NULL);
		Vector3_t3722313464  L_97 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_11), L_96, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_88, L_97, /*hidden argument*/NULL);
		Transform_t3600365921 * L_98 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_98);
		Matrix4x4_t1817901843  L_99 = Transform_get_localToWorldMatrix_m4155710351(L_98, /*hidden argument*/NULL);
		V_12 = L_99;
		Quaternion_t2301928331  L_100 = V_1;
		ObjectTarget_t2319938315 * L_101 = __this->get_Target_15();
		NullCheck(L_101);
		Vector3U5BU5D_t1718750761* L_102 = ObjectTarget_get_BoundingBox_m979056378(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t3722313464  L_103 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_100, (*(Vector3_t3722313464 *)((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)))), /*hidden argument*/NULL);
		float L_104 = V_0;
		Vector3_t3722313464  L_105 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_103, L_104, /*hidden argument*/NULL);
		Vector3_t3722313464  L_106 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_12), L_105, /*hidden argument*/NULL);
		Transform_t3600365921 * L_107 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_107);
		Matrix4x4_t1817901843  L_108 = Transform_get_localToWorldMatrix_m4155710351(L_107, /*hidden argument*/NULL);
		V_13 = L_108;
		Quaternion_t2301928331  L_109 = V_1;
		ObjectTarget_t2319938315 * L_110 = __this->get_Target_15();
		NullCheck(L_110);
		Vector3U5BU5D_t1718750761* L_111 = ObjectTarget_get_BoundingBox_m979056378(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		Vector3_t3722313464  L_112 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_109, (*(Vector3_t3722313464 *)((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)))), /*hidden argument*/NULL);
		float L_113 = V_0;
		Vector3_t3722313464  L_114 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		Vector3_t3722313464  L_115 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_13), L_114, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_106, L_115, /*hidden argument*/NULL);
		Transform_t3600365921 * L_116 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_116);
		Matrix4x4_t1817901843  L_117 = Transform_get_localToWorldMatrix_m4155710351(L_116, /*hidden argument*/NULL);
		V_14 = L_117;
		Quaternion_t2301928331  L_118 = V_1;
		ObjectTarget_t2319938315 * L_119 = __this->get_Target_15();
		NullCheck(L_119);
		Vector3U5BU5D_t1718750761* L_120 = ObjectTarget_get_BoundingBox_m979056378(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		Vector3_t3722313464  L_121 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_118, (*(Vector3_t3722313464 *)((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)))), /*hidden argument*/NULL);
		float L_122 = V_0;
		Vector3_t3722313464  L_123 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_121, L_122, /*hidden argument*/NULL);
		Vector3_t3722313464  L_124 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_14), L_123, /*hidden argument*/NULL);
		Transform_t3600365921 * L_125 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_125);
		Matrix4x4_t1817901843  L_126 = Transform_get_localToWorldMatrix_m4155710351(L_125, /*hidden argument*/NULL);
		V_15 = L_126;
		Quaternion_t2301928331  L_127 = V_1;
		ObjectTarget_t2319938315 * L_128 = __this->get_Target_15();
		NullCheck(L_128);
		Vector3U5BU5D_t1718750761* L_129 = ObjectTarget_get_BoundingBox_m979056378(L_128, /*hidden argument*/NULL);
		NullCheck(L_129);
		Vector3_t3722313464  L_130 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_127, (*(Vector3_t3722313464 *)((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)))), /*hidden argument*/NULL);
		float L_131 = V_0;
		Vector3_t3722313464  L_132 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/NULL);
		Vector3_t3722313464  L_133 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_15), L_132, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_124, L_133, /*hidden argument*/NULL);
		Transform_t3600365921 * L_134 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_134);
		Matrix4x4_t1817901843  L_135 = Transform_get_localToWorldMatrix_m4155710351(L_134, /*hidden argument*/NULL);
		V_16 = L_135;
		Quaternion_t2301928331  L_136 = V_1;
		ObjectTarget_t2319938315 * L_137 = __this->get_Target_15();
		NullCheck(L_137);
		Vector3U5BU5D_t1718750761* L_138 = ObjectTarget_get_BoundingBox_m979056378(L_137, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t3722313464  L_139 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_136, (*(Vector3_t3722313464 *)((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)))), /*hidden argument*/NULL);
		float L_140 = V_0;
		Vector3_t3722313464  L_141 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_139, L_140, /*hidden argument*/NULL);
		Vector3_t3722313464  L_142 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_16), L_141, /*hidden argument*/NULL);
		Transform_t3600365921 * L_143 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_143);
		Matrix4x4_t1817901843  L_144 = Transform_get_localToWorldMatrix_m4155710351(L_143, /*hidden argument*/NULL);
		V_17 = L_144;
		Quaternion_t2301928331  L_145 = V_1;
		ObjectTarget_t2319938315 * L_146 = __this->get_Target_15();
		NullCheck(L_146);
		Vector3U5BU5D_t1718750761* L_147 = ObjectTarget_get_BoundingBox_m979056378(L_146, /*hidden argument*/NULL);
		NullCheck(L_147);
		Vector3_t3722313464  L_148 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_145, (*(Vector3_t3722313464 *)((L_147)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)))), /*hidden argument*/NULL);
		float L_149 = V_0;
		Vector3_t3722313464  L_150 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_148, L_149, /*hidden argument*/NULL);
		Vector3_t3722313464  L_151 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_17), L_150, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_142, L_151, /*hidden argument*/NULL);
		Transform_t3600365921 * L_152 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_152);
		Matrix4x4_t1817901843  L_153 = Transform_get_localToWorldMatrix_m4155710351(L_152, /*hidden argument*/NULL);
		V_18 = L_153;
		Quaternion_t2301928331  L_154 = V_1;
		ObjectTarget_t2319938315 * L_155 = __this->get_Target_15();
		NullCheck(L_155);
		Vector3U5BU5D_t1718750761* L_156 = ObjectTarget_get_BoundingBox_m979056378(L_155, /*hidden argument*/NULL);
		NullCheck(L_156);
		Vector3_t3722313464  L_157 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_154, (*(Vector3_t3722313464 *)((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), /*hidden argument*/NULL);
		float L_158 = V_0;
		Vector3_t3722313464  L_159 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_157, L_158, /*hidden argument*/NULL);
		Vector3_t3722313464  L_160 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_18), L_159, /*hidden argument*/NULL);
		Transform_t3600365921 * L_161 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_161);
		Matrix4x4_t1817901843  L_162 = Transform_get_localToWorldMatrix_m4155710351(L_161, /*hidden argument*/NULL);
		V_19 = L_162;
		Quaternion_t2301928331  L_163 = V_1;
		ObjectTarget_t2319938315 * L_164 = __this->get_Target_15();
		NullCheck(L_164);
		Vector3U5BU5D_t1718750761* L_165 = ObjectTarget_get_BoundingBox_m979056378(L_164, /*hidden argument*/NULL);
		NullCheck(L_165);
		Vector3_t3722313464  L_166 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_163, (*(Vector3_t3722313464 *)((L_165)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)))), /*hidden argument*/NULL);
		float L_167 = V_0;
		Vector3_t3722313464  L_168 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_166, L_167, /*hidden argument*/NULL);
		Vector3_t3722313464  L_169 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_19), L_168, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_160, L_169, /*hidden argument*/NULL);
		Transform_t3600365921 * L_170 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_170);
		Matrix4x4_t1817901843  L_171 = Transform_get_localToWorldMatrix_m4155710351(L_170, /*hidden argument*/NULL);
		V_20 = L_171;
		Quaternion_t2301928331  L_172 = V_1;
		ObjectTarget_t2319938315 * L_173 = __this->get_Target_15();
		NullCheck(L_173);
		Vector3U5BU5D_t1718750761* L_174 = ObjectTarget_get_BoundingBox_m979056378(L_173, /*hidden argument*/NULL);
		NullCheck(L_174);
		Vector3_t3722313464  L_175 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_172, (*(Vector3_t3722313464 *)((L_174)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))), /*hidden argument*/NULL);
		float L_176 = V_0;
		Vector3_t3722313464  L_177 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_175, L_176, /*hidden argument*/NULL);
		Vector3_t3722313464  L_178 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_20), L_177, /*hidden argument*/NULL);
		Transform_t3600365921 * L_179 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_179);
		Matrix4x4_t1817901843  L_180 = Transform_get_localToWorldMatrix_m4155710351(L_179, /*hidden argument*/NULL);
		V_21 = L_180;
		Quaternion_t2301928331  L_181 = V_1;
		ObjectTarget_t2319938315 * L_182 = __this->get_Target_15();
		NullCheck(L_182);
		Vector3U5BU5D_t1718750761* L_183 = ObjectTarget_get_BoundingBox_m979056378(L_182, /*hidden argument*/NULL);
		NullCheck(L_183);
		Vector3_t3722313464  L_184 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_181, (*(Vector3_t3722313464 *)((L_183)->GetAddressAt(static_cast<il2cpp_array_size_t>(5)))), /*hidden argument*/NULL);
		float L_185 = V_0;
		Vector3_t3722313464  L_186 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_184, L_185, /*hidden argument*/NULL);
		Vector3_t3722313464  L_187 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_21), L_186, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_178, L_187, /*hidden argument*/NULL);
		Transform_t3600365921 * L_188 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_188);
		Matrix4x4_t1817901843  L_189 = Transform_get_localToWorldMatrix_m4155710351(L_188, /*hidden argument*/NULL);
		V_22 = L_189;
		Quaternion_t2301928331  L_190 = V_1;
		ObjectTarget_t2319938315 * L_191 = __this->get_Target_15();
		NullCheck(L_191);
		Vector3U5BU5D_t1718750761* L_192 = ObjectTarget_get_BoundingBox_m979056378(L_191, /*hidden argument*/NULL);
		NullCheck(L_192);
		Vector3_t3722313464  L_193 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_190, (*(Vector3_t3722313464 *)((L_192)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))), /*hidden argument*/NULL);
		float L_194 = V_0;
		Vector3_t3722313464  L_195 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_193, L_194, /*hidden argument*/NULL);
		Vector3_t3722313464  L_196 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_22), L_195, /*hidden argument*/NULL);
		Transform_t3600365921 * L_197 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_197);
		Matrix4x4_t1817901843  L_198 = Transform_get_localToWorldMatrix_m4155710351(L_197, /*hidden argument*/NULL);
		V_23 = L_198;
		Quaternion_t2301928331  L_199 = V_1;
		ObjectTarget_t2319938315 * L_200 = __this->get_Target_15();
		NullCheck(L_200);
		Vector3U5BU5D_t1718750761* L_201 = ObjectTarget_get_BoundingBox_m979056378(L_200, /*hidden argument*/NULL);
		NullCheck(L_201);
		Vector3_t3722313464  L_202 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_199, (*(Vector3_t3722313464 *)((L_201)->GetAddressAt(static_cast<il2cpp_array_size_t>(6)))), /*hidden argument*/NULL);
		float L_203 = V_0;
		Vector3_t3722313464  L_204 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_202, L_203, /*hidden argument*/NULL);
		Vector3_t3722313464  L_205 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_23), L_204, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_196, L_205, /*hidden argument*/NULL);
		Transform_t3600365921 * L_206 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_206);
		Matrix4x4_t1817901843  L_207 = Transform_get_localToWorldMatrix_m4155710351(L_206, /*hidden argument*/NULL);
		V_24 = L_207;
		Quaternion_t2301928331  L_208 = V_1;
		ObjectTarget_t2319938315 * L_209 = __this->get_Target_15();
		NullCheck(L_209);
		Vector3U5BU5D_t1718750761* L_210 = ObjectTarget_get_BoundingBox_m979056378(L_209, /*hidden argument*/NULL);
		NullCheck(L_210);
		Vector3_t3722313464  L_211 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_208, (*(Vector3_t3722313464 *)((L_210)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))), /*hidden argument*/NULL);
		float L_212 = V_0;
		Vector3_t3722313464  L_213 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_211, L_212, /*hidden argument*/NULL);
		Vector3_t3722313464  L_214 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_24), L_213, /*hidden argument*/NULL);
		Transform_t3600365921 * L_215 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_215);
		Matrix4x4_t1817901843  L_216 = Transform_get_localToWorldMatrix_m4155710351(L_215, /*hidden argument*/NULL);
		V_25 = L_216;
		Quaternion_t2301928331  L_217 = V_1;
		ObjectTarget_t2319938315 * L_218 = __this->get_Target_15();
		NullCheck(L_218);
		Vector3U5BU5D_t1718750761* L_219 = ObjectTarget_get_BoundingBox_m979056378(L_218, /*hidden argument*/NULL);
		NullCheck(L_219);
		Vector3_t3722313464  L_220 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_217, (*(Vector3_t3722313464 *)((L_219)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)))), /*hidden argument*/NULL);
		float L_221 = V_0;
		Vector3_t3722313464  L_222 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_220, L_221, /*hidden argument*/NULL);
		Vector3_t3722313464  L_223 = Matrix4x4_MultiplyPoint_m1575665487((Matrix4x4_t1817901843 *)(&V_25), L_222, /*hidden argument*/NULL);
		Debug_DrawLine_m2464833410(NULL /*static, unused*/, L_214, L_223, /*hidden argument*/NULL);
	}

IL_0596:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_OnDestroy_m457207643 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	{
		ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586(__this, /*hidden argument*/NULL);
		TargetAbstractBehaviour_UnregisterSelf_m2366159564(__this, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		ObjectTarget_t2319938315 * L_1 = __this->get_Target_15();
		NullCheck(L_1);
		Base_Dispose_m2387565171(L_1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::UnloadFromAllTrackers()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2983154534 * V_0 = NULL;
	ObjectTrackerBaseBehaviour_t1511079792 * V_1 = NULL;
	Enumerator_t577431115  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ObjectTrackerBaseBehaviour_t1511079792 * V_3 = NULL;
	Enumerator_t577431115  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		List_1_t2983154534 * L_1 = (List_1_t2983154534 *)il2cpp_codegen_object_new(List_1_t2983154534_il2cpp_TypeInfo_var);
		List_1__ctor_m1341370689(L_1, /*hidden argument*/List_1__ctor_m1341370689_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t2983154534 * L_2 = __this->get_loaders_16();
		NullCheck(L_2);
		Enumerator_t577431115  L_3 = List_1_GetEnumerator_m1356403844(L_2, /*hidden argument*/List_1_GetEnumerator_m1356403844_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0023:
		{
			ObjectTrackerBaseBehaviour_t1511079792 * L_4 = Enumerator_get_Current_m501805994((Enumerator_t577431115 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m501805994_RuntimeMethod_var);
			V_1 = L_4;
			List_1_t2983154534 * L_5 = V_0;
			ObjectTrackerBaseBehaviour_t1511079792 * L_6 = V_1;
			NullCheck(L_5);
			List_1_Add_m477956413(L_5, L_6, /*hidden argument*/List_1_Add_m477956413_RuntimeMethod_var);
		}

IL_0032:
		{
			bool L_7 = Enumerator_MoveNext_m1000706893((Enumerator_t577431115 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1000706893_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0023;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_t577431115  L_8 = V_2;
		Enumerator_t577431115  L_9 = L_8;
		RuntimeObject * L_10 = Box(Enumerator_t577431115_il2cpp_TypeInfo_var, &L_9);
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		List_1_t2983154534 * L_11 = V_0;
		NullCheck(L_11);
		Enumerator_t577431115  L_12 = List_1_GetEnumerator_m1356403844(L_11, /*hidden argument*/List_1_GetEnumerator_m1356403844_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_005c:
		{
			ObjectTrackerBaseBehaviour_t1511079792 * L_13 = Enumerator_get_Current_m501805994((Enumerator_t577431115 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m501805994_RuntimeMethod_var);
			V_3 = L_13;
			ObjectTrackerBaseBehaviour_t1511079792 * L_14 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0076;
			}
		}

IL_006f:
		{
			ObjectTrackerBaseBehaviour_t1511079792 * L_16 = V_3;
			NullCheck(L_16);
			ObjectTrackerBaseBehaviour_UnloadObjectTargetBehaviour_m2389908001(L_16, __this, /*hidden argument*/NULL);
		}

IL_0076:
		{
			bool L_17 = Enumerator_MoveNext_m1000706893((Enumerator_t577431115 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m1000706893_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_005c;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x94, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		Enumerator_t577431115  L_18 = V_4;
		Enumerator_t577431115  L_19 = L_18;
		RuntimeObject * L_20 = Box(Enumerator_t577431115_il2cpp_TypeInfo_var, &L_19);
		NullCheck((RuntimeObject*)L_20);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		IL2CPP_END_FINALLY(135)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0094:
	{
		List_1_t2983154534 * L_21 = __this->get_loaders_16();
		NullCheck(L_21);
		List_1_Clear_m2354188634(L_21, /*hidden argument*/List_1_Clear_m2354188634_RuntimeMethod_var);
		return;
	}
}
// System.Boolean EasyAR.ObjectTargetBaseBehaviour::SetupWithTargetInternal(EasyAR.ObjectTarget)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTarget_t2319938315 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTarget_t2319938315 * L_0 = ___target0;
		NullCheck(L_0);
		bool L_1 = Base_get_IsValid_m1158569161(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1695400211, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0017:
	{
		ObjectTarget_t2319938315 * L_2 = __this->get_Target_15();
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		ObjectTarget_t2319938315 * L_3 = __this->get_Target_15();
		intptr_t L_4 = (intptr_t)TargetAbstractBehaviour_RegisterSelf_m1389438361_RuntimeMethod_var;
		Action_1_t3123413348 * L_5 = (Action_1_t3123413348 *)il2cpp_codegen_object_new(Action_1_t3123413348_il2cpp_TypeInfo_var);
		Action_1__ctor_m409283076(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m409283076_RuntimeMethod_var);
		NullCheck(L_3);
		ObjectTarget_remove_TargetSelfLoad_m494857245(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		ObjectTarget_t2319938315 * L_6 = ___target0;
		__this->set_Target_15(L_6);
		ObjectTarget_t2319938315 * L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8 = ObjectTarget_get_Id_m1981551475(L_7, /*hidden argument*/NULL);
		TargetAbstractBehaviour_RegisterSelf_m1389438361(__this, L_8, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_9 = __this->get_Target_15();
		intptr_t L_10 = (intptr_t)TargetAbstractBehaviour_RegisterSelf_m1389438361_RuntimeMethod_var;
		Action_1_t3123413348 * L_11 = (Action_1_t3123413348 *)il2cpp_codegen_object_new(Action_1_t3123413348_il2cpp_TypeInfo_var);
		Action_1__ctor_m409283076(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m409283076_RuntimeMethod_var);
		NullCheck(L_9);
		ObjectTarget_add_TargetSelfLoad_m2841208845(L_9, L_11, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_12 = __this->get_Target_15();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_BehaviourPath_3();
		__this->set_Path_11(L_13);
		ObjectTarget_t2319938315 * L_14 = __this->get_Target_15();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_BehaviourStorage_2();
		__this->set_Storage_10(L_15);
		ObjectTarget_t2319938315 * L_16 = __this->get_Target_15();
		NullCheck(L_16);
		String_t* L_17 = ObjectTarget_get_Name_m2745302192(L_16, /*hidden argument*/NULL);
		__this->set_Name_12(L_17);
		ObjectTarget_t2319938315 * L_18 = __this->get_Target_15();
		NullCheck(L_18);
		float L_19 = ObjectTarget_get_Scale_m559454442(L_18, /*hidden argument*/NULL);
		__this->set_Scale_13(L_19);
		ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927(__this, /*hidden argument*/NULL);
		float L_20 = __this->get_Scale_13();
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = GameObject_get_transform_m1369836730(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_Scale_13();
		float L_24 = __this->get_Scale_13();
		float L_25 = __this->get_Scale_13();
		Vector3_t3722313464  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m3353183577((&L_26), L_23, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m3053443106(L_22, L_26, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		GameObject_t1113636619 * L_27 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_t3600365921 * L_28 = GameObject_get_transform_m1369836730(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t3722313464  L_29 = Transform_get_localScale_m129152068(L_28, /*hidden argument*/NULL);
		__this->set_preScale_19(L_29);
		float L_30 = __this->get_Scale_13();
		__this->set_preSize_20(L_30);
		__this->set_alreadysetup_21((bool)1);
		return (bool)1;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::UpdateTargetSize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	{
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		ObjectTarget_t2319938315 * L_1 = __this->get_Target_15();
		NullCheck(L_1);
		float L_2 = ObjectTarget_get_Scale_m559454442(L_1, /*hidden argument*/NULL);
		__this->set_Scale_13(L_2);
		float L_3 = __this->get_Scale_13();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_Scale_13();
		float L_7 = __this->get_Scale_13();
		float L_8 = __this->get_Scale_13();
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_9, /*hidden argument*/NULL);
	}

IL_0054:
	{
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_localScale_m129152068(L_11, /*hidden argument*/NULL);
		__this->set_preScale_19(L_12);
		float L_13 = __this->get_Scale_13();
		__this->set_preSize_20(L_13);
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::CheckSize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_CheckSize_m3820784514 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_CheckSize_m3820784514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = __this->get_preSize_20();
		float L_2 = __this->get_Scale_13();
		if ((((float)L_1) == ((float)L_2)))
		{
			goto IL_004a;
		}
	}
	{
		float L_3 = __this->get_Scale_13();
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		ObjectTarget_t2319938315 * L_4 = __this->get_Target_15();
		float L_5 = __this->get_Scale_13();
		NullCheck(L_4);
		ObjectTarget_set_Scale_m2026108309(L_4, L_5, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141(__this, /*hidden argument*/NULL);
		goto IL_013e;
	}

IL_004a:
	{
		Vector3_t3722313464  L_6 = __this->get_preScale_19();
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localScale_m129152068(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		bool L_10 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0122;
		}
	}
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_00e8;
	}

IL_0077:
	{
		Vector3_t3722313464 * L_11 = __this->get_address_of_preScale_19();
		int32_t L_12 = V_1;
		float L_13 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)L_11, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = GameObject_get_transform_m1369836730(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_localScale_m129152068(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		int32_t L_17 = V_1;
		float L_18 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)(&V_2), L_17, /*hidden argument*/NULL);
		if ((((float)L_13) == ((float)L_18)))
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_19 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t3722313464  L_21 = Transform_get_localScale_m129152068(L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		int32_t L_22 = V_1;
		float L_23 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)(&V_3), L_22, /*hidden argument*/NULL);
		if ((((float)L_23) == ((float)(0.0f))))
		{
			goto IL_00e4;
		}
	}
	{
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_localScale_m129152068(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		int32_t L_27 = V_1;
		float L_28 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)(&V_4), L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_00ef;
	}

IL_00e4:
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) < ((int32_t)3)))
		{
			goto IL_0077;
		}
	}

IL_00ef:
	{
		float L_31 = V_0;
		if ((((float)L_31) == ((float)(0.0f))))
		{
			goto IL_010a;
		}
	}
	{
		float L_32 = __this->get_Scale_13();
		if ((!(((float)L_32) == ((float)(0.0f)))))
		{
			goto IL_010b;
		}
	}

IL_010a:
	{
		return;
	}

IL_010b:
	{
		ObjectTarget_t2319938315 * L_33 = __this->get_Target_15();
		float L_34 = V_0;
		NullCheck(L_33);
		ObjectTarget_set_Scale_m2026108309(L_33, L_34, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141(__this, /*hidden argument*/NULL);
		goto IL_013e;
	}

IL_0122:
	{
		float L_35 = __this->get_Scale_13();
		ObjectTarget_t2319938315 * L_36 = __this->get_Target_15();
		NullCheck(L_36);
		float L_37 = ObjectTarget_get_Scale_m559454442(L_36, /*hidden argument*/NULL);
		if ((((float)L_35) == ((float)L_37)))
		{
			goto IL_013e;
		}
	}
	{
		ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141(__this, /*hidden argument*/NULL);
	}

IL_013e:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::AddLoader(EasyAR.ObjectTrackerBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_AddLoader_m225744784 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___trackerBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_AddLoader_m225744784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2983154534 * L_0 = __this->get_loaders_16();
		ObjectTrackerBaseBehaviour_t1511079792 * L_1 = ___trackerBehaviour0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m1540865493(L_0, L_1, /*hidden argument*/List_1_Contains_m1540865493_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t2983154534 * L_3 = __this->get_loaders_16();
		ObjectTrackerBaseBehaviour_t1511079792 * L_4 = ___trackerBehaviour0;
		NullCheck(L_3);
		List_1_Add_m477956413(L_3, L_4, /*hidden argument*/List_1_Add_m477956413_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::RemoveLoader(EasyAR.ObjectTrackerBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_RemoveLoader_m1156972098 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___trackerBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_RemoveLoader_m1156972098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2983154534 * L_0 = __this->get_loaders_16();
		ObjectTrackerBaseBehaviour_t1511079792 * L_1 = ___trackerBehaviour0;
		NullCheck(L_0);
		List_1_Remove_m969939599(L_0, L_1, /*hidden argument*/List_1_Remove_m969939599_RuntimeMethod_var);
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::LoadIntoTrackerBehaviour()
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927 (ObjectTargetBaseBehaviour_t1067859224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_LoadIntoTrackerBehaviour_m3162140927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTrackerBaseBehaviour_t1511079792 * L_0 = __this->get_trackerBaseBehaviour_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		ObjectTrackerBaseBehaviour_t1511079792 * L_2 = __this->get_trackerBaseBehaviour_17();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = GameObject_get_activeInHierarchy_m2006396688(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}

IL_0025:
	{
		return;
	}

IL_0026:
	{
		ObjectTrackerBaseBehaviour_t1511079792 * L_5 = __this->get_trackerBaseBehaviour_17();
		NullCheck(L_5);
		ObjectTrackerBaseBehaviour_LoadObjectTargetBehaviour_m450404887(L_5, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAR.ObjectTargetBaseBehaviour::SetupWithJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTargetBaseBehaviour_SetupWithJsonFile_m3762123480 (ObjectTargetBaseBehaviour_t1067859224 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ObjectTargetBaseBehaviour_Init_m205211831(__this, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586(__this, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		String_t* L_1 = ___path0;
		int32_t L_2 = ___storageType1;
		String_t* L_3 = ___targetname2;
		NullCheck(L_0);
		bool L_4 = ObjectTarget_LoadJsonFile_m891460346(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ObjectTarget_t2319938315 * L_6 = __this->get_Target_15();
		ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165(__this, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean EasyAR.ObjectTargetBaseBehaviour::SetupWithJsonString(System.String,EasyAR.StorageType,System.String)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTargetBaseBehaviour_SetupWithJsonString_m2462226545 (ObjectTargetBaseBehaviour_t1067859224 * __this, String_t* ___json0, int32_t ___storageType1, String_t* ___targetname2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ObjectTargetBaseBehaviour_Init_m205211831(__this, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586(__this, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		String_t* L_1 = ___json0;
		int32_t L_2 = ___storageType1;
		String_t* L_3 = ___targetname2;
		NullCheck(L_0);
		bool L_4 = ObjectTarget_LoadJsonString_m3534235284(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ObjectTarget_t2319938315 * L_6 = __this->get_Target_15();
		ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165(__this, L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean EasyAR.ObjectTargetBaseBehaviour::SetupWithObj(System.String,EasyAR.StorageType,System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTargetBaseBehaviour_SetupWithObj_m2620571257 (ObjectTargetBaseBehaviour_t1067859224 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, float ___scale3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ObjectTargetBaseBehaviour_Init_m205211831(__this, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_UnloadFromAllTrackers_m3338636586(__this, /*hidden argument*/NULL);
		ObjectTarget_t2319938315 * L_0 = __this->get_Target_15();
		String_t* L_1 = ___path0;
		int32_t L_2 = ___storageType1;
		String_t* L_3 = ___targetname2;
		float L_4 = ___scale3;
		NullCheck(L_0);
		bool L_5 = ObjectTarget_LoadObj_m2039921979(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		ObjectTarget_t2319938315 * L_7 = __this->get_Target_15();
		ObjectTargetBaseBehaviour_SetupWithTargetInternal_m1696242165(__this, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.List`1<EasyAR.ObjectTarget> EasyAR.ObjectTargetBaseBehaviour::LoadListFromJsonFile(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR List_1_t3792013057 * ObjectTargetBaseBehaviour_LoadListFromJsonFile_m2092674900 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		List_1_t3792013057 * L_2 = ObjectTarget_LoadListFromJsonFile_m1385261573(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.List`1<EasyAR.ObjectTarget> EasyAR.ObjectTargetBaseBehaviour::LoadListFromJsonString(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR List_1_t3792013057 * ObjectTargetBaseBehaviour_LoadListFromJsonString_m2133474757 (RuntimeObject * __this /* static, unused */, String_t* ___json0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		int32_t L_1 = ___storageType1;
		List_1_t3792013057 * L_2 = ObjectTarget_LoadListFromJsonString_m3293858332(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::OnTargetLoad(EasyAR.ObjectTrackerBaseBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_OnTargetLoad_m517436547 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___tracker0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_OnTargetLoad_m517436547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Action_3_t1170689986 * L_0 = __this->get_TargetLoad_22();
			if (!L_0)
			{
				goto IL_0019;
			}
		}

IL_000b:
		{
			Action_3_t1170689986 * L_1 = __this->get_TargetLoad_22();
			ObjectTrackerBaseBehaviour_t1511079792 * L_2 = ___tracker0;
			bool L_3 = ___status1;
			NullCheck(L_1);
			Action_3_Invoke_m2176069671(L_1, __this, L_2, L_3, /*hidden argument*/Action_3_Invoke_m2176069671_RuntimeMethod_var);
		}

IL_0019:
		{
			goto IL_0034;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTargetBaseBehaviour::OnTargetUnload(EasyAR.ObjectTrackerBaseBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTargetBaseBehaviour_OnTargetUnload_m3319030 (ObjectTargetBaseBehaviour_t1067859224 * __this, ObjectTrackerBaseBehaviour_t1511079792 * ___tracker0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTargetBaseBehaviour_OnTargetUnload_m3319030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ((TargetAbstractBehaviour_t1546528472 *)__this)->get_isFound_6();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		TargetAbstractBehaviour_OnTargetLost_m1561625043(__this, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Action_3_t1170689986 * L_1 = __this->get_TargetUnload_23();
			if (!L_1)
			{
				goto IL_002a;
			}
		}

IL_001c:
		{
			Action_3_t1170689986 * L_2 = __this->get_TargetUnload_23();
			ObjectTrackerBaseBehaviour_t1511079792 * L_3 = ___tracker0;
			bool L_4 = ___status1;
			NullCheck(L_2);
			Action_3_Invoke_m2176069671(L_2, __this, L_3, L_4, /*hidden argument*/Action_3_Invoke_m2176069671_RuntimeMethod_var);
		}

IL_002a:
		{
			goto IL_0045;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0045;
	} // end catch (depth: 1)

IL_0045:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ObjectTracker_OnLoad_m3273564477(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ObjectTracker_OnLoad_m3273564477(NULL, ___obj0, ___target1, ___status2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ObjectTracker_OnUnload_m2685857590(intptr_t ___obj0, intptr_t ___target1, int32_t ___status2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ObjectTracker_OnUnload_m2685857590(NULL, ___obj0, ___target1, ___status2, NULL);

}
// System.Void EasyAR.ObjectTracker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker__ctor_m1267714373 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker__ctor_m1267714373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Base__ctor_m3198904856(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)ObjectTracker_OnLoad_m3273564477_RuntimeMethod_var;
		TargetLoadCallbackC_t557056227 * L_1 = (TargetLoadCallbackC_t557056227 *)il2cpp_codegen_object_new(TargetLoadCallbackC_t557056227_il2cpp_TypeInfo_var);
		TargetLoadCallbackC__ctor_m401515100(L_1, NULL, L_0, /*hidden argument*/NULL);
		__this->set__onload_5(L_1);
		intptr_t L_2 = (intptr_t)ObjectTracker_OnUnload_m2685857590_RuntimeMethod_var;
		TargetLoadCallbackC_t557056227 * L_3 = (TargetLoadCallbackC_t557056227 *)il2cpp_codegen_object_new(TargetLoadCallbackC_t557056227_il2cpp_TypeInfo_var);
		TargetLoadCallbackC__ctor_m401515100(L_3, NULL, L_2, /*hidden argument*/NULL);
		__this->set__onunload_6(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		intptr_t L_5 = InterfaceFuncInvoker0< intptr_t >::Invoke(176 /* System.IntPtr EasyAR.IEngineNative::Create_ObjectTracker() */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4);
		((Base_t1500127977 *)__this)->set_Obj_0(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_6 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_7 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_6);
		Dictionary_2_Add_m2894020209(L_6, L_7, __this, /*hidden argument*/Dictionary_2_Add_m2894020209_RuntimeMethod_var);
		RuntimeObject* L_8 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_9 = ((Base_t1500127977 *)__this)->get_Obj_0();
		TargetLoadCallbackC_t557056227 * L_10 = __this->get__onload_5();
		NullCheck(L_8);
		intptr_t L_11 = InterfaceFuncInvoker2< intptr_t, intptr_t, TargetLoadCallbackC_t557056227 * >::Invoke(183 /* System.IntPtr EasyAR.IEngineNative::Create_ObjectTargetLoadCallBackUnity(System.IntPtr,EasyAR.ObjectTracker/TargetLoadCallbackC) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		__this->set__objCallbackLoad_3(L_11);
		RuntimeObject* L_12 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_13 = ((Base_t1500127977 *)__this)->get_Obj_0();
		TargetLoadCallbackC_t557056227 * L_14 = __this->get__onunload_6();
		NullCheck(L_12);
		intptr_t L_15 = InterfaceFuncInvoker2< intptr_t, intptr_t, TargetLoadCallbackC_t557056227 * >::Invoke(183 /* System.IntPtr EasyAR.IEngineNative::Create_ObjectTargetLoadCallBackUnity(System.IntPtr,EasyAR.ObjectTracker/TargetLoadCallbackC) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		__this->set__objCallbackUnload_4(L_15);
		ObjectTracker_set_IsMultithreadCallback_m788469232(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTracker::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker__cctor_m1023752413 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker__cctor_m1023752413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2372942872 * L_0 = (Dictionary_2_t2372942872 *)il2cpp_codegen_object_new(Dictionary_2_t2372942872_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3469708682(L_0, /*hidden argument*/Dictionary_2__ctor_m3469708682_RuntimeMethod_var);
		((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->set_trackers_8(L_0);
		return;
	}
}
// System.Void EasyAR.ObjectTracker::add_TargetLoad(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_add_TargetLoad_m3725398126 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_add_TargetLoad_m3725398126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t4037846343 * L_0 = __this->get_TargetLoad_9();
		Action_3_t4037846343 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_9(((Action_3_t4037846343 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t4037846343_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTracker::remove_TargetLoad(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_remove_TargetLoad_m3065119043 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_remove_TargetLoad_m3065119043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t4037846343 * L_0 = __this->get_TargetLoad_9();
		Action_3_t4037846343 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_9(((Action_3_t4037846343 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t4037846343_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTracker::add_TargetUnload(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_add_TargetUnload_m2599203727 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_add_TargetUnload_m2599203727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t4037846343 * L_0 = __this->get_TargetUnload_10();
		Action_3_t4037846343 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_10(((Action_3_t4037846343 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t4037846343_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTracker::remove_TargetUnload(System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_remove_TargetUnload_m3218471623 (ObjectTracker_t4151077153 * __this, Action_3_t4037846343 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_remove_TargetUnload_m3218471623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t4037846343 * L_0 = __this->get_TargetUnload_10();
		Action_3_t4037846343 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_10(((Action_3_t4037846343 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t4037846343_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTracker::set_IsMultithreadCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_set_IsMultithreadCallback_m788469232 (ObjectTracker_t4151077153 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_set_IsMultithreadCallback_m788469232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = ___value0;
		__this->set__isMultithreadCallback_7(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__objCallbackLoad_3();
		bool L_4 = __this->get__isMultithreadCallback_7();
		NullCheck(L_2);
		InterfaceActionInvoker2< intptr_t, bool >::Invoke(186 /* System.Void EasyAR.IEngineNative::ObjectTracker_setCallBackThread(System.IntPtr,System.Boolean) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		RuntimeObject* L_5 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_6 = __this->get__objCallbackUnload_4();
		bool L_7 = __this->get__isMultithreadCallback_7();
		NullCheck(L_5);
		InterfaceActionInvoker2< intptr_t, bool >::Invoke(186 /* System.Void EasyAR.IEngineNative::ObjectTracker_setCallBackThread(System.IntPtr,System.Boolean) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return;
	}
}
// System.Boolean EasyAR.ObjectTracker::get_IsMultithreadCallback()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_get_IsMultithreadCallback_m1139418387 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isMultithreadCallback_7();
		return L_0;
	}
}
// System.Int32 EasyAR.ObjectTracker::get_SimultaneousNum()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectTracker_get_SimultaneousNum_m2690320744 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_get_SimultaneousNum_m2690320744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(188 /* System.Int32 EasyAR.IEngineNative::ObjectTracker_simultaneousNum(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.ObjectTracker::set_SimultaneousNum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_set_SimultaneousNum_m211267763 (ObjectTracker_t4151077153 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_set_SimultaneousNum_m211267763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___value0;
		NullCheck(L_1);
		InterfaceFuncInvoker2< bool, intptr_t, int32_t >::Invoke(187 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_setSimultaneousNum(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.ObjectTracker::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_Dispose_m2902596551 (ObjectTracker_t4151077153 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_Dispose_m2902596551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_2 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_3 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_2);
		Dictionary_2_Remove_m3719059474(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m3719059474_RuntimeMethod_var);
		__this->set_TargetLoad_9((Action_3_t4037846343 *)NULL);
		__this->set_TargetUnload_10((Action_3_t4037846343 *)NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = __this->get__objCallbackLoad_3();
		NullCheck(L_4);
		InterfaceActionInvoker1< intptr_t >::Invoke(184 /* System.Void EasyAR.IEngineNative::Destory_ObjectTargetLoadCallBackUnity(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = __this->get__objCallbackUnload_4();
		NullCheck(L_6);
		InterfaceActionInvoker1< intptr_t >::Invoke(184 /* System.Void EasyAR.IEngineNative::Destory_ObjectTargetLoadCallBackUnity(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_9 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_8);
		InterfaceActionInvoker1< intptr_t >::Invoke(177 /* System.Void EasyAR.IEngineNative::Destory_ObjectTracker(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_8, L_9);
		__this->set__objCallbackLoad_3((intptr_t)(0));
		__this->set__objCallbackUnload_4((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Obj_0((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Disposed_1((bool)1);
		return;
	}
}
// System.Boolean EasyAR.ObjectTracker::CheckCallback()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_CheckCallback_m3038324741 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_CheckCallback_m3038324741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__objCallbackLoad_3();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(185 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_checkCallBack(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		RuntimeObject* L_5 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_6 = __this->get__objCallbackUnload_4();
		NullCheck(L_5);
		bool L_7 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(185 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_checkCallBack(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = (bool)((int32_t)((int32_t)L_4&(int32_t)L_7));
		bool L_8 = V_0;
		__this->set_IsCheckNeeded_2((bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0));
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean EasyAR.ObjectTracker::AttachStreamer(EasyAR.CameraFrameStreamer)
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_AttachStreamer_m1640299531 (ObjectTracker_t4151077153 * __this, CameraFrameStreamer_t4175238345 * ___cam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_AttachStreamer_m1640299531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		CameraFrameStreamer_t4175238345 * L_1 = ___cam0;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(178 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_attachStreamer(System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3, (intptr_t)(0));
		return L_4;
	}

IL_0029:
	{
		CameraFrameStreamer_t4175238345 * L_5 = ___cam0;
		NullCheck(L_5);
		bool L_6 = ((Base_t1500127977 *)L_5)->get_Disposed_1();
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_8 = ((Base_t1500127977 *)__this)->get_Obj_0();
		CameraFrameStreamer_t4175238345 * L_9 = ___cam0;
		NullCheck(L_9);
		intptr_t L_10 = ((Base_t1500127977 *)L_9)->get_Obj_0();
		NullCheck(L_7);
		bool L_11 = InterfaceFuncInvoker2< bool, intptr_t, intptr_t >::Invoke(178 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_attachStreamer(System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_7, L_8, L_10);
		return L_11;
	}
}
// System.Void EasyAR.ObjectTracker::LoadTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_LoadTarget_m1512023760 (ObjectTracker_t4151077153 * __this, Target_t4113221852 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_LoadTarget_m1512023760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Target_t4113221852 * L_1 = ___target0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Target_t4113221852 * L_2 = ___target0;
		NullCheck(L_2);
		bool L_3 = ((Base_t1500127977 *)L_2)->get_Disposed_1();
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		__this->set_IsCheckNeeded_2((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = ((Base_t1500127977 *)__this)->get_Obj_0();
		Target_t4113221852 * L_6 = ___target0;
		NullCheck(L_6);
		intptr_t L_7 = ((Base_t1500127977 *)L_6)->get_Obj_0();
		intptr_t L_8 = __this->get__objCallbackLoad_3();
		NullCheck(L_4);
		InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(179 /* System.Void EasyAR.IEngineNative::ObjectTracker_loadTarget(System.IntPtr,System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4, L_5, L_7, L_8);
		return;
	}
}
// System.Void EasyAR.ObjectTracker::UnloadTarget(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_UnloadTarget_m1929119849 (ObjectTracker_t4151077153 * __this, Target_t4113221852 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_UnloadTarget_m1929119849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Target_t4113221852 * L_1 = ___target0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Target_t4113221852 * L_2 = ___target0;
		NullCheck(L_2);
		bool L_3 = ((Base_t1500127977 *)L_2)->get_Disposed_1();
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		__this->set_IsCheckNeeded_2((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = ((Base_t1500127977 *)__this)->get_Obj_0();
		Target_t4113221852 * L_6 = ___target0;
		NullCheck(L_6);
		intptr_t L_7 = ((Base_t1500127977 *)L_6)->get_Obj_0();
		intptr_t L_8 = __this->get__objCallbackUnload_4();
		NullCheck(L_4);
		InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(180 /* System.Void EasyAR.IEngineNative::ObjectTracker_unloadTarget(System.IntPtr,System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4, L_5, L_7, L_8);
		return;
	}
}
// System.Boolean EasyAR.ObjectTracker::Start()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_Start_m610592266 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_Start_m610592266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(181 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_start(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Boolean EasyAR.ObjectTracker::Stop()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTracker_Stop_m3708047967 (ObjectTracker_t4151077153 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_Stop_m3708047967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(182 /* System.Boolean EasyAR.IEngineNative::ObjectTracker_stop(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.ObjectTracker::OnLoad(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_OnLoad_m3273564477 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_OnLoad_m3273564477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4151077153 * V_0 = NULL;
	Target_t4113221852 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_0 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_1 = ___obj0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3177263377(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3177263377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = ___target1;
		NullCheck(L_3);
		InterfaceActionInvoker1< intptr_t >::Invoke(78 /* System.Void EasyAR.IEngineNative::Destory_Target(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_5 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_6 = ___obj0;
		NullCheck(L_5);
		ObjectTracker_t4151077153 * L_7 = Dictionary_2_get_Item_m290080077(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m290080077_RuntimeMethod_var);
		V_0 = L_7;
		intptr_t L_8 = ___target1;
		Target_t4113221852 * L_9 = (Target_t4113221852 *)il2cpp_codegen_object_new(Target_t4113221852_il2cpp_TypeInfo_var);
		Target__ctor_m4166662760(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ObjectTracker_t4151077153 * L_10 = V_0;
		NullCheck(L_10);
		Action_3_t4037846343 * L_11 = L_10->get_TargetLoad_9();
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		ObjectTracker_t4151077153 * L_12 = V_0;
		NullCheck(L_12);
		Action_3_t4037846343 * L_13 = L_12->get_TargetLoad_9();
		ObjectTracker_t4151077153 * L_14 = V_0;
		Target_t4113221852 * L_15 = V_1;
		int32_t L_16 = ___status2;
		NullCheck(L_13);
		Action_3_Invoke_m1721891905(L_13, L_14, L_15, (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_3_Invoke_m1721891905_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTracker::OnUnload(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTracker_OnUnload_m2685857590 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_OnUnload_m2685857590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTracker_t4151077153 * V_0 = NULL;
	Target_t4113221852 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_0 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_1 = ___obj0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3177263377(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3177263377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = ___target1;
		NullCheck(L_3);
		InterfaceActionInvoker1< intptr_t >::Invoke(78 /* System.Void EasyAR.IEngineNative::Destory_Target(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		Dictionary_2_t2372942872 * L_5 = ((ObjectTracker_t4151077153_StaticFields*)il2cpp_codegen_static_fields_for(ObjectTracker_t4151077153_il2cpp_TypeInfo_var))->get_trackers_8();
		intptr_t L_6 = ___obj0;
		NullCheck(L_5);
		ObjectTracker_t4151077153 * L_7 = Dictionary_2_get_Item_m290080077(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m290080077_RuntimeMethod_var);
		V_0 = L_7;
		intptr_t L_8 = ___target1;
		Target_t4113221852 * L_9 = (Target_t4113221852 *)il2cpp_codegen_object_new(Target_t4113221852_il2cpp_TypeInfo_var);
		Target__ctor_m4166662760(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ObjectTracker_t4151077153 * L_10 = V_0;
		NullCheck(L_10);
		Action_3_t4037846343 * L_11 = L_10->get_TargetUnload_10();
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		ObjectTracker_t4151077153 * L_12 = V_0;
		NullCheck(L_12);
		Action_3_t4037846343 * L_13 = L_12->get_TargetUnload_10();
		ObjectTracker_t4151077153 * L_14 = V_0;
		Target_t4113221852 * L_15 = V_1;
		int32_t L_16 = ___status2;
		NullCheck(L_13);
		Action_3_Invoke_m1721891905(L_13, L_14, L_15, (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_3_Invoke_m1721891905_RuntimeMethod_var);
	}

IL_004e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_TargetLoadCallbackC_t557056227 (TargetLoadCallbackC_t557056227 * __this, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___obj0, ___target1, ___status2);

}
// System.Void EasyAR.ObjectTracker/TargetLoadCallbackC::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TargetLoadCallbackC__ctor_m401515100 (TargetLoadCallbackC_t557056227 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyAR.ObjectTracker/TargetLoadCallbackC::Invoke(System.IntPtr,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TargetLoadCallbackC_Invoke_m551793873 (TargetLoadCallbackC_t557056227 * __this, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		TargetLoadCallbackC_Invoke_m551793873((TargetLoadCallbackC_t557056227 *)__this->get_prev_9(), ___obj0, ___target1, ___status2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, ___target1, ___status2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, ___target1, ___status2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___target1, ___status2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___target1, ___status2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___target1, ___status2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___target1, ___status2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___target1, ___status2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult EasyAR.ObjectTracker/TargetLoadCallbackC::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TargetLoadCallbackC_BeginInvoke_m2203805578 (TargetLoadCallbackC_t557056227 * __this, intptr_t ___obj0, intptr_t ___target1, int32_t ___status2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetLoadCallbackC_BeginInvoke_m2203805578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___obj0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___target1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___status2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void EasyAR.ObjectTracker/TargetLoadCallbackC::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TargetLoadCallbackC_EndInvoke_m1927504003 (TargetLoadCallbackC_t557056227 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.ObjectTrackerBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour__ctor_m3729992169 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour__ctor_m3729992169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t2539933966 * L_0 = (List_1_t2539933966 *)il2cpp_codegen_object_new(List_1_t2539933966_il2cpp_TypeInfo_var);
		List_1__ctor_m3996350916(L_0, /*hidden argument*/List_1__ctor_m3996350916_RuntimeMethod_var);
		__this->set_imageTargetBaseBehaviours_8(L_0);
		List_1_t2539933966 * L_1 = (List_1_t2539933966 *)il2cpp_codegen_object_new(List_1_t2539933966_il2cpp_TypeInfo_var);
		List_1__ctor_m3996350916(L_1, /*hidden argument*/List_1__ctor_m3996350916_RuntimeMethod_var);
		__this->set_imageTargetBaseBehaviours_loadqueue_9(L_1);
		__this->set_simultaneousNum_12(1);
		DeviceUserAbstractBehaviour__ctor_m3248500455(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::add_TargetLoad(System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_add_TargetLoad_m2184662537 (ObjectTrackerBaseBehaviour_t1511079792 * __this, Action_4_t1630973389 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_add_TargetLoad_m2184662537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_4_t1630973389 * L_0 = __this->get_TargetLoad_13();
		Action_4_t1630973389 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_13(((Action_4_t1630973389 *)CastclassSealed((RuntimeObject*)L_2, Action_4_t1630973389_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::remove_TargetLoad(System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_remove_TargetLoad_m4120904953 (ObjectTrackerBaseBehaviour_t1511079792 * __this, Action_4_t1630973389 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_remove_TargetLoad_m4120904953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_4_t1630973389 * L_0 = __this->get_TargetLoad_13();
		Action_4_t1630973389 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLoad_13(((Action_4_t1630973389 *)CastclassSealed((RuntimeObject*)L_2, Action_4_t1630973389_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::add_TargetUnload(System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_add_TargetUnload_m1447941304 (ObjectTrackerBaseBehaviour_t1511079792 * __this, Action_4_t1630973389 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_add_TargetUnload_m1447941304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_4_t1630973389 * L_0 = __this->get_TargetUnload_14();
		Action_4_t1630973389 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_14(((Action_4_t1630973389 *)CastclassSealed((RuntimeObject*)L_2, Action_4_t1630973389_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::remove_TargetUnload(System.Action`4<EasyAR.ObjectTrackerBaseBehaviour,EasyAR.ObjectTargetBaseBehaviour,EasyAR.Target,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_remove_TargetUnload_m3223531478 (ObjectTrackerBaseBehaviour_t1511079792 * __this, Action_4_t1630973389 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_remove_TargetUnload_m3223531478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_4_t1630973389 * L_0 = __this->get_TargetUnload_14();
		Action_4_t1630973389 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetUnload_14(((Action_4_t1630973389 *)CastclassSealed((RuntimeObject*)L_2, Action_4_t1630973389_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::EasyAR.IDeviceUser.OnDeviceStart(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m293835532 (ObjectTrackerBaseBehaviour_t1511079792 * __this, DeviceAbstractBehaviour_t3814910474 * ___device0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m293835532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraDeviceBaseBehaviour_t1272814475 * V_0 = NULL;
	ObjectTargetBaseBehaviour_t1067859224 * V_1 = NULL;
	Enumerator_t134210547  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Target_t4113221852 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		DeviceAbstractBehaviour_t3814910474 * L_0 = ___device0;
		V_0 = ((CameraDeviceBaseBehaviour_t1272814475 *)IsInstClass((RuntimeObject*)L_0, CameraDeviceBaseBehaviour_t1272814475_il2cpp_TypeInfo_var));
		CameraDeviceBaseBehaviour_t1272814475 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = ___status1;
		if (L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		ObjectTrackerBaseBehaviour_Initialize_m1653906377(__this, /*hidden argument*/NULL);
		ObjectTracker_t4151077153 * L_4 = __this->get_Tracker_7();
		intptr_t L_5 = (intptr_t)ObjectTrackerBaseBehaviour_OnTargetLoad_m2558239660_RuntimeMethod_var;
		Action_3_t4037846343 * L_6 = (Action_3_t4037846343 *)il2cpp_codegen_object_new(Action_3_t4037846343_il2cpp_TypeInfo_var);
		Action_3__ctor_m2023249756(L_6, __this, L_5, /*hidden argument*/Action_3__ctor_m2023249756_RuntimeMethod_var);
		NullCheck(L_4);
		ObjectTracker_add_TargetLoad_m3725398126(L_4, L_6, /*hidden argument*/NULL);
		ObjectTracker_t4151077153 * L_7 = __this->get_Tracker_7();
		intptr_t L_8 = (intptr_t)ObjectTrackerBaseBehaviour_OnTargetUnload_m1283897701_RuntimeMethod_var;
		Action_3_t4037846343 * L_9 = (Action_3_t4037846343 *)il2cpp_codegen_object_new(Action_3_t4037846343_il2cpp_TypeInfo_var);
		Action_3__ctor_m2023249756(L_9, __this, L_8, /*hidden argument*/Action_3__ctor_m2023249756_RuntimeMethod_var);
		NullCheck(L_7);
		ObjectTracker_add_TargetUnload_m2599203727(L_7, L_9, /*hidden argument*/NULL);
		CameraDeviceBaseBehaviour_t1272814475 * L_10 = V_0;
		NullCheck(L_10);
		CameraDevice_t2123284476 * L_11 = L_10->get_Device_13();
		__this->set_cameraDevice_11(L_11);
		ObjectTracker_t4151077153 * L_12 = __this->get_Tracker_7();
		CameraDeviceBaseBehaviour_t1272814475 * L_13 = V_0;
		NullCheck(L_13);
		CameraFrameStreamer_t4175238345 * L_14 = L_13->get_Streamer_14();
		NullCheck(L_12);
		ObjectTracker_AttachStreamer_m1640299531(L_12, L_14, /*hidden argument*/NULL);
		ObjectTracker_t4151077153 * L_15 = __this->get_Tracker_7();
		NullCheck(L_15);
		ObjectTracker_Start_m610592266(L_15, /*hidden argument*/NULL);
		DeviceUserAbstractBehaviour_OnWorkStart_m1525210521(__this, /*hidden argument*/NULL);
		__this->set__arStarted_10((bool)1);
		List_1_t2539933966 * L_16 = __this->get_imageTargetBaseBehaviours_loadqueue_9();
		NullCheck(L_16);
		Enumerator_t134210547  L_17 = List_1_GetEnumerator_m530718370(L_16, /*hidden argument*/List_1_GetEnumerator_m530718370_RuntimeMethod_var);
		V_2 = L_17;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cb;
		}

IL_0095:
		{
			ObjectTargetBaseBehaviour_t1067859224 * L_18 = Enumerator_get_Current_m2827875699((Enumerator_t134210547 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2827875699_RuntimeMethod_var);
			V_1 = L_18;
			ObjectTargetBaseBehaviour_t1067859224 * L_19 = V_1;
			NullCheck(L_19);
			ObjectTarget_t2319938315 * L_20 = L_19->get_Target_15();
			NullCheck(L_20);
			bool L_21 = Base_get_IsValid_m1158569161(L_20, /*hidden argument*/NULL);
			if (!L_21)
			{
				goto IL_00cb;
			}
		}

IL_00ad:
		{
			ObjectTargetBaseBehaviour_t1067859224 * L_22 = V_1;
			NullCheck(L_22);
			ObjectTarget_t2319938315 * L_23 = L_22->get_Target_15();
			NullCheck(L_23);
			Target_t4113221852 * L_24 = ObjectTarget_get_Target_m2817985829(L_23, /*hidden argument*/NULL);
			V_3 = L_24;
			ObjectTracker_t4151077153 * L_25 = __this->get_Tracker_7();
			Target_t4113221852 * L_26 = V_3;
			NullCheck(L_25);
			ObjectTracker_LoadTarget_m1512023760(L_25, L_26, /*hidden argument*/NULL);
			Target_t4113221852 * L_27 = V_3;
			NullCheck(L_27);
			Base_Dispose_m2387565171(L_27, /*hidden argument*/NULL);
		}

IL_00cb:
		{
			bool L_28 = Enumerator_MoveNext_m3133083891((Enumerator_t134210547 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m3133083891_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_0095;
			}
		}

IL_00d7:
		{
			IL2CPP_LEAVE(0xE8, FINALLY_00dc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dc;
	}

FINALLY_00dc:
	{ // begin finally (depth: 1)
		Enumerator_t134210547  L_29 = V_2;
		Enumerator_t134210547  L_30 = L_29;
		RuntimeObject * L_31 = Box(Enumerator_t134210547_il2cpp_TypeInfo_var, &L_30);
		NullCheck((RuntimeObject*)L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
		IL2CPP_END_FINALLY(220)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(220)
	{
		IL2CPP_JUMP_TBL(0xE8, IL_00e8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e8:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::EasyAR.IDeviceUser.DetachAndStop()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_EasyAR_IDeviceUser_DetachAndStop_m227354898 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		CameraDevice_t2123284476 * L_1 = __this->get_cameraDevice_11();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DeviceUserAbstractBehaviour_OnWorkStop_m2498152144(__this, /*hidden argument*/NULL);
		ObjectTracker_t4151077153 * L_2 = __this->get_Tracker_7();
		NullCheck(L_2);
		ObjectTracker_AttachStreamer_m1640299531(L_2, (CameraFrameStreamer_t4175238345 *)NULL, /*hidden argument*/NULL);
	}

IL_0029:
	{
		ObjectTracker_t4151077153 * L_3 = __this->get_Tracker_7();
		NullCheck(L_3);
		ObjectTracker_Stop_m3708047967(L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		__this->set_cameraDevice_11((CameraDevice_t2123284476 *)NULL);
		return;
	}
}
// System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour> EasyAR.ObjectTrackerBaseBehaviour::get_LoadedTargetBehaviours()
extern "C" IL2CPP_METHOD_ATTR List_1_t2539933966 * ObjectTrackerBaseBehaviour_get_LoadedTargetBehaviours_m4150087578 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2539933966 * L_0 = __this->get_imageTargetBaseBehaviours_8();
		return L_0;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::set_LoadedTargetBehaviours(System.Collections.Generic.List`1<EasyAR.ObjectTargetBaseBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_set_LoadedTargetBehaviours_m1449912789 (ObjectTrackerBaseBehaviour_t1511079792 * __this, List_1_t2539933966 * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 EasyAR.ObjectTrackerBaseBehaviour::get_SimultaneousNum()
extern "C" IL2CPP_METHOD_ATTR int32_t ObjectTrackerBaseBehaviour_get_SimultaneousNum_m1469635641 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectTracker_t4151077153 * L_1 = __this->get_Tracker_7();
		NullCheck(L_1);
		bool L_2 = Base_get_IsValid_m1158569161(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}

IL_001b:
	{
		int32_t L_3 = __this->get_simultaneousNum_12();
		return L_3;
	}

IL_0022:
	{
		ObjectTracker_t4151077153 * L_4 = __this->get_Tracker_7();
		NullCheck(L_4);
		int32_t L_5 = ObjectTracker_get_SimultaneousNum_m2690320744(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::set_SimultaneousNum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_set_SimultaneousNum_m479209776 (ObjectTrackerBaseBehaviour_t1511079792 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ObjectTracker_t4151077153 * L_1 = __this->get_Tracker_7();
		NullCheck(L_1);
		bool L_2 = Base_get_IsValid_m1158569161(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		int32_t L_3 = ___value0;
		__this->set_simultaneousNum_12(L_3);
		return;
	}

IL_0023:
	{
		ObjectTracker_t4151077153 * L_4 = __this->get_Tracker_7();
		int32_t L_5 = ___value0;
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->set_simultaneousNum_12(L_6);
		int32_t L_7 = V_0;
		NullCheck(L_4);
		ObjectTracker_set_SimultaneousNum_m211267763(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_OnDestroy_m733328988 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_OnDestroy_m733328988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTargetBaseBehaviour_t1067859224 * V_0 = NULL;
	Enumerator_t134210547  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Target_t4113221852 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2539933966 * L_0 = __this->get_imageTargetBaseBehaviours_loadqueue_9();
		NullCheck(L_0);
		List_1_Clear_m2307335808(L_0, /*hidden argument*/List_1_Clear_m2307335808_RuntimeMethod_var);
		List_1_t2539933966 * L_1 = __this->get_imageTargetBaseBehaviours_8();
		NullCheck(L_1);
		Enumerator_t134210547  L_2 = List_1_GetEnumerator_m530718370(L_1, /*hidden argument*/List_1_GetEnumerator_m530718370_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_001c:
		{
			ObjectTargetBaseBehaviour_t1067859224 * L_3 = Enumerator_get_Current_m2827875699((Enumerator_t134210547 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2827875699_RuntimeMethod_var);
			V_0 = L_3;
			ObjectTargetBaseBehaviour_t1067859224 * L_4 = V_0;
			NullCheck(L_4);
			ObjectTarget_t2319938315 * L_5 = L_4->get_Target_15();
			if (!L_5)
			{
				goto IL_0068;
			}
		}

IL_002f:
		{
			ObjectTargetBaseBehaviour_t1067859224 * L_6 = V_0;
			NullCheck(L_6);
			ObjectTarget_t2319938315 * L_7 = L_6->get_Target_15();
			NullCheck(L_7);
			bool L_8 = Base_get_IsValid_m1158569161(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0068;
			}
		}

IL_003f:
		{
			ObjectTargetBaseBehaviour_t1067859224 * L_9 = V_0;
			NullCheck(L_9);
			ObjectTarget_t2319938315 * L_10 = L_9->get_Target_15();
			NullCheck(L_10);
			Target_t4113221852 * L_11 = ObjectTarget_get_Target_m2817985829(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			ObjectTracker_t4151077153 * L_12 = __this->get_Tracker_7();
			if (!L_12)
			{
				goto IL_0062;
			}
		}

IL_0056:
		{
			ObjectTracker_t4151077153 * L_13 = __this->get_Tracker_7();
			Target_t4113221852 * L_14 = V_2;
			NullCheck(L_13);
			ObjectTracker_UnloadTarget_m1929119849(L_13, L_14, /*hidden argument*/NULL);
		}

IL_0062:
		{
			Target_t4113221852 * L_15 = V_2;
			NullCheck(L_15);
			Base_Dispose_m2387565171(L_15, /*hidden argument*/NULL);
		}

IL_0068:
		{
			bool L_16 = Enumerator_MoveNext_m3133083891((Enumerator_t134210547 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m3133083891_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_001c;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x85, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		Enumerator_t134210547  L_17 = V_1;
		Enumerator_t134210547  L_18 = L_17;
		RuntimeObject * L_19 = Box(Enumerator_t134210547_il2cpp_TypeInfo_var, &L_18);
		NullCheck((RuntimeObject*)L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		IL2CPP_END_FINALLY(121)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		List_1_t2539933966 * L_20 = __this->get_imageTargetBaseBehaviours_8();
		NullCheck(L_20);
		List_1_Clear_m2307335808(L_20, /*hidden argument*/List_1_Clear_m2307335808_RuntimeMethod_var);
		InterfaceActionInvoker0::Invoke(1 /* System.Void EasyAR.IDeviceUser::DetachAndStop() */, IDeviceUser_t459901323_il2cpp_TypeInfo_var, __this);
		ObjectTracker_t4151077153 * L_21 = __this->get_Tracker_7();
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		ObjectTracker_t4151077153 * L_22 = __this->get_Tracker_7();
		NullCheck(L_22);
		Base_Dispose_m2387565171(L_22, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		__this->set__arStarted_10((bool)0);
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::Initialize()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_Initialize_m1653906377 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_Initialize_m1653906377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		ObjectTracker_t4151077153 * L_1 = (ObjectTracker_t4151077153 *)il2cpp_codegen_object_new(ObjectTracker_t4151077153_il2cpp_TypeInfo_var);
		ObjectTracker__ctor_m1267714373(L_1, /*hidden argument*/NULL);
		__this->set_Tracker_7(L_1);
		ObjectTracker_t4151077153 * L_2 = __this->get_Tracker_7();
		int32_t L_3 = __this->get_simultaneousNum_12();
		NullCheck(L_2);
		ObjectTracker_set_SimultaneousNum_m211267763(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_Start_m1773505833 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTrackerBaseBehaviour_Initialize_m1653906377(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::OnTargetLoad(EasyAR.ObjectTracker,EasyAR.Target,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_OnTargetLoad_m2558239660 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTracker_t4151077153 * ___tracker0, Target_t4113221852 * ___target1, bool ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_OnTargetLoad_m2558239660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTargetBaseBehaviour_t1067859224 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Target_t4113221852 * L_0 = ___target1;
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		TargetAbstractBehaviour_t1546528472 * L_1 = TargetAbstractBehaviour_QueryBehaviour_m2705374532(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ObjectTargetBaseBehaviour_t1067859224 *)IsInstClass((RuntimeObject*)L_1, ObjectTargetBaseBehaviour_t1067859224_il2cpp_TypeInfo_var));
		ObjectTargetBaseBehaviour_t1067859224 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_4 = V_0;
		NullCheck(L_4);
		ObjectTargetBaseBehaviour_UpdateTargetSize_m2600702141(L_4, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_t1067859224 * L_5 = V_0;
		bool L_6 = ___status2;
		NullCheck(L_5);
		ObjectTargetBaseBehaviour_OnTargetLoad_m517436547(L_5, __this, L_6, /*hidden argument*/NULL);
		Action_4_t1630973389 * L_7 = __this->get_TargetLoad_13();
		if (!L_7)
		{
			goto IL_0065;
		}
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		Action_4_t1630973389 * L_8 = __this->get_TargetLoad_13();
		Target_t4113221852 * L_9 = ___target1;
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		TargetAbstractBehaviour_t1546528472 * L_10 = TargetAbstractBehaviour_QueryBehaviour_m2705374532(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Target_t4113221852 * L_11 = ___target1;
		bool L_12 = ___status2;
		NullCheck(L_8);
		Action_4_Invoke_m1916364534(L_8, __this, ((ObjectTargetBaseBehaviour_t1067859224 *)IsInstClass((RuntimeObject*)L_10, ObjectTargetBaseBehaviour_t1067859224_il2cpp_TypeInfo_var)), L_11, L_12, /*hidden argument*/Action_4_Invoke_m1916364534_RuntimeMethod_var);
		goto IL_0065;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004f;
		throw e;
	}

CATCH_004f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::OnTargetUnload(EasyAR.ObjectTracker,EasyAR.Target,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_OnTargetUnload_m1283897701 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTracker_t4151077153 * ___tracker0, Target_t4113221852 * ___target1, bool ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_OnTargetUnload_m1283897701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTargetBaseBehaviour_t1067859224 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Target_t4113221852 * L_0 = ___target1;
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		TargetAbstractBehaviour_t1546528472 * L_1 = TargetAbstractBehaviour_QueryBehaviour_m2705374532(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ObjectTargetBaseBehaviour_t1067859224 *)IsInstClass((RuntimeObject*)L_1, ObjectTargetBaseBehaviour_t1067859224_il2cpp_TypeInfo_var));
		ObjectTargetBaseBehaviour_t1067859224 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_4 = V_0;
		bool L_5 = ___status2;
		NullCheck(L_4);
		ObjectTargetBaseBehaviour_OnTargetUnload_m3319030(L_4, __this, L_5, /*hidden argument*/NULL);
		Action_4_t1630973389 * L_6 = __this->get_TargetUnload_14();
		if (!L_6)
		{
			goto IL_005f;
		}
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		Action_4_t1630973389 * L_7 = __this->get_TargetUnload_14();
		Target_t4113221852 * L_8 = ___target1;
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		TargetAbstractBehaviour_t1546528472 * L_9 = TargetAbstractBehaviour_QueryBehaviour_m2705374532(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Target_t4113221852 * L_10 = ___target1;
		bool L_11 = ___status2;
		NullCheck(L_7);
		Action_4_Invoke_m1916364534(L_7, __this, ((ObjectTargetBaseBehaviour_t1067859224 *)IsInstClass((RuntimeObject*)L_9, ObjectTargetBaseBehaviour_t1067859224_il2cpp_TypeInfo_var)), L_10, L_11, /*hidden argument*/Action_4_Invoke_m1916364534_RuntimeMethod_var);
		goto IL_005f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0049;
		throw e;
	}

CATCH_0049:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_005f;
	} // end catch (depth: 1)

IL_005f:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_Update_m2633438173 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		ObjectTracker_t4151077153 * L_1 = __this->get_Tracker_7();
		NullCheck(L_1);
		bool L_2 = ObjectTracker_get_IsMultithreadCallback_m1139418387(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		ObjectTracker_t4151077153 * L_3 = __this->get_Tracker_7();
		NullCheck(L_3);
		bool L_4 = L_3->get_IsCheckNeeded_2();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		ObjectTracker_t4151077153 * L_5 = __this->get_Tracker_7();
		NullCheck(L_5);
		ObjectTracker_CheckCallback_m3038324741(L_5, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::LoadObjectTargetBehaviour(EasyAR.ObjectTargetBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_LoadObjectTargetBehaviour_m450404887 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTargetBaseBehaviour_t1067859224 * ___imageTargetBaseBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_LoadObjectTargetBehaviour_m450404887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Target_t4113221852 * V_1 = NULL;
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_0 = ___imageTargetBaseBehaviour0;
		NullCheck(L_0);
		ObjectTarget_t2319938315 * L_1 = L_0->get_Target_15();
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_2 = ___imageTargetBaseBehaviour0;
		NullCheck(L_2);
		ObjectTarget_t2319938315 * L_3 = L_2->get_Target_15();
		NullCheck(L_3);
		int32_t L_4 = ObjectTarget_get_Id_m1981551475(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ObjectTargetBaseBehaviour_t1067859224 * L_5 = ___imageTargetBaseBehaviour0;
		NullCheck(L_5);
		ObjectTarget_t2319938315 * L_6 = L_5->get_Target_15();
		NullCheck(L_6);
		bool L_7 = Base_get_IsValid_m1158569161(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002f:
	{
		return;
	}

IL_0030:
	{
		List_1_t2539933966 * L_9 = __this->get_imageTargetBaseBehaviours_8();
		ObjectTargetBaseBehaviour_t1067859224 * L_10 = ___imageTargetBaseBehaviour0;
		NullCheck(L_9);
		List_1_Add_m2940881206(L_9, L_10, /*hidden argument*/List_1_Add_m2940881206_RuntimeMethod_var);
		ObjectTargetBaseBehaviour_t1067859224 * L_11 = ___imageTargetBaseBehaviour0;
		NullCheck(L_11);
		ObjectTargetBaseBehaviour_AddLoader_m225744784(L_11, __this, /*hidden argument*/NULL);
		bool L_12 = __this->get__arStarted_10();
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_13 = ___imageTargetBaseBehaviour0;
		NullCheck(L_13);
		ObjectTarget_t2319938315 * L_14 = L_13->get_Target_15();
		NullCheck(L_14);
		Target_t4113221852 * L_15 = ObjectTarget_get_Target_m2817985829(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		ObjectTracker_t4151077153 * L_16 = __this->get_Tracker_7();
		Target_t4113221852 * L_17 = V_1;
		NullCheck(L_16);
		ObjectTracker_LoadTarget_m1512023760(L_16, L_17, /*hidden argument*/NULL);
		Target_t4113221852 * L_18 = V_1;
		NullCheck(L_18);
		Base_Dispose_m2387565171(L_18, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_0071:
	{
		List_1_t2539933966 * L_19 = __this->get_imageTargetBaseBehaviours_loadqueue_9();
		ObjectTargetBaseBehaviour_t1067859224 * L_20 = ___imageTargetBaseBehaviour0;
		NullCheck(L_19);
		List_1_Add_m2940881206(L_19, L_20, /*hidden argument*/List_1_Add_m2940881206_RuntimeMethod_var);
	}

IL_007d:
	{
		return;
	}
}
// System.Void EasyAR.ObjectTrackerBaseBehaviour::UnloadObjectTargetBehaviour(EasyAR.ObjectTargetBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void ObjectTrackerBaseBehaviour_UnloadObjectTargetBehaviour_m2389908001 (ObjectTrackerBaseBehaviour_t1511079792 * __this, ObjectTargetBaseBehaviour_t1067859224 * ___imageTargetBaseBehaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTrackerBaseBehaviour_UnloadObjectTargetBehaviour_m2389908001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Target_t4113221852 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2539933966 * L_0 = __this->get_imageTargetBaseBehaviours_loadqueue_9();
		ObjectTargetBaseBehaviour_t1067859224 * L_1 = ___imageTargetBaseBehaviour0;
		NullCheck(L_0);
		List_1_Remove_m2789470776(L_0, L_1, /*hidden argument*/List_1_Remove_m2789470776_RuntimeMethod_var);
		List_1_t2539933966 * L_2 = __this->get_imageTargetBaseBehaviours_8();
		ObjectTargetBaseBehaviour_t1067859224 * L_3 = ___imageTargetBaseBehaviour0;
		NullCheck(L_2);
		bool L_4 = List_1_Remove_m2789470776(L_2, L_3, /*hidden argument*/List_1_Remove_m2789470776_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_5 = ___imageTargetBaseBehaviour0;
		NullCheck(L_5);
		ObjectTarget_t2319938315 * L_6 = L_5->get_Target_15();
		NullCheck(L_6);
		int32_t L_7 = ObjectTarget_get_Id_m1981551475(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_9 = ___imageTargetBaseBehaviour0;
		NullCheck(L_9);
		ObjectTargetBaseBehaviour_RemoveLoader_m1156972098(L_9, __this, /*hidden argument*/NULL);
		ObjectTargetBaseBehaviour_t1067859224 * L_10 = ___imageTargetBaseBehaviour0;
		NullCheck(L_10);
		ObjectTarget_t2319938315 * L_11 = L_10->get_Target_15();
		NullCheck(L_11);
		bool L_12 = Base_get_IsValid_m1158569161(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00bb;
		}
	}
	{
		ObjectTracker_t4151077153 * L_13 = __this->get_Tracker_7();
		if (L_13)
		{
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_14 = ___imageTargetBaseBehaviour0;
		NullCheck(L_14);
		ObjectTarget_t2319938315 * L_15 = L_14->get_Target_15();
		NullCheck(L_15);
		Target_t4113221852 * L_16 = ObjectTarget_get_Target_m2817985829(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		ObjectTracker_t4151077153 * L_17 = __this->get_Tracker_7();
		Target_t4113221852 * L_18 = V_1;
		NullCheck(L_17);
		ObjectTracker_UnloadTarget_m1929119849(L_17, L_18, /*hidden argument*/NULL);
		Target_t4113221852 * L_19 = V_1;
		NullCheck(L_19);
		Base_Dispose_m2387565171(L_19, /*hidden argument*/NULL);
		Action_4_t1630973389 * L_20 = __this->get_TargetUnload_14();
		if (!L_20)
		{
			goto IL_00b3;
		}
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		Action_4_t1630973389 * L_21 = __this->get_TargetUnload_14();
		ObjectTargetBaseBehaviour_t1067859224 * L_22 = ___imageTargetBaseBehaviour0;
		ObjectTargetBaseBehaviour_t1067859224 * L_23 = ___imageTargetBaseBehaviour0;
		NullCheck(L_23);
		ObjectTarget_t2319938315 * L_24 = L_23->get_Target_15();
		NullCheck(L_24);
		Target_t4113221852 * L_25 = ObjectTarget_get_Target_m2817985829(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Action_4_Invoke_m1916364534(L_21, __this, L_22, L_25, (bool)1, /*hidden argument*/Action_4_Invoke_m1916364534_RuntimeMethod_var);
		goto IL_00b3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		goto IL_00b3;
	} // end catch (depth: 1)

IL_00b3:
	{
		ObjectTargetBaseBehaviour_t1067859224 * L_28 = ___imageTargetBaseBehaviour0;
		NullCheck(L_28);
		ObjectTargetBaseBehaviour_OnTargetUnload_m3319030(L_28, __this, (bool)1, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		return;
	}
}
// System.Boolean EasyAR.ObjectTrackerBaseBehaviour::StartTrack()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTrackerBaseBehaviour_StartTrack_m485291546 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		ObjectTracker_t4151077153 * L_1 = __this->get_Tracker_7();
		NullCheck(L_1);
		bool L_2 = ObjectTracker_Start_m610592266(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean EasyAR.ObjectTrackerBaseBehaviour::StopTrack()
extern "C" IL2CPP_METHOD_ATTR bool ObjectTrackerBaseBehaviour_StopTrack_m714544422 (ObjectTrackerBaseBehaviour_t1511079792 * __this, const RuntimeMethod* method)
{
	{
		ObjectTracker_t4151077153 * L_0 = __this->get_Tracker_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		ObjectTracker_t4151077153 * L_1 = __this->get_Tracker_7();
		NullCheck(L_1);
		bool L_2 = ObjectTracker_Stop_m3708047967(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.QRCodeScannerBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeScannerBaseBehaviour__ctor_m1267747424 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	{
		DeviceUserAbstractBehaviour__ctor_m3248500455(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.QRCodeScannerBaseBehaviour::EasyAR.IDeviceUser.OnDeviceStart(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void QRCodeScannerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m3282989132 (QRCodeScannerBaseBehaviour_t3398722019 * __this, DeviceAbstractBehaviour_t3814910474 * ___device0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeScannerBaseBehaviour_EasyAR_IDeviceUser_OnDeviceStart_m3282989132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraDeviceBaseBehaviour_t1272814475 * V_0 = NULL;
	{
		DeviceAbstractBehaviour_t3814910474 * L_0 = ___device0;
		V_0 = ((CameraDeviceBaseBehaviour_t1272814475 *)IsInstClass((RuntimeObject*)L_0, CameraDeviceBaseBehaviour_t1272814475_il2cpp_TypeInfo_var));
		CameraDeviceBaseBehaviour_t1272814475 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = ___status1;
		if (L_3)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		BarCodeScanner_t2130144094 * L_4 = __this->get_BarCodeScanner_7();
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		BarCodeScanner_t2130144094 * L_5 = (BarCodeScanner_t2130144094 *)il2cpp_codegen_object_new(BarCodeScanner_t2130144094_il2cpp_TypeInfo_var);
		BarCodeScanner__ctor_m1413519512(L_5, /*hidden argument*/NULL);
		__this->set_BarCodeScanner_7(L_5);
	}

IL_002f:
	{
		CameraDeviceBaseBehaviour_t1272814475 * L_6 = V_0;
		NullCheck(L_6);
		CameraDevice_t2123284476 * L_7 = L_6->get_Device_13();
		__this->set_cameraDevice_8(L_7);
		BarCodeScanner_t2130144094 * L_8 = __this->get_BarCodeScanner_7();
		CameraDeviceBaseBehaviour_t1272814475 * L_9 = V_0;
		NullCheck(L_9);
		CameraFrameStreamer_t4175238345 * L_10 = L_9->get_Streamer_14();
		NullCheck(L_8);
		BarCodeScanner_AttachStreamer_m1056337199(L_8, L_10, /*hidden argument*/NULL);
		BarCodeScanner_t2130144094 * L_11 = __this->get_BarCodeScanner_7();
		NullCheck(L_11);
		BarCodeScanner_Start_m3169582739(L_11, /*hidden argument*/NULL);
		DeviceUserAbstractBehaviour_OnWorkStart_m1525210521(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.QRCodeScannerBaseBehaviour::EasyAR.IDeviceUser.DetachAndStop()
extern "C" IL2CPP_METHOD_ATTR void QRCodeScannerBaseBehaviour_EasyAR_IDeviceUser_DetachAndStop_m2411078193 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	{
		BarCodeScanner_t2130144094 * L_0 = __this->get_BarCodeScanner_7();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		CameraDevice_t2123284476 * L_1 = __this->get_cameraDevice_8();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DeviceUserAbstractBehaviour_OnWorkStop_m2498152144(__this, /*hidden argument*/NULL);
		BarCodeScanner_t2130144094 * L_2 = __this->get_BarCodeScanner_7();
		NullCheck(L_2);
		BarCodeScanner_AttachStreamer_m1056337199(L_2, (CameraFrameStreamer_t4175238345 *)NULL, /*hidden argument*/NULL);
	}

IL_0029:
	{
		BarCodeScanner_t2130144094 * L_3 = __this->get_BarCodeScanner_7();
		NullCheck(L_3);
		BarCodeScanner_Stop_m3139966300(L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		__this->set_cameraDevice_8((CameraDevice_t2123284476 *)NULL);
		return;
	}
}
// System.Void EasyAR.QRCodeScannerBaseBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void QRCodeScannerBaseBehaviour_OnDestroy_m1134362481 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeScannerBaseBehaviour_OnDestroy_m1134362481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterfaceActionInvoker0::Invoke(1 /* System.Void EasyAR.IDeviceUser::DetachAndStop() */, IDeviceUser_t459901323_il2cpp_TypeInfo_var, __this);
		BarCodeScanner_t2130144094 * L_0 = __this->get_BarCodeScanner_7();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		BarCodeScanner_t2130144094 * L_1 = __this->get_BarCodeScanner_7();
		NullCheck(L_1);
		Base_Dispose_m2387565171(L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void EasyAR.QRCodeScannerBaseBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void QRCodeScannerBaseBehaviour_Start_m2638931086 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeScannerBaseBehaviour_Start_m2638931086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BarCodeScanner_t2130144094 * L_0 = __this->get_BarCodeScanner_7();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		BarCodeScanner_t2130144094 * L_1 = (BarCodeScanner_t2130144094 *)il2cpp_codegen_object_new(BarCodeScanner_t2130144094_il2cpp_TypeInfo_var);
		BarCodeScanner__ctor_m1413519512(L_1, /*hidden argument*/NULL);
		__this->set_BarCodeScanner_7(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean EasyAR.QRCodeScannerBaseBehaviour::StartScan()
extern "C" IL2CPP_METHOD_ATTR bool QRCodeScannerBaseBehaviour_StartScan_m3007334791 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	{
		BarCodeScanner_t2130144094 * L_0 = __this->get_BarCodeScanner_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		BarCodeScanner_t2130144094 * L_1 = __this->get_BarCodeScanner_7();
		NullCheck(L_1);
		bool L_2 = BarCodeScanner_Start_m3169582739(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean EasyAR.QRCodeScannerBaseBehaviour::StopScan()
extern "C" IL2CPP_METHOD_ATTR bool QRCodeScannerBaseBehaviour_StopScan_m4163485526 (QRCodeScannerBaseBehaviour_t3398722019 * __this, const RuntimeMethod* method)
{
	{
		BarCodeScanner_t2130144094 * L_0 = __this->get_BarCodeScanner_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		BarCodeScanner_t2130144094 * L_1 = __this->get_BarCodeScanner_7();
		NullCheck(L_1);
		bool L_2 = BarCodeScanner_Stop_m3139966300(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.RealityPlaneBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour__ctor_m2926738914 (RealityPlaneBaseBehaviour_t2956186783 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::Awake()
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_Awake_m3453724978 (RealityPlaneBaseBehaviour_t2956186783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_Awake_m3453724978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_0);
		Renderer_set_enabled_m1727253150(L_0, (bool)0, /*hidden argument*/NULL);
		MeshFilter_t3523625662 * L_1 = Component_GetComponent_TisMeshFilter_t3523625662_m1103776271(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1103776271_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_AddComponent_TisMeshFilter_t3523625662_m1459495195(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t3523625662_m1459495195_RuntimeMethod_var);
	}

IL_0029:
	{
		MeshGenerator_t2269686654 * L_4 = (MeshGenerator_t2269686654 *)il2cpp_codegen_object_new(MeshGenerator_t2269686654_il2cpp_TypeInfo_var);
		MeshGenerator__ctor_m3431755699(L_4, /*hidden argument*/NULL);
		__this->set_meshGenerator_4(L_4);
		MeshGenerator_t2269686654 * L_5 = __this->get_meshGenerator_4();
		NullCheck(L_5);
		L_5->set_invertY_7((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		Engine_InitializeOrientation_m2665801609(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		__this->set_rotation_5(L_6);
		MeshFilter_t3523625662 * L_7 = Component_GetComponent_TisMeshFilter_t3523625662_m1103776271(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1103776271_RuntimeMethod_var);
		MeshGenerator_t2269686654 * L_8 = __this->get_meshGenerator_4();
		NullCheck(L_8);
		Mesh_t3648964284 * L_9 = MeshGenerator_CreateMash_m2246740160(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		MeshFilter_set_mesh_m1415871686(L_7, L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t2301928331  L_11 = Transform_get_localRotation_m3487911431(L_10, /*hidden argument*/NULL);
		__this->set_initRotation_7(L_11);
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::MoveToCamera(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_MoveToCamera_m4064449008 (RealityPlaneBaseBehaviour_t2956186783 * __this, Vector2_t2156229523  ___scale0, float ___distance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_MoveToCamera_m4064449008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = ___scale0;
		float L_1 = ___distance1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Multiply_m2347887432(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		___scale0 = L_2;
		Vector2_t2156229523  L_3 = ___scale0;
		__this->set__scale_6(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_5 = ___distance1;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4128471975(L_4, L_6, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_rotation_5();
		RealityPlaneBaseBehaviour_setScale_m3017485210(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::setScale(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_setScale_m3017485210 (RealityPlaneBaseBehaviour_t2956186783 * __this, int32_t ___rot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_setScale_m3017485210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Bounds_t2266837910  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = ___rot0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___rot0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)180)))))
		{
			goto IL_001d;
		}
	}

IL_0011:
	{
		Vector2_t2156229523  L_2 = __this->get__scale_6();
		V_0 = L_2;
		goto IL_003a;
	}

IL_001d:
	{
		Vector2_t2156229523 * L_3 = __this->get_address_of__scale_6();
		float L_4 = L_3->get_y_1();
		Vector2_t2156229523 * L_5 = __this->get_address_of__scale_6();
		float L_6 = L_5->get_x_0();
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_0), L_4, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		MeshFilter_t3523625662 * L_7 = Component_GetComponent_TisMeshFilter_t3523625662_m1103776271(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1103776271_RuntimeMethod_var);
		NullCheck(L_7);
		Mesh_t3648964284 * L_8 = MeshFilter_get_mesh_m3346355278(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Bounds_t2266837910  L_9 = Mesh_get_bounds_m2004960313(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Vector3_t3722313464  L_10 = Bounds_get_size_m1178783246((Bounds_t2266837910 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_10;
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_12 = (&V_0)->get_x_0();
		float L_13 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)(&V_1), 0, /*hidden argument*/NULL);
		float L_14 = (&V_0)->get_y_1();
		float L_15 = Vector3_get_Item_m668685504((Vector3_t3722313464 *)(&V_1), 2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m3353183577((&L_16), ((float)((float)L_12/(float)L_13)), (1.0f), ((float)((float)L_14/(float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_m3053443106(L_11, L_16, /*hidden argument*/NULL);
		int32_t L_17 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_18 = ___rot0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)90))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_19 = ___rot0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)270))))
		{
			goto IL_00c3;
		}
	}

IL_00a7:
	{
		int32_t L_20 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_21 = ___rot0;
		if (!L_21)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_22 = ___rot0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)180)))))
		{
			goto IL_010e;
		}
	}

IL_00c3:
	{
		bool L_23 = __this->get_hFlip_8();
		if (!L_23)
		{
			goto IL_00f8;
		}
	}
	{
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_25 = __this->get_initRotation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_26 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_27 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (180.0f), L_26, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_28 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localRotation_m19445462(L_24, L_28, /*hidden argument*/NULL);
		goto IL_0109;
	}

IL_00f8:
	{
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_30 = __this->get_initRotation_7();
		NullCheck(L_29);
		Transform_set_localRotation_m19445462(L_29, L_30, /*hidden argument*/NULL);
	}

IL_0109:
	{
		goto IL_011f;
	}

IL_010e:
	{
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_32 = __this->get_initRotation_7();
		NullCheck(L_31);
		Transform_set_localRotation_m19445462(L_31, L_32, /*hidden argument*/NULL);
	}

IL_011f:
	{
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::SetPlaneTexture(EasyAR.ARCameraBaseBehaviour,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_SetPlaneTexture_m783861606 (RealityPlaneBaseBehaviour_t2956186783 * __this, ARCameraBaseBehaviour_t712094156 * ___augmenterBaseBehaviour0, Texture2D_t3840446185 * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_SetPlaneTexture_m783861606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t340375123 * L_1 = Renderer_get_material_m4171603682(L_0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_2 = ___texture1;
		NullCheck(L_1);
		Material_set_mainTexture_m544811714(L_1, L_2, /*hidden argument*/NULL);
		__this->set_isTextureSet_9((bool)1);
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::SetEnable(EasyAR.ARCameraBaseBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_SetEnable_m2086304484 (RealityPlaneBaseBehaviour_t2956186783 * __this, ARCameraBaseBehaviour_t712094156 * ___augmenterBaseBehaviour0, bool ___enable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_SetEnable_m2086304484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_isTextureSet_9();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Renderer_t2627027031 * L_1 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		bool L_2 = ___enable1;
		NullCheck(L_1);
		Renderer_set_enabled_m1727253150(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void EasyAR.RealityPlaneBaseBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void RealityPlaneBaseBehaviour_Update_m2885498581 (RealityPlaneBaseBehaviour_t2956186783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RealityPlaneBaseBehaviour_Update_m2885498581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_rotation_5();
		int32_t L_1 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_2 = Engine_UpdateOrientation_m1578106270(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		__this->set_rotation_5(L_3);
		int32_t L_4 = __this->get_rotation_5();
		RealityPlaneBaseBehaviour_setScale_m3017485210(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.RecorderBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour__ctor_m2213562109 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	{
		__this->set_RequestPlatformPermission_4((bool)1);
		__this->set_Profile_5(((int32_t)16));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::add_FrameUpdate(System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_add_FrameUpdate_m1443117606 (RecorderBaseBehaviour_t2449616875 * __this, Action_2_t2038586088 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_add_FrameUpdate_m1443117606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t2038586088 * L_0 = __this->get_FrameUpdate_19();
		Action_2_t2038586088 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_FrameUpdate_19(((Action_2_t2038586088 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t2038586088_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::remove_FrameUpdate(System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_remove_FrameUpdate_m2435614893 (RecorderBaseBehaviour_t2449616875 * __this, Action_2_t2038586088 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_remove_FrameUpdate_m2435614893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t2038586088 * L_0 = __this->get_FrameUpdate_19();
		Action_2_t2038586088 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_FrameUpdate_19(((Action_2_t2038586088 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t2038586088_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::add_StatusUpdate(System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_add_StatusUpdate_m2577268746 (RecorderBaseBehaviour_t2449616875 * __this, Action_3_t1098563045 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_add_StatusUpdate_m2577268746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1098563045 * L_0 = __this->get_StatusUpdate_20();
		Action_3_t1098563045 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_StatusUpdate_20(((Action_3_t1098563045 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1098563045_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::remove_StatusUpdate(System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_remove_StatusUpdate_m1915795370 (RecorderBaseBehaviour_t2449616875 * __this, Action_3_t1098563045 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_remove_StatusUpdate_m1915795370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1098563045 * L_0 = __this->get_StatusUpdate_20();
		Action_3_t1098563045 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_StatusUpdate_20(((Action_3_t1098563045 *)CastclassSealed((RuntimeObject*)L_2, Action_3_t1098563045_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String EasyAR.RecorderBaseBehaviour::get_OutputFile()
extern "C" IL2CPP_METHOD_ATTR String_t* RecorderBaseBehaviour_get_OutputFile_m2292030030 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3COutputFileU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::set_OutputFile(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_set_OutputFile_m264036555 (RecorderBaseBehaviour_t2449616875 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3COutputFileU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_Start_m2983585467 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_Start_m2983585467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral26667318, /*hidden argument*/NULL);
	}

IL_0021:
	{
		RecorderNative_t2685196317 * L_2 = (RecorderNative_t2685196317 *)il2cpp_codegen_object_new(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RecorderNative__ctor_m3531444284(L_2, /*hidden argument*/NULL);
		__this->set_recorder_7(L_2);
		BaseNotify_t3278162484 * L_3 = (BaseNotify_t3278162484 *)il2cpp_codegen_object_new(BaseNotify_t3278162484_il2cpp_TypeInfo_var);
		BaseNotify__ctor_m1322478800(L_3, __this, /*hidden argument*/NULL);
		__this->set__notify_8(L_3);
		RecorderNative_t2685196317 * L_4 = __this->get_recorder_7();
		RecorderNative_t2685196317 * L_5 = __this->get_recorder_7();
		BaseNotify_t3278162484 * L_6 = __this->get__notify_8();
		KeyValuePair_2_t331709525  L_7;
		memset(&L_7, 0, sizeof(L_7));
		KeyValuePair_2__ctor_m3753420331((&L_7), L_5, L_6, /*hidden argument*/KeyValuePair_2__ctor_m3753420331_RuntimeMethod_var);
		NullCheck(L_4);
		RecorderNative_set_RecorderNotify_m387417284(L_4, L_7, /*hidden argument*/NULL);
		RecorderNative_t2685196317 * L_8 = __this->get_recorder_7();
		NullCheck(L_8);
		RecorderNative_open_m1153077091(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_Update_m3854295118 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	{
		RecorderNative_t2685196317 * L_0 = __this->get_recorder_7();
		NullCheck(L_0);
		RecorderNative_CheckStatus_m1797079174(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_OnDestroy_m3838108015 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	{
		RecorderNative_t2685196317 * L_0 = __this->get_recorder_7();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RecorderNative_t2685196317 * L_1 = __this->get_recorder_7();
		NullCheck(L_1);
		RecorderNative_close_m2655443745(L_1, /*hidden argument*/NULL);
		RecorderNative_t2685196317 * L_2 = __this->get_recorder_7();
		NullCheck(L_2);
		Base_Dispose_m2387565171(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::StartRecording()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_StartRecording_m2115966297 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_StartRecording_m2115966297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_3_t1098563045 * L_0 = __this->get_StatusUpdate_20();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get__recording_12();
		il2cpp_codegen_memory_barrier();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Action_3_t1098563045 * L_2 = __this->get_StatusUpdate_20();
		NullCheck(L_2);
		Action_3_Invoke_m3917266203(L_2, __this, ((int32_t)514), _stringLiteral2271670107, /*hidden argument*/Action_3_Invoke_m3917266203_RuntimeMethod_var);
		return;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_4 = RecorderBaseBehaviour_get_OutputFile_m2292030030(__this, /*hidden argument*/NULL);
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Action_3_t1098563045 * L_6 = __this->get_StatusUpdate_20();
		NullCheck(L_6);
		Action_3_Invoke_m3917266203(L_6, __this, ((int32_t)514), _stringLiteral526544724, /*hidden argument*/Action_3_Invoke_m3917266203_RuntimeMethod_var);
		return;
	}

IL_005c:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__recording_12(1);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_StopRecording_m2226944719 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_StopRecording_m2226944719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__recording_12();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		Action_3_t1098563045 * L_1 = __this->get_StatusUpdate_20();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		Action_3_t1098563045 * L_2 = __this->get_StatusUpdate_20();
		NullCheck(L_2);
		Action_3_Invoke_m3917266203(L_2, __this, ((int32_t)4096), _stringLiteral2271670107, /*hidden argument*/Action_3_Invoke_m3917266203_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}

IL_002f:
	{
		il2cpp_codegen_memory_barrier();
		__this->set__recording_12(0);
		RecorderBaseBehaviour_updateFrame_m3644515897(__this, (RenderTexture_t2108887433 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAR.RecorderBaseBehaviour::RecordFrame(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR bool RecorderBaseBehaviour_RecordFrame_m1672837453 (RecorderBaseBehaviour_t2449616875 * __this, RenderTexture_t2108887433 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_RecordFrame_m1672837453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__recording_12();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		RecorderNative_t2685196317 * L_1 = __this->get_recorder_7();
		if (L_1)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		Action_2_t2038586088 * L_2 = __this->get_FrameUpdate_19();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		Action_2_t2038586088 * L_3 = __this->get_FrameUpdate_19();
		RenderTexture_t2108887433 * L_4 = ___texture0;
		NullCheck(L_3);
		Action_2_Invoke_m3275928417(L_3, __this, L_4, /*hidden argument*/Action_2_Invoke_m3275928417_RuntimeMethod_var);
	}

IL_0032:
	{
		RenderTexture_t2108887433 * L_5 = ___texture0;
		RecorderBaseBehaviour_updateFrame_m3644515897(__this, L_5, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::OnPermissionStatus(EasyAR.RecorderNative/PermissionStatus,System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_OnPermissionStatus_m3983861993 (RecorderBaseBehaviour_t2449616875 * __this, int32_t ___status0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_OnPermissionStatus_m3983861993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecorderBaseBehaviour_t2449616875 * G_B2_0 = NULL;
	RecorderBaseBehaviour_t2449616875 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RecorderBaseBehaviour_t2449616875 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___status0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		il2cpp_codegen_memory_barrier();
		G_B3_1->set_granted_17(G_B3_0);
		il2cpp_codegen_memory_barrier();
		__this->set_validate_16(1);
		RecorderNative_t2685196317 * L_1 = __this->get_recorder_7();
		intptr_t L_2 = (intptr_t)RecorderBaseBehaviour_OnPermissionStatus_m3983861993_RuntimeMethod_var;
		Action_2_t587925928 * L_3 = (Action_2_t587925928 *)il2cpp_codegen_object_new(Action_2_t587925928_il2cpp_TypeInfo_var);
		Action_2__ctor_m3609976976(L_3, __this, L_2, /*hidden argument*/Action_2__ctor_m3609976976_RuntimeMethod_var);
		NullCheck(L_1);
		RecorderNative_remove_PermissionStatusNotify_m2796372(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator EasyAR.RecorderBaseBehaviour::StartAfterGranted()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RecorderBaseBehaviour_StartAfterGranted_m1838242622 (RecorderBaseBehaviour_t2449616875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_StartAfterGranted_m1838242622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * V_0 = NULL;
	{
		U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * L_0 = (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 *)il2cpp_codegen_object_new(U3CStartAfterGrantedU3Ec__Iterator2_t3540723758_il2cpp_TypeInfo_var);
		U3CStartAfterGrantedU3Ec__Iterator2__ctor_m554998736(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_2(__this);
		U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * L_2 = V_0;
		return L_2;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::interStart(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_interStart_m2579126535 (RecorderBaseBehaviour_t2449616875 * __this, RenderTexture_t2108887433 * ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_interStart_m2579126535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RecorderNative_t2685196317 * L_0 = __this->get_recorder_7();
		String_t* L_1 = RecorderBaseBehaviour_get_OutputFile_m2292030030(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RecorderNative_setOutputFile_m3433460650(L_0, L_1, /*hidden argument*/NULL);
		RecorderNative_t2685196317 * L_2 = __this->get_recorder_7();
		int32_t L_3 = __this->get_Profile_5();
		NullCheck(L_2);
		RecorderNative_setProfile_m804966195(L_2, L_3, /*hidden argument*/NULL);
		RecorderNative_t2685196317 * L_4 = __this->get_recorder_7();
		RenderTexture_t2108887433 * L_5 = ___src0;
		NullCheck(L_5);
		intptr_t L_6 = Texture_GetNativeTexturePtr_m4054748062(L_5, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_7 = ___src0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_7);
		RenderTexture_t2108887433 * L_9 = ___src0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_9);
		NullCheck(L_4);
		RecorderNative_setInputTexture_m2699022696(L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		RecorderNative_t2685196317 * L_11 = __this->get_recorder_7();
		int32_t L_12 = __this->get_Mode_6();
		NullCheck(L_11);
		RecorderNative_setZoomMode_m1400342881(L_11, L_12, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_13 = ___src0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_13);
		RenderTexture_t2108887433 * L_15 = ___src0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_15);
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_0067;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0068;
	}

IL_0067:
	{
		G_B3_0 = 1;
	}

IL_0068:
	{
		V_0 = G_B3_0;
		RecorderNative_t2685196317 * L_17 = __this->get_recorder_7();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RecorderNative_setVideoOrientation_m681130151(L_17, L_18, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_19 = ___src0;
		NullCheck(L_19);
		intptr_t L_20 = Texture_GetNativeTexturePtr_m4054748062(L_19, /*hidden argument*/NULL);
		__this->set__texId_11(L_20);
		RenderTexture_t2108887433 * L_21 = ___src0;
		NullCheck(L_21);
		int32_t L_22 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_21);
		__this->set__width_9(L_22);
		RenderTexture_t2108887433 * L_23 = ___src0;
		NullCheck(L_23);
		int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_23);
		__this->set__height_10(L_24);
		RecorderNative_t2685196317 * L_25 = __this->get_recorder_7();
		NullCheck(L_25);
		RecorderNative_start_m3620055390(L_25, /*hidden argument*/NULL);
		Nullable_1_t1819850047  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Nullable_1__ctor_m2895052643((&L_26), (bool)0, /*hidden argument*/Nullable_1__ctor_m2895052643_RuntimeMethod_var);
		__this->set_started_13(L_26);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour::updateFrame(UnityEngine.RenderTexture)
extern "C" IL2CPP_METHOD_ATTR void RecorderBaseBehaviour_updateFrame_m3644515897 (RecorderBaseBehaviour_t2449616875 * __this, RenderTexture_t2108887433 * ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderBaseBehaviour_updateFrame_m3644515897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1819850047  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t1819850047  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B16_0 = 0;
	int32_t G_B21_0 = 0;
	{
		RecorderNative_t2685196317 * L_0 = __this->get_recorder_7();
		NullCheck(L_0);
		RecorderNative_CheckStatus_m1797079174(L_0, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_1 = ___src0;
		__this->set__coroutine_texture_15(L_1);
		bool L_2 = __this->get__recording_12();
		il2cpp_codegen_memory_barrier();
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		Nullable_1_t1819850047 * L_3 = __this->get_address_of_started_13();
		bool L_4 = Nullable_1_get_HasValue_m3206831396((Nullable_1_t1819850047 *)L_3, /*hidden argument*/Nullable_1_get_HasValue_m3206831396_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		RecorderNative_t2685196317 * L_5 = __this->get_recorder_7();
		NullCheck(L_5);
		RecorderNative_stop_m4117699869(L_5, /*hidden argument*/NULL);
		Nullable_1_t1819850047  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Nullable_1__ctor_m2895052643((&L_6), (bool)0, /*hidden argument*/Nullable_1__ctor_m2895052643_RuntimeMethod_var);
		__this->set_started_13(L_6);
	}

IL_0046:
	{
		return;
	}

IL_0047:
	{
		Nullable_1_t1819850047 * L_7 = __this->get_address_of_started_13();
		bool L_8 = Nullable_1_get_HasValue_m3206831396((Nullable_1_t1819850047 *)L_7, /*hidden argument*/Nullable_1_get_HasValue_m3206831396_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_9 = __this->get_RequestPlatformPermission_4();
		if (!L_9)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_10 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)11))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_11 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)8))))
		{
			goto IL_00aa;
		}
	}

IL_0079:
	{
		bool L_12 = __this->get_coroutineStarted__18();
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		__this->set_coroutineStarted__18((bool)1);
		RuntimeObject* L_13 = RecorderBaseBehaviour_StartAfterGranted_m1838242622(__this, /*hidden argument*/NULL);
		__this->set_coroutine_14(L_13);
		RuntimeObject* L_14 = __this->get_coroutine_14();
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_14, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00aa:
	{
		RenderTexture_t2108887433 * L_15 = ___src0;
		RecorderBaseBehaviour_interStart_m2579126535(__this, L_15, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		goto IL_017f;
	}

IL_00b6:
	{
		Nullable_1_t1819850047  L_16 = __this->get_started_13();
		V_0 = L_16;
		bool L_17 = Nullable_1_GetValueOrDefault_m1689296203((Nullable_1_t1819850047 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m1689296203_RuntimeMethod_var);
		if ((!(((uint32_t)L_17) == ((uint32_t)0))))
		{
			goto IL_00d0;
		}
	}
	{
		bool L_18 = Nullable_1_get_HasValue_m3206831396((Nullable_1_t1819850047 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m3206831396_RuntimeMethod_var);
		G_B16_0 = ((int32_t)(L_18));
		goto IL_00d1;
	}

IL_00d0:
	{
		G_B16_0 = 0;
	}

IL_00d1:
	{
		if (!G_B16_0)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_017f;
	}

IL_00db:
	{
		Nullable_1_t1819850047  L_19 = __this->get_started_13();
		V_1 = L_19;
		bool L_20 = Nullable_1_GetValueOrDefault_m1689296203((Nullable_1_t1819850047 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m1689296203_RuntimeMethod_var);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00f5;
		}
	}
	{
		bool L_21 = Nullable_1_get_HasValue_m3206831396((Nullable_1_t1819850047 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m3206831396_RuntimeMethod_var);
		G_B21_0 = ((int32_t)(L_21));
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B21_0 = 0;
	}

IL_00f6:
	{
		if (!G_B21_0)
		{
			goto IL_017f;
		}
	}
	{
		intptr_t L_22 = __this->get__texId_11();
		RenderTexture_t2108887433 * L_23 = ___src0;
		NullCheck(L_23);
		intptr_t L_24 = Texture_GetNativeTexturePtr_m4054748062(L_23, /*hidden argument*/NULL);
		bool L_25 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_26 = __this->get__width_9();
		RenderTexture_t2108887433 * L_27 = ___src0;
		NullCheck(L_27);
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_27);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_29 = __this->get__height_10();
		RenderTexture_t2108887433 * L_30 = ___src0;
		NullCheck(L_30);
		int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_30);
		if ((((int32_t)L_29) == ((int32_t)L_31)))
		{
			goto IL_0174;
		}
	}

IL_0133:
	{
		RecorderNative_t2685196317 * L_32 = __this->get_recorder_7();
		RenderTexture_t2108887433 * L_33 = ___src0;
		NullCheck(L_33);
		intptr_t L_34 = Texture_GetNativeTexturePtr_m4054748062(L_33, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_35 = ___src0;
		NullCheck(L_35);
		int32_t L_36 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_35);
		RenderTexture_t2108887433 * L_37 = ___src0;
		NullCheck(L_37);
		int32_t L_38 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_37);
		NullCheck(L_32);
		RecorderNative_setInputTexture_m2699022696(L_32, L_34, L_36, L_38, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_39 = ___src0;
		NullCheck(L_39);
		intptr_t L_40 = Texture_GetNativeTexturePtr_m4054748062(L_39, /*hidden argument*/NULL);
		__this->set__texId_11(L_40);
		RenderTexture_t2108887433 * L_41 = ___src0;
		NullCheck(L_41);
		int32_t L_42 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.RenderTexture::get_width() */, L_41);
		__this->set__width_9(L_42);
		RenderTexture_t2108887433 * L_43 = ___src0;
		NullCheck(L_43);
		int32_t L_44 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.RenderTexture::get_height() */, L_43);
		__this->set__height_10(L_44);
	}

IL_0174:
	{
		RecorderNative_t2685196317 * L_45 = __this->get_recorder_7();
		NullCheck(L_45);
		RecorderNative_update_m275877000(L_45, /*hidden argument*/NULL);
	}

IL_017f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartAfterGrantedU3Ec__Iterator2__ctor_m554998736 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAfterGrantedU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3437015392 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartAfterGrantedU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m1468740816 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Boolean EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartAfterGrantedU3Ec__Iterator2_MoveNext_m351302603 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartAfterGrantedU3Ec__Iterator2_MoveNext_m351302603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_0();
		V_0 = L_0;
		__this->set_U24PC_0((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0081;
			}
		}
	}
	{
		goto IL_011b;
	}

IL_0021:
	{
		RecorderBaseBehaviour_t2449616875 * L_2 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_2);
		il2cpp_codegen_memory_barrier();
		L_2->set_validate_16(0);
		RecorderBaseBehaviour_t2449616875 * L_3 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_3);
		il2cpp_codegen_memory_barrier();
		L_3->set_granted_17(0);
		RecorderBaseBehaviour_t2449616875 * L_4 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_4);
		RecorderNative_t2685196317 * L_5 = L_4->get_recorder_7();
		RecorderBaseBehaviour_t2449616875 * L_6 = __this->get_U3CU3Ef__this_2();
		intptr_t L_7 = (intptr_t)RecorderBaseBehaviour_OnPermissionStatus_m3983861993_RuntimeMethod_var;
		Action_2_t587925928 * L_8 = (Action_2_t587925928 *)il2cpp_codegen_object_new(Action_2_t587925928_il2cpp_TypeInfo_var);
		Action_2__ctor_m3609976976(L_8, L_6, L_7, /*hidden argument*/Action_2__ctor_m3609976976_RuntimeMethod_var);
		NullCheck(L_5);
		RecorderNative_add_PermissionStatusNotify_m1198043599(L_5, L_8, /*hidden argument*/NULL);
		RecorderBaseBehaviour_t2449616875 * L_9 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_9);
		RecorderNative_t2685196317 * L_10 = L_9->get_recorder_7();
		NullCheck(L_10);
		RecorderNative_RequestPermissions_m145179441(L_10, /*hidden argument*/NULL);
	}

IL_006e:
	{
		__this->set_U24current_1(NULL);
		__this->set_U24PC_0(1);
		goto IL_011d;
	}

IL_0081:
	{
		RecorderBaseBehaviour_t2449616875 * L_11 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_11);
		RecorderNative_t2685196317 * L_12 = L_11->get_recorder_7();
		NullCheck(L_12);
		RecorderNative_CheckPermissionStatus_m2817455087(L_12, /*hidden argument*/NULL);
		RecorderBaseBehaviour_t2449616875 * L_13 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_13);
		bool L_14 = L_13->get_validate_16();
		il2cpp_codegen_memory_barrier();
		if (!L_14)
		{
			goto IL_010f;
		}
	}
	{
		RecorderBaseBehaviour_t2449616875 * L_15 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_15);
		bool L_16 = L_15->get_granted_17();
		il2cpp_codegen_memory_barrier();
		if (!L_16)
		{
			goto IL_00d0;
		}
	}
	{
		RecorderBaseBehaviour_t2449616875 * L_17 = __this->get_U3CU3Ef__this_2();
		RecorderBaseBehaviour_t2449616875 * L_18 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_18);
		RenderTexture_t2108887433 * L_19 = L_18->get__coroutine_texture_15();
		NullCheck(L_17);
		RecorderBaseBehaviour_interStart_m2579126535(L_17, L_19, /*hidden argument*/NULL);
		goto IL_00fe;
	}

IL_00d0:
	{
		RecorderBaseBehaviour_t2449616875 * L_20 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_20);
		Action_3_t1098563045 * L_21 = L_20->get_StatusUpdate_20();
		RecorderBaseBehaviour_t2449616875 * L_22 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_21);
		Action_3_Invoke_m3917266203(L_21, L_22, ((int32_t)514), _stringLiteral273538625, /*hidden argument*/Action_3_Invoke_m3917266203_RuntimeMethod_var);
		RecorderBaseBehaviour_t2449616875 * L_23 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_23);
		il2cpp_codegen_memory_barrier();
		L_23->set__recording_12(0);
	}

IL_00fe:
	{
		RecorderBaseBehaviour_t2449616875 * L_24 = __this->get_U3CU3Ef__this_2();
		NullCheck(L_24);
		L_24->set_coroutineStarted__18((bool)0);
		goto IL_011b;
	}

IL_010f:
	{
		goto IL_006e;
	}
	// Dead block : IL_0114: ldarg.0

IL_011b:
	{
		return (bool)0;
	}

IL_011d:
	{
		return (bool)1;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartAfterGrantedU3Ec__Iterator2_Dispose_m2976857333 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_0((-1));
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour/<StartAfterGranted>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartAfterGrantedU3Ec__Iterator2_Reset_m249356400 (U3CStartAfterGrantedU3Ec__Iterator2_t3540723758 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartAfterGrantedU3Ec__Iterator2_Reset_m249356400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartAfterGrantedU3Ec__Iterator2_Reset_m249356400_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.RecorderBaseBehaviour/BaseNotify::.ctor(EasyAR.RecorderBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void BaseNotify__ctor_m1322478800 (BaseNotify_t3278162484 * __this, RecorderBaseBehaviour_t2449616875 * ___parent0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RecorderBaseBehaviour_t2449616875 * L_0 = ___parent0;
		__this->set__parent_0(L_0);
		return;
	}
}
// System.Void EasyAR.RecorderBaseBehaviour/BaseNotify::RecorderNotify(EasyAR.RecorderNative/RecorderStatus,System.String)
extern "C" IL2CPP_METHOD_ATTR void BaseNotify_RecorderNotify_m457363961 (BaseNotify_t3278162484 * __this, int32_t ___status0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseNotify_RecorderNotify_m457363961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t1819850047  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Nullable_1_t1819850047  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RecorderBaseBehaviour_t2449616875 * L_0 = __this->get__parent_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		int32_t L_2 = ___status0;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)2)))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0080;
			}
		}
	}

IL_0028:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)514))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)1024))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_00ac;
	}

IL_0043:
	{
		RecorderBaseBehaviour_t2449616875 * L_6 = __this->get__parent_0();
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1819850047 ));
		Nullable_1_t1819850047  L_7 = V_1;
		NullCheck(L_6);
		L_6->set_started_13(L_7);
		RecorderBaseBehaviour_t2449616875 * L_8 = __this->get__parent_0();
		NullCheck(L_8);
		il2cpp_codegen_memory_barrier();
		L_8->set__recording_12(0);
		goto IL_00ac;
	}

IL_006a:
	{
		RecorderBaseBehaviour_t2449616875 * L_9 = __this->get__parent_0();
		Nullable_1_t1819850047  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Nullable_1__ctor_m2895052643((&L_10), (bool)1, /*hidden argument*/Nullable_1__ctor_m2895052643_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_started_13(L_10);
		goto IL_00ac;
	}

IL_0080:
	{
		RecorderBaseBehaviour_t2449616875 * L_11 = __this->get__parent_0();
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1819850047 ));
		Nullable_1_t1819850047  L_12 = V_2;
		NullCheck(L_11);
		L_11->set_started_13(L_12);
		RecorderBaseBehaviour_t2449616875 * L_13 = __this->get__parent_0();
		NullCheck(L_13);
		il2cpp_codegen_memory_barrier();
		L_13->set__recording_12(0);
		goto IL_00ac;
	}

IL_00a7:
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		RecorderBaseBehaviour_t2449616875 * L_14 = __this->get__parent_0();
		NullCheck(L_14);
		Action_3_t1098563045 * L_15 = L_14->get_StatusUpdate_20();
		if (!L_15)
		{
			goto IL_00d4;
		}
	}
	{
		RecorderBaseBehaviour_t2449616875 * L_16 = __this->get__parent_0();
		NullCheck(L_16);
		Action_3_t1098563045 * L_17 = L_16->get_StatusUpdate_20();
		RecorderBaseBehaviour_t2449616875 * L_18 = __this->get__parent_0();
		int32_t L_19 = ___status0;
		String_t* L_20 = ___msg1;
		NullCheck(L_17);
		Action_3_Invoke_m3917266203(L_17, L_18, L_19, L_20, /*hidden argument*/Action_3_Invoke_m3917266203_RuntimeMethod_var);
	}

IL_00d4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RecorderNative_OnStatusNotify_m1241673738(intptr_t ___obj0, int32_t ___status1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	RecorderNative_OnStatusNotify_m1241673738(NULL, ___obj0, ___status1, ____msg2_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_RecorderNative_OnPermissionNotify_m1602265046(intptr_t ___obj0, int32_t ___status1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	RecorderNative_OnPermissionNotify_m1602265046(NULL, ___obj0, ___status1, ____msg2_unmarshaled, NULL);

}
// System.Void EasyAR.RecorderNative::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative__ctor_m3531444284 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative__ctor_m3531444284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Base__ctor_m3198904856(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)RecorderNative_OnStatusNotify_m1241673738_RuntimeMethod_var;
		CallBack_t877084370 * L_1 = (CallBack_t877084370 *)il2cpp_codegen_object_new(CallBack_t877084370_il2cpp_TypeInfo_var);
		CallBack__ctor_m1259600313(L_1, NULL, L_0, /*hidden argument*/NULL);
		__this->set__callBack_5(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		intptr_t L_3 = InterfaceFuncInvoker0< intptr_t >::Invoke(143 /* System.IntPtr EasyAR.IEngineNative::Create_Recorder() */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2);
		((Base_t1500127977 *)__this)->set_Obj_0(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RuntimeObject * L_4 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__mutex_2();
		V_0 = L_4;
		RuntimeObject * L_5 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		Dictionary_2_t907062036 * L_6 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
		intptr_t L_7 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_6);
		Dictionary_2_Add_m320765369(L_6, L_7, __this, /*hidden argument*/Dictionary_2_Add_m320765369_RuntimeMethod_var);
		IL2CPP_LEAVE(0x51, FINALLY_004a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_10 = ((Base_t1500127977 *)__this)->get_Obj_0();
		CallBack_t877084370 * L_11 = __this->get__callBack_5();
		NullCheck(L_9);
		intptr_t L_12 = InterfaceFuncInvoker2< intptr_t, intptr_t, CallBack_t877084370 * >::Invoke(156 /* System.IntPtr EasyAR.IEngineNative::Create_RecorderCallbackUnity(System.IntPtr,EasyAR.RecorderNative/CallBack) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		__this->set__objCallback_6(L_12);
		return;
	}
}
// System.Void EasyAR.RecorderNative::.cctor()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative__cctor_m4191304865 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative__cctor_m4191304865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->set__mutex_2(L_0);
		Dictionary_2_t2229004654 * L_1 = (Dictionary_2_t2229004654 *)il2cpp_codegen_object_new(Dictionary_2_t2229004654_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1007627066(L_1, /*hidden argument*/Dictionary_2__ctor_m1007627066_RuntimeMethod_var);
		((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->set__notifys_3(L_1);
		Dictionary_2_t907062036 * L_2 = (Dictionary_2_t907062036 *)il2cpp_codegen_object_new(Dictionary_2_t907062036_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1778299640(L_2, /*hidden argument*/Dictionary_2__ctor_m1778299640_RuntimeMethod_var);
		((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->set_recorders_4(L_2);
		return;
	}
}
// System.Void EasyAR.RecorderNative::add_PermissionStatusNotify(System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_add_PermissionStatusNotify_m1198043599 (RecorderNative_t2685196317 * __this, Action_2_t587925928 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_add_PermissionStatusNotify_m1198043599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t587925928 * L_0 = __this->get_PermissionStatusNotify_9();
		Action_2_t587925928 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_PermissionStatusNotify_9(((Action_2_t587925928 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t587925928_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.RecorderNative::remove_PermissionStatusNotify(System.Action`2<EasyAR.RecorderNative/PermissionStatus,System.String>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_remove_PermissionStatusNotify_m2796372 (RecorderNative_t2685196317 * __this, Action_2_t587925928 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_remove_PermissionStatusNotify_m2796372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t587925928 * L_0 = __this->get_PermissionStatusNotify_9();
		Action_2_t587925928 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_PermissionStatusNotify_9(((Action_2_t587925928 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t587925928_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.RecorderNative::set_RecorderNotify(System.Collections.Generic.KeyValuePair`2<EasyAR.RecorderNative,EasyAR.IRecorderNotify>)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_set_RecorderNotify_m387417284 (RecorderNative_t2685196317 * __this, KeyValuePair_2_t331709525  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_set_RecorderNotify_m387417284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		Dictionary_2_t2229004654 * L_2 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__notifys_3();
		RecorderNative_t2685196317 * L_3 = KeyValuePair_2_get_Key_m2463647974((KeyValuePair_2_t331709525 *)(&___value0), /*hidden argument*/KeyValuePair_2_get_Key_m2463647974_RuntimeMethod_var);
		RuntimeObject* L_4 = KeyValuePair_2_get_Value_m393457049((KeyValuePair_2_t331709525 *)(&___value0), /*hidden argument*/KeyValuePair_2_get_Value_m393457049_RuntimeMethod_var);
		NullCheck(L_2);
		Dictionary_2_set_Item_m1808314757(L_2, L_3, L_4, /*hidden argument*/Dictionary_2_set_Item_m1808314757_RuntimeMethod_var);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0030:
	{
		return;
	}
}
// System.Void EasyAR.RecorderNative::setOutputFile(System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setOutputFile_m3433460650 (RecorderNative_t2685196317 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_setOutputFile_m3433460650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		String_t* L_3 = ___path0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(146 /* System.Void EasyAR.IEngineNative::Recorder_setOutputFile(System.IntPtr,System.String) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.RecorderNative::setVideoOrientation(EasyAR.RecorderNative/RecordVideoOrientation)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setVideoOrientation_m681130151 (RecorderNative_t2685196317 * __this, int32_t ___videoOrientation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_setVideoOrientation_m681130151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___videoOrientation0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(154 /* System.Void EasyAR.IEngineNative::Recorder_setVideoOrientation(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.RecorderNative::setZoomMode(EasyAR.RecorderNative/RecorderZoomMode)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setZoomMode_m1400342881 (RecorderNative_t2685196317 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_setZoomMode_m1400342881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___mode0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(155 /* System.Void EasyAR.IEngineNative::Recorder_setZoomMode(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.RecorderNative::open()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_open_m1153077091 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_open_m1153077091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		intptr_t L_3 = __this->get__objCallback_6();
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(148 /* System.Void EasyAR.IEngineNative::Recorder_open(System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.RecorderNative::start()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_start_m3620055390 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_start_m3620055390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(149 /* System.Void EasyAR.IEngineNative::Recorder_start(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void EasyAR.RecorderNative::stop()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_stop_m4117699869 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_stop_m4117699869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(151 /* System.Void EasyAR.IEngineNative::Recorder_stop(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void EasyAR.RecorderNative::close()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_close_m2655443745 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_close_m2655443745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(152 /* System.Void EasyAR.IEngineNative::Recorder_close(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void EasyAR.RecorderNative::update()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_update_m275877000 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_update_m275877000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(150 /* System.Void EasyAR.IEngineNative::Recorder_updateFrame(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Void EasyAR.RecorderNative::setProfile(EasyAR.RecorderNative/RecorderProfile)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setProfile_m804966195 (RecorderNative_t2685196317 * __this, int32_t ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_setProfile_m804966195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___profile0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(153 /* System.Void EasyAR.IEngineNative::Recorder_setProfile(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.RecorderNative::setInputTexture(System.IntPtr,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_setInputTexture_m2699022696 (RecorderNative_t2685196317 * __this, intptr_t ___texPtr0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_setInputTexture_m2699022696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		intptr_t L_3 = ___texPtr0;
		int32_t L_4 = ___width1;
		int32_t L_5 = ___height2;
		NullCheck(L_1);
		InterfaceActionInvoker4< intptr_t, intptr_t, int32_t, int32_t >::Invoke(147 /* System.Void EasyAR.IEngineNative::Recorder_setInputTexture(System.IntPtr,System.IntPtr,System.Int32,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Void EasyAR.RecorderNative::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_Dispose_m2399102437 (RecorderNative_t2685196317 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_Dispose_m2399102437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RecorderNative_close_m2655443745(__this, /*hidden argument*/NULL);
		intptr_t L_1 = __this->get__permissionObjCallback_8();
		bool L_2 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = __this->get__permissionObjCallback_8();
		NullCheck(L_3);
		InterfaceActionInvoker1< intptr_t >::Invoke(159 /* System.Void EasyAR.IEngineNative::Destory_RecorderPermissionCallBackUnity(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0037:
	{
		__this->set__permissionObjCallback_8((intptr_t)(0));
		bool L_5 = ___disposing0;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__mutex_2();
		V_0 = L_6;
		RuntimeObject * L_7 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		Dictionary_2_t907062036 * L_8 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
		intptr_t L_9 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_8);
		Dictionary_2_Remove_m3209091381(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m3209091381_RuntimeMethod_var);
		Dictionary_2_t2229004654 * L_10 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__notifys_3();
		NullCheck(L_10);
		Dictionary_2_Remove_m2094784424(L_10, __this, /*hidden argument*/Dictionary_2_Remove_m2094784424_RuntimeMethod_var);
		IL2CPP_LEAVE(0x7D, FINALLY_0076);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		intptr_t L_12 = __this->get__objCallback_6();
		bool L_13 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_15 = __this->get__objCallback_6();
		NullCheck(L_14);
		InterfaceActionInvoker1< intptr_t >::Invoke(157 /* System.Void EasyAR.IEngineNative::Destory_RecorderCallBackUnity(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_00a2:
	{
		intptr_t L_16 = ((Base_t1500127977 *)__this)->get_Obj_0();
		bool L_17 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_16, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_18 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_19 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_18);
		InterfaceActionInvoker1< intptr_t >::Invoke(144 /* System.Void EasyAR.IEngineNative::Destory_Recorder(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_00c7:
	{
		__this->set__objCallback_6((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Obj_0((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Disposed_1((bool)1);
		return;
	}
}
// System.Void EasyAR.RecorderNative::CheckStatus()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_CheckStatus_m1797079174 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_CheckStatus_m1797079174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get__objCallback_6();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__objCallback_6();
		NullCheck(L_2);
		InterfaceActionInvoker1< intptr_t >::Invoke(158 /* System.Void EasyAR.IEngineNative::Recorder_CheckCallBack(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		return;
	}
}
// System.Void EasyAR.RecorderNative::OnStatusNotify(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_OnStatusNotify_m1241673738 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_OnStatusNotify_m1241673738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RecorderNative_t2685196317 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
			Dictionary_2_t907062036 * L_2 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
			intptr_t L_3 = ___obj0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_ContainsKey_m2112035945(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m2112035945_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0021;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
			Dictionary_2_t907062036 * L_5 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
			intptr_t L_6 = ___obj0;
			NullCheck(L_5);
			RecorderNative_t2685196317 * L_7 = Dictionary_2_get_Item_m3669525594(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3669525594_RuntimeMethod_var);
			V_1 = L_7;
			Dictionary_2_t2229004654 * L_8 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__notifys_3();
			RecorderNative_t2685196317 * L_9 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_10 = Dictionary_2_get_Item_m1106331887(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m1106331887_RuntimeMethod_var);
			V_2 = L_10;
			RuntimeObject* L_11 = V_2;
			if (!L_11)
			{
				goto IL_0047;
			}
		}

IL_003f:
		{
			RuntimeObject* L_12 = V_2;
			int32_t L_13 = ___status1;
			String_t* L_14 = ___msg2;
			NullCheck(L_12);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void EasyAR.IRecorderNotify::RecorderNotify(EasyAR.RecorderNative/RecorderStatus,System.String) */, IRecorderNotify_t2583557839_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_15 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return;
	}
}
// System.Void EasyAR.RecorderNative::RequestPermissions()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_RequestPermissions_m145179441 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_RequestPermissions_m145179441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_2_t587925928 * L_1 = __this->get_PermissionStatusNotify_9();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		intptr_t L_2 = (intptr_t)RecorderNative_OnPermissionNotify_m1602265046_RuntimeMethod_var;
		CallBack_t877084370 * L_3 = (CallBack_t877084370 *)il2cpp_codegen_object_new(CallBack_t877084370_il2cpp_TypeInfo_var);
		CallBack__ctor_m1259600313(L_3, NULL, L_2, /*hidden argument*/NULL);
		__this->set__permissionCallBack_7(L_3);
		intptr_t L_4 = __this->get__permissionObjCallback_8();
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = ((Base_t1500127977 *)__this)->get_Obj_0();
		CallBack_t877084370 * L_8 = __this->get__permissionCallBack_7();
		NullCheck(L_6);
		intptr_t L_9 = InterfaceFuncInvoker2< intptr_t, intptr_t, CallBack_t877084370 * >::Invoke(156 /* System.IntPtr EasyAR.IEngineNative::Create_RecorderCallbackUnity(System.IntPtr,EasyAR.RecorderNative/CallBack) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		__this->set__permissionObjCallback_8(L_9);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_11 = ((Base_t1500127977 *)__this)->get_Obj_0();
		intptr_t L_12 = __this->get__permissionObjCallback_8();
		NullCheck(L_10);
		InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(145 /* System.Void EasyAR.IEngineNative::Recorder_requestPermissions(System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		return;
	}
}
// System.Void EasyAR.RecorderNative::CheckPermissionStatus()
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_CheckPermissionStatus_m2817455087 (RecorderNative_t2685196317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_CheckPermissionStatus_m2817455087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get__permissionObjCallback_8();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__permissionObjCallback_8();
		NullCheck(L_2);
		InterfaceActionInvoker1< intptr_t >::Invoke(160 /* System.Void EasyAR.IEngineNative::Recorder_CheckPermissionCallBack(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3);
	}

IL_0025:
	{
		return;
	}
}
// System.Void EasyAR.RecorderNative::OnPermissionNotify(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void RecorderNative_OnPermissionNotify_m1602265046 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecorderNative_OnPermissionNotify_m1602265046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RecorderNative_t2685196317 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get__mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
			Dictionary_2_t907062036 * L_2 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
			intptr_t L_3 = ___obj0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_ContainsKey_m2112035945(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m2112035945_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0021;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RecorderNative_t2685196317_il2cpp_TypeInfo_var);
			Dictionary_2_t907062036 * L_5 = ((RecorderNative_t2685196317_StaticFields*)il2cpp_codegen_static_fields_for(RecorderNative_t2685196317_il2cpp_TypeInfo_var))->get_recorders_4();
			intptr_t L_6 = ___obj0;
			NullCheck(L_5);
			RecorderNative_t2685196317 * L_7 = Dictionary_2_get_Item_m3669525594(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3669525594_RuntimeMethod_var);
			V_1 = L_7;
			RecorderNative_t2685196317 * L_8 = V_1;
			NullCheck(L_8);
			Action_2_t587925928 * L_9 = L_8->get_PermissionStatusNotify_9();
			if (!L_9)
			{
				goto IL_0045;
			}
		}

IL_0038:
		{
			RecorderNative_t2685196317 * L_10 = V_1;
			NullCheck(L_10);
			Action_2_t587925928 * L_11 = L_10->get_PermissionStatusNotify_9();
			int32_t L_12 = ___status1;
			String_t* L_13 = ___msg2;
			NullCheck(L_11);
			Action_2_Invoke_m2197225693(L_11, L_12, L_13, /*hidden argument*/Action_2_Invoke_m2197225693_RuntimeMethod_var);
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_14 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_CallBack_t877084370 (CallBack_t877084370 * __this, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___obj0, ___status1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void EasyAR.RecorderNative/CallBack::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallBack__ctor_m1259600313 (CallBack_t877084370 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyAR.RecorderNative/CallBack::Invoke(System.IntPtr,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void CallBack_Invoke_m1254479748 (CallBack_t877084370 * __this, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CallBack_Invoke_m1254479748((CallBack_t877084370 *)__this->get_prev_9(), ___obj0, ___status1, ___msg2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, ___status1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, ___status1, ___msg2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___obj0, ___status1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___obj0, ___status1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___status1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___status1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___status1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult EasyAR.RecorderNative/CallBack::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CallBack_BeginInvoke_m3195143094 (CallBack_t877084370 * __this, intptr_t ___obj0, int32_t ___status1, String_t* ___msg2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallBack_BeginInvoke_m3195143094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___obj0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___status1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void EasyAR.RecorderNative/CallBack::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void CallBack_EndInvoke_m29125503 (CallBack_t877084370 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.RenderCameraBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour__ctor_m3143737633 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	{
		Vector2I_t2668621479  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2I__ctor_m356857369((&L_0), 0, 0, /*hidden argument*/NULL);
		__this->set__camSize_6(L_0);
		Vector2I_t2668621479  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2I__ctor_m356857369((&L_1), 0, 0, /*hidden argument*/NULL);
		__this->set__screenSize_7(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.ARCameraBaseBehaviour)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_Bind_m2432650143 (RenderCameraBaseBehaviour_t1612515119 * __this, ARCameraBaseBehaviour_t712094156 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_Bind_m2432650143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RealityPlaneBaseBehaviour_t2956186783 * V_0 = NULL;
	RealityPlaneBaseBehaviourU5BU5D_t2418639366* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ARCameraBaseBehaviour_t712094156 * L_0 = ___behaviour0;
		__this->set_augmenterBaseBehaviour_14(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_2 = GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0046;
	}

IL_001a:
	{
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RealityPlaneBaseBehaviour_t2956186783 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		ARCameraBaseBehaviour_t712094156 * L_7 = ___behaviour0;
		RealityPlaneBaseBehaviour_t2956186783 * L_8 = V_0;
		intptr_t L_9 = (intptr_t)RealityPlaneBaseBehaviour_SetPlaneTexture_m783861606_RuntimeMethod_var;
		Action_2_t1241929155 * L_10 = (Action_2_t1241929155 *)il2cpp_codegen_object_new(Action_2_t1241929155_il2cpp_TypeInfo_var);
		Action_2__ctor_m3982224860(L_10, L_8, L_9, /*hidden argument*/Action_2__ctor_m3982224860_RuntimeMethod_var);
		NullCheck(L_7);
		ARCameraBaseBehaviour_add_PlaneTextureCreated_m534425965(L_7, L_10, /*hidden argument*/NULL);
		ARCameraBaseBehaviour_t712094156 * L_11 = ___behaviour0;
		RealityPlaneBaseBehaviour_t2956186783 * L_12 = V_0;
		intptr_t L_13 = (intptr_t)RealityPlaneBaseBehaviour_SetEnable_m2086304484_RuntimeMethod_var;
		Action_2_t1793738231 * L_14 = (Action_2_t1793738231 *)il2cpp_codegen_object_new(Action_2_t1793738231_il2cpp_TypeInfo_var);
		Action_2__ctor_m1644397973(L_14, L_12, L_13, /*hidden argument*/Action_2__ctor_m1644397973_RuntimeMethod_var);
		NullCheck(L_11);
		ARCameraBaseBehaviour_add_PlaneTextureRenderChanged_m3030977619(L_11, L_14, /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_16 = V_2;
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_Bind_m3745468836 (RenderCameraBaseBehaviour_t1612515119 * __this, DeviceAbstractBehaviour_t3814910474 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_Bind_m3745468836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeviceAbstractBehaviour_t3814910474 * L_0 = __this->get_deviceBehaviour_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		DeviceAbstractBehaviour_t3814910474 * L_2 = __this->get_deviceBehaviour_13();
		intptr_t L_3 = (intptr_t)RenderCameraBaseBehaviour_AdjustPlane_m3755837101_RuntimeMethod_var;
		Action_2_t4217937665 * L_4 = (Action_2_t4217937665 *)il2cpp_codegen_object_new(Action_2_t4217937665_il2cpp_TypeInfo_var);
		Action_2__ctor_m3805726766(L_4, __this, L_3, /*hidden argument*/Action_2__ctor_m3805726766_RuntimeMethod_var);
		NullCheck(L_2);
		DeviceAbstractBehaviour_remove_DeviceStart_m2408968851(L_2, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		DeviceAbstractBehaviour_t3814910474 * L_5 = ___behaviour0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		DeviceAbstractBehaviour_t3814910474 * L_7 = ___behaviour0;
		intptr_t L_8 = (intptr_t)RenderCameraBaseBehaviour_AdjustPlane_m3755837101_RuntimeMethod_var;
		Action_2_t4217937665 * L_9 = (Action_2_t4217937665 *)il2cpp_codegen_object_new(Action_2_t4217937665_il2cpp_TypeInfo_var);
		Action_2__ctor_m3805726766(L_9, __this, L_8, /*hidden argument*/Action_2__ctor_m3805726766_RuntimeMethod_var);
		NullCheck(L_7);
		DeviceAbstractBehaviour_add_DeviceStart_m415581530(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		DeviceAbstractBehaviour_t3814910474 * L_10 = ___behaviour0;
		__this->set_deviceBehaviour_13(L_10);
		RenderCameraBaseBehaviour_DetachAndStop_m549033475(__this, /*hidden argument*/NULL);
		DeviceAbstractBehaviour_t3814910474 * L_11 = ___behaviour0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		DeviceAbstractBehaviour_t3814910474 * L_13 = ___behaviour0;
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean EasyAR.IDevice::get_IsOpened() */, IDevice_t3570696939_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		DeviceAbstractBehaviour_t3814910474 * L_15 = ___behaviour0;
		RenderCameraBaseBehaviour_AdjustPlane_m3755837101(__this, L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::DetachAndStop()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_DetachAndStop_m549033475 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	{
		__this->set__device_8((CameraDevice_t2123284476 *)NULL);
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::AdjustPlane(EasyAR.DeviceAbstractBehaviour,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_AdjustPlane_m3755837101 (RenderCameraBaseBehaviour_t1612515119 * __this, DeviceAbstractBehaviour_t3814910474 * ___device0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_AdjustPlane_m3755837101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CameraDeviceBaseBehaviour_t1272814475 * V_0 = NULL;
	CameraCalibration_t367929843 * V_1 = NULL;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RealityPlaneBaseBehaviour_t2956186783 * V_3 = NULL;
	RealityPlaneBaseBehaviourU5BU5D_t2418639366* V_4 = NULL;
	int32_t V_5 = 0;
	{
		DeviceAbstractBehaviour_t3814910474 * L_0 = ___device0;
		V_0 = ((CameraDeviceBaseBehaviour_t1272814475 *)IsInstClass((RuntimeObject*)L_0, CameraDeviceBaseBehaviour_t1272814475_il2cpp_TypeInfo_var));
		CameraDeviceBaseBehaviour_t1272814475 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		Engine_InitializeOrientation_m2665801609(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		__this->set_rotation_9(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Camera_t4157153871_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Component_t1923634451 * L_7 = GameObject_GetComponent_m1027872079(L_4, L_6, /*hidden argument*/NULL);
		__this->set_RenderCamera_4(((Camera_t4157153871 *)CastclassSealed((RuntimeObject*)L_7, Camera_t4157153871_il2cpp_TypeInfo_var)));
		Camera_t4157153871 * L_8 = __this->get_RenderCamera_4();
		NullCheck(L_8);
		float L_9 = Camera_get_nearClipPlane_m837839537(L_8, /*hidden argument*/NULL);
		Camera_t4157153871 * L_10 = __this->get_RenderCamera_4();
		NullCheck(L_10);
		float L_11 = Camera_get_farClipPlane_m538536689(L_10, /*hidden argument*/NULL);
		Vector2_t2156229523  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m3970636864((&L_12), L_9, L_11, /*hidden argument*/NULL);
		__this->set_clipPlanes_12(L_12);
		CameraDeviceBaseBehaviour_t1272814475 * L_13 = V_0;
		NullCheck(L_13);
		CameraDevice_t2123284476 * L_14 = L_13->get_Device_13();
		__this->set__device_8(L_14);
		CameraDevice_t2123284476 * L_15 = __this->get__device_8();
		NullCheck(L_15);
		CameraCalibration_t367929843 * L_16 = CameraDevice_get_Calibration_m939346227(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		CameraDevice_t2123284476 * L_17 = __this->get__device_8();
		Camera_t4157153871 * L_18 = __this->get_RenderCamera_4();
		NullCheck(L_18);
		float L_19 = Camera_get_nearClipPlane_m837839537(L_18, /*hidden argument*/NULL);
		Camera_t4157153871 * L_20 = __this->get_RenderCamera_4();
		NullCheck(L_20);
		float L_21 = Camera_get_farClipPlane_m538536689(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		Matrix4x4_t1817901843  L_22 = CameraDevice_ProjectionGL_m2462157799(L_17, L_19, L_21, /*hidden argument*/NULL);
		__this->set__projection_5(L_22);
		CameraDevice_t2123284476 * L_23 = __this->get__device_8();
		NullCheck(L_23);
		Vector2I_t2668621479  L_24 = CameraDevice_get_Size_m790945437(L_23, /*hidden argument*/NULL);
		__this->set__camSize_6(L_24);
		CameraCalibration_t367929843 * L_25 = V_1;
		NullCheck(L_25);
		Vector2_t2156229523  L_26 = CameraCalibration_get_FocalLength_m107040700(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		RenderCameraBaseBehaviour_setRflag_m4166634966(__this, /*hidden argument*/NULL);
		CameraDevice_t2123284476 * L_27 = __this->get__device_8();
		NullCheck(L_27);
		bool L_28 = CameraDevice_HFlip_m2447342801(L_27, /*hidden argument*/NULL);
		RenderCameraBaseBehaviour_ChangeHFlip_m3945789328(__this, L_28, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_29 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_30 = GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751(L_29, /*hidden argument*/GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751_RuntimeMethod_var);
		V_4 = L_30;
		V_5 = 0;
		goto IL_01a4;
	}

IL_00e7:
	{
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		RealityPlaneBaseBehaviour_t2956186783 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_3 = L_34;
		Vector2I_t2668621479 * L_35 = __this->get_address_of__camSize_6();
		int32_t L_36 = L_35->get_x_0();
		if (!L_36)
		{
			goto IL_012f;
		}
	}
	{
		float L_37 = (&V_2)->get_x_0();
		if ((((float)L_37) == ((float)(0.0f))))
		{
			goto IL_012f;
		}
	}
	{
		Vector2I_t2668621479 * L_38 = __this->get_address_of__camSize_6();
		int32_t L_39 = L_38->get_y_1();
		if (!L_39)
		{
			goto IL_012f;
		}
	}
	{
		float L_40 = (&V_2)->get_y_1();
		if ((!(((float)L_40) == ((float)(0.0f)))))
		{
			goto IL_015a;
		}
	}

IL_012f:
	{
		RealityPlaneBaseBehaviour_t2956186783 * L_41 = V_3;
		Vector2_t2156229523  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector2__ctor_m3970636864((&L_42), (1.0f), (1.0f), /*hidden argument*/NULL);
		Camera_t4157153871 * L_43 = __this->get_RenderCamera_4();
		NullCheck(L_43);
		float L_44 = Camera_get_farClipPlane_m538536689(L_43, /*hidden argument*/NULL);
		NullCheck(L_41);
		RealityPlaneBaseBehaviour_MoveToCamera_m4064449008(L_41, L_42, ((float)il2cpp_codegen_multiply((float)L_44, (float)(0.99f))), /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_015a:
	{
		RealityPlaneBaseBehaviour_t2956186783 * L_45 = V_3;
		Vector2I_t2668621479 * L_46 = __this->get_address_of__camSize_6();
		int32_t L_47 = L_46->get_x_0();
		float L_48 = (&V_2)->get_x_0();
		Vector2I_t2668621479 * L_49 = __this->get_address_of__camSize_6();
		int32_t L_50 = L_49->get_y_1();
		float L_51 = (&V_2)->get_y_1();
		Vector2_t2156229523  L_52;
		memset(&L_52, 0, sizeof(L_52));
		Vector2__ctor_m3970636864((&L_52), ((float)((float)(((float)((float)L_47)))/(float)L_48)), ((float)((float)(((float)((float)L_50)))/(float)L_51)), /*hidden argument*/NULL);
		Camera_t4157153871 * L_53 = __this->get_RenderCamera_4();
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m538536689(L_53, /*hidden argument*/NULL);
		NullCheck(L_45);
		RealityPlaneBaseBehaviour_MoveToCamera_m4064449008(L_45, L_52, ((float)il2cpp_codegen_multiply((float)L_54, (float)(0.99f))), /*hidden argument*/NULL);
	}

IL_019e:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_01a4:
	{
		int32_t L_56 = V_5;
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_57 = V_4;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_57)->max_length)))))))
		{
			goto IL_00e7;
		}
	}
	{
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::setRflag()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_setRflag_m4166634966 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_setRflag_m4166634966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		ARCameraBaseBehaviour_t712094156 * L_2 = __this->get_augmenterBaseBehaviour_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		CameraDevice_t2123284476 * L_4 = __this->get__device_8();
		if (L_4)
		{
			goto IL_0034;
		}
	}

IL_0033:
	{
		return;
	}

IL_0034:
	{
		int32_t L_5 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if ((((int32_t)L_6) == ((int32_t)((int32_t)90))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if ((((int32_t)L_7) == ((int32_t)((int32_t)270))))
		{
			goto IL_007f;
		}
	}

IL_005b:
	{
		int32_t L_8 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)8))))
		{
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)180)))))
		{
			goto IL_009d;
		}
	}

IL_007f:
	{
		ARCameraBaseBehaviour_t712094156 * L_11 = __this->get_augmenterBaseBehaviour_14();
		CameraDevice_t2123284476 * L_12 = __this->get__device_8();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_OpenedDeviceIfOpened_2();
		NullCheck(L_11);
		L_11->set_rFlag_7((bool)((((int32_t)L_13) == ((int32_t)2))? 1 : 0));
		goto IL_00a9;
	}

IL_009d:
	{
		ARCameraBaseBehaviour_t712094156 * L_14 = __this->get_augmenterBaseBehaviour_14();
		NullCheck(L_14);
		L_14->set_rFlag_7((bool)0);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::ChangeHFlip(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_ChangeHFlip_m3945789328 (RenderCameraBaseBehaviour_t1612515119 * __this, bool ___flip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_ChangeHFlip_m3945789328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RealityPlaneBaseBehaviour_t2956186783 * V_0 = NULL;
	RealityPlaneBaseBehaviourU5BU5D_t2418639366* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = ___flip0;
		__this->set_hFlip_10(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_2 = GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_002e;
	}

IL_001a:
	{
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RealityPlaneBaseBehaviour_t2956186783 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		RealityPlaneBaseBehaviour_t2956186783 * L_7 = V_0;
		bool L_8 = __this->get_hFlip_10();
		NullCheck(L_7);
		L_7->set_hFlip_8(L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_10 = V_2;
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		__this->set_hFlipChanged_11((bool)1);
		return;
	}
}
// UnityEngine.Matrix4x4 EasyAR.RenderCameraBaseBehaviour::ResizeGL(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  RenderCameraBaseBehaviour_ResizeGL_m130457591 (RenderCameraBaseBehaviour_t1612515119 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_ResizeGL_m130457591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Vector2I_t2668621479  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2I__ctor_m356857369((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set__screenSize_7(L_2);
		Vector2I_t2668621479 * L_3 = __this->get_address_of__camSize_6();
		int32_t L_4 = L_3->get_x_0();
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		Vector2I_t2668621479 * L_5 = __this->get_address_of__camSize_6();
		int32_t L_6 = L_5->get_y_1();
		if (L_6)
		{
			goto IL_0034;
		}
	}

IL_002d:
	{
		Matrix4x4_t1817901843  L_7 = __this->get__projection_5();
		return L_7;
	}

IL_0034:
	{
		Matrix4x4_t1817901843  L_8 = __this->get__projection_5();
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)180)))))
		{
			goto IL_00af;
		}
	}

IL_0054:
	{
		int32_t L_11 = ___width0;
		Vector2I_t2668621479 * L_12 = __this->get_address_of__camSize_6();
		int32_t L_13 = L_12->get_x_0();
		V_1 = ((float)((float)(((float)((float)L_11)))/(float)(((float)((float)L_13)))));
		int32_t L_14 = ___height1;
		Vector2I_t2668621479 * L_15 = __this->get_address_of__camSize_6();
		int32_t L_16 = L_15->get_y_1();
		V_2 = ((float)((float)(((float)((float)L_14)))/(float)(((float)((float)L_16)))));
		Matrix4x4_t1817901843 * L_17 = (&V_0);
		float L_18 = L_17->get_m00_0();
		float L_19 = V_2;
		float L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Max_m3146388979(NULL /*static, unused*/, (1.0f), ((float)((float)L_19/(float)L_20)), /*hidden argument*/NULL);
		L_17->set_m00_0(((float)il2cpp_codegen_multiply((float)L_18, (float)L_21)));
		Matrix4x4_t1817901843 * L_22 = (&V_0);
		float L_23 = L_22->get_m11_5();
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)((float)L_24/(float)L_25)), (1.0f), /*hidden argument*/NULL);
		L_22->set_m11_5(((float)il2cpp_codegen_multiply((float)L_23, (float)L_26)));
		goto IL_0108;
	}

IL_00af:
	{
		int32_t L_27 = ___width0;
		Vector2I_t2668621479 * L_28 = __this->get_address_of__camSize_6();
		int32_t L_29 = L_28->get_y_1();
		V_3 = ((float)((float)(((float)((float)L_27)))/(float)(((float)((float)L_29)))));
		int32_t L_30 = ___height1;
		Vector2I_t2668621479 * L_31 = __this->get_address_of__camSize_6();
		int32_t L_32 = L_31->get_x_0();
		V_4 = ((float)((float)(((float)((float)L_30)))/(float)(((float)((float)L_32)))));
		Matrix4x4_t1817901843 * L_33 = (&V_0);
		float L_34 = L_33->get_m00_0();
		float L_35 = V_4;
		float L_36 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_37 = Mathf_Max_m3146388979(NULL /*static, unused*/, (1.0f), ((float)((float)L_35/(float)L_36)), /*hidden argument*/NULL);
		L_33->set_m00_0(((float)il2cpp_codegen_multiply((float)L_34, (float)L_37)));
		Matrix4x4_t1817901843 * L_38 = (&V_0);
		float L_39 = L_38->get_m11_5();
		float L_40 = V_3;
		float L_41 = V_4;
		float L_42 = Mathf_Max_m3146388979(NULL /*static, unused*/, ((float)((float)L_40/(float)L_41)), (1.0f), /*hidden argument*/NULL);
		L_38->set_m11_5(((float)il2cpp_codegen_multiply((float)L_39, (float)L_42)));
	}

IL_0108:
	{
		Matrix4x4_t1817901843  L_43 = V_0;
		return L_43;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreRender()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_OnPreRender_m4006736474 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_hFlip_10();
		GL_SetRevertBackfacing_m310228429(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPostRender()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_OnPostRender_m4046479469 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_hFlip_10();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GL_SetRevertBackfacing_m310228429(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void EasyAR.RenderCameraBaseBehaviour::OnPreCull()
extern "C" IL2CPP_METHOD_ATTR void RenderCameraBaseBehaviour_OnPreCull_m1655182515 (RenderCameraBaseBehaviour_t1612515119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderCameraBaseBehaviour_OnPreCull_m1655182515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	RealityPlaneBaseBehaviour_t2956186783 * V_3 = NULL;
	RealityPlaneBaseBehaviourU5BU5D_t2418639366* V_4 = NULL;
	int32_t V_5 = 0;
	Vector2_t2156229523  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2I_t2668621479  V_7;
	memset(&V_7, 0, sizeof(V_7));
	bool V_8 = false;
	Matrix4x4_t1817901843  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2I_t2668621479  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector2I_t2668621479  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Matrix4x4_t1817901843  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Matrix4x4_t1817901843  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Matrix4x4_t1817901843  V_14;
	memset(&V_14, 0, sizeof(V_14));
	{
		Camera_t4157153871 * L_0 = __this->get_RenderCamera_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		CameraDevice_t2123284476 * L_2 = __this->get__device_8();
		if (L_2)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		CameraDevice_t2123284476 * L_3 = __this->get__device_8();
		NullCheck(L_3);
		bool L_4 = CameraDevice_HFlip_m2447342801(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = __this->get_hFlip_10();
		bool L_6 = V_0;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		bool L_7 = V_0;
		RenderCameraBaseBehaviour_ChangeHFlip_m3945789328(__this, L_7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		V_1 = (bool)0;
		Vector2_t2156229523 * L_8 = __this->get_address_of_clipPlanes_12();
		float L_9 = L_8->get_x_0();
		Camera_t4157153871 * L_10 = __this->get_RenderCamera_4();
		NullCheck(L_10);
		float L_11 = Camera_get_nearClipPlane_m837839537(L_10, /*hidden argument*/NULL);
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0074;
		}
	}
	{
		Vector2_t2156229523 * L_12 = __this->get_address_of_clipPlanes_12();
		float L_13 = L_12->get_y_1();
		Camera_t4157153871 * L_14 = __this->get_RenderCamera_4();
		NullCheck(L_14);
		float L_15 = Camera_get_farClipPlane_m538536689(L_14, /*hidden argument*/NULL);
		if ((((float)L_13) == ((float)L_15)))
		{
			goto IL_0097;
		}
	}

IL_0074:
	{
		V_1 = (bool)1;
		Camera_t4157153871 * L_16 = __this->get_RenderCamera_4();
		NullCheck(L_16);
		float L_17 = Camera_get_nearClipPlane_m837839537(L_16, /*hidden argument*/NULL);
		Camera_t4157153871 * L_18 = __this->get_RenderCamera_4();
		NullCheck(L_18);
		float L_19 = Camera_get_farClipPlane_m538536689(L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2__ctor_m3970636864((&L_20), L_17, L_19, /*hidden argument*/NULL);
		__this->set_clipPlanes_12(L_20);
	}

IL_0097:
	{
		V_2 = (bool)0;
		Vector2I_t2668621479 * L_21 = __this->get_address_of__camSize_6();
		int32_t L_22 = L_21->get_x_0();
		CameraDevice_t2123284476 * L_23 = __this->get__device_8();
		NullCheck(L_23);
		Vector2I_t2668621479  L_24 = CameraDevice_get_Size_m790945437(L_23, /*hidden argument*/NULL);
		V_10 = L_24;
		int32_t L_25 = (&V_10)->get_x_0();
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_00f2;
		}
	}
	{
		Vector2I_t2668621479 * L_26 = __this->get_address_of__camSize_6();
		int32_t L_27 = L_26->get_y_1();
		CameraDevice_t2123284476 * L_28 = __this->get__device_8();
		NullCheck(L_28);
		Vector2I_t2668621479  L_29 = CameraDevice_get_Size_m790945437(L_28, /*hidden argument*/NULL);
		V_11 = L_29;
		int32_t L_30 = (&V_11)->get_y_1();
		if ((!(((uint32_t)L_27) == ((uint32_t)L_30))))
		{
			goto IL_00f2;
		}
	}
	{
		bool L_31 = V_1;
		if (L_31)
		{
			goto IL_00f2;
		}
	}
	{
		bool L_32 = __this->get_hFlipChanged_11();
		if (!L_32)
		{
			goto IL_01c6;
		}
	}

IL_00f2:
	{
		V_2 = (bool)1;
		CameraDevice_t2123284476 * L_33 = __this->get__device_8();
		NullCheck(L_33);
		Vector2I_t2668621479  L_34 = CameraDevice_get_Size_m790945437(L_33, /*hidden argument*/NULL);
		__this->set__camSize_6(L_34);
		GameObject_t1113636619 * L_35 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_36 = GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751(L_35, /*hidden argument*/GameObject_GetComponentsInChildren_TisRealityPlaneBaseBehaviour_t2956186783_m3023197751_RuntimeMethod_var);
		V_4 = L_36;
		V_5 = 0;
		goto IL_01bb;
	}

IL_011a:
	{
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_37 = V_4;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		RealityPlaneBaseBehaviour_t2956186783 * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_3 = L_40;
		CameraDevice_t2123284476 * L_41 = __this->get__device_8();
		NullCheck(L_41);
		CameraCalibration_t367929843 * L_42 = CameraDevice_get_Calibration_m939346227(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector2_t2156229523  L_43 = CameraCalibration_get_FocalLength_m107040700(L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		CameraDevice_t2123284476 * L_44 = __this->get__device_8();
		NullCheck(L_44);
		Vector2I_t2668621479  L_45 = CameraDevice_get_Size_m790945437(L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = (&V_7)->get_x_0();
		if (!L_46)
		{
			goto IL_01b5;
		}
	}
	{
		float L_47 = (&V_6)->get_x_0();
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_48 = (&V_7)->get_y_1();
		if (!L_48)
		{
			goto IL_01b5;
		}
	}
	{
		float L_49 = (&V_6)->get_y_1();
		if ((((float)L_49) == ((float)(0.0f))))
		{
			goto IL_01b5;
		}
	}
	{
		RealityPlaneBaseBehaviour_t2956186783 * L_50 = V_3;
		int32_t L_51 = (&V_7)->get_x_0();
		float L_52 = (&V_6)->get_x_0();
		int32_t L_53 = (&V_7)->get_y_1();
		float L_54 = (&V_6)->get_y_1();
		Vector2_t2156229523  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector2__ctor_m3970636864((&L_55), ((float)((float)(((float)((float)L_51)))/(float)L_52)), ((float)((float)(((float)((float)L_53)))/(float)L_54)), /*hidden argument*/NULL);
		Camera_t4157153871 * L_56 = __this->get_RenderCamera_4();
		NullCheck(L_56);
		float L_57 = Camera_get_farClipPlane_m538536689(L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		RealityPlaneBaseBehaviour_MoveToCamera_m4064449008(L_50, L_55, ((float)il2cpp_codegen_multiply((float)L_57, (float)(0.99f))), /*hidden argument*/NULL);
	}

IL_01b5:
	{
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_01bb:
	{
		int32_t L_59 = V_5;
		RealityPlaneBaseBehaviourU5BU5D_t2418639366* L_60 = V_4;
		NullCheck(L_60);
		if ((((int32_t)L_59) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_60)->max_length)))))))
		{
			goto IL_011a;
		}
	}

IL_01c6:
	{
		V_8 = (bool)0;
		int32_t L_61 = __this->get_rotation_9();
		int32_t L_62 = Screen_get_orientation_m3354122719(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_63 = Engine_UpdateOrientation_m1578106270(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_61) == ((uint32_t)L_63))))
		{
			goto IL_01f5;
		}
	}
	{
		bool L_64 = V_2;
		if (L_64)
		{
			goto IL_01f5;
		}
	}
	{
		bool L_65 = __this->get_hFlipChanged_11();
		if (L_65)
		{
			goto IL_01f5;
		}
	}
	{
		bool L_66 = V_1;
		if (!L_66)
		{
			goto IL_0230;
		}
	}

IL_01f5:
	{
		RenderCameraBaseBehaviour_setRflag_m4166634966(__this, /*hidden argument*/NULL);
		V_8 = (bool)1;
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_67 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		__this->set_rotation_9(L_67);
		CameraDevice_t2123284476 * L_68 = __this->get__device_8();
		Camera_t4157153871 * L_69 = __this->get_RenderCamera_4();
		NullCheck(L_69);
		float L_70 = Camera_get_nearClipPlane_m837839537(L_69, /*hidden argument*/NULL);
		Camera_t4157153871 * L_71 = __this->get_RenderCamera_4();
		NullCheck(L_71);
		float L_72 = Camera_get_farClipPlane_m538536689(L_71, /*hidden argument*/NULL);
		NullCheck(L_68);
		Matrix4x4_t1817901843  L_73 = CameraDevice_ProjectionGL_m2462157799(L_68, L_70, L_72, /*hidden argument*/NULL);
		__this->set__projection_5(L_73);
	}

IL_0230:
	{
		int32_t L_74 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2I_t2668621479 * L_75 = __this->get_address_of__screenSize_7();
		int32_t L_76 = L_75->get_x_0();
		if ((!(((uint32_t)L_74) == ((uint32_t)L_76))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_77 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2I_t2668621479 * L_78 = __this->get_address_of__screenSize_7();
		int32_t L_79 = L_78->get_y_1();
		if ((!(((uint32_t)L_77) == ((uint32_t)L_79))))
		{
			goto IL_0272;
		}
	}
	{
		bool L_80 = V_8;
		if (L_80)
		{
			goto IL_0272;
		}
	}
	{
		bool L_81 = V_2;
		if (L_81)
		{
			goto IL_0272;
		}
	}
	{
		bool L_82 = __this->get_hFlipChanged_11();
		if (!L_82)
		{
			goto IL_0335;
		}
	}

IL_0272:
	{
		bool L_83 = __this->get_hFlipChanged_11();
		if (!L_83)
		{
			goto IL_0284;
		}
	}
	{
		__this->set_hFlipChanged_11((bool)0);
	}

IL_0284:
	{
		int32_t L_84 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_85 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_86 = RenderCameraBaseBehaviour_ResizeGL_m130457591(__this, L_84, L_85, /*hidden argument*/NULL);
		V_9 = L_86;
		float L_87 = (&V_9)->get_m00_0();
		if ((((float)L_87) == ((float)(0.0f))))
		{
			goto IL_02b4;
		}
	}
	{
		Camera_t4157153871 * L_88 = __this->get_RenderCamera_4();
		Matrix4x4_t1817901843  L_89 = V_9;
		NullCheck(L_88);
		Camera_set_projectionMatrix_m3293177686(L_88, L_89, /*hidden argument*/NULL);
	}

IL_02b4:
	{
		int32_t L_90 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_90) == ((int32_t)7)))
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_91 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_0335;
		}
	}

IL_02c9:
	{
		Camera_t4157153871 * L_92 = __this->get_RenderCamera_4();
		Camera_t4157153871 * L_93 = __this->get_RenderCamera_4();
		NullCheck(L_93);
		Matrix4x4_t1817901843  L_94 = Camera_get_projectionMatrix_m667780853(L_93, /*hidden argument*/NULL);
		V_12 = L_94;
		float L_95 = (&V_12)->get_m11_5();
		double L_96 = atan((((double)((double)((float)((float)(1.0f)/(float)L_95))))));
		NullCheck(L_92);
		Camera_set_fieldOfView_m1438246590(L_92, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)(((float)((float)L_96))))), (float)(57.29578f))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_97 = __this->get_RenderCamera_4();
		Camera_t4157153871 * L_98 = __this->get_RenderCamera_4();
		NullCheck(L_98);
		Matrix4x4_t1817901843  L_99 = Camera_get_projectionMatrix_m667780853(L_98, /*hidden argument*/NULL);
		V_13 = L_99;
		float L_100 = (&V_13)->get_m11_5();
		Camera_t4157153871 * L_101 = __this->get_RenderCamera_4();
		NullCheck(L_101);
		Matrix4x4_t1817901843  L_102 = Camera_get_projectionMatrix_m667780853(L_101, /*hidden argument*/NULL);
		V_14 = L_102;
		float L_103 = (&V_14)->get_m00_0();
		NullCheck(L_97);
		Camera_set_aspect_m2625464181(L_97, ((float)((float)L_100/(float)L_103)), /*hidden argument*/NULL);
	}

IL_0335:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.Target::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Target__ctor_m4166662760 (Target_t4113221852 * __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	{
		Base__ctor_m3198904856(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___obj0;
		((Base_t1500127977 *)__this)->set_Obj_0(L_0);
		Target_InitProperties_m1300233393(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 EasyAR.Target::get_Id()
extern "C" IL2CPP_METHOD_ATTR int32_t Target_get_Id_m388023146 (Target_t4113221852 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void EasyAR.Target::set_Id(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Id_m3863582096 (Target_t4113221852 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void EasyAR.Target::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Name_m2548212472 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void EasyAR.Target::set_Uid(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_Uid_m2500311380 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUidU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void EasyAR.Target::set_MetaData(System.String)
extern "C" IL2CPP_METHOD_ATTR void Target_set_MetaData_m2754738851 (Target_t4113221852 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMetaDataU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void EasyAR.Target::InitProperties()
extern "C" IL2CPP_METHOD_ATTR void Target_InitProperties_m1300233393 (Target_t4113221852 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Target_InitProperties_m1300233393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(79 /* System.Int32 EasyAR.IEngineNative::Target_getId(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_0, L_1);
		Target_set_Id_m3863582096(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_4 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_3);
		intptr_t L_5 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(80 /* System.IntPtr EasyAR.IEngineNative::Target_getName(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		RuntimeObject* L_6 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		NullCheck(L_6);
		intptr_t L_8 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(7 /* System.IntPtr EasyAR.IEngineNative::String_begin(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_6, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		String_t* L_9 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Target_set_Name_m2548212472(__this, L_9, /*hidden argument*/NULL);
		RuntimeObject* L_10 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< intptr_t >::Invoke(6 /* System.Void EasyAR.IEngineNative::Destory_String(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_13 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_12);
		intptr_t L_14 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(81 /* System.IntPtr EasyAR.IEngineNative::Target_getUid(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_12, L_13);
		V_1 = L_14;
		RuntimeObject* L_15 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		NullCheck(L_15);
		intptr_t L_17 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(7 /* System.IntPtr EasyAR.IEngineNative::String_begin(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_15, L_16);
		String_t* L_18 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		Target_set_Uid_m2500311380(__this, L_18, /*hidden argument*/NULL);
		RuntimeObject* L_19 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_20 = V_1;
		NullCheck(L_19);
		InterfaceActionInvoker1< intptr_t >::Invoke(6 /* System.Void EasyAR.IEngineNative::Destory_String(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_19, L_20);
		RuntimeObject* L_21 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_22 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_21);
		intptr_t L_23 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(82 /* System.IntPtr EasyAR.IEngineNative::Target_metaData(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_21, L_22);
		V_2 = L_23;
		RuntimeObject* L_24 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_25 = V_2;
		NullCheck(L_24);
		intptr_t L_26 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(7 /* System.IntPtr EasyAR.IEngineNative::String_begin(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_24, L_25);
		String_t* L_27 = Marshal_PtrToStringAnsi_m2474145239(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Target_set_MetaData_m2754738851(__this, L_27, /*hidden argument*/NULL);
		RuntimeObject* L_28 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_29 = V_2;
		NullCheck(L_28);
		InterfaceActionInvoker1< intptr_t >::Invoke(6 /* System.Void EasyAR.IEngineNative::Destory_String(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_28, L_29);
		return;
	}
}
// System.Void EasyAR.Target::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Target_Dispose_m2769267903 (Target_t4113221852 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Target_Dispose_m2769267903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(78 /* System.Void EasyAR.IEngineNative::Destory_Target(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		((Base_t1500127977 *)__this)->set_Obj_0((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Disposed_1((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.TargetAbstractBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour__ctor_m1769874139 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	{
		__this->set_gameObjectActiveControl_7((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour__cctor_m1157412960 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour__cctor_m1157412960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t435241803 * L_0 = (Dictionary_2_t435241803 *)il2cpp_codegen_object_new(Dictionary_2_t435241803_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m149810030(L_0, /*hidden argument*/Dictionary_2__ctor_m149810030_RuntimeMethod_var);
		((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->set_allTargetBehaviours_4(L_0);
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::add_TargetFound(System.Action`1<EasyAR.TargetAbstractBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_add_TargetFound_m179857582 (TargetAbstractBehaviour_t1546528472 * __this, Action_1_t1718996067 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_add_TargetFound_m179857582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1718996067 * L_0 = __this->get_TargetFound_8();
		Action_1_t1718996067 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetFound_8(((Action_1_t1718996067 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t1718996067_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::remove_TargetFound(System.Action`1<EasyAR.TargetAbstractBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_remove_TargetFound_m1747294212 (TargetAbstractBehaviour_t1546528472 * __this, Action_1_t1718996067 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_remove_TargetFound_m1747294212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1718996067 * L_0 = __this->get_TargetFound_8();
		Action_1_t1718996067 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetFound_8(((Action_1_t1718996067 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t1718996067_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::add_TargetLost(System.Action`1<EasyAR.TargetAbstractBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_add_TargetLost_m3044370804 (TargetAbstractBehaviour_t1546528472 * __this, Action_1_t1718996067 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_add_TargetLost_m3044370804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1718996067 * L_0 = __this->get_TargetLost_9();
		Action_1_t1718996067 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLost_9(((Action_1_t1718996067 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t1718996067_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::remove_TargetLost(System.Action`1<EasyAR.TargetAbstractBehaviour>)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_remove_TargetLost_m1680756618 (TargetAbstractBehaviour_t1546528472 * __this, Action_1_t1718996067 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_remove_TargetLost_m1680756618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t1718996067 * L_0 = __this->get_TargetLost_9();
		Action_1_t1718996067 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_TargetLost_9(((Action_1_t1718996067 *)CastclassSealed((RuntimeObject*)L_2, Action_1_t1718996067_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::EasyAR.ITarget.OnFoundInFrame()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_EasyAR_ITarget_OnFoundInFrame_m3245675626 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyAR.TargetAbstractBehaviour::get_GameObjectActiveControl()
extern "C" IL2CPP_METHOD_ATTR bool TargetAbstractBehaviour_get_GameObjectActiveControl_m3659731605 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_gameObjectActiveControl_7();
		return L_0;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::set_GameObjectActiveControl(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_set_GameObjectActiveControl_m317423262 (TargetAbstractBehaviour_t1546528472 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_gameObjectActiveControl_7(L_0);
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::FoundInFrame()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_FoundInFrame_m3569256786 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_FoundInFrame_m3569256786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InterfaceActionInvoker0::Invoke(0 /* System.Void EasyAR.ITarget::OnFoundInFrame() */, ITarget_t3520026477_il2cpp_TypeInfo_var, __this);
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_Start_m862032035 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_gameObjectActiveControl_7();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::RegisterSelf(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_RegisterSelf_m1389438361 (TargetAbstractBehaviour_t1546528472 * __this, int32_t ___target_Id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_RegisterSelf_m1389438361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetAbstractBehaviour_t1546528472 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_registeredID_5();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_1 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		int32_t L_2 = __this->get_registeredID_5();
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_m2707527413(L_1, L_2, (TargetAbstractBehaviour_t1546528472 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2707527413_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		TargetAbstractBehaviour_t1546528472 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_6 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		int32_t L_7 = __this->get_registeredID_5();
		NullCheck(L_6);
		Dictionary_2_Remove_m15735542(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m15735542_RuntimeMethod_var);
	}

IL_0040:
	{
		int32_t L_8 = ___target_Id0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_9 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		int32_t L_10 = ___target_Id0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m2363031532(L_9, L_10, __this, /*hidden argument*/Dictionary_2_set_Item_m2363031532_RuntimeMethod_var);
	}

IL_0053:
	{
		int32_t L_11 = ___target_Id0;
		__this->set_registeredID_5(L_11);
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::UnregisterSelf()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_UnregisterSelf_m2366159564 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_UnregisterSelf_m2366159564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetAbstractBehaviour_t1546528472 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_registeredID_5();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_1 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		int32_t L_2 = __this->get_registeredID_5();
		NullCheck(L_1);
		bool L_3 = Dictionary_2_TryGetValue_m2707527413(L_1, L_2, (TargetAbstractBehaviour_t1546528472 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2707527413_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		TargetAbstractBehaviour_t1546528472 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_6 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		int32_t L_7 = __this->get_registeredID_5();
		NullCheck(L_6);
		Dictionary_2_Remove_m15735542(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m15735542_RuntimeMethod_var);
	}

IL_0040:
	{
		return;
	}
}
// EasyAR.TargetAbstractBehaviour EasyAR.TargetAbstractBehaviour::QueryBehaviour(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR TargetAbstractBehaviour_t1546528472 * TargetAbstractBehaviour_QueryBehaviour_m2705374532 (RuntimeObject * __this /* static, unused */, Target_t4113221852 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_QueryBehaviour_m2705374532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetAbstractBehaviour_t1546528472 * V_0 = NULL;
	ARSceneBaseBehaviour_t3394135702 * V_1 = NULL;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var);
		Dictionary_2_t435241803 * L_0 = ((TargetAbstractBehaviour_t1546528472_StaticFields*)il2cpp_codegen_static_fields_for(TargetAbstractBehaviour_t1546528472_il2cpp_TypeInfo_var))->get_allTargetBehaviours_4();
		Target_t4113221852 * L_1 = ___target0;
		NullCheck(L_1);
		int32_t L_2 = Target_get_Id_m388023146(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m2707527413(L_0, L_2, (TargetAbstractBehaviour_t1546528472 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2707527413_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		TargetAbstractBehaviour_t1546528472 * L_4 = V_0;
		return L_4;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARSceneBaseBehaviour_t3394135702_il2cpp_TypeInfo_var);
		ARSceneBaseBehaviour_t3394135702 * L_5 = ARSceneBaseBehaviour_Instance_m2315638672(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		Target_t4113221852 * L_6 = ___target0;
		bool L_7 = ARScene_CanCastFromTarget_m910037752(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ARSceneBaseBehaviour_t3394135702 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		ARSceneBaseBehaviour_t3394135702 * L_11 = V_1;
		NullCheck(L_11);
		ARScene_t1576376535 * L_12 = L_11->get_Target_10();
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		Target_t4113221852 * L_13 = ___target0;
		NullCheck(L_13);
		int32_t L_14 = Target_get_Id_m388023146(L_13, /*hidden argument*/NULL);
		ARSceneBaseBehaviour_t3394135702 * L_15 = V_1;
		NullCheck(L_15);
		ARScene_t1576376535 * L_16 = L_15->get_Target_10();
		NullCheck(L_16);
		int32_t L_17 = ARScene_get_Id_m4170591269(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)L_17)))
		{
			goto IL_005f;
		}
	}

IL_0058:
	{
		ARSceneBaseBehaviour_t3394135702 * L_18 = V_1;
		Target_t4113221852 * L_19 = ___target0;
		NullCheck(L_18);
		ARSceneBaseBehaviour_SetupTarget_m3986301973(L_18, L_19, /*hidden argument*/NULL);
	}

IL_005f:
	{
		ARSceneBaseBehaviour_t3394135702 * L_20 = V_1;
		return L_20;
	}

IL_0061:
	{
		return (TargetAbstractBehaviour_t1546528472 *)NULL;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::OnTargetFound()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_OnTargetFound_m2385049192 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_OnTargetFound_m2385049192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set_isFound_6((bool)1);
		bool L_0 = __this->get_gameObjectActiveControl_7();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			Action_1_t1718996067 * L_2 = __this->get_TargetFound_8();
			if (!L_2)
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			Action_1_t1718996067 * L_3 = __this->get_TargetFound_8();
			NullCheck(L_3);
			Action_1_Invoke_m4276893973(L_3, __this, /*hidden argument*/Action_1_Invoke_m4276893973_RuntimeMethod_var);
		}

IL_0035:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003a;
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::OnTargetLost()
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_OnTargetLost_m1561625043 (TargetAbstractBehaviour_t1546528472 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_OnTargetLost_m1561625043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set_isFound_6((bool)0);
		bool L_0 = __this->get_gameObjectActiveControl_7();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			Action_1_t1718996067 * L_2 = __this->get_TargetLost_9();
			if (!L_2)
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			Action_1_t1718996067 * L_3 = __this->get_TargetLost_9();
			NullCheck(L_3);
			Action_1_Invoke_m4276893973(L_3, __this, /*hidden argument*/Action_1_Invoke_m4276893973_RuntimeMethod_var);
		}

IL_0035:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003a;
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3909020583, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
		return;
	}
}
// System.Void EasyAR.TargetAbstractBehaviour::AdjustTransform(EasyAR.TargetInstance,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TargetAbstractBehaviour_AdjustTransform_m3180399727 (TargetAbstractBehaviour_t1546528472 * __this, TargetInstance_t1849971935 * ___augmentedTarget0, Transform_t3600365921 * ___centerTransform1, bool ___rFlag2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetAbstractBehaviour_AdjustTransform_m3180399727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_0 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___rFlag2;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_back_m4077847766(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (180.0f), L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_002b:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = ___centerTransform1;
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_8 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		int32_t L_9 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_11 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (((float)((float)L_9))), L_10, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_12 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_14 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (90.0f), L_13, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		TargetInstance_t1849971935 * L_16 = ___augmentedTarget0;
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = TargetInstance_get_Position_m3031158248(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = ___centerTransform1;
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		Vector3_t3722313464  L_21 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_21, /*hidden argument*/NULL);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = ___centerTransform1;
		NullCheck(L_23);
		Quaternion_t2301928331  L_24 = Transform_get_rotation_m3502953881(L_23, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_25 = V_0;
		Quaternion_t2301928331  L_26 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		int32_t L_27 = ((Engine_t1017580842_StaticFields*)il2cpp_codegen_static_fields_for(Engine_t1017580842_il2cpp_TypeInfo_var))->get_Rotation_1();
		Vector3_t3722313464  L_28 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_29 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (((float)((float)L_27))), L_28, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_30 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_26, L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Vector3_get_left_m2428419009(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_32 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (90.0f), L_31, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_33 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		TargetInstance_t1849971935 * L_34 = ___augmentedTarget0;
		NullCheck(L_34);
		Quaternion_t2301928331  L_35 = TargetInstance_get_Rotation_m2357670163(L_34, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_36 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m3524318132(L_22, L_36, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.TargetInstance::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance__ctor_m957397788 (TargetInstance_t1849971935 * __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetInstance__ctor_m957397788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t1444911251* V_0 = NULL;
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Base__ctor_m3198904856(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___obj0;
		((Base_t1500127977 *)__this)->set_Obj_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(90 /* System.Int32 EasyAR.IEngineNative::AugmentedTarget_status(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		TargetInstance_set_Status_m2859395047(__this, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_4);
		intptr_t L_6 = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(91 /* System.IntPtr EasyAR.IEngineNative::AugmentedTarget_target(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4, L_5);
		Target_t4113221852 * L_7 = (Target_t4113221852 *)il2cpp_codegen_object_new(Target_t4113221852_il2cpp_TypeInfo_var);
		Target__ctor_m4166662760(L_7, L_6, /*hidden argument*/NULL);
		TargetInstance_set_Target_m358807125(__this, L_7, /*hidden argument*/NULL);
		SingleU5BU5D_t1444911251* L_8 = (SingleU5BU5D_t1444911251*)SZArrayNew(SingleU5BU5D_t1444911251_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		V_0 = L_8;
		RuntimeObject* L_9 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_10 = ((Base_t1500127977 *)__this)->get_Obj_0();
		SingleU5BU5D_t1444911251* L_11 = V_0;
		NullCheck(L_9);
		InterfaceActionInvoker2< intptr_t, SingleU5BU5D_t1444911251* >::Invoke(92 /* System.Void EasyAR.IEngineNative::AugmentedTarget_pose(System.IntPtr,System.Single[]) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		SingleU5BU5D_t1444911251* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		(&V_1)->set_m00_0(L_14);
		SingleU5BU5D_t1444911251* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 1;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		(&V_1)->set_m01_4(L_17);
		SingleU5BU5D_t1444911251* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 2;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		(&V_1)->set_m02_8(L_20);
		SingleU5BU5D_t1444911251* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 3;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		(&V_1)->set_m03_12(L_23);
		SingleU5BU5D_t1444911251* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 4;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		(&V_1)->set_m10_1(L_26);
		SingleU5BU5D_t1444911251* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 5;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		(&V_1)->set_m11_5(L_29);
		SingleU5BU5D_t1444911251* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 6;
		float L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		(&V_1)->set_m12_9(L_32);
		SingleU5BU5D_t1444911251* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 7;
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		(&V_1)->set_m13_13(L_35);
		SingleU5BU5D_t1444911251* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = 8;
		float L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		(&V_1)->set_m20_2(L_38);
		SingleU5BU5D_t1444911251* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)9);
		float L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		(&V_1)->set_m21_6(L_41);
		SingleU5BU5D_t1444911251* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)10);
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		(&V_1)->set_m22_10(L_44);
		SingleU5BU5D_t1444911251* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)11);
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		(&V_1)->set_m23_14(L_47);
		(&V_1)->set_m30_3((0.0f));
		(&V_1)->set_m31_7((0.0f));
		(&V_1)->set_m32_11((0.0f));
		(&V_1)->set_m33_15((1.0f));
		Matrix4x4_t1817901843  L_48 = V_1;
		TargetInstance_OnPoseSet_m322428646(__this, L_48, /*hidden argument*/NULL);
		return;
	}
}
// EasyAR.TargetInstance/TrackStatus EasyAR.TargetInstance::get_Status()
extern "C" IL2CPP_METHOD_ATTR int32_t TargetInstance_get_Status_m3034007452 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void EasyAR.TargetInstance::set_Status(EasyAR.TargetInstance/TrackStatus)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Status_m2859395047 (TargetInstance_t1849971935 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStatusU3Ek__BackingField_2(L_0);
		return;
	}
}
// EasyAR.Target EasyAR.TargetInstance::get_Target()
extern "C" IL2CPP_METHOD_ATTR Target_t4113221852 * TargetInstance_get_Target_m2864341427 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method)
{
	{
		Target_t4113221852 * L_0 = __this->get_U3CTargetU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void EasyAR.TargetInstance::set_Target(EasyAR.Target)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Target_m358807125 (TargetInstance_t1849971935 * __this, Target_t4113221852 * ___value0, const RuntimeMethod* method)
{
	{
		Target_t4113221852 * L_0 = ___value0;
		__this->set_U3CTargetU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.Quaternion EasyAR.TargetInstance::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  TargetInstance_get_Rotation_m2357670163 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = __this->get_U3CRotationU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void EasyAR.TargetInstance::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Rotation_m2737320053 (TargetInstance_t1849971935 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CRotationU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 EasyAR.TargetInstance::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  TargetInstance_get_Position_m3031158248 (TargetInstance_t1849971935 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = __this->get_U3CPositionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void EasyAR.TargetInstance::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_set_Position_m779885771 (TargetInstance_t1849971935 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CPositionU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void EasyAR.TargetInstance::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_Dispose_m1014673959 (TargetInstance_t1849971935 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetInstance_Dispose_m1014673959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(89 /* System.Void EasyAR.IEngineNative::Destory_AugmentedTarget(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		((Base_t1500127977 *)__this)->set_Obj_0((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Disposed_1((bool)1);
		return;
	}
}
// UnityEngine.Quaternion EasyAR.TargetInstance::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  TargetInstance_QuaternionFromMatrix_m3746477350 (TargetInstance_t1849971935 * __this, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetInstance_QuaternionFromMatrix_m3746477350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t2301928331 ));
		Quaternion_t2301928331  L_0 = V_0;
		V_1 = L_0;
		float L_1 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 0, /*hidden argument*/NULL);
		float L_2 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 1, /*hidden argument*/NULL);
		float L_3 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_1)), (float)L_2)), (float)L_3)), /*hidden argument*/NULL);
		float L_5 = sqrtf(L_4);
		(&V_1)->set_w_3(((float)((float)L_5/(float)(2.0f))));
		float L_6 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 0, /*hidden argument*/NULL);
		float L_7 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 1, /*hidden argument*/NULL);
		float L_8 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 2, /*hidden argument*/NULL);
		float L_9 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_6)), (float)L_7)), (float)L_8)), /*hidden argument*/NULL);
		float L_10 = sqrtf(L_9);
		(&V_1)->set_x_0(((float)((float)L_10/(float)(2.0f))));
		float L_11 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 0, /*hidden argument*/NULL);
		float L_12 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 1, /*hidden argument*/NULL);
		float L_13 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 2, /*hidden argument*/NULL);
		float L_14 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_11)), (float)L_12)), (float)L_13)), /*hidden argument*/NULL);
		float L_15 = sqrtf(L_14);
		(&V_1)->set_y_1(((float)((float)L_15/(float)(2.0f))));
		float L_16 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 0, /*hidden argument*/NULL);
		float L_17 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 1, /*hidden argument*/NULL);
		float L_18 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 2, /*hidden argument*/NULL);
		float L_19 = Mathf_Max_m3146388979(NULL /*static, unused*/, (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_16)), (float)L_17)), (float)L_18)), /*hidden argument*/NULL);
		float L_20 = sqrtf(L_19);
		(&V_1)->set_z_2(((float)((float)L_20/(float)(2.0f))));
		Quaternion_t2301928331  L_21 = V_1;
		V_0 = L_21;
		Quaternion_t2301928331 * L_22 = (&V_0);
		float L_23 = L_22->get_x_0();
		float L_24 = (&V_0)->get_x_0();
		float L_25 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 1, /*hidden argument*/NULL);
		float L_26 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 2, /*hidden argument*/NULL);
		float L_27 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_24, (float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)))), /*hidden argument*/NULL);
		L_22->set_x_0(((float)il2cpp_codegen_multiply((float)L_23, (float)L_27)));
		Quaternion_t2301928331 * L_28 = (&V_0);
		float L_29 = L_28->get_y_1();
		float L_30 = (&V_0)->get_y_1();
		float L_31 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 2, /*hidden argument*/NULL);
		float L_32 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 2, 0, /*hidden argument*/NULL);
		float L_33 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_30, (float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_32)))), /*hidden argument*/NULL);
		L_28->set_y_1(((float)il2cpp_codegen_multiply((float)L_29, (float)L_33)));
		Quaternion_t2301928331 * L_34 = (&V_0);
		float L_35 = L_34->get_z_2();
		float L_36 = (&V_0)->get_z_2();
		float L_37 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 1, 0, /*hidden argument*/NULL);
		float L_38 = Matrix4x4_get_Item_m134152955((Matrix4x4_t1817901843 *)(&___m0), 0, 1, /*hidden argument*/NULL);
		float L_39 = Mathf_Sign_m3457838305(NULL /*static, unused*/, ((float)il2cpp_codegen_multiply((float)L_36, (float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_38)))), /*hidden argument*/NULL);
		L_34->set_z_2(((float)il2cpp_codegen_multiply((float)L_35, (float)L_39)));
		Quaternion_t2301928331  L_40 = V_0;
		return L_40;
	}
}
// System.Void EasyAR.TargetInstance::OnPoseSet(UnityEngine.Matrix4x4)
extern "C" IL2CPP_METHOD_ATTR void TargetInstance_OnPoseSet_m322428646 (TargetInstance_t1849971935 * __this, Matrix4x4_t1817901843  ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetInstance_OnPoseSet_m322428646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector4_t3319028937  L_0 = Matrix4x4_GetColumn_m461504848((Matrix4x4_t1817901843 *)(&___pose0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector4_op_Implicit_m1158564884(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Matrix4x4_t1817901843  L_3 = ___pose0;
		Quaternion_t2301928331  L_4 = TargetInstance_QuaternionFromMatrix_m3746477350(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		il2cpp_codegen_initobj((&V_2), sizeof(Quaternion_t2301928331 ));
		float L_5 = (&V_1)->get_x_0();
		(&V_2)->set_x_0(((-L_5)));
		float L_6 = (&V_1)->get_z_2();
		(&V_2)->set_y_1(L_6);
		float L_7 = (&V_1)->get_y_1();
		(&V_2)->set_z_2(L_7);
		float L_8 = (&V_1)->get_w_3();
		(&V_2)->set_w_3(L_8);
		Quaternion_t2301928331  L_9 = V_2;
		TargetInstance_set_Rotation_m2737320053(__this, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_t3722313464 ));
		float L_10 = (&V_0)->get_x_2();
		(&V_3)->set_x_2(((-L_10)));
		float L_11 = (&V_0)->get_z_4();
		(&V_3)->set_y_3(L_11);
		float L_12 = (&V_0)->get_y_3();
		(&V_3)->set_z_4(L_12);
		Vector3_t3722313464  L_13 = V_3;
		TargetInstance_set_Position_m779885771(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.Vector2I::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Vector2I__ctor_m356857369 (Vector2I_t2668621479 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_x_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
extern "C"  void Vector2I__ctor_m356857369_AdjustorThunk (RuntimeObject * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	Vector2I_t2668621479 * _thisAdjusted = reinterpret_cast<Vector2I_t2668621479 *>(__this + 1);
	Vector2I__ctor_m356857369(_thisAdjusted, ___x0, ___y1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoPlayer_OnStatusChange_m3051132405(intptr_t ___obj0, int32_t ___status1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	VideoPlayer_OnStatusChange_m3051132405(NULL, ___obj0, ___status1, NULL);

}
// System.Void EasyAR.VideoPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer__ctor_m2245464495 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer__ctor_m2245464495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_IsCheckNeeded_2((bool)1);
		Base__ctor_m3198904856(__this, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)VideoPlayer_OnStatusChange_m3051132405_RuntimeMethod_var;
		CallBack_t3619306023 * L_1 = (CallBack_t3619306023 *)il2cpp_codegen_object_new(CallBack_t3619306023_il2cpp_TypeInfo_var);
		CallBack__ctor_m749259251(L_1, NULL, L_0, /*hidden argument*/NULL);
		__this->set__callBack_5(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		intptr_t L_3 = InterfaceFuncInvoker0< intptr_t >::Invoke(122 /* System.IntPtr EasyAR.IEngineNative::Create_VideoPlayer() */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2);
		((Base_t1500127977 *)__this)->set_Obj_0(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(VideoPlayer_t947858561_il2cpp_TypeInfo_var);
		Dictionary_2_t3464691576 * L_4 = ((VideoPlayer_t947858561_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlayer_t947858561_il2cpp_TypeInfo_var))->get_players_3();
		intptr_t L_5 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_4);
		Dictionary_2_Add_m2851123190(L_4, L_5, __this, /*hidden argument*/Dictionary_2_Add_m2851123190_RuntimeMethod_var);
		RuntimeObject* L_6 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = ((Base_t1500127977 *)__this)->get_Obj_0();
		CallBack_t3619306023 * L_8 = __this->get__callBack_5();
		NullCheck(L_6);
		intptr_t L_9 = InterfaceFuncInvoker2< intptr_t, intptr_t, CallBack_t3619306023 * >::Invoke(139 /* System.IntPtr EasyAR.IEngineNative::Create_VideoPlayerCallBackUnity(System.IntPtr,EasyAR.VideoPlayer/CallBack) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		__this->set__objCallback_4(L_9);
		VideoPlayer_set_IsMultithreadCallback_m4167417734(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer__cctor_m3208687550 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer__cctor_m3208687550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3464691576 * L_0 = (Dictionary_2_t3464691576 *)il2cpp_codegen_object_new(Dictionary_2_t3464691576_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4125734752(L_0, /*hidden argument*/Dictionary_2__ctor_m4125734752_RuntimeMethod_var);
		((VideoPlayer_t947858561_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlayer_t947858561_il2cpp_TypeInfo_var))->set_players_3(L_0);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::add_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_add_PlayerStatusChanged_m1585868895 (VideoPlayer_t947858561 * __this, Action_2_t3847396958 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_PlayerStatusChanged_m1585868895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t3847396958 * L_0 = __this->get_PlayerStatusChanged_7();
		Action_2_t3847396958 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_PlayerStatusChanged_7(((Action_2_t3847396958 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t3847396958_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayer::remove_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_remove_PlayerStatusChanged_m2224334909 (VideoPlayer_t947858561 * __this, Action_2_t3847396958 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_PlayerStatusChanged_m2224334909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t3847396958 * L_0 = __this->get_PlayerStatusChanged_7();
		Action_2_t3847396958 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_PlayerStatusChanged_7(((Action_2_t3847396958 *)CastclassSealed((RuntimeObject*)L_2, Action_2_t3847396958_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayer::set_IsMultithreadCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_IsMultithreadCallback_m4167417734 (VideoPlayer_t947858561 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_IsMultithreadCallback_m4167417734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = ___value0;
		__this->set__isMultithreadCallback_6(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = __this->get__objCallback_4();
		bool L_4 = __this->get__isMultithreadCallback_6();
		NullCheck(L_2);
		InterfaceActionInvoker2< intptr_t, bool >::Invoke(141 /* System.Void EasyAR.IEngineNative::VideoPlayer_setCallBackThread(System.IntPtr,System.Boolean) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Boolean EasyAR.VideoPlayer::get_IsMultithreadCallback()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_get_IsMultithreadCallback_m2235890946 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isMultithreadCallback_6();
		return L_0;
	}
}
// System.Single EasyAR.VideoPlayer::get_Volume()
extern "C" IL2CPP_METHOD_ATTR float VideoPlayer_get_Volume_m2467447207 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_get_Volume_m2467447207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		float L_3 = InterfaceFuncInvoker1< float, intptr_t >::Invoke(137 /* System.Single EasyAR.IEngineNative::VideoPlayer_volume(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.VideoPlayer::set_Volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_set_Volume_m673762616 (VideoPlayer_t947858561 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_set_Volume_m673762616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		float L_3 = ___value0;
		NullCheck(L_1);
		InterfaceFuncInvoker2< bool, intptr_t, float >::Invoke(138 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_setVolume(System.IntPtr,System.Single) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Dispose_m399051954 (VideoPlayer_t947858561 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Dispose_m399051954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoPlayer_t947858561_il2cpp_TypeInfo_var);
		Dictionary_2_t3464691576 * L_2 = ((VideoPlayer_t947858561_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlayer_t947858561_il2cpp_TypeInfo_var))->get_players_3();
		intptr_t L_3 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_2);
		Dictionary_2_Remove_m671122479(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m671122479_RuntimeMethod_var);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_5 = __this->get__objCallback_4();
		NullCheck(L_4);
		InterfaceActionInvoker1< intptr_t >::Invoke(142 /* System.Void EasyAR.IEngineNative::Destory_VideoPlayerCallBackUnity(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_7 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_6);
		InterfaceActionInvoker1< intptr_t >::Invoke(123 /* System.Void EasyAR.IEngineNative::Destory_VideoPlayer(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_6, L_7);
		__this->set__objCallback_4((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Obj_0((intptr_t)(0));
		((Base_t1500127977 *)__this)->set_Disposed_1((bool)1);
		return;
	}
}
// System.Boolean EasyAR.VideoPlayer::CheckCallback()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_CheckCallback_m2214265936 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_CheckCallback_m2214265936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = __this->get__objCallback_4();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(140 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_checkCallBack(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean EasyAR.VideoPlayer::IsRenderTextureAvailable()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_IsRenderTextureAvailable_m3280631960 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_IsRenderTextureAvailable_m3280631960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(131 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_isRenderTextureAvailable(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.VideoPlayer::UpdateFrame()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_UpdateFrame_m2944425153 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_UpdateFrame_m2944425153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(132 /* System.Void EasyAR.IEngineNative::VideoPlayer_updateFrame(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		GL_InvalidateState_m1525920580(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAR.VideoPlayer::Play()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Play_m2073570464 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Play_m2073570464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(128 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_play(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Boolean EasyAR.VideoPlayer::Pause()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Pause_m2964156643 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Pause_m2964156643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(130 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_pause(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Boolean EasyAR.VideoPlayer::Stop()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Stop_m997760821 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Stop_m997760821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		bool L_3 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(129 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_stop(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.VideoPlayer::Open(System.String,EasyAR.StorageType)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Open_m3943144406 (VideoPlayer_t947858561 * __this, String_t* ___url0, int32_t ___storageType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Open_m3943144406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		String_t* L_3 = ___url0;
		int32_t L_4 = ___storageType1;
		intptr_t L_5 = __this->get__objCallback_4();
		NullCheck(L_1);
		InterfaceActionInvoker4< intptr_t, String_t*, int32_t, intptr_t >::Invoke(126 /* System.Void EasyAR.IEngineNative::VideoPlayer_open(System.IntPtr,System.String,System.Int32,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
		GL_InvalidateState_m1525920580(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::Close()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_Close_m3121058624 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Close_m3121058624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		InterfaceActionInvoker1< intptr_t >::Invoke(127 /* System.Void EasyAR.IEngineNative::VideoPlayer_close(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
// System.Boolean EasyAR.VideoPlayer::Seek(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayer_Seek_m206908203 (VideoPlayer_t947858561 * __this, int32_t ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Seek_m206908203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___pos0;
		NullCheck(L_1);
		bool L_4 = InterfaceFuncInvoker2< bool, intptr_t, int32_t >::Invoke(135 /* System.Boolean EasyAR.IEngineNative::VideoPlayer_seek(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 EasyAR.VideoPlayer::CurrentPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_CurrentPosition_m1909684705 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_CurrentPosition_m1909684705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(134 /* System.Int32 EasyAR.IEngineNative::VideoPlayer_currentPosition(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Int32 EasyAR.VideoPlayer::Width()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Width_m1257430158 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Width_m1257430158_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = ((Base_t1500127977 *)__this)->get_Obj_0();
		Int32U5BU5D_t385246372* L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< intptr_t, Int32U5BU5D_t385246372* >::Invoke(136 /* System.Void EasyAR.IEngineNative::VideoPlayer_size(System.IntPtr,System.Int32[]) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		Int32U5BU5D_t385246372* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Int32 EasyAR.VideoPlayer::Height()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Height_m1210268827 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Height_m1210268827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Int32U5BU5D_t385246372* L_1 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_3 = ((Base_t1500127977 *)__this)->get_Obj_0();
		Int32U5BU5D_t385246372* L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< intptr_t, Int32U5BU5D_t385246372* >::Invoke(136 /* System.Void EasyAR.IEngineNative::VideoPlayer_size(System.IntPtr,System.Int32[]) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		Int32U5BU5D_t385246372* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Int32 EasyAR.VideoPlayer::Duration()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayer_Duration_m2821168845 (VideoPlayer_t947858561 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_Duration_m2821168845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		NullCheck(L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(133 /* System.Int32 EasyAR.IEngineNative::VideoPlayer_duration(System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void EasyAR.VideoPlayer::SetRenderTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetRenderTexture_m3415802502 (VideoPlayer_t947858561 * __this, intptr_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_SetRenderTexture_m3415802502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		intptr_t L_3 = ___id0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(124 /* System.Void EasyAR.IEngineNative::VideoPlayer_setRenderTexture(System.IntPtr,System.IntPtr) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::SetVideoType(EasyAR.VideoPlayer/VideoType)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_SetVideoType_m2255920191 (VideoPlayer_t947858561 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_SetVideoType_m2255920191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Base_t1500127977 *)__this)->get_Disposed_1();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Engine_t1017580842_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Engine_get_Instance_m3110472347(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = ((Base_t1500127977 *)__this)->get_Obj_0();
		int32_t L_3 = ___type0;
		NullCheck(L_1);
		InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(125 /* System.Void EasyAR.IEngineNative::VideoPlayer_setVideoType(System.IntPtr,System.Int32) */, IEngineNative_t958141741_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return;
	}
}
// System.Void EasyAR.VideoPlayer::OnStatusChange(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayer_OnStatusChange_m3051132405 (RuntimeObject * __this /* static, unused */, intptr_t ___obj0, int32_t ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_OnStatusChange_m3051132405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VideoPlayer_t947858561 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoPlayer_t947858561_il2cpp_TypeInfo_var);
		Dictionary_2_t3464691576 * L_0 = ((VideoPlayer_t947858561_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlayer_t947858561_il2cpp_TypeInfo_var))->get_players_3();
		intptr_t L_1 = ___obj0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m1636683790(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m1636683790_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(VideoPlayer_t947858561_il2cpp_TypeInfo_var);
		Dictionary_2_t3464691576 * L_3 = ((VideoPlayer_t947858561_StaticFields*)il2cpp_codegen_static_fields_for(VideoPlayer_t947858561_il2cpp_TypeInfo_var))->get_players_3();
		intptr_t L_4 = ___obj0;
		NullCheck(L_3);
		VideoPlayer_t947858561 * L_5 = Dictionary_2_get_Item_m706897564(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m706897564_RuntimeMethod_var);
		V_0 = L_5;
		VideoPlayer_t947858561 * L_6 = V_0;
		NullCheck(L_6);
		Action_2_t3847396958 * L_7 = L_6->get_PlayerStatusChanged_7();
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		VideoPlayer_t947858561 * L_8 = V_0;
		NullCheck(L_8);
		Action_2_t3847396958 * L_9 = L_8->get_PlayerStatusChanged_7();
		VideoPlayer_t947858561 * L_10 = V_0;
		int32_t L_11 = ___status1;
		NullCheck(L_9);
		Action_2_Invoke_m992855389(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m992855389_RuntimeMethod_var);
	}

IL_0035:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_CallBack_t3619306023 (CallBack_t3619306023 * __this, intptr_t ___obj0, int32_t ___status1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___obj0, ___status1);

}
// System.Void EasyAR.VideoPlayer/CallBack::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CallBack__ctor_m749259251 (CallBack_t3619306023 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyAR.VideoPlayer/CallBack::Invoke(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CallBack_Invoke_m3809082387 (CallBack_t3619306023 * __this, intptr_t ___obj0, int32_t ___status1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CallBack_Invoke_m3809082387((CallBack_t3619306023 *)__this->get_prev_9(), ___obj0, ___status1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___obj0, ___status1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___obj0, ___status1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___status1);
					else
						GenericVirtActionInvoker2< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___status1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___status1);
					else
						VirtActionInvoker2< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___status1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___status1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult EasyAR.VideoPlayer/CallBack::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CallBack_BeginInvoke_m1949171959 (CallBack_t3619306023 * __this, intptr_t ___obj0, int32_t ___status1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallBack_BeginInvoke_m1949171959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___obj0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___status1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void EasyAR.VideoPlayer/CallBack::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void CallBack_EndInvoke_m2021267891 (CallBack_t3619306023 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyAR.VideoPlayerBaseBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour__ctor_m3711081083 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		__this->set_VideoScalePlane_8(2);
		__this->set_VideoScaleFactorBase_9((1.0f));
		__this->set_DisplayTextMessage_13((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReadyEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_add_VideoReadyEvent_m2533316667 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_add_VideoReadyEvent_m2533316667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoReadyEvent_20();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoReadyEvent_20(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReadyEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_remove_VideoReadyEvent_m83123560 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_remove_VideoReadyEvent_m83123560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoReadyEvent_20();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoReadyEvent_20(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReachEndEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_add_VideoReachEndEvent_m3640431290 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_add_VideoReachEndEvent_m3640431290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoReachEndEvent_21();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoReachEndEvent_21(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReachEndEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_remove_VideoReachEndEvent_m1970755214 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_remove_VideoReachEndEvent_m1970755214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoReachEndEvent_21();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoReachEndEvent_21(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoErrorEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_add_VideoErrorEvent_m2520727510 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_add_VideoErrorEvent_m2520727510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoErrorEvent_22();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoErrorEvent_22(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoErrorEvent(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_remove_VideoErrorEvent_m3436853483 (VideoPlayerBaseBehaviour_t4040254494 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_remove_VideoErrorEvent_m3436853483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_t1348719766 * L_0 = __this->get_VideoErrorEvent_22();
		EventHandler_t1348719766 * L_1 = ___value0;
		Delegate_t1188392813 * L_2 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_VideoErrorEvent_22(((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_2, EventHandler_t1348719766_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Single EasyAR.VideoPlayerBaseBehaviour::get_Volume()
extern "C" IL2CPP_METHOD_ATTR float VideoPlayerBaseBehaviour_get_Volume_m1311759247 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		NullCheck(L_0);
		float L_1 = VideoPlayer_get_Volume_m2467447207(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::set_Volume(System.Single)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_set_Volume_m2180990193 (VideoPlayerBaseBehaviour_t4040254494 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		float L_1 = ___value0;
		NullCheck(L_0);
		VideoPlayer_set_Volume_m673762616(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Awake()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Awake_m1033491724 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_Awake_m1033491724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextMesh_t1536577757 * V_0 = NULL;
	Font_t1956802104 * V_1 = NULL;
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_targetSize_16(L_0);
		ImageTargetBaseBehaviour_t1373064375 * L_1 = Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472(__this, /*hidden argument*/Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472_RuntimeMethod_var);
		__this->set_targetBehaviour_17(L_1);
		__this->set_needScale_19((bool)1);
		__this->set_isPlaying_18((bool)0);
		Texture2D_t3840446185 * L_2 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_2, 0, 0, 4, (bool)0, /*hidden argument*/NULL);
		__this->set_videoTex_15(L_2);
		Texture2D_t3840446185 * L_3 = __this->get_videoTex_15();
		NullCheck(L_3);
		Texture_set_filterMode_m3078068058(L_3, 1, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = __this->get_videoTex_15();
		NullCheck(L_4);
		Texture_set_wrapMode_m587872754(L_4, 1, /*hidden argument*/NULL);
		int32_t L_5 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)11))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_00e3;
		}
	}

IL_006d:
	{
		Renderer_t2627027031 * L_7 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t340375123 * L_8 = Renderer_get_material_m4171603682(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_mainTexture_m544811714(L_8, (Texture_t3661962703 *)NULL, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_9 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_9);
		Material_t340375123 * L_10 = Renderer_get_material_m4171603682(L_9, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_11 = __this->get_videoTex_15();
		NullCheck(L_10);
		Material_set_mainTexture_m544811714(L_10, L_11, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_12 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t340375123 * L_13 = Renderer_get_material_m4171603682(L_12, /*hidden argument*/NULL);
		Vector2_t2156229523  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3970636864((&L_14), (-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_set_mainTextureScale_m2067513003(L_13, L_14, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_15 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t340375123 * L_16 = Renderer_get_material_m4171603682(L_15, /*hidden argument*/NULL);
		Vector2_t2156229523  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m3970636864((&L_17), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Material_set_mainTextureOffset_m2452486895(L_16, L_17, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_18 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_18);
		Renderer_set_enabled_m1727253150(L_18, (bool)0, /*hidden argument*/NULL);
		goto IL_01c9;
	}

IL_00e3:
	{
		bool L_19 = __this->get_DisplayTextMessage_13();
		if (!L_19)
		{
			goto IL_01c9;
		}
	}
	{
		GameObject_t1113636619 * L_20 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		TextMesh_t1536577757 * L_21 = GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299(L_20, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0113;
		}
	}
	{
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		TextMesh_t1536577757 * L_24 = GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299(L_23, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t1536577757_m2762213299_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_0113:
	{
		GameObject_t1113636619 * L_25 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		MeshFilter_t3523625662 * L_26 = GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570(L_25, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0138;
		}
	}
	{
		GameObject_t1113636619 * L_28 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		MeshFilter_t3523625662 * L_29 = GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570(L_28, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t3523625662_m2235187570_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
	}

IL_0138:
	{
		GameObject_t1113636619 * L_30 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		TextMesh_t1536577757 * L_31 = GameObject_AddComponent_TisTextMesh_t1536577757_m1864569290(L_30, /*hidden argument*/GameObject_AddComponent_TisTextMesh_t1536577757_m1864569290_RuntimeMethod_var);
		V_0 = L_31;
		TextMesh_t1536577757 * L_32 = V_0;
		NullCheck(L_32);
		TextMesh_set_text_m446189179(L_32, _stringLiteral3999243638, /*hidden argument*/NULL);
		Font_t1956802104 * L_33 = Resources_GetBuiltinResource_TisFont_t1956802104_m881306287(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m881306287_RuntimeMethod_var);
		V_1 = L_33;
		TextMesh_t1536577757 * L_34 = V_0;
		Font_t1956802104 * L_35 = V_1;
		NullCheck(L_34);
		TextMesh_set_font_m4234894873(L_34, L_35, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_36 = V_0;
		NullCheck(L_36);
		Renderer_t2627027031 * L_37 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(L_36, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		Font_t1956802104 * L_38 = V_1;
		NullCheck(L_38);
		Material_t340375123 * L_39 = Font_get_material_m1471867149(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Renderer_set_sharedMaterial_m2374163090(L_37, L_39, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_40 = V_0;
		NullCheck(L_40);
		TextMesh_set_characterSize_m3288351180(L_40, (0.3f), /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_41 = V_0;
		NullCheck(L_41);
		TextMesh_set_fontStyle_m1906191495(L_41, 1, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_42 = V_0;
		Color_t2555686324  L_43;
		memset(&L_43, 0, sizeof(L_43));
		Color__ctor_m286683560((&L_43), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		TextMesh_set_color_m1285272663(L_42, L_43, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_44 = V_0;
		NullCheck(L_44);
		TextMesh_set_alignment_m2348078372(L_44, 1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_45 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_46 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_47 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, (90.0f), L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localRotation_m19445462(L_45, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral3415624917, /*hidden argument*/NULL);
	}

IL_01c9:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Init()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Init_m137519352 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_Init_m137519352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		VideoPlayer_t947858561 * L_1 = (VideoPlayer_t947858561 *)il2cpp_codegen_object_new(VideoPlayer_t947858561_il2cpp_TypeInfo_var);
		VideoPlayer__ctor_m2245464495(L_1, /*hidden argument*/NULL);
		__this->set_VideoPlayer_14(L_1);
		VideoPlayer_t947858561 * L_2 = __this->get_VideoPlayer_14();
		intptr_t L_3 = (intptr_t)VideoPlayerBaseBehaviour_OnStateChange_m3091572615_RuntimeMethod_var;
		Action_2_t3847396958 * L_4 = (Action_2_t3847396958 *)il2cpp_codegen_object_new(Action_2_t3847396958_il2cpp_TypeInfo_var);
		Action_2__ctor_m3140343466(L_4, __this, L_3, /*hidden argument*/Action_2__ctor_m3140343466_RuntimeMethod_var);
		NullCheck(L_2);
		VideoPlayer_add_PlayerStatusChanged_m1585868895(L_2, L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Start()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Start_m3207500223 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayerBaseBehaviour_Init_m137519352(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_OpenWhenStart_12();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VideoPlayerBaseBehaviour_Open_m2412370566(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_OnDestroy_m2270683404 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_OnDestroy_m2270683404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayerBaseBehaviour_Close_m3458612596(__this, /*hidden argument*/NULL);
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		Base_Dispose_m2387565171(L_1, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Texture2D_t3840446185 * L_2 = __this->get_videoTex_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Texture2D_t3840446185 * L_4 = __this->get_videoTex_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_videoTex_15((Texture2D_t3840446185 *)NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Update_m3714707289 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_Update_m3714707289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		bool L_2 = VideoPlayer_get_IsMultithreadCallback_m2235890946(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		VideoPlayer_t947858561 * L_3 = __this->get_VideoPlayer_14();
		NullCheck(L_3);
		bool L_4 = L_3->get_IsCheckNeeded_2();
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		VideoPlayer_t947858561 * L_5 = __this->get_VideoPlayer_14();
		NullCheck(L_5);
		VideoPlayer_CheckCallback_m2214265936(L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		bool L_6 = __this->get_isPlaying_18();
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		VideoPlayer_t947858561 * L_7 = __this->get_VideoPlayer_14();
		NullCheck(L_7);
		VideoPlayer_UpdateFrame_m2944425153(L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_8 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)11))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_9 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)8))))
		{
			goto IL_007b;
		}
	}

IL_0065:
	{
		Renderer_t2627027031 * L_10 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		VideoPlayer_t947858561 * L_11 = __this->get_VideoPlayer_14();
		NullCheck(L_11);
		bool L_12 = VideoPlayer_IsRenderTextureAvailable_m3280631960(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Renderer_set_enabled_m1727253150(L_10, L_12, /*hidden argument*/NULL);
	}

IL_007b:
	{
		ImageTargetBaseBehaviour_t1373064375 * L_13 = __this->get_targetBehaviour_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_13, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00d9;
		}
	}
	{
		ImageTargetBaseBehaviour_t1373064375 * L_15 = __this->get_targetBehaviour_17();
		NullCheck(L_15);
		ImageTarget_t46103797 * L_16 = L_15->get_Target_15();
		if (!L_16)
		{
			goto IL_00d9;
		}
	}
	{
		ImageTargetBaseBehaviour_t1373064375 * L_17 = __this->get_targetBehaviour_17();
		NullCheck(L_17);
		ImageTarget_t46103797 * L_18 = L_17->get_Target_15();
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = ImageTarget_get_Size_m2913433341(L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20 = __this->get_targetSize_16();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_21 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00d9;
		}
	}
	{
		ImageTargetBaseBehaviour_t1373064375 * L_22 = __this->get_targetBehaviour_17();
		NullCheck(L_22);
		ImageTarget_t46103797 * L_23 = L_22->get_Target_15();
		NullCheck(L_23);
		Vector2_t2156229523  L_24 = ImageTarget_get_Size_m2913433341(L_23, /*hidden argument*/NULL);
		__this->set_targetSize_16(L_24);
		__this->set_needScale_19((bool)1);
	}

IL_00d9:
	{
		bool L_25 = __this->get_needScale_19();
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_26 = VideoPlayerBaseBehaviour_AutoScale_m1412679298(__this, /*hidden argument*/NULL);
		__this->set_needScale_19((bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0));
	}

IL_00f3:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_OnEnable_m28786469 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get_isPlaying_18();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		VideoPlayer_t947858561 * L_2 = __this->get_VideoPlayer_14();
		NullCheck(L_2);
		VideoPlayer_Play_m2073570464(L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_OnDisable_m732635752 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get_isPlaying_18();
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		VideoPlayer_t947858561 * L_2 = __this->get_VideoPlayer_14();
		NullCheck(L_2);
		VideoPlayer_Pause_m2964156643(L_2, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Open()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Open_m2412370566 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_Open_m2412370566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayerBaseBehaviour_Init_m137519352(__this, /*hidden argument*/NULL);
		ImageTargetBaseBehaviour_t1373064375 * L_0 = __this->get_targetBehaviour_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ImageTargetBaseBehaviour_t1373064375 * L_2 = Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472(__this, /*hidden argument*/Component_GetComponentInParent_TisImageTargetBaseBehaviour_t1373064375_m4219548472_RuntimeMethod_var);
		__this->set_targetBehaviour_17(L_2);
	}

IL_0023:
	{
		__this->set_isPlaying_18((bool)0);
		__this->set_needScale_19((bool)1);
		VideoPlayer_t947858561 * L_3 = __this->get_VideoPlayer_14();
		int32_t L_4 = __this->get_Type_6();
		NullCheck(L_3);
		VideoPlayer_SetVideoType_m2255920191(L_3, L_4, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_5 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_5);
		Material_t340375123 * L_6 = Renderer_get_material_m4171603682(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Texture_t3661962703 * L_7 = Material_get_mainTexture_m692510677(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		VideoPlayer_t947858561 * L_9 = __this->get_VideoPlayer_14();
		Renderer_t2627027031 * L_10 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_10);
		Material_t340375123 * L_11 = Renderer_get_material_m4171603682(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Texture_t3661962703 * L_12 = Material_get_mainTexture_m692510677(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		intptr_t L_13 = Texture_GetNativeTexturePtr_m4054748062(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		VideoPlayer_SetRenderTexture_m3415802502(L_9, L_13, /*hidden argument*/NULL);
	}

IL_007c:
	{
		VideoPlayer_t947858561 * L_14 = __this->get_VideoPlayer_14();
		String_t* L_15 = __this->get_Path_4();
		int32_t L_16 = __this->get_Storage_5();
		NullCheck(L_14);
		VideoPlayer_Open_m3943144406(L_14, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::Close()
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_Close_m3458612596 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_isPlaying_18((bool)0);
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		VideoPlayer_Close_m3121058624(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Play()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Play_m951985641 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		bool L_2 = VideoPlayer_Play_m2073570464(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		__this->set_isPlaying_18((bool)1);
	}

IL_0026:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Pause()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Pause_m2983591931 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		bool L_2 = VideoPlayer_Pause_m2964156643(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		__this->set_isPlaying_18((bool)0);
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Stop()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Stop_m1448488904 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		bool L_2 = VideoPlayer_Stop_m997760821(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		__this->set_isPlaying_18((bool)0);
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Seek(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_Seek_m3203380929 (VideoPlayerBaseBehaviour_t4040254494 * __this, int32_t ___position0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		int32_t L_2 = ___position0;
		NullCheck(L_1);
		bool L_3 = VideoPlayer_Seek_m206908203(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::CurPosition()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_CurPosition_m3567214364 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		int32_t L_2 = VideoPlayer_CurrentPosition_m1909684705(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Width()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_Width_m1224601750 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		int32_t L_2 = VideoPlayer_Width_m1257430158(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Height()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_Height_m3117882203 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		int32_t L_2 = VideoPlayer_Height_m1210268827(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Duration()
extern "C" IL2CPP_METHOD_ATTR int32_t VideoPlayerBaseBehaviour_Duration_m2293282938 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_t947858561 * L_0 = __this->get_VideoPlayer_14();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		VideoPlayer_t947858561 * L_1 = __this->get_VideoPlayer_14();
		NullCheck(L_1);
		int32_t L_2 = VideoPlayer_Duration_m2821168845(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnStateChange(EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus)
extern "C" IL2CPP_METHOD_ATTR void VideoPlayerBaseBehaviour_OnStateChange_m3091572615 (VideoPlayerBaseBehaviour_t4040254494 * __this, VideoPlayer_t947858561 * ___player0, int32_t ___state1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___state1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0088;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_00a5;
	}

IL_001b:
	{
		bool L_2 = __this->get_EnableAutoPlay_10();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		VideoPlayerBaseBehaviour_Play_m951985641(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		EventHandler_t1348719766 * L_3 = __this->get_VideoReadyEvent_20();
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_t1348719766 * L_4 = __this->get_VideoReadyEvent_20();
		NullCheck(L_4);
		EventHandler_Invoke_m2047579917(L_4, __this, (EventArgs_t3591816995 *)NULL, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00aa;
	}

IL_004a:
	{
		__this->set_isPlaying_18((bool)0);
		bool L_5 = __this->get_EnableLoop_11();
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		VideoPlayerBaseBehaviour_Seek_m3203380929(__this, 0, /*hidden argument*/NULL);
		VideoPlayerBaseBehaviour_Play_m951985641(__this, /*hidden argument*/NULL);
	}

IL_006b:
	{
		EventHandler_t1348719766 * L_6 = __this->get_VideoReachEndEvent_21();
		if (!L_6)
		{
			goto IL_0083;
		}
	}
	{
		EventHandler_t1348719766 * L_7 = __this->get_VideoReachEndEvent_21();
		NullCheck(L_7);
		EventHandler_Invoke_m2047579917(L_7, __this, (EventArgs_t3591816995 *)NULL, /*hidden argument*/NULL);
	}

IL_0083:
	{
		goto IL_00aa;
	}

IL_0088:
	{
		EventHandler_t1348719766 * L_8 = __this->get_VideoErrorEvent_22();
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		EventHandler_t1348719766 * L_9 = __this->get_VideoErrorEvent_22();
		NullCheck(L_9);
		EventHandler_Invoke_m2047579917(L_9, __this, (EventArgs_t3591816995 *)NULL, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		goto IL_00aa;
	}

IL_00a5:
	{
		goto IL_00aa;
	}

IL_00aa:
	{
		return;
	}
}
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::AutoScale()
extern "C" IL2CPP_METHOD_ATTR bool VideoPlayerBaseBehaviour_AutoScale_m1412679298 (VideoPlayerBaseBehaviour_t4040254494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayerBaseBehaviour_AutoScale_m1412679298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	{
		int32_t L_0 = __this->get_VideoScaleMode_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		Vector2_t2156229523 * L_1 = __this->get_address_of_targetSize_16();
		float L_2 = L_1->get_x_0();
		if ((((float)L_2) <= ((float)(0.0f))))
		{
			goto IL_0037;
		}
	}
	{
		Vector2_t2156229523 * L_3 = __this->get_address_of_targetSize_16();
		float L_4 = L_3->get_y_1();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		int32_t L_5 = VideoPlayerBaseBehaviour_Width_m1224601750(__this, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_5)));
		int32_t L_6 = VideoPlayerBaseBehaviour_Height_m3117882203(__this, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_6)));
		float L_7 = V_0;
		if ((((float)L_7) <= ((float)(0.0f))))
		{
			goto IL_005f;
		}
	}
	{
		float L_8 = V_1;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}

IL_005f:
	{
		return (bool)0;
	}

IL_0061:
	{
		int32_t L_9 = __this->get_Type_6();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		float L_10 = V_0;
		V_0 = ((float)((float)L_10/(float)(2.0f)));
	}

IL_0075:
	{
		int32_t L_11 = __this->get_Type_6();
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_0089;
		}
	}
	{
		float L_12 = V_1;
		V_1 = ((float)((float)L_12/(float)(2.0f)));
	}

IL_0089:
	{
		V_2 = (0.0f);
		V_3 = (0.0f);
		int32_t L_13 = __this->get_VideoScaleMode_7();
		V_10 = L_13;
		int32_t L_14 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2)))
		{
			case 0:
			{
				goto IL_00b7;
			}
			case 1:
			{
				goto IL_00b7;
			}
			case 2:
			{
				goto IL_00b7;
			}
		}
	}
	{
		goto IL_00fa;
	}

IL_00b7:
	{
		Renderer_t2627027031 * L_15 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t340375123 * L_16 = Renderer_get_material_m4171603682(L_15, /*hidden argument*/NULL);
		Vector2_t2156229523  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector2__ctor_m3970636864((&L_17), (-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Material_set_mainTextureScale_m2067513003(L_16, L_17, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_18 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_18);
		Material_t340375123 * L_19 = Renderer_get_material_m4171603682(L_18, /*hidden argument*/NULL);
		Vector2_t2156229523  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2__ctor_m3970636864((&L_20), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Material_set_mainTextureOffset_m2452486895(L_19, L_20, /*hidden argument*/NULL);
		goto IL_00ff;
	}

IL_00fa:
	{
		goto IL_00ff;
	}

IL_00ff:
	{
		int32_t L_21 = __this->get_VideoScaleMode_7();
		V_10 = L_21;
		int32_t L_22 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)))
		{
			case 0:
			{
				goto IL_01bc;
			}
			case 1:
			{
				goto IL_0125;
			}
			case 2:
			{
				goto IL_0180;
			}
			case 3:
			{
				goto IL_0192;
			}
		}
	}
	{
		goto IL_02d4;
	}

IL_0125:
	{
		Vector2_t2156229523 * L_23 = __this->get_address_of_targetSize_16();
		float L_24 = L_23->get_x_0();
		Vector2_t2156229523 * L_25 = __this->get_address_of_targetSize_16();
		float L_26 = L_25->get_y_1();
		float L_27 = V_0;
		float L_28 = V_1;
		if ((!(((float)((float)((float)L_24/(float)L_26))) >= ((float)((float)((float)L_27/(float)L_28))))))
		{
			goto IL_016e;
		}
	}
	{
		Vector2_t2156229523 * L_29 = __this->get_address_of_targetSize_16();
		float L_30 = L_29->get_y_1();
		Vector2_t2156229523 * L_31 = __this->get_address_of_targetSize_16();
		float L_32 = L_31->get_x_0();
		float L_33 = __this->get_VideoScaleFactorBase_9();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_30/(float)L_32)), (float)L_33));
		float L_34 = V_0;
		float L_35 = V_1;
		float L_36 = V_3;
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_34/(float)L_35)), (float)L_36));
		goto IL_017b;
	}

IL_016e:
	{
		float L_37 = __this->get_VideoScaleFactorBase_9();
		V_2 = L_37;
		float L_38 = V_1;
		float L_39 = V_0;
		float L_40 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40));
	}

IL_017b:
	{
		goto IL_02d9;
	}

IL_0180:
	{
		float L_41 = __this->get_VideoScaleFactorBase_9();
		V_2 = L_41;
		float L_42 = V_1;
		float L_43 = V_0;
		float L_44 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44));
		goto IL_02d9;
	}

IL_0192:
	{
		Vector2_t2156229523 * L_45 = __this->get_address_of_targetSize_16();
		float L_46 = L_45->get_y_1();
		Vector2_t2156229523 * L_47 = __this->get_address_of_targetSize_16();
		float L_48 = L_47->get_x_0();
		float L_49 = __this->get_VideoScaleFactorBase_9();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_46/(float)L_48)), (float)L_49));
		float L_50 = V_0;
		float L_51 = V_1;
		float L_52 = V_3;
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_50/(float)L_51)), (float)L_52));
		goto IL_02d9;
	}

IL_01bc:
	{
		float L_53 = __this->get_VideoScaleFactorBase_9();
		V_2 = L_53;
		Vector2_t2156229523 * L_54 = __this->get_address_of_targetSize_16();
		float L_55 = L_54->get_y_1();
		Vector2_t2156229523 * L_56 = __this->get_address_of_targetSize_16();
		float L_57 = L_56->get_x_0();
		float L_58 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_55/(float)L_57)), (float)L_58));
		Vector2_t2156229523 * L_59 = __this->get_address_of_targetSize_16();
		float L_60 = L_59->get_x_0();
		Vector2_t2156229523 * L_61 = __this->get_address_of_targetSize_16();
		float L_62 = L_61->get_y_1();
		float L_63 = V_0;
		float L_64 = V_1;
		if ((!(((float)((float)((float)L_60/(float)L_62))) >= ((float)((float)((float)L_63/(float)L_64))))))
		{
			goto IL_0266;
		}
	}
	{
		Vector2_t2156229523 * L_65 = __this->get_address_of_targetSize_16();
		float L_66 = L_65->get_y_1();
		Vector2_t2156229523 * L_67 = __this->get_address_of_targetSize_16();
		float L_68 = L_67->get_x_0();
		float L_69 = V_1;
		float L_70 = V_0;
		V_4 = ((float)((float)((float)((float)L_66/(float)L_68))/(float)((float)((float)L_69/(float)L_70))));
		float L_71 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_71)), (float)(0.5f)));
		Renderer_t2627027031 * L_72 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_72);
		Material_t340375123 * L_73 = Renderer_get_material_m4171603682(L_72, /*hidden argument*/NULL);
		float L_74 = V_4;
		Vector2_t2156229523  L_75;
		memset(&L_75, 0, sizeof(L_75));
		Vector2__ctor_m3970636864((&L_75), (-1.0f), L_74, /*hidden argument*/NULL);
		NullCheck(L_73);
		Material_set_mainTextureScale_m2067513003(L_73, L_75, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_76 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_76);
		Material_t340375123 * L_77 = Renderer_get_material_m4171603682(L_76, /*hidden argument*/NULL);
		float L_78 = V_5;
		Vector2_t2156229523  L_79;
		memset(&L_79, 0, sizeof(L_79));
		Vector2__ctor_m3970636864((&L_79), (1.0f), L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		Material_set_mainTextureOffset_m2452486895(L_77, L_79, /*hidden argument*/NULL);
		goto IL_02cf;
	}

IL_0266:
	{
		Vector2_t2156229523 * L_80 = __this->get_address_of_targetSize_16();
		float L_81 = L_80->get_x_0();
		Vector2_t2156229523 * L_82 = __this->get_address_of_targetSize_16();
		float L_83 = L_82->get_y_1();
		float L_84 = V_0;
		float L_85 = V_1;
		V_6 = ((float)((float)((float)((float)L_81/(float)L_83))/(float)((float)((float)L_84/(float)L_85))));
		float L_86 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_86)), (float)(0.5f)));
		Renderer_t2627027031 * L_87 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_87);
		Material_t340375123 * L_88 = Renderer_get_material_m4171603682(L_87, /*hidden argument*/NULL);
		float L_89 = V_6;
		Vector2_t2156229523  L_90;
		memset(&L_90, 0, sizeof(L_90));
		Vector2__ctor_m3970636864((&L_90), ((-L_89)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		Material_set_mainTextureScale_m2067513003(L_88, L_90, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_91 = Component_GetComponent_TisRenderer_t2627027031_m4142119445(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m4142119445_RuntimeMethod_var);
		NullCheck(L_91);
		Material_t340375123 * L_92 = Renderer_get_material_m4171603682(L_91, /*hidden argument*/NULL);
		float L_93 = V_6;
		float L_94 = V_7;
		Vector2_t2156229523  L_95;
		memset(&L_95, 0, sizeof(L_95));
		Vector2__ctor_m3970636864((&L_95), ((float)il2cpp_codegen_add((float)L_93, (float)L_94)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		Material_set_mainTextureOffset_m2452486895(L_92, L_95, /*hidden argument*/NULL);
	}

IL_02cf:
	{
		goto IL_02d9;
	}

IL_02d4:
	{
		goto IL_02d9;
	}

IL_02d9:
	{
		Vector2_t2156229523 * L_96 = __this->get_address_of_targetSize_16();
		float L_97 = L_96->get_x_0();
		Vector2_t2156229523 * L_98 = __this->get_address_of_targetSize_16();
		float L_99 = L_98->get_y_1();
		if ((!(((float)L_97) < ((float)L_99))))
		{
			goto IL_0328;
		}
	}
	{
		float L_100 = V_2;
		Vector2_t2156229523 * L_101 = __this->get_address_of_targetSize_16();
		float L_102 = L_101->get_x_0();
		Vector2_t2156229523 * L_103 = __this->get_address_of_targetSize_16();
		float L_104 = L_103->get_y_1();
		V_2 = ((float)il2cpp_codegen_multiply((float)L_100, (float)((float)((float)L_102/(float)L_104))));
		float L_105 = V_3;
		Vector2_t2156229523 * L_106 = __this->get_address_of_targetSize_16();
		float L_107 = L_106->get_x_0();
		Vector2_t2156229523 * L_108 = __this->get_address_of_targetSize_16();
		float L_109 = L_108->get_y_1();
		V_3 = ((float)il2cpp_codegen_multiply((float)L_105, (float)((float)((float)L_107/(float)L_109))));
	}

IL_0328:
	{
		Transform_t3600365921 * L_110 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_110);
		Vector3_t3722313464  L_111 = Transform_get_localScale_m129152068(L_110, /*hidden argument*/NULL);
		V_8 = L_111;
		int32_t L_112 = __this->get_VideoScalePlane_8();
		float L_113 = V_2;
		Vector3_set_Item_m1772472431((Vector3_t3722313464 *)(&V_8), ((int32_t)((int32_t)((int32_t)((int32_t)L_112&(int32_t)((int32_t)12)))>>(int32_t)2)), L_113, /*hidden argument*/NULL);
		int32_t L_114 = __this->get_VideoScalePlane_8();
		float L_115 = V_3;
		Vector3_set_Item_m1772472431((Vector3_t3722313464 *)(&V_8), ((int32_t)((int32_t)L_114&(int32_t)3)), L_115, /*hidden argument*/NULL);
		float L_116 = (&V_8)->get_y_3();
		Transform_t3600365921 * L_117 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_117);
		Vector3_t3722313464  L_118 = Transform_get_localScale_m129152068(L_117, /*hidden argument*/NULL);
		V_11 = L_118;
		float L_119 = (&V_11)->get_y_3();
		V_9 = ((float)il2cpp_codegen_subtract((float)L_116, (float)L_119));
		Transform_t3600365921 * L_120 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_121 = V_8;
		NullCheck(L_120);
		Transform_set_localScale_m3053443106(L_120, L_121, /*hidden argument*/NULL);
		float L_122 = V_9;
		if ((((float)L_122) == ((float)(0.0f))))
		{
			goto IL_03e4;
		}
	}
	{
		Transform_t3600365921 * L_123 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_124 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t3722313464  L_125 = Transform_get_localPosition_m4234289348(L_124, /*hidden argument*/NULL);
		V_12 = L_125;
		float L_126 = (&V_12)->get_x_2();
		Transform_t3600365921 * L_127 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_127);
		Vector3_t3722313464  L_128 = Transform_get_localPosition_m4234289348(L_127, /*hidden argument*/NULL);
		V_13 = L_128;
		float L_129 = (&V_13)->get_y_3();
		float L_130 = V_9;
		Transform_t3600365921 * L_131 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_131);
		Vector3_t3722313464  L_132 = Transform_get_localPosition_m4234289348(L_131, /*hidden argument*/NULL);
		V_14 = L_132;
		float L_133 = (&V_14)->get_z_4();
		Vector3_t3722313464  L_134;
		memset(&L_134, 0, sizeof(L_134));
		Vector3__ctor_m3353183577((&L_134), L_126, ((float)il2cpp_codegen_add((float)L_129, (float)((float)((float)L_130/(float)(2.0f))))), L_133, /*hidden argument*/NULL);
		NullCheck(L_123);
		Transform_set_localPosition_m4128471975(L_123, L_134, /*hidden argument*/NULL);
	}

IL_03e4:
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
