﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t6D4F407FB7CC5D1211F9D4653C3450ACB8A067BA;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3;
// UnityEngine.Events.CachedInvokableCall`1<System.String>
struct CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>
struct IEnumerable_1_tF935EA96E674DA576274AF74E38AEA7E077E7A85;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding>
struct IEnumerable_1_tABF27AED8E88C2557464B0E32EAD36CE8213B1B8;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF;
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E;
// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2;
// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral098A172DEA459360162609211F3572251217DFE4;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral320772EF40302B49A179DB96BAD02224E97B4018;
IL2CPP_EXTERN_C String_t* _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral8077A2BB797FA6A0805F51D59F567488316A7D86;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8F64EE075510D6F35C002ED590FD5A7BE00B34;
IL2CPP_EXTERN_C String_t* _stringLiteralD6343EA158ACCD33CE0C95B0C5BD499231DEA80B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB8D80CAAEEA45EB1896A03486B82F32A82622C3;
IL2CPP_EXTERN_C String_t* _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C const RuntimeMethod* BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedInvokableCall_1__ctor_m216FB3B51415282D163A588AFB5A9DBEA1E53441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CachedInvokableCall_1_tF82F436972A0498B8E9DAE131D41D3C65358F5CD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MethodInfo_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364;
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;
};

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;
};

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// UnityEngine.Events.PersistentCall
struct PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_TargetAssemblyTypeName
	String_t* ___m_TargetAssemblyTypeName_1;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_2;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_3;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* ___m_Arguments_4;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_5;
};

// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1EC718175613632CD4775345600304230E9A83DF* ___m_Calls_0;
};

// UnityEngine.Playables.PlayableBehaviour
struct PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::<implementation>k__BackingField
	RuntimeObject* ___U3CimplementationU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// UnityEngine.Events.UnityEventTools
struct UnityEventTools_t96225E3D7394F9F843F8473AC88F158DEEFDD90D  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
struct Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1EC718175613632CD4775345600304230E9A83DF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ____current_3;
};

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_tD263A68C185ECF7369E72865998314A3704F3942  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___Delegate_0;
};

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_tEC644714F5F858180758F4D976EB51D1325B9801  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___Delegate_0;
};

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_tE1B51C9B4DC9B445D4D1F86682DDD6411A37FA9E  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___Delegate_0;
};

// UnityEngine.Events.InvokableCall`1<System.String>
struct InvokableCall_1_t2795E37CB38272DA49207FCCD7DB825A34698F9D  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___Delegate_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.PlayerLoop.EarlyUpdate
struct EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B 
{
	union
	{
		struct
		{
		};
		uint8_t EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.PlayerLoop.FixedUpdate
struct FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1 
{
	union
	{
		struct
		{
		};
		uint8_t FixedUpdate_tCF8FD444F9ACA24B19A6697CB873E558CC06A2D1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization
struct Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016 
{
	union
	{
		struct
		{
		};
		uint8_t Initialization_tDAACE77B534B3BDAC1A482FEA5917F2AB58A1016__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Events.InvokableCall
struct InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122  : public BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339
{
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___Delegate_0;
};

// UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	// System.Int32 UnityEngine.LightBakingOutput::probeOcclusionLightIndex
	int32_t ___probeOcclusionLightIndex_0;
	// System.Int32 UnityEngine.LightBakingOutput::occlusionMaskChannel
	int32_t ___occlusionMaskChannel_1;
	// UnityEngine.LightmapBakeType UnityEngine.LightBakingOutput::lightmapBakeType
	int32_t ___lightmapBakeType_2;
	// UnityEngine.MixedLightingMode UnityEngine.LightBakingOutput::mixedLightingMode
	int32_t ___mixedLightingMode_3;
	// System.Boolean UnityEngine.LightBakingOutput::isBaked
	bool ___isBaked_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};
// Native definition for COM marshalling of UnityEngine.LightBakingOutput
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex_0;
	int32_t ___occlusionMaskChannel_1;
	int32_t ___lightmapBakeType_2;
	int32_t ___mixedLightingMode_3;
	int32_t ___isBaked_4;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 
{
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____byRef_0;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshaled_com
{
	int32_t* ____byRef_0;
};

// UnityEngine.PlayerLoop.PostLateUpdate
struct PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256 
{
	union
	{
		struct
		{
		};
		uint8_t PostLateUpdate_t8D100B8147895DB5492ABDC2ABF8ACACA3EA1256__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate
struct PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6 
{
	union
	{
		struct
		{
		};
		uint8_t PreLateUpdate_t2DCE1BE25ACE7BC92CEE04C59E9F2F68A9C78FE6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate
struct PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED 
{
	union
	{
		struct
		{
		};
		uint8_t PreUpdate_tD3D2902387A8CA02CEED9FD2BFE8435ED80A51ED__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.PlayerLoop.TimeUpdate
struct TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51 
{
	union
	{
		struct
		{
		};
		uint8_t TimeUpdate_t81E3446F4486BC0736BFE3CBAE8FFA6848583E51__padding[1];
	};
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.PlayerLoop.Update
struct Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89 
{
	union
	{
		struct
		{
		};
		uint8_t Update_tFCBD46F301DE58EC1756B662441FF6E0F6733A89__padding[1];
	};
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
struct ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270 
{
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t0870925EB7DB96EFA85333F36698760A8861C270__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
struct AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E 
{
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t0AC27EABB00A0681E6915B93878E94FAE8DD9C1E__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5 
{
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_t3870E195EEF160DB91F9F67A109DFCE8EB630FB5__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
struct ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCA55FECEBB3CB979817F2331F7DE68FB037CFFCA__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A 
{
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t1F56F9C02CC5108CCBFD4B87570C7DDB9E15FD6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232 
{
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t6A8B38D90EFC8731159C218D19FC8739A0ED7232__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t2AF302649970650DD66001B9F9DB0DA2F46E17C3__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
struct GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35 
{
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t5B6C8013AEC6F086F0366993EB0153A6E1C11A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2 
{
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t8B6378DF3D9F24091428D1F944CA9867C30BE4C2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t1048CAAC4D8DBC7AA534BFE62473D2D12C4E6D1F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t03AAFC538395693086152E6BF5AFAAFF0F9444DB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209 
{
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t2498151E6AFBCC1C68848C08C8540E8F741EF209__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A 
{
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tA188E9A07C41BA07CE3C73E2D45608F7D551057A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52 
{
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_t9B96C36B1A049894E20D367554C2D00F54EE3A52__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t7759A2277757FE54B719695E47C7AC5E9A920112__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t268646D8132AA773DC3D8AEDCE53F0DC2FE88996__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE 
{
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_tC43ACAF01E9D5C34252E8B4B99A05EB2ACA191FE__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2 
{
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t511B4B8D887E68EB91B888E92C2D8258CB5BAAA2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_t437517E506EB51DF22436E8A2D517D627D9D1A35__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB 
{
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t23345CA37B85F095F76F78D51130AA713DF706AB__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
struct TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2 
{
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_t0773D7F4190273AC99FEAD6DB5AB43C671AA56D2__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D 
{
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_tD66FF44EB2E15D5F3F34D6E016FE11ABFE364E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t438EC08527D0B0543D920C30750BCD94A690126A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t41CECA98EFF313B8463EEFF63BFB15DF0513A428__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
struct UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_tBC43869EB39DE6B92FBA117E2EA22B4DCD788F2A__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
struct UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_tDDC4C28D19025796CB94F9DE552BA9C0ADEDCE45__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tE725390DFE266FA0F34148D2184B9CCE9A7C46C6__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
struct UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t45C914112124AD6E405EE2B11DA76D265C20F77F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
struct UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tC612A33DB9BEFE10B1970D4A655B2F9EAF407D42__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_t0E74B3EDF837DFE1179C4CDB979B969DC58E3A2F__padding[1];
	};
};

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
struct XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9 
{
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2 
{
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_tFF50E2AD8BE118EE03F1E31B5B5BDFB91D0418F2__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines
struct ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3 
{
	union
	{
		struct
		{
		};
		uint8_t ClearLines_tCAF10AEE1122923282F5586C7ED0CFE4FCB6D0E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_tE4F7C94C031FD40BBBF938DE47BD701409110219__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_t010D8D27494573A4CCD9A3F65EB96DBD0F0AC9D9__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_tB860502DD096EC153005619C9607049E7DEF408A__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_t2F56DD05BE773AF12B8024A86FBB03175BD99C6D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate
struct NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_tDD791A781B81753165645E5A6B24C54524BAB373__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t1A722B7DD754C177785AB6A4948CC9DD8B4E13C5__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate
struct PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_tC2A56A2FB665B621E7D60D0691150D01C669362B__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_tF76C7633EB2FC69A88CE7DE7B95C98FA3E4641E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_tC21CDED0EB965CC4170728A1428C331E9FC0D04D__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t8A96D1EF94E7948A73808C8D8B264CD001C901BB__padding[1];
	};
};

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
struct XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006 
{
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_tA04D874E51DDD5CEA43B0052193F17C7F5FFB006__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t5EBE201AE7C230BDE8B8F4EB414DB244DCC386B6__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
struct DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_t36E04867AC7305A062E990E2F8E30ED8652883A0__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame
struct ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_t80452E048B09F684583B024353CEF1C50B650E43__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs
struct SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_tDEECB3386F5E73129815BA3BFA47F033D31CC9EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/SynchronizeState
struct SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A 
{
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_t46EEC7F26CE1203D756418F000A011081D74923A__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors
struct UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCameraMotionVectors_t67A02B2283F2C5C3FC6E456F46AB5E6BE4126391__padding[1];
	};
};

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate
struct XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015 
{
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t2FE37D888210382039DD766A0911539EBB10D015__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D 
{
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t686C5FBF3907281713E45590481A06FCF403325D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB 
{
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_tD5807343A690F45CD8EAAE07F9224F80986F17EB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t6D55F5058BD025D280245CBD42C162C483E1D512__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t8250BBB821B976257F3EAEC1448C3991AFF63C1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
struct EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tEE7D7895D684058F163063191B2D2874BE7FA562__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3 
{
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_tF0560FB54CCF2F4A32DA721EBA26E848DF5D76E3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857 
{
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_tCD187757744592AED2400D913D99DD4180E48857__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039 
{
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_tEAE352E2A0817EF409C36B50BC74A0AE91403039__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
struct GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2 
{
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_tAD3C9126D5AB5761F35668BB8D192901D0654FD2__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders
struct GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D 
{
	union
	{
		struct
		{
		};
		uint8_t GraphicsWarmupPreloadedShaders_tF4CA3BFEDAEFF58490F38AD9FC40668CFCE3EA3D__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
struct InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33 
{
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t42B7FD0989A122BDDE757062094FBD3AAF900B33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90 
{
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t0E4EADC6A05D1699FDC722959D64FB3F30DD6E90__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_tA5B846F08C725EB3642F2F9C30B721F335C96410__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t7594D90D7261A07D1753941535C489D7CF38E696__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tF276BC670113332DE88FD62F6139F1126AA23C75__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_t5C1E32B15900188F564F4E318B352EEDF3910375__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tBACAC212A197B5446CB6F593799C7695BB24EC05__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t84861404A02490869D3F46F7F2C0A17290545EC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_t4DDB339CF02291AAF8CB8FBBF4011458A485FD94__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404 
{
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_t14545D10F675BACF66AD183C46A48D9242713404__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED 
{
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t9C61FF8A9FE7A311D239FD7FC1E4F7E24B6549ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930 
{
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_tC8FFF5536FFB6F2AFFA10F33E65A5077DBF5B930__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t2A94DA438D46971D71B8288F52C4FFF2F02A2E33__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06 
{
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_tD6DE0BB1F779FBFFB312E5BCC793E40219F28C06__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
struct ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413 
{
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_tEB27E7DE3846A88D2D4E021C916D8D6D88EFE413__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t7071432D555EBFC8DD4E534B45F4EDF27E080F13__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013 
{
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_tF94E0D773C1DB05AF604B2DE50724E860E1AF013__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07 
{
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tB67116E697EFCB74353FE78178E7B77CFF508A07__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A 
{
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_tDB72068BDFB2257670DA53B21B3D09F760DAFF6A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B 
{
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tBA66DD23D1D0C1E192F89C2F300BAD5F92C93F1B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_tDFCEDEFC02C1B3B96770B06559B45FADA50445BC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_t9015D4D4B19DE28DD05617E082E2B8304DC5E942__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
struct UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t1EE346D361B4338A8CFA185A4705AEFDAEE801AE__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t43DD3FE6666F14E5619AA847D7FC83A31B4AB2DF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_tAF9CC0F6E0462EAB2BEF9EE8BA1DAC7D5BABA360__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_tDCCB1380EB126CE1146781F90D4DC397502707EA__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
struct UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t7E61DB4527509062E7DE783C2E8292C5CC822B56__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_tFB89399C3715A7AE18439EDA43A8A246A70307C4__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
struct UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t6B90CB8B3407D59509AC4D0477435FD44682D4ED__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
struct UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tB7ADB49C519BBE5D1B5DA7F6BA7177DE1FC1217A__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
struct UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tB21C695C93D9ECA1F8821B359B71C03EABD0E1EF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t41EC68C3F07C66A6A9F8ADF81EC4622B680CAA7E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
struct VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252 
{
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_t816F9323A8CB3A06A0D9D213B1277904CD457252__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
struct XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostLateUpdate_t1EE8EAA2697F9C758F0C8C1974C59EE578EFC15F__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
struct XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354 
{
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_tFF910652581DF94C8DF5BAE50633725ED22E1354__padding[1];
	};
};

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
struct XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF 
{
	union
	{
		struct
		{
		};
		uint8_t XRPreEndFrame_t78A1DA8FD45515933040E2B7B9CBB384967C46BF__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t87451CCD704E89EC1C2BA0D35B3AEAA8563A33E6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213 
{
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_tBB12AC594CE163F658DBBACC3853C383E1A05213__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t851C593FE275B53D22C79C8435BEB4891252F799__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t81C50CAC81BD6EC4D9648822E86BF29A47936FEC__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tD58A96B3539A4F3A050B5116895857DFADB1609E__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate
struct EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C 
{
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_t31BA589CB2526B56986A3C5D9ED15FB859CA806C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137 
{
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_tCA1859B18933D179724E4EF67D3AD39AA70F9137__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B 
{
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t1CC03454030208134371D7310A6983F583139D3B__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate
struct Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DLateUpdate_t8BCE5DD17E6F2423EEE2089613AFACB04D822381__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t4FB72F632A4C0FD8A88708419FF10E910797D3A7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels
struct UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5 
{
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t999A37AEB53E4F09E8193455832E7FE029299AA5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate
struct UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8 
{
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tD789F426DEFBE083132EC295CFFA8C8A63BFA8E8__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t5C89D280B0E06D2E5EE43DA200DB08F067CD8FEB__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_t32CBEA7AF5C6FB8F34C8F8AD050FB631C685DD31__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate
struct AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35 
{
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tA35AAF6E952364E15D0F164538EFB865E0B8DD35__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput
struct CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0 
{
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t82562A2FF4A6A96115095A22DE49B2C8C85592D0__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C 
{
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tCB68831D0D320C78C24F1D76D2FE2EE3461FDE0C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate
struct NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C 
{
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_t1564F13F15C464D3B914A6E9C043C6F2D93B9A9C__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate
struct Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7 
{
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_t895E178622EB6CCC7BE36D01F8FED69820B4CED7__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate
struct PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6 
{
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_t5EA12922A6C5349E4F5B1F6EE3F67D90A92532A6__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents
struct SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5 
{
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t0D410EA28E53BEAFCDB37F8E58A46485D16B86F5__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo
struct UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3 
{
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tFC4416C8B8E1232540E981586130B2D7B1D9AFE3__padding[1];
	};
};

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate
struct WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B 
{
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t62BB75F87B0E35ADAE8ED7A801F6EB044D22143B__padding[1];
	};
};

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime
struct WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C 
{
	union
	{
		struct
		{
		};
		uint8_t WaitForLastPresentationAndUpdateTime_tF885D5810C1C4B2AA28DBCC6CB6003E51792F51C__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/DirectorUpdate
struct DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D 
{
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t766FFE1AA1ADCA88ABEDAEFEF5A9B46DFE782E7D__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tC1140F6DB2F045EB25C6B8E5C46DBE91A1CDBBC1__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6806DDF61653702F6F87D55ED9330215CD5BF033__padding[1];
	};
};

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
struct ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80 
{
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t836195796CF358BFA2A1A24B90C69DB7F95EEC80__padding[1];
	};
};

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD  : public InvokableCall_1_tD263A68C185ECF7369E72865998314A3704F3942
{
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;
};

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78  : public InvokableCall_1_tEC644714F5F858180758F4D976EB51D1325B9801
{
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;
};

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3  : public InvokableCall_1_tE1B51C9B4DC9B445D4D1F86682DDD6411A37FA9E
{
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;
};

// UnityEngine.Events.CachedInvokableCall`1<System.String>
struct CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9  : public InvokableCall_1_t2795E37CB38272DA49207FCCD7DB825A34698F9D
{
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	String_t* ___m_Arg1_1;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystemInternal::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystemInternal::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_1;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::updateFunction
	intptr_t ___updateFunction_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystemInternal::loopConditionFunction
	intptr_t ___loopConditionFunction_3;
	// System.Int32 UnityEngine.LowLevel.PlayerLoopSystemInternal::numSubSystems
	int32_t ___numSubSystems_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystemInternal
struct PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com
{
	Type_t* ___type_0;
	Il2CppMethodPointer ___updateDelegate_1;
	intptr_t ___updateFunction_2;
	intptr_t ___loopConditionFunction_3;
	int32_t ___numSubSystems_4;
};

// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.PointLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	uint8_t ___falloff_9;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// UnityEngine.Experimental.Playables.CameraPlayable
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Playables.ScriptPlayableOutput
struct ScriptPlayableOutput_t70DA4CCE83BAE5C0EE7D3BC19E3216DC8B6DCB1F 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.FrameData
struct FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 
{
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Double UnityEngine.Playables.FrameData::m_EffectiveParentDelay
	double ___m_EffectiveParentDelay_4;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveParentSpeed
	float ___m_EffectiveParentSpeed_5;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_6;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_7;
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.FrameData::m_Output
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_Output_8;
};

// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t91E36549D76184780FD8995722CD4A87A2650C23_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseInvokableCallU5BU5D_tF8AC2AD8CB819841C1BA6BCAF4C2733CCD50296F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1EC718175613632CD4775345600304230E9A83DF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PersistentCallU5BU5D_t9C1552FD6D45110B089FD7B6E1E6934E83152E28* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.ArgumentCache

// UnityEngine.Events.BaseInvokableCall

// UnityEngine.Events.BaseInvokableCall

// System.Reflection.Binder

// System.Reflection.Binder

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableNoStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil_0;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[] UnityEngine.Experimental.Rendering.GraphicsFormatUtility::tableStencil
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil_1;
};

// UnityEngine.Experimental.Rendering.GraphicsFormatUtility

// UnityEngine.Events.InvokableCallList

// UnityEngine.Events.InvokableCallList

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.LightmapperUtils

// UnityEngine.Experimental.GlobalIllumination.Lightmapping
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_DefaultDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate_0;
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::s_RequestLightsDelegate
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate_1;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Reflection.ParameterInfo

// System.Reflection.ParameterInfo

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCall

// UnityEngine.Events.PersistentCallGroup

// UnityEngine.Events.PersistentCallGroup

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Playables.PlayableBehaviour

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::s_Instance
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance_0;
};

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventTools

// UnityEngine.Events.UnityEventTools

// System.ValueType

// System.ValueType

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9_0;
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>

// UnityEngine.Events.InvokableCall`1<System.Boolean>

// UnityEngine.Events.InvokableCall`1<System.Boolean>

// UnityEngine.Events.InvokableCall`1<System.Int32>

// UnityEngine.Events.InvokableCall`1<System.Int32>

// UnityEngine.Events.InvokableCall`1<System.Single>

// UnityEngine.Events.InvokableCall`1<System.Single>

// UnityEngine.Events.InvokableCall`1<System.String>

// UnityEngine.Events.InvokableCall`1<System.String>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.PlayerLoop.EarlyUpdate

// UnityEngine.PlayerLoop.EarlyUpdate

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate

// UnityEngine.PlayerLoop.Initialization

// UnityEngine.PlayerLoop.Initialization

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Events.InvokableCall

// UnityEngine.Events.InvokableCall

// UnityEngine.LightBakingOutput

// UnityEngine.LightBakingOutput

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// UnityEngine.Experimental.GlobalIllumination.LinearColor

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.ParameterModifier

// System.Reflection.ParameterModifier

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.PlayerLoop.PreUpdate

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.PlayerLoop.TimeUpdate

// UnityEngine.PlayerLoop.TimeUpdate

// System.UInt32

// System.UInt32

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.PlayerLoop.Update

// UnityEngine.PlayerLoop.Update

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/ClearLines

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/ProfilerStartFrame

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/SynchronizeState

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/AIUpdate

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.PreUpdate/WindUpdate

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/DirectorUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>

// UnityEngine.Events.CachedInvokableCall`1<System.Single>

// UnityEngine.Events.CachedInvokableCall`1<System.Single>

// UnityEngine.Events.CachedInvokableCall`1<System.String>

// UnityEngine.Events.CachedInvokableCall`1<System.String>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// UnityEngine.Experimental.GlobalIllumination.Cookie

// UnityEngine.Experimental.GlobalIllumination.Cookie

// System.Delegate

// System.Delegate

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DirectionalLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// UnityEngine.Experimental.GlobalIllumination.DiscLight

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.Rendering.GraphicsFormat

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// UnityEngine.Experimental.GlobalIllumination.LightDataGI

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableGraph

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// UnityEngine.LowLevel.PlayerLoopSystemInternal

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.PointLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// UnityEngine.Experimental.GlobalIllumination.RectangleLight

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Experimental.GlobalIllumination.SpotLight

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Experimental.Playables.CameraPlayable

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// UnityEngine.Experimental.Playables.MaterialEffectPlayable

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.Playable

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};

// UnityEngine.Playables.PlayableBinding

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.Playables.PlayableOutput

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.Playables.ScriptPlayableOutput

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TextureMixerPlayable

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// UnityEngine.Experimental.Playables.TexturePlayableOutput

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Playables.FrameData

// UnityEngine.Playables.FrameData

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Playables.PlayableAsset

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.Light

// UnityEngine.Light
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Experimental.Rendering.GraphicsFormat[]
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 m_Items[1];

	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StreamName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceObject_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SourceBindingType_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_CreateOutputMethod_3), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 m_Items[1];

	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____byRef_0), (void*)NULL);
	}
};
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled);

// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747_gshared (CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, float ___2_argument, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F_gshared (CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, int32_t ___2_argument, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m1DE64D237A33F634B2AC54A97F19AAA85BF30D9B_gshared (CachedInvokableCall_1_t6D4F407FB7CC5D1211F9D4653C3450ACB8A067BA* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, RuntimeObject* ___2_argument, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30_gshared (CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, bool ___2_argument, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;

// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_bounceIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LinearColor::Convert(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_spotAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Light::get_useColorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_colorTemperature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C (float ___0_kelvin, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_red(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_green(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LinearColor::set_blue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.LightBakingOutput UnityEngine.Light::get_bakingOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) ;
// UnityEngine.LightShadows UnityEngine.Light::get_shadows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Light::get_cookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_cookieSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499 (int32_t ___0_format, int32_t ___1_usage, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) ;
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.UnityEventTools::TidyAssemblyTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7 (String_t* ___0_assemblyTypeName, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_function, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7 (Type_t* ___0_type, RuntimeObject* ___1_firstArgument, MethodInfo_t* ___2_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::add_Delegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_add_Delegate_m5AD40C6D21D67A44980DF3B99946C4A2F17D9A10 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_mD64C67D6FFB881F98555408743D7BB5CA7217B39 (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m7BBC3A3F424104A84947708ECF8EEF74707F7661 (Delegate_t* ___0_delegate, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_targetAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_method, ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* ___2_arguments, const RuntimeMethod* method) ;
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArgumentCache_get_floatArgument_mDED33C174CAD9DFAD58F9D6DF482557C0FC20D38 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
inline void CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747 (CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, float ___2_argument, const RuntimeMethod* method)
{
	((  void (*) (CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, MethodInfo_t*, float, const RuntimeMethod*))CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747_gshared)(__this, ___0_target, ___1_theFunction, ___2_argument, method);
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArgumentCache_get_intArgument_m7515338C0F3B5843E40CC48C303D2EFC02D9C19C (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
inline void CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F (CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, int32_t ___2_argument, const RuntimeMethod* method)
{
	((  void (*) (CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, MethodInfo_t*, int32_t, const RuntimeMethod*))CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F_gshared)(__this, ___0_target, ___1_theFunction, ___2_argument, method);
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_stringArgument_m4CA65BC60FC1FDCE88779C009ED0E1DC4BED2D9A (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
inline void CachedInvokableCall_1__ctor_m216FB3B51415282D163A588AFB5A9DBEA1E53441 (CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, String_t* ___2_argument, const RuntimeMethod* method)
{
	((  void (*) (CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, MethodInfo_t*, String_t*, const RuntimeMethod*))CachedInvokableCall_1__ctor_m1DE64D237A33F634B2AC54A97F19AAA85BF30D9B_gshared)(__this, ___0_target, ___1_theFunction, ___2_argument, method);
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgumentCache_get_boolArgument_mB7A56994202FCB50BA04A6DBED9BAC45871F700A (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
inline void CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30 (CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_theFunction, bool ___2_argument, const RuntimeMethod* method)
{
	((  void (*) (CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, MethodInfo_t*, bool, const RuntimeMethod*))CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30_gshared)(__this, ___0_target, ___1_theFunction, ___2_argument, method);
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) ;
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ArgumentCache_get_unityObjectArgument_mEA22BE8C25CDC789963C2DABF068E88147A66C69 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_parameters, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentCache__ctor_m8410B763CA027E30237E5954888A7F508800A331 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
inline void List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2 (List_1_t1EC718175613632CD4775345600304230E9A83DF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1EC718175613632CD4775345600304230E9A83DF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
inline Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924 (List_1_t1EC718175613632CD4775345600304230E9A83DF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 (*) (List_1_t1EC718175613632CD4775345600304230E9A83DF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::Dispose()
inline void Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97 (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::get_Current()
inline PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_inline (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	return ((  PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* (*) (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistentCall_IsValid_mD63347854BC781710D4CC9B5FC3C3996E84A325D (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* PersistentCall_GetRuntimeCall_m0DDE14D286D9995CCE65D2DFF27D57E4D476F072 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___0_theEvent, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::MoveNext()
inline bool Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007 (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
inline void List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
inline void List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1D0E12B18D9105FB553B42DAD351E9AD017B9E9B (Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55*, const RuntimeMethod*))List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared)(__this, ___0_match, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
inline void List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
inline void List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53 (List_1_t91E36549D76184780FD8995722CD4A87A2650C23* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___0_invokableList, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___1_unityEventBase, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) ;
// System.String System.Object::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___2_binder, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___3_types, ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364* ___4_modifiers, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.LightmapBakeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_baketype;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_baketype;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractIndirect(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___0_l;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
// System.Single UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractInnerCone(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ExtractColorTemperature(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::ApplyColorTemperature(UnityEngine.Color,UnityEngine.Experimental.GlobalIllumination.LinearColor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_cct;
		float L_4 = L_3.___r_0;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_cct;
		float L_9 = L_8.___g_1;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_cct;
		float L_14 = L_13.___b_2;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___1_dir;
		L_34->___penumbraWidthRadian_7 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___1_point;
		L_37->___sphereRadius_8 = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___1_point;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___1_spot;
		L_37->___sphereRadius_8 = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___0_l;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle_9 = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___0_l;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E(L_42, NULL);
		L_41->___innerConeAngle_10 = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___1_spot;
		L_44->___falloff_11 = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___1_spot;
		L_45->___angularFalloff_12 = 0;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___1_rect;
		L_37->___width_8 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___1_rect;
		L_38->___height_9 = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___1_rect;
		L_39->___falloff_10 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID_0 = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType_2;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode_2 = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow_1 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position_3 = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation_4 = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color_5 = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor_6 = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range_7 = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___1_disc;
		L_37->___radius_8 = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___1_disc;
		L_38->___falloff_9 = 3;
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B1_0 = L_0;
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID_0 = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___1_cookie;
		L_7->___scale_1 = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		G_B4_0 = L_8;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___0_l;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		G_B5_0 = G_B4_0;
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___0_l;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___0_l;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, /*hidden argument*/NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes_2 = G_B7_0;
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::SetDelegate(UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m8BEF0FE5035180FF94119860CD15BBE2BE90129D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___0_del;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___0_del;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)G_B3_0);
		return;
	}
}
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate UnityEngine.Experimental.GlobalIllumination.Lightmapping::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m073E4FFA73169C20833F77984024BD328003258A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::ResetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_m8D4AAF4F08C8697953B3CB110DD4E6CD130371D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLights(UnityEngine.Light[],System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m1967533AFFB328B3386E7E0D1EC414105E509B80 (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_lights, intptr_t ___1_outLightsPtr, int32_t ___2_outLightsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___1_outLightsPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		int32_t L_2 = ___2_outLightsCount;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___0_lights;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m6AEDE40A651280EC1A7944E9CFD161AFB78802B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate_0;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate_1), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	NullCheck(___0_requests);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker2< LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, ___0_requests, ___1_lightsOutput);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_requests, ___1_lightsOutput);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m766681161796D9912477BF60542C4DD1EB0D2096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___0_requests;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___1_lightsOutput))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___0_requests;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
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
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m3DD7EAFBC4F60FA47453B93DAA7B392AEC818BD5 (int32_t ___0_format, int32_t ___1_readWrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___1_readWrite;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_readWrite;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___0_format;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_minimumDepthBits);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m76EEE7255F874FD3AC8E149830EE48F345DF8425 (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthBits_mA3ED2245DC3C1C593668C2F152A0DA42052CEE94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthBits(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormat(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321 (int32_t ___0_minimumDepthBits, int32_t ___1_minimumStencilBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B24_0 = NULL;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___1_minimumStencilBits;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_0016:
	{
		int32_t L_3 = ___0_minimumDepthBits;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___1_minimumStencilBits;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___0_minimumDepthBits;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___1_minimumStencilBits;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___0_minimumDepthBits;
		V_7 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)16);
		goto IL_008f;
	}

IL_0073:
	{
		int32_t L_15 = ___0_minimumDepthBits;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)24);
		goto IL_008f;
	}

IL_0089:
	{
		___0_minimumDepthBits = ((int32_t)32);
	}

IL_008f:
	{
		int32_t L_17 = ___1_minimumStencilBits;
		V_9 = (bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		___1_minimumStencilBits = 8;
	}

IL_009c:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_19 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		NullCheck(L_19);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_20 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		NullCheck(L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0), NULL);
		int32_t L_21 = ___1_minimumStencilBits;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0;
		G_B24_0 = L_22;
		goto IL_00c2;
	}

IL_00bd:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_23 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1;
		G_B24_0 = L_23;
	}

IL_00c2:
	{
		V_0 = G_B24_0;
		int32_t L_24 = ___0_minimumDepthBits;
		V_1 = ((int32_t)(L_24/8));
		int32_t L_25 = V_1;
		V_10 = L_25;
		goto IL_00ed;
	}

IL_00cc:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_26 = V_0;
		int32_t L_27 = V_10;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_11 = L_29;
		int32_t L_30 = V_11;
		bool L_31;
		L_31 = SystemInfo_IsFormatSupported_m412D2A8B391BDBCD1EDB5C17ADAB724CDB123499(L_30, 4, NULL);
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_33 = V_11;
		V_3 = L_33;
		goto IL_00fe;
	}

IL_00e6:
	{
		int32_t L_34 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ed:
	{
		int32_t L_35 = V_10;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_36 = V_0;
		NullCheck(L_36);
		V_13 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		bool L_37 = V_13;
		if (L_37)
		{
			goto IL_00cc;
		}
	}
	{
		V_3 = 0;
		goto IL_00fe;
	}

IL_00fe:
	{
		int32_t L_38 = V_3;
		return L_38;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// UnityEngine.RenderTextureFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn) (int32_t);
	static GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedTextureFormat_m3CA06D90308B58BD0ADAA34115B5103F04FB2F56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___0_format, ___1_wholeImage);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m443675E54409D934EE0DC0FDA5CF6D56DE9C4282 (int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthFormat_m3CCCC9CE8DD7DAD9814D03E252D7B0F1C89A1452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn) (int32_t);
	static GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsStencilFormat_mA27F1DCFF7738B3BAEF225A131F80849BB177BCC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB (int32_t ___0_format, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_format;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)28))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___0_format;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)29))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_format;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)64))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___0_format;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)65)))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B5_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Experimental.Rendering.GraphicsFormatUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_mA72A657D7B9FB8670567D2CB6B6FA3A1419980D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)90));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)91));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)93));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil_0), (void*)L_4);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_5 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)92));
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)94));
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil_1), (void*)L_9);
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
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::set_Internal_ScriptableRuntimeReflectionSystemSettings_system(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_mA216659518CF27854FB65C184B10197AB74AFBF7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		RuntimeObject* L_10 = ___0_value;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
// UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::get_Internal_ScriptableRuntimeReflectionSystemSettings_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mED3776EB64E9E6BF61705125F20F6893C2098E03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m8225B0B8673C3B8B4529F9BFDAC91D417F1DB083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
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
// UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::get_implementation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::set_implementation(UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___0_result;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem::TickRealtimeProbes() */, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::TickRealtimeProbes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::Internal_BuiltinRuntimeReflectionSystem_New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_mA100197AC7CA73600AAD55A67E43039EEF8D2C27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.MaterialEffectPlayable::Equals(UnityEngine.Experimental.Playables.MaterialEffectPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.CameraPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.CameraPlayable::Equals(UnityEngine.Experimental.Playables.CameraPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___0_other, method);
	return _returnValue;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Playables.TextureMixerPlayable::Equals(UnityEngine.Experimental.Playables.TextureMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableOutputHandle_GetHashCode_mC2FAF756D71026E3AF4492157EDAE7186429B079(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::op_Equality(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___1_rhs;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(__this, ((*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)UnBox(L_1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mB9106CB9333E0BF4C893E43AD7A23B64471CC21A(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::Equals(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = (*(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*)__this);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_other, const RuntimeMethod* method)
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_Equals_mF5C23882B2A007186F00EB3D23E9BD6664E8DAE6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::CompareVersion(UnityEngine.Playables.PlayableOutputHandle,UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_CompareVersion_mAB102578900E20BB3B4273F94D1A6AFDB6E20FFD (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_lhs, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle__cctor_mBA610D820061BDA36802735EEC57A83B0985CFC2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883));
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
// System.Double UnityEngine.Playables.PlayableAsset::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableAsset_get_duration_m4668A767DDB780565E6506E63B4797B820405CFE (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		double L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> UnityEngine.Playables.PlayableAsset::get_outputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableAsset_get_outputs_m5760B1B5EE08B0327FA7D90AE92C94227B1C993C (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = ((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4;
		V_0 = (RuntimeObject*)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_CreatePlayable(UnityEngine.Playables.PlayableAsset,UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_CreatePlayable_m8D90055AAB62B51D1F73B58F30715C4512100714 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___1_graph, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, intptr_t ___3_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* V_1 = NULL;
	bool V_2 = false;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_3;
		L_3 = Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2(NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0014:
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_4 = ___0_asset;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_5 = ___1_graph;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___2_go;
		NullCheck(L_4);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_7;
		L_7 = VirtualFuncInvoker2< Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject) */, L_4, L_5, L_6);
		V_0 = L_7;
	}

IL_001d:
	{
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_ptr), NULL);
		V_1 = (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_8;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* L_9 = V_1;
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_10 = V_0;
		*(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*)L_9 = L_10;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine.Playables.PlayableAsset,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset_Internal_GetPlayableAssetDuration_mD80D4032B1E5DECC8710CB63A49E815F21EFDBDA (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* ___0_asset, intptr_t ___1_ptrToDouble, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double* V_1 = NULL;
	{
		PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* L_0 = ___0_asset;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(5 /* System.Double UnityEngine.Playables.PlayableAsset::get_duration() */, L_0);
		V_0 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___1_ptrToDouble), NULL);
		V_1 = (double*)L_2;
		double* L_3 = V_1;
		double L_4 = V_0;
		*((double*)L_3) = (double)L_4;
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableAsset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableAsset__ctor_m36B842356F02DF323B356BAAF6E3DC59BA9E1AB8 (PlayableAsset_t6964211C3DAE503FEEDD04089ED6B962945D271E* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Playables.PlayableBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour__ctor_mA6202DCD846F0DDFC5963764A404EE8AFABEA23A (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStart_mB5944807796239EFB530022539674C4E4D185D65 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnGraphStop_mF80DFC8A3C2D2CA9299011D9E871ED6A8A9586CA (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableCreate_m22B0F0051A677A523C5702AABC6B1C9D358E90B8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnPlayableDestroy_m3DB0AF7BD9689DA1BCCBBFD19BDD544143027C3C (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPlay_m05F6FCCBC6E8FB4BA0BE2690045AF28BF95C6FE2 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_OnBehaviourPause_m431A7BD2EE99C1862563FEA37E20C365B753930B (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_PrepareFrame_m33FED1E870D350D8276712A2CD75118FEFAA86BD (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBehaviour_ProcessFrame_mB80DDB2AB5D7EC0D3B9A466D37BE8556F6BBD2A0 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_playable, FrameData_t02E705D0271F73A24ADF9BA4B6F8760B6696F314 ___1_info, RuntimeObject* ___2_playerData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object UnityEngine.Playables.PlayableBehaviour::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayableBehaviour_Clone_m6A5B052F4ECA2ADED5937A4843777F52CCD33EE8 (PlayableBehaviour_tCCFE023F2CAB1769A3EAB176BD5B0416C54C22E2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F Playable_get_Null_m0D0BB32BC23983C490A363AD6AAC47D8B72864F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_0 = ((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.Playable::Equals(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86_AdjustorThunk (RuntimeObject* __this, Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___0_other, const RuntimeMethod* method)
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Playable_Equals_mD72D3DB892B8867A0E7BAC032A16C08616EEFF86(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.Playable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__cctor_m079282CFC9FB3C8D02C0F6F9FF45C167DF583459 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		((Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields*)il2cpp_codegen_static_fields_for(Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_back(const PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4& unmarshaled)
{
	Exception_t* ___m_SourceBindingType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SourceBindingType' of type 'PlayableBinding': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SourceBindingType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Playables.PlayableBinding
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_com_cleanup(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Playables.PlayableBinding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableBinding__cctor_m3055AFB9F43633F1353C40FC9E1B2A4492732AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* L_0 = (PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD*)SZArrayNew(PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD_il2cpp_TypeInfo_var, (uint32_t)0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___None_4), (void*)L_0);
		((PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var))->___DefaultDuration_5 = (std::numeric_limits<double>::infinity());
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
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* currentDelegate = reinterpret_cast<CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*>(delegatesToInvoke[i]);
		typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenInst(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_graph, ___1_name, method);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_graph, ___1_name);
}
PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680, RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_graph, ___1_name);
}
IL2CPP_EXTERN_C  PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method)
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___1_name' to native representation
	char* ____1_name_marshaled = NULL;
	____1_name_marshaled = il2cpp_codegen_marshal_string(___1_name);

	// Native function invocation
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 returnValue = il2cppPInvokeFunc(___0_graph, ____1_name_marshaled);

	// Marshaling cleanup of parameter '___1_name' native representation
	il2cpp_codegen_marshal_free(____1_name_marshaled);
	____1_name_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC_Multicast;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 CreateOutputMethod_Invoke_mEC7DC5D9A9325BFFB17C248AE9738637704B89CC (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___0_graph, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 (*FunctionPointerType) (RuntimeObject*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_graph, ___1_name, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = ___0_handle;
		__this->___m_Handle_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___0_handle, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::Equals(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF(__this, NULL);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1;
		L_1 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableOutputHandle_op_Equality_m116A314100562913DD28474B8D7DA5FBFCA9CD3C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121_AdjustorThunk (RuntimeObject* __this, PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___0_other, const RuntimeMethod* method)
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_Equals_m4CC730818751114DC5643600B5FE20243F4B7121(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutput::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__cctor_m02CBFEB6C9DB324655B9D354B32C268EED13749A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		((PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields*)il2cpp_codegen_static_fields_for(PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_il2cpp_TypeInfo_var))->___m_NullPlayableOutput_1 = L_1;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_x;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, RuntimeObject* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_p;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_p;
		bool L_2;
		L_2 = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(__this, ((*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)UnBox(L_1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var)))), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_p, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m60AD76B7D38CA989AE84501B2E9F9ED5CB5F9670(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::Equals(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = (*(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_other;
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_other, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_Equals_m81BA0E127133DFF3E45DA61D185FDF48E16BCF45(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Playables.PlayableHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (&__this->___m_Handle_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		uint32_t* L_2 = (&__this->___m_Version_1);
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayableHandle_GetHashCode_m10FB32ECDC0B9D7BDAEA9E3B76BDDF4614F4EF4F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::CompareVersion(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_CompareVersion_m228CA864DC2BCAA0E03B4C74EC9F2A7B529526D9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_lhs, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = ___0_lhs;
		intptr_t L_1 = L_0.___m_Handle_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = ___1_rhs;
		intptr_t L_3 = L_2.___m_Handle_0;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_lhs;
		uint32_t L_6 = L_5.___m_Version_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = ___1_rhs;
		uint32_t L_8 = L_7.___m_Version_1;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_8))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle__cctor_mE31857278AA27F9CF449BD99AC79EC5E295A5278 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((&((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields*)il2cpp_codegen_static_fields_for(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var))->___m_Null_2), sizeof(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4));
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef bool (*PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_IsValid_Injected_m9D662778C1A39FD8AEC18AEF053AE5C3DBD7B4B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0__unity_self, const RuntimeMethod* method) 
{
	typedef Type_t* (*PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayableHandle_GetPlayableType_Injected_mD71007C85AACC8A18E2A5296B88FD8EA47349A9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)");
	Type_t* icallRetVal = _il2cpp_icall_func(___0__unity_self);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Events.UnityEventTools::TidyAssemblyTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7 (String_t* ___0_assemblyTypeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098A172DEA459360162609211F3572251217DFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8F64EE075510D6F35C002ED590FD5A7BE00B34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6343EA158ACCD33CE0C95B0C5BD499231DEA80B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB8D80CAAEEA45EB1896A03486B82F32A82622C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___0_assemblyTypeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = ___0_assemblyTypeName;
		V_3 = L_3;
		goto IL_00d2;
	}

IL_0012:
	{
		V_0 = ((int32_t)2147483647LL);
		String_t* L_4 = ___0_assemblyTypeName;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_4, _stringLiteralF23E728301722ADFB4013CAFB98300BDB22AE4D6, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_9, NULL);
		V_0 = L_10;
	}

IL_0039:
	{
		String_t* L_11 = ___0_assemblyTypeName;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_11, _stringLiteral098A172DEA459360162609211F3572251217DFE4, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_15, L_16, NULL);
		V_0 = L_17;
	}

IL_005a:
	{
		String_t* L_18 = ___0_assemblyTypeName;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_18, _stringLiteral6B48F4683F01C4D3007AF697B43017699B0D495E, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_22, L_23, NULL);
		V_0 = L_24;
	}

IL_007b:
	{
		int32_t L_25 = V_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_27 = ___0_assemblyTypeName;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_27, 0, L_28, NULL);
		___0_assemblyTypeName = L_29;
	}

IL_0096:
	{
		String_t* L_30 = ___0_assemblyTypeName;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_30, _stringLiteralEB8D80CAAEEA45EB1896A03486B82F32A82622C3, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)(-1))))
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_33 = ___0_assemblyTypeName;
		NullCheck(L_33);
		bool L_34;
		L_34 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_33, _stringLiteral9B8F64EE075510D6F35C002ED590FD5A7BE00B34, NULL);
		G_B13_0 = ((int32_t)(L_34));
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B13_0 = 0;
	}

IL_00b4:
	{
		V_8 = (bool)G_B13_0;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00ce;
		}
	}
	{
		String_t* L_36 = ___0_assemblyTypeName;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		String_t* L_38;
		L_38 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_36, 0, L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_38, _stringLiteralD6343EA158ACCD33CE0C95B0C5BD499231DEA80B, NULL);
		___0_assemblyTypeName = L_39;
	}

IL_00ce:
	{
		String_t* L_40 = ___0_assemblyTypeName;
		V_3 = L_40;
		goto IL_00d2;
	}

IL_00d2:
	{
		String_t* L_41 = V_3;
		return L_41;
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
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ArgumentCache_get_unityObjectArgument_mEA22BE8C25CDC789963C2DABF068E88147A66C69 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_ObjectArgument_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_ObjectArgumentAssemblyTypeName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArgumentCache_get_intArgument_m7515338C0F3B5843E40CC48C303D2EFC02D9C19C (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_IntArgument_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArgumentCache_get_floatArgument_mDED33C174CAD9DFAD58F9D6DF482557C0FC20D38 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_FloatArgument_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArgumentCache_get_stringArgument_m4CA65BC60FC1FDCE88779C009ED0E1DC4BED2D9A (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_StringArgument_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArgumentCache_get_boolArgument_mB7A56994202FCB50BA04A6DBED9BAC45871F700A (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_BoolArgument_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentCache_OnBeforeSerialize_mF01AF8DE34554D86AEC843FEB41D14F3172D481F (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ObjectArgumentAssemblyTypeName_1;
		String_t* L_1;
		L_1 = UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7(L_0, NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectArgumentAssemblyTypeName_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentCache_OnAfterDeserialize_mD1C2E914447C2F69B43850F15AB19B62AF49DE96 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ObjectArgumentAssemblyTypeName_1;
		String_t* L_1;
		L_1 = UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7(L_0, NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectArgumentAssemblyTypeName_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentCache__ctor_m8410B763CA027E30237E5954888A7F508800A331 (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_mD64C67D6FFB881F98555408743D7BB5CA7217B39 (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_function, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodInfo_t* L_0 = ___1_function;
		V_0 = (bool)((((RuntimeObject*)(MethodInfo_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE_RuntimeMethod_var)));
	}

IL_001b:
	{
		MethodInfo_t* L_3 = ___1_function;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_6 = ___0_target;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8077A2BB797FA6A0805F51D59F567488316A7D86)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE_RuntimeMethod_var)));
	}

IL_0039:
	{
		goto IL_0051;
	}

IL_003c:
	{
		RuntimeObject* L_9 = ___0_target;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral320772EF40302B49A179DB96BAD02224E97B4018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE_RuntimeMethod_var)));
	}

IL_0050:
	{
	}

IL_0051:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m7BBC3A3F424104A84947708ECF8EEF74707F7661 (Delegate_t* ___0_delegate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Delegate_t* L_0 = ___0_delegate;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0033;
	}

IL_0014:
	{
		RuntimeObject* L_4 = V_0;
		V_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_4, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_8;
		goto IL_0033;
	}

IL_002f:
	{
		V_3 = (bool)1;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_9 = V_3;
		return L_9;
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
// System.Void UnityEngine.Events.InvokableCall::add_Delegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_add_Delegate_m5AD40C6D21D67A44980DF3B99946C4A2F17D9A10 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___Delegate_0;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (&__this->___Delegate_0);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::remove_Delegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_remove_Delegate_mB8464CD88899199AAA70CD5EA4E02DCFB16045E1 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___Delegate_0;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (&__this->___Delegate_0);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_target;
		MethodInfo_t* L_1 = ___1_theFunction;
		BaseInvokableCall__ctor_m7633F06F55DFC3324C46A7C3DD6C55DC949FA0FE(__this, L_0, L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		RuntimeObject* L_4 = ___0_target;
		MethodInfo_t* L_5 = ___1_theFunction;
		Delegate_t* L_6;
		L_6 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_3, L_4, L_5, NULL);
		InvokableCall_add_Delegate_m5AD40C6D21D67A44980DF3B99946C4A2F17D9A10(__this, ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) 
{
	{
		BaseInvokableCall__ctor_mD64C67D6FFB881F98555408743D7BB5CA7217B39(__this, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_action;
		InvokableCall_add_Delegate_m5AD40C6D21D67A44980DF3B99946C4A2F17D9A10(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m874703DD260A64342495E79986B31EDA8D06C1F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___Delegate_0;
		bool L_1;
		L_1 = BaseInvokableCall_AllowInvoke_m7BBC3A3F424104A84947708ECF8EEF74707F7661(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = __this->___Delegate_0;
		NullCheck(L_3);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4 (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___Delegate_0;
		bool L_1;
		L_1 = BaseInvokableCall_AllowInvoke_m7BBC3A3F424104A84947708ECF8EEF74707F7661(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = __this->___Delegate_0;
		NullCheck(L_3);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_Find_mC76E5065AEEFC89956540199A4CB92E953E4B32F (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___Delegate_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		RuntimeObject* L_2 = ___0_targetObj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = __this->___Delegate_0;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_3, NULL);
		MethodInfo_t* L_5 = ___1_method;
		NullCheck(L_4);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_Target_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_targetAssemblyTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->___m_TargetAssemblyTypeName_1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->___m_Target_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = __this->___m_Target_0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		String_t* L_8;
		L_8 = UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7(L_7, NULL);
		__this->___m_TargetAssemblyTypeName_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetAssemblyTypeName_1), (void*)L_8);
	}

IL_003e:
	{
		String_t* L_9 = __this->___m_TargetAssemblyTypeName_1;
		V_1 = L_9;
		goto IL_0047;
	}

IL_0047:
	{
		String_t* L_10 = V_1;
		return L_10;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_MethodName_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Mode_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* V_0 = NULL;
	{
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_0 = __this->___m_Arguments_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PersistentCall_IsValid_mD63347854BC781710D4CC9B5FC3C3996E84A325D (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0;
		L_0 = PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_2;
		L_2 = PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088(__this, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* PersistentCall_GetRuntimeCall_m0DDE14D286D9995CCE65D2DFF27D57E4D476F072 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___0_theEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1__ctor_m216FB3B51415282D163A588AFB5A9DBEA1E53441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	bool V_2 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B10_0 = 0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* G_B15_0 = NULL;
	{
		int32_t L_0 = __this->___m_CallState_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_1 = ___0_theEvent;
		G_B3_0 = ((((RuntimeObject*)(UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		V_3 = (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)NULL;
		goto IL_0118;
	}

IL_001b:
	{
		UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_3 = ___0_theEvent;
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B(L_3, __this, NULL);
		V_0 = L_4;
		MethodInfo_t* L_5 = V_0;
		V_4 = (bool)((((RuntimeObject*)(MethodInfo_t*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		V_3 = (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)NULL;
		goto IL_0118;
	}

IL_0034:
	{
		MethodInfo_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_7, NULL);
		if (L_8)
		{
			goto IL_004a;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B10_0 = ((int32_t)(L_10));
		goto IL_004b;
	}

IL_004a:
	{
		G_B10_0 = 0;
	}

IL_004b:
	{
		V_5 = (bool)G_B10_0;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		V_3 = (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)NULL;
		goto IL_0118;
	}

IL_0058:
	{
		MethodInfo_t* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_12, NULL);
		if (L_13)
		{
			goto IL_0068;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_14;
		L_14 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(__this, NULL);
		G_B15_0 = L_14;
		goto IL_0069;
	}

IL_0068:
	{
		G_B15_0 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)(NULL));
	}

IL_0069:
	{
		V_1 = G_B15_0;
		int32_t L_15 = __this->___m_Mode_3;
		V_7 = L_15;
		int32_t L_16 = V_7;
		V_6 = L_16;
		int32_t L_17 = V_6;
		switch (L_17)
		{
			case 0:
			{
				goto IL_009b;
			}
			case 1:
			{
				goto IL_010a;
			}
			case 2:
			{
				goto IL_00a6;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_00b6;
			}
			case 5:
			{
				goto IL_00e0;
			}
			case 6:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0114;
	}

IL_009b:
	{
		UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_18 = ___0_theEvent;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_19 = V_1;
		MethodInfo_t* L_20 = V_0;
		NullCheck(L_18);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_21;
		L_21 = VirtualFuncInvoker2< BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*, RuntimeObject*, MethodInfo_t* >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_18, L_19, L_20);
		V_3 = L_21;
		goto IL_0118;
	}

IL_00a6:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_22 = V_1;
		MethodInfo_t* L_23 = V_0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_24 = __this->___m_Arguments_4;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_25;
		L_25 = PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D(L_22, L_23, L_24, NULL);
		V_3 = L_25;
		goto IL_0118;
	}

IL_00b6:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_1;
		MethodInfo_t* L_27 = V_0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_28 = __this->___m_Arguments_4;
		NullCheck(L_28);
		float L_29;
		L_29 = ArgumentCache_get_floatArgument_mDED33C174CAD9DFAD58F9D6DF482557C0FC20D38(L_28, NULL);
		CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3* L_30 = (CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3*)il2cpp_codegen_object_new(CachedInvokableCall_1_t2FC1002B91116AD8AB2525F411DC8061D81F80B3_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747(L_30, L_26, L_27, L_29, CachedInvokableCall_1__ctor_m4031E35078A01C0BCD2E980EBEE23E870342E747_RuntimeMethod_var);
		V_3 = L_30;
		goto IL_0118;
	}

IL_00cb:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31 = V_1;
		MethodInfo_t* L_32 = V_0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_33 = __this->___m_Arguments_4;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = ArgumentCache_get_intArgument_m7515338C0F3B5843E40CC48C303D2EFC02D9C19C(L_33, NULL);
		CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78* L_35 = (CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78*)il2cpp_codegen_object_new(CachedInvokableCall_1_tE64D24ECC6AD70F20E35AAC2B531638C13F00B78_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F(L_35, L_31, L_32, L_34, CachedInvokableCall_1__ctor_mC62857E2652075F34C48434BFBCE2E6D3F1CBC6F_RuntimeMethod_var);
		V_3 = L_35;
		goto IL_0118;
	}

IL_00e0:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36 = V_1;
		MethodInfo_t* L_37 = V_0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_38 = __this->___m_Arguments_4;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = ArgumentCache_get_stringArgument_m4CA65BC60FC1FDCE88779C009ED0E1DC4BED2D9A(L_38, NULL);
		CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9* L_40 = (CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9*)il2cpp_codegen_object_new(CachedInvokableCall_1_t40C751523D07EED492FFA70277C6D93DC35A66E9_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		CachedInvokableCall_1__ctor_m216FB3B51415282D163A588AFB5A9DBEA1E53441(L_40, L_36, L_37, L_39, CachedInvokableCall_1__ctor_m216FB3B51415282D163A588AFB5A9DBEA1E53441_RuntimeMethod_var);
		V_3 = L_40;
		goto IL_0118;
	}

IL_00f5:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_41 = V_1;
		MethodInfo_t* L_42 = V_0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_43 = __this->___m_Arguments_4;
		NullCheck(L_43);
		bool L_44;
		L_44 = ArgumentCache_get_boolArgument_mB7A56994202FCB50BA04A6DBED9BAC45871F700A(L_43, NULL);
		CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD* L_45 = (CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD*)il2cpp_codegen_object_new(CachedInvokableCall_1_tE59A162B981CFC4B5B83BE3895753C405E91AAAD_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30(L_45, L_41, L_42, L_44, CachedInvokableCall_1__ctor_m2A37B31AE00086870D17CA59B53475687B2B1F30_RuntimeMethod_var);
		V_3 = L_45;
		goto IL_0118;
	}

IL_010a:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_46 = V_1;
		MethodInfo_t* L_47 = V_0;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_48 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464(L_48, L_46, L_47, NULL);
		V_3 = L_48;
		goto IL_0118;
	}

IL_0114:
	{
		V_3 = (BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)NULL;
		goto IL_0118;
	}

IL_0118:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_49 = V_3;
		return L_49;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, MethodInfo_t* ___1_method, ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* ___2_arguments, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CachedInvokableCall_1_tF82F436972A0498B8E9DAE131D41D3C65358F5CD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_3 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_7 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_2 = ___2_arguments;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_6 = ___2_arguments;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = il2cpp_codegen_get_type(L_7, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, PersistentCall_GetObjectCall_mF7C9F7A24733E6B440637285FF76AF47AFDD021D_RuntimeMethod_var);
		Type_t* L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_003a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		G_B3_0 = L_11;
	}

IL_003a:
	{
		V_0 = G_B3_0;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (CachedInvokableCall_1_tF82F436972A0498B8E9DAE131D41D3C65358F5CD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		V_1 = L_13;
		Type_t* L_14 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = L_15;
		Type_t* L_17 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_17);
		NullCheck(L_14);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(118 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_14, L_16);
		V_2 = L_18;
		Type_t* L_19 = V_2;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = L_20;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_23);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_21;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (MethodInfo_t_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_26);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_24;
		Type_t* L_28 = V_0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_28);
		NullCheck(L_19);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_29;
		L_29 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_19, L_27, NULL);
		V_3 = L_29;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_30 = ___2_arguments;
		NullCheck(L_30);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31;
		L_31 = ArgumentCache_get_unityObjectArgument_mEA22BE8C25CDC789963C2DABF068E88147A66C69(L_30, NULL);
		V_4 = L_31;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_32 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_00a6;
		}
	}
	{
		Type_t* L_34 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_35 = V_4;
		NullCheck(L_35);
		Type_t* L_36;
		L_36 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_35, NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_34, L_36);
		G_B7_0 = ((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B7_0 = 0;
	}

IL_00a7:
	{
		V_6 = (bool)G_B7_0;
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_00b0;
		}
	}
	{
		V_4 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
	}

IL_00b0:
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_39 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_40;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_42 = ___0_target;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_42);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_41;
		MethodInfo_t* L_44 = ___1_method;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_44);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_43;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_46);
		NullCheck(L_39);
		RuntimeObject* L_47;
		L_47 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_39, L_45, NULL);
		V_7 = ((BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)IsInstClass((RuntimeObject*)L_47, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339_il2cpp_TypeInfo_var));
		goto IL_00d2;
	}

IL_00d2:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_48 = V_7;
		return L_48;
	}
}
// System.Void UnityEngine.Events.PersistentCall::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCall_OnBeforeSerialize_mD36FE363489E1A7C338AC7392F0DA13094825872 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_TargetAssemblyTypeName_1;
		String_t* L_1;
		L_1 = UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7(L_0, NULL);
		__this->___m_TargetAssemblyTypeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetAssemblyTypeName_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCall::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCall_OnAfterDeserialize_m52A9B0536D334B3C89A0A9E4D923AA212201F485 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_TargetAssemblyTypeName_1;
		String_t* L_1;
		L_1 = UnityEventTools_TidyAssemblyTypeName_m744218193DC58EB2F113300DDE351170683797F7(L_0, NULL);
		__this->___m_TargetAssemblyTypeName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TargetAssemblyTypeName_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCall__ctor_m6EE5F241C45D97046ECAFCF45FB0DE96E7827142 (PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_Mode_3 = 0;
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_0 = (ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D*)il2cpp_codegen_object_new(ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArgumentCache__ctor_m8410B763CA027E30237E5954888A7F508800A331(L_0, NULL);
		__this->___m_Arguments_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Arguments_4), (void*)L_0);
		__this->___m_CallState_5 = 2;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t1EC718175613632CD4775345600304230E9A83DF* L_0 = (List_1_t1EC718175613632CD4775345600304230E9A83DF*)il2cpp_codegen_object_new(List_1_t1EC718175613632CD4775345600304230E9A83DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2(L_0, List_1__ctor_m4F00C44EA0380F628F874E843EF973905C05E2C2_RuntimeMethod_var);
		__this->___m_Calls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Calls_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* __this, InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___0_invokableList, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___1_unityEventBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* V_1 = NULL;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t1EC718175613632CD4775345600304230E9A83DF* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		Enumerator_tA2BA94CFC1C74A74D61FECF814D901AEAAE4BFA9 L_1;
		L_1 = List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924(L_0, List_1_GetEnumerator_mD74B7A44A8EC40E059B9CFF3B29DC3F6BF6C4924_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97((&V_0), Enumerator_Dispose_m56B864557E6F08E5A86D6836F6AB82841715AB97_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_0010_1:
			{
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_2;
				L_2 = Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_inline((&V_0), Enumerator_get_Current_mBF1F6446251FA06D6E25CF0E23E802D0586BA020_RuntimeMethod_var);
				V_1 = L_2;
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_3 = V_1;
				NullCheck(L_3);
				bool L_4;
				L_4 = PersistentCall_IsValid_mD63347854BC781710D4CC9B5FC3C3996E84A325D(L_3, NULL);
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0043_1;
			}

IL_0028_1:
			{
				PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_6 = V_1;
				UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* L_7 = ___1_unityEventBase;
				NullCheck(L_6);
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_8;
				L_8 = PersistentCall_GetRuntimeCall_m0DDE14D286D9995CCE65D2DFF27D57E4D476F072(L_6, L_7, NULL);
				V_2 = L_8;
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9 = V_2;
				V_4 = (bool)((!(((RuntimeObject*)(BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_11 = ___0_invokableList;
				BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_12 = V_2;
				NullCheck(L_11);
				InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1(L_11, L_12, NULL);
			}

IL_0042_1:
			{
			}

IL_0043_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007((&V_0), Enumerator_MoveNext_m974E4B176EED3974261571D8D323B9C758CF6007_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
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
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddPersistentInvokableCall_mFB82EE201D90D84E0E25934EA879067BD666C0C1 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_PersistentCalls_0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_0, L_1, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_RuntimeCalls_1;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_0, L_1, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_0, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		V_0 = L_0;
		V_2 = 0;
		goto IL_003b;
	}

IL_000b:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = __this->___m_RuntimeCalls_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		RuntimeObject* L_4 = ___0_targetObj;
		MethodInfo_t* L_5 = ___1_method;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, RuntimeObject*, MethodInfo_t* >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_8 = V_0;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_9 = __this->___m_RuntimeCalls_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_11;
		L_11 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_9, L_10, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_inline(L_8, L_11, List_1_Add_mE8C9DBF42FFBF23E98D07CC92A82777A0840B5AD_RuntimeMethod_var);
	}

IL_0036:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003b:
	{
		int32_t L_13 = V_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_14 = __this->___m_RuntimeCalls_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_14, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_17 = __this->___m_RuntimeCalls_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_18 = V_0;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_19 = L_18;
		Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55* L_20 = (Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55*)il2cpp_codegen_object_new(Predicate_1_t6F78EB768ADC7C118AD7254414DA44D4F6B69E55_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Predicate_1__ctor_m1D0E12B18D9105FB553B42DAD351E9AD017B9E9B(L_20, L_19, (intptr_t)((void*)GetVirtualMethodInfo(L_19, 13)), NULL);
		NullCheck(L_17);
		int32_t L_21;
		L_21 = List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30(L_17, L_20, List_1_RemoveAll_m5411A629E03E3C36C002C5BE2CAFE5E82F6F9B30_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_22 = __this->___m_PersistentCalls_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_22, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_24 = __this->___m_RuntimeCalls_1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_24, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_26 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7(L_26, ((int32_t)il2cpp_codegen_add(L_23, L_25)), List_1__ctor_mA457A1677905C83AD674D55C89B663B126D8F0C7_RuntimeMethod_var);
		V_1 = L_26;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_27 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_28 = __this->___m_PersistentCalls_0;
		NullCheck(L_27);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_27, L_28, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_29 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_30 = __this->___m_RuntimeCalls_1;
		NullCheck(L_29);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_29, L_30, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_31 = V_1;
		__this->___m_ExecutingCalls_2 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_31);
		__this->___m_NeedsUpdate_3 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = __this->___m_PersistentCalls_0;
		NullCheck(L_0);
		List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline(L_0, List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = __this->___m_RuntimeCalls_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53(L_2, L_1, List_1__ctor_mDB467FD8BAC40A706631A0CEE456876DC4287A53_RuntimeMethod_var);
		V_0 = L_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_3 = V_0;
		__this->___m_ExecutingCalls_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_3);
		__this->___m_NeedsUpdate_3 = (bool)0;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301 (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_1 = NULL;
	{
		bool L_0 = __this->___m_NeedsUpdate_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = __this->___m_ExecutingCalls_2;
		NullCheck(L_2);
		List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_inline(L_2, List_1_Clear_m3B1397CA37D9F44625CC7581B86878E36C1F8CCF_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_3 = __this->___m_ExecutingCalls_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_4 = __this->___m_PersistentCalls_0;
		NullCheck(L_3);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_3, L_4, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_5 = __this->___m_ExecutingCalls_2;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_6 = __this->___m_RuntimeCalls_1;
		NullCheck(L_5);
		List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310(L_5, L_6, List_1_AddRange_mEE901CF1CB1960A473DF974649B2DED39D042310_RuntimeMethod_var);
		__this->___m_NeedsUpdate_3 = (bool)0;
	}

IL_0044:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = __this->___m_ExecutingCalls_2;
		V_1 = L_7;
		goto IL_004d;
	}

IL_004d:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_0, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_PersistentCalls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PersistentCalls_0), (void*)L_0);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_1, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_RuntimeCalls_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RuntimeCalls_1), (void*)L_1);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = (List_1_t91E36549D76184780FD8995722CD4A87A2650C23*)il2cpp_codegen_object_new(List_1_t91E36549D76184780FD8995722CD4A87A2650C23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2(L_2, List_1__ctor_m129E12208E5380D6A539DF3F4E35BE1D85E9DCE2_RuntimeMethod_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExecutingCalls_2), (void*)L_2);
		__this->___m_NeedsUpdate_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_CallsDirty_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = (InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382*)il2cpp_codegen_object_new(InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InvokableCallList__ctor_mE70F25915B775E7258A12670B76C7F7B3C36BF1A(L_0, NULL);
		__this->___m_Calls_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Calls_0), (void*)L_0);
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_1 = (PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25*)il2cpp_codegen_object_new(PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PersistentCallGroup__ctor_m1B17318026E3D419B2C194F66882E3BED6C4200A(L_1, NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PersistentCalls_1), (void*)L_1);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_mC47C72ED57A467E299925019E7DB9645D0F631F9 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m835BA25C9F342C93FB9DF774C0894A82C4F049CB (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF(__this, NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* ___0_call, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	bool V_2 = false;
	MethodInfo_t* V_3 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B7_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_2 = ___0_call;
		NullCheck(L_2);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_3;
		L_3 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_3, NULL);
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_7 = ___0_call;
		NullCheck(L_7);
		ArgumentCache_t30F5878E7190B37456E045E039655C33EB27FF1D* L_8;
		L_8 = PersistentCall_get_arguments_mA3B29A1F4E7328523674ADC6FC0C7332BA053410(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m85640B88D8DA790019005A4ADD948E036ED79694(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = il2cpp_codegen_get_type(L_9, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		Type_t* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0042;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		G_B3_0 = L_13;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_14 = ___0_call;
		NullCheck(L_14);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_15;
		L_15 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_005f;
		}
	}
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_17 = ___0_call;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = PersistentCall_get_targetAssemblyTypeName_m303DE56BDE5CD469D0210E1EA73F54B4C88228BE(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = il2cpp_codegen_get_type(L_18, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, UnityEventBase_FindMethod_m0B00339CC16B63CF1C50714D018A87948FC0B23B_RuntimeMethod_var);
		G_B7_0 = L_19;
		goto IL_006a;
	}

IL_005f:
	{
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_20 = ___0_call;
		NullCheck(L_20);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_21;
		L_21 = PersistentCall_get_target_mA12C3C9A21F6F5335761CB0EB3C7C965D8C393AE(L_20, NULL);
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_21, NULL);
		G_B7_0 = L_22;
	}

IL_006a:
	{
		V_1 = G_B7_0;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_23 = ___0_call;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = PersistentCall_get_methodName_mFD7F88289C9EF5DE6D7EFD3FEF1A5C640CBAF088(L_23, NULL);
		Type_t* L_25 = V_1;
		PersistentCall_tECEBF49ED60D3AEE696FCCDB50DA03C1A9EBD5AF* L_26 = ___0_call;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = PersistentCall_get_mode_m3FFA4D4FC3DA0C38106323CD33ABBFA53ED01928(L_26, NULL);
		Type_t* L_28 = V_0;
		MethodInfo_t* L_29;
		L_29 = UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B(__this, L_24, L_25, L_27, L_28, NULL);
		V_3 = L_29;
		goto IL_0082;
	}

IL_0082:
	{
		MethodInfo_t* L_30 = V_3;
		return L_30;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Type,UnityEngine.Events.PersistentListenerMode,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_FindMethod_mE417FEA28EC49921FA28EBDAB1214B0E6EC7E91B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, String_t* ___0_name, Type_t* ___1_listenerType, int32_t ___2_mode, Type_t* ___3_argumentType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfo_t* V_2 = NULL;
	Type_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B10_3 = NULL;
	String_t* G_B10_4 = NULL;
	Type_t* G_B10_5 = NULL;
	Type_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	Type_t* G_B9_5 = NULL;
	{
		int32_t L_0 = ___2_mode;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_00c1;
			}
			case 3:
			{
				goto IL_006a;
			}
			case 4:
			{
				goto IL_004d;
			}
			case 5:
			{
				goto IL_00a4;
			}
			case 6:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_00e4;
	}

IL_002c:
	{
		String_t* L_3 = ___0_name;
		Type_t* L_4 = ___1_listenerType;
		MethodInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< MethodInfo_t*, String_t*, Type_t* >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Type) */, __this, L_3, L_4);
		V_2 = L_5;
		goto IL_00e8;
	}

IL_003a:
	{
		Type_t* L_6 = ___1_listenerType;
		String_t* L_7 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t* L_9;
		L_9 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_6, L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_00e8;
	}

IL_004d:
	{
		Type_t* L_10 = ___1_listenerType;
		String_t* L_11 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_12;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_15);
		MethodInfo_t* L_16;
		L_16 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_10, L_11, L_13, NULL);
		V_2 = L_16;
		goto IL_00e8;
	}

IL_006a:
	{
		Type_t* L_17 = ___1_listenerType;
		String_t* L_18 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_22);
		MethodInfo_t* L_23;
		L_23 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_17, L_18, L_20, NULL);
		V_2 = L_23;
		goto IL_00e8;
	}

IL_0087:
	{
		Type_t* L_24 = ___1_listenerType;
		String_t* L_25 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_26 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_26;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_29);
		MethodInfo_t* L_30;
		L_30 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_24, L_25, L_27, NULL);
		V_2 = L_30;
		goto IL_00e8;
	}

IL_00a4:
	{
		Type_t* L_31 = ___1_listenerType;
		String_t* L_32 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_33;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_36);
		MethodInfo_t* L_37;
		L_37 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_31, L_32, L_34, NULL);
		V_2 = L_37;
		goto IL_00e8;
	}

IL_00c1:
	{
		Type_t* L_38 = ___1_listenerType;
		String_t* L_39 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_41 = L_40;
		Type_t* L_42 = ___3_argumentType;
		Type_t* L_43 = L_42;
		G_B9_0 = L_43;
		G_B9_1 = 0;
		G_B9_2 = L_41;
		G_B9_3 = L_41;
		G_B9_4 = L_39;
		G_B9_5 = L_38;
		if (L_43)
		{
			G_B10_0 = L_43;
			G_B10_1 = 0;
			G_B10_2 = L_41;
			G_B10_3 = L_41;
			G_B10_4 = L_39;
			G_B10_5 = L_38;
			goto IL_00db;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		G_B10_0 = L_45;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00db:
	{
		NullCheck(G_B10_2);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (Type_t*)G_B10_0);
		MethodInfo_t* L_46;
		L_46 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(G_B10_5, G_B10_4, G_B10_3, NULL);
		V_2 = L_46;
		goto IL_00e8;
	}

IL_00e4:
	{
		V_2 = (MethodInfo_t*)NULL;
		goto IL_00e8;
	}

IL_00e8:
	{
		MethodInfo_t* L_47 = V_2;
		return L_47;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_DirtyPersistentCalls_m356D77B4849FC63501507E4D3F1054BD86D6B1CF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m9A776CBBC13667875F1765B32B469BC12AFD4192(L_0, NULL);
		__this->___m_CallsDirty_2 = (bool)1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_CallsDirty_2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* L_2 = __this->___m_PersistentCalls_1;
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_3 = __this->___m_Calls_0;
		NullCheck(L_2);
		PersistentCallGroup_Initialize_m937649041F14D0D20F959B07BA099246EC32BCCB(L_2, L_3, __this, NULL);
		__this->___m_CallsDirty_2 = (bool)0;
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* ___0_call, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1 = ___0_call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m279B8BAED30DA27C305ADDF241F05CD2BC59625A(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mFF8F8FAD5F18BA872C3CE005DC134B6828E1AD3B (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, RuntimeObject* ___0_targetObj, MethodInfo_t* ___1_method, const RuntimeMethod* method) 
{
	{
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		RuntimeObject* L_1 = ___0_targetObj;
		MethodInfo_t* L_2 = ___1_method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m5C78FE9ECE5990F29636216E879139D5863F36C8(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t91E36549D76184780FD8995722CD4A87A2650C23* UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m981B8A6658A88F620345D2C7F4ADCD0D788B0266(__this, NULL);
		InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* L_0 = __this->___m_Calls_0;
		NullCheck(L_0);
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1;
		L_1 = InvokableCallList_PrepareInvoke_m0CF5EBCDF4913AFC13CBE09F6CFB687D0F771301(L_0, NULL);
		V_0 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityEventBase_ToString_mE86F29D699C7537CACCAF3945F797EE659CE6522 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F(__this, NULL);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_2, NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Type,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD (Type_t* ___0_objectType, String_t* ___1_functionName, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___2_argumentTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* V_7 = NULL;
	Type_t* V_8 = NULL;
	Type_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	MethodInfo_t* V_12 = NULL;
	bool V_13 = false;
	int32_t G_B14_0 = 0;
	{
		goto IL_0091;
	}

IL_0006:
	{
		Type_t* L_0 = ___0_objectType;
		String_t* L_1 = ___1_functionName;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___2_argumentTypes;
		NullCheck(L_0);
		MethodInfo_t* L_3;
		L_3 = Type_GetMethod_mF3AF3FA3834D7F99592A4CA715FFD2DE12291562(L_0, L_1, ((int32_t)60), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_2, (ParameterModifierU5BU5D_t685261AD991B1E6582A0E53243DEE3B745E13364*)NULL, NULL);
		V_0 = L_3;
		MethodInfo_t* L_4 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(MethodInfo_t*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfo_t* L_6 = V_0;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_2 = L_7;
		V_3 = (bool)1;
		V_4 = 0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		goto IL_0073;
	}

IL_0032:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = ___2_argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_8 = L_16;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_17 = V_7;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_17);
		V_9 = L_18;
		Type_t* L_19 = V_8;
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_19, NULL);
		Type_t* L_21 = V_9;
		NullCheck(L_21);
		bool L_22;
		L_22 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_21, NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_3;
		V_10 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_10;
		if (!L_24)
		{
			goto IL_0066;
		}
	}
	{
		goto IL_007b;
	}

IL_0066:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0073:
	{
		int32_t L_27 = V_6;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_28 = V_5;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0032;
		}
	}

IL_007b:
	{
		bool L_29 = V_3;
		V_11 = L_29;
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t* L_31 = V_0;
		V_12 = L_31;
		goto IL_00b3;
	}

IL_0087:
	{
	}

IL_0088:
	{
		Type_t* L_32 = ___0_objectType;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = VirtualFuncInvoker0< Type_t* >::Invoke(108 /* System.Type System.Type::get_BaseType() */, L_32);
		___0_objectType = L_33;
	}

IL_0091:
	{
		Type_t* L_34 = ___0_objectType;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		if ((((RuntimeObject*)(Type_t*)L_34) == ((RuntimeObject*)(Type_t*)L_36)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t* L_37 = ___0_objectType;
		G_B14_0 = ((!(((RuntimeObject*)(Type_t*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B14_0 = 0;
	}

IL_00a5:
	{
		V_13 = (bool)G_B14_0;
		bool L_38 = V_13;
		if (L_38)
		{
			goto IL_0006;
		}
	}
	{
		V_12 = (MethodInfo_t*)NULL;
		goto IL_00b3;
	}

IL_00b3:
	{
		MethodInfo_t* L_39 = V_12;
		return L_39;
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
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* currentDelegate = reinterpret_cast<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenInst(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_Multicast;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_InvokeArray_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		UnityEventBase__ctor_mB1F958EAC1A7C4B31253F2E1FED173A628725DEC(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) 
{
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_call;
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_1;
		L_1 = UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8(L_0, NULL);
		UnityEventBase_AddCall_mA78C058ED530789A28F42347B653190FEC84DBBC(__this, L_1, NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* UnityEvent_FindMethod_Impl_m62E3D2795BACFF1BA2ED6A431ABD5FB2C7D3D681 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, String_t* ___0_name, Type_t* ___1_targetObjType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	{
		Type_t* L_0 = ___1_targetObjType;
		String_t* L_1 = ___0_name;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		MethodInfo_t* L_3;
		L_3 = UnityEventBase_GetValidMethodInfo_mCFA9547C470F2F90619A1514108BCE0F49F9B0CD(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		MethodInfo_t* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_m6665C6282D3668BC57F2702FD0C3B108F4CFD226 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, RuntimeObject* ___0_target, MethodInfo_t* ___1_theFunction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		MethodInfo_t* L_1 = ___1_theFunction;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_2 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvokableCall__ctor_mF3F94B432C977EE2DE7834EC2936E90D271C0464(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* UnityEvent_GetDelegate_mBD5D37CFB826CB3329477A509A62BF7CE26A9EF8 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_0 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = ___0_action;
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_1 = (InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)il2cpp_codegen_object_new(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InvokableCall__ctor_m4FA1428E3A33219B2C8C5C571A705AC6B862FA70(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t91E36549D76184780FD8995722CD4A87A2650C23* V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_0;
		L_0 = UnityEventBase_PrepareInvoke_m4D04FA5D7025C093047DCD3DFEEFB9DF48764FC2(__this, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0089;
	}

IL_000c:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_3;
		L_3 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_1, L_2, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_2 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_3, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_6 = V_2;
		NullCheck(L_6);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_6, NULL);
		goto IL_0084;
	}

IL_002b:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_9;
		L_9 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_7, L_8, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_4 = ((InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)IsInstClass((RuntimeObject*)L_9, InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122_il2cpp_TypeInfo_var));
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_10 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		InvokableCall_t8481C00D3B38904F5B77ACEA2ABAE6AC119D4122* L_12 = V_4;
		NullCheck(L_12);
		InvokableCall_Invoke_m6F4828FD2B3E3BBB7AA6EECC2C37FB08538363F4(L_12, NULL);
		goto IL_0083;
	}

IL_004f:
	{
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_15;
		L_15 = List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279(L_13, L_14, List_1_get_Item_m2B51DFE114B7ED5612ABA800B8165A60BACE1279_RuntimeMethod_var);
		V_6 = L_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___m_InvokeArray_3;
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_InvokeArray_3 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InvokeArray_3), (void*)L_18);
	}

IL_0074:
	{
		BaseInvokableCall_tB912356039B1D3806B23DFBC7E9CFA1BCC82F339* L_19 = V_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->___m_InvokeArray_3;
		NullCheck(L_19);
		VirtualActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_19, L_20);
	}

IL_0083:
	{
	}

IL_0084:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0089:
	{
		int32_t L_22 = V_1;
		List_1_t91E36549D76184780FD8995722CD4A87A2650C23* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_inline(L_23, List_1_get_Count_mD86BEA5DB3090332216B9FA14BD79A4E5247614B_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_22) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_000c;
		}
	}
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
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_back(const PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystemInternal': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystemInternal
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_com_cleanup(PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_back(const PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F& unmarshaled)
{
	Exception_t* ___type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'PlayerLoopSystem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.LowLevel.PlayerLoopSystem
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_com_cleanup(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.LowLevel.PlayerLoopSystem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0 (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___type_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayerLoopSystem_ToString_m259B8533D2C64C15D381B16F32C710A0018684A0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* currentDelegate = reinterpret_cast<UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenInst(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4 (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B_Multicast;
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_m9BCEE4E5BEE924EB804DA64314B78D0E831C179B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
