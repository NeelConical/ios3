#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// AndroidShare
struct AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// INativeShare
struct INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED;
// IosShare
struct IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// TestShare
struct TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// TestShare/<takeMultipleScreenshotAndSave>d__5
struct U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6;
// TestShare/<takeScreenshotAndSave>d__4
struct U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00457DC730F29479DCF3C831E96D0B44D4D9FFEF;
IL2CPP_EXTERN_C String_t* _stringLiteral0B2C21C861FE979F286143E349A8A705D52379B5;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2B22D77A4A232EFC1337C2D8FA179C035F938E;
IL2CPP_EXTERN_C String_t* _stringLiteral33B25DEABB68F89ACA47FAEDFBB43396CAF1949C;
IL2CPP_EXTERN_C String_t* _stringLiteral462464BE4AA7B2537162046319847622EB2E91A3;
IL2CPP_EXTERN_C String_t* _stringLiteral4884E341D26A2DEAD17A1D31C7996A39A4275DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral496BA3585DD3BB11DC36F1536C6708C7F5D2DFD7;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE2B0036E20406FFEBCAC1629FB9EC2B6DF740E;
IL2CPP_EXTERN_C String_t* _stringLiteral505333A35EC164FFAFDD5AB028BFE6C5A9A58382;
IL2CPP_EXTERN_C String_t* _stringLiteral55660B2299B194045AAB130BDC655F4E55339BC6;
IL2CPP_EXTERN_C String_t* _stringLiteral60BC098865036DAC85769523D873A2D529E84B2F;
IL2CPP_EXTERN_C String_t* _stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral704FE4C1C20548241129E014E18A7ACD41B42E3D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE;
IL2CPP_EXTERN_C String_t* _stringLiteral90238D58BA003CD4FFA5B10AFDDB4BFBF7C65EFA;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9D75C3424EE53414678BAD3B6C52692B37367C;
IL2CPP_EXTERN_C String_t* _stringLiteralA220A22C5FAAB625E013DB9D2FE393F2A347F292;
IL2CPP_EXTERN_C String_t* _stringLiteralB711CD804BFE28E6E1D3AA80288BF0802F62CD76;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF636682AD9D5689A6E8551505B81046BBCFFE14B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_Collections_IEnumerator_Reset_mCD4ECE31423C293E2015911F8E7D546AB7003259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_m89A0CB0315A799C92EF5046AF158CA39A3D8D4DD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TestShare/<takeMultipleScreenshotAndSave>d__5
struct U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6  : public RuntimeObject
{
	// System.Int32 TestShare/<takeMultipleScreenshotAndSave>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestShare/<takeMultipleScreenshotAndSave>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TestShare TestShare/<takeMultipleScreenshotAndSave>d__5::<>4__this
	TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* ___U3CU3E4__this_2;
	// UnityEngine.Texture2D TestShare/<takeMultipleScreenshotAndSave>d__5::<screenImage>5__1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CscreenImageU3E5__1_3;
	// System.Byte[] TestShare/<takeMultipleScreenshotAndSave>d__5::<imageBytes>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CimageBytesU3E5__2_4;
	// System.String TestShare/<takeMultipleScreenshotAndSave>d__5::<img_name1>5__3
	String_t* ___U3Cimg_name1U3E5__3_5;
	// System.String TestShare/<takeMultipleScreenshotAndSave>d__5::<destination_path1>5__4
	String_t* ___U3Cdestination_path1U3E5__4_6;
	// System.String TestShare/<takeMultipleScreenshotAndSave>d__5::<img_name2>5__5
	String_t* ___U3Cimg_name2U3E5__5_7;
	// System.String TestShare/<takeMultipleScreenshotAndSave>d__5::<destination_path2>5__6
	String_t* ___U3Cdestination_path2U3E5__6_8;
	// System.String[] TestShare/<takeMultipleScreenshotAndSave>d__5::<listOfPaths>5__7
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3ClistOfPathsU3E5__7_9;
};

// TestShare/<takeScreenshotAndSave>d__4
struct U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289  : public RuntimeObject
{
	// System.Int32 TestShare/<takeScreenshotAndSave>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TestShare/<takeScreenshotAndSave>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TestShare TestShare/<takeScreenshotAndSave>d__4::<>4__this
	TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* ___U3CU3E4__this_2;
	// UnityEngine.Texture2D TestShare/<takeScreenshotAndSave>d__4::<screenImage>5__1
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CscreenImageU3E5__1_3;
	// System.Byte[] TestShare/<takeScreenshotAndSave>d__4::<imageBytes>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CimageBytesU3E5__2_4;
	// System.String TestShare/<takeScreenshotAndSave>d__4::<img_name>5__3
	String_t* ___U3Cimg_nameU3E5__3_5;
	// System.String TestShare/<takeScreenshotAndSave>d__4::<destination_path>5__4
	String_t* ___U3Cdestination_pathU3E5__4_6;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AndroidShare
struct AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// IosShare
struct IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// INativeShare NativeShare::_nativeShare
	RuntimeObject* ____nativeShare_10;
};

// TestShare
struct TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeShare TestShare::_nativeShare
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* ____nativeShare_4;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// TestShare/<takeMultipleScreenshotAndSave>d__5

// TestShare/<takeMultipleScreenshotAndSave>d__5

// TestShare/<takeScreenshotAndSave>d__4

// TestShare/<takeScreenshotAndSave>d__4

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AndroidShare
struct AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields
{
	// UnityEngine.AndroidJavaObject AndroidShare::_share
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____share_4;
};

// AndroidShare

// IosShare

// IosShare

// NativeShare
struct NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields
{
	// System.String NativeShare::TYPE_VIDEO
	String_t* ___TYPE_VIDEO_4;
	// System.String NativeShare::TYPE_AUDIO
	String_t* ___TYPE_AUDIO_5;
	// System.String NativeShare::TYPE_IMAGE
	String_t* ___TYPE_IMAGE_6;
	// System.String NativeShare::TYPE_FILE
	String_t* ___TYPE_FILE_7;
	// System.String NativeShare::TYPE_PDF
	String_t* ___TYPE_PDF_8;
	// System.String NativeShare::fileProviderName
	String_t* ___fileProviderName_9;
	// NativeShare NativeShare::instance
	NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* ___instance_11;
};

// NativeShare

// TestShare

// TestShare
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;

// System.Void AndroidShare::SetUpShare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void AndroidShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_ShareMultipleFileOfSameType_mB0799A7BFF6FFF1E125A1AF0192FC4D68D4142BC (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 IosShare::_shareFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IosShare__shareFile_mE294B9604F1F2739B141B064D258F9AB60236B08 (String_t* ___0_path, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Int32 IosShare::_shareText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IosShare__shareText_m802B91E213FEEAE96832B859C9C2F901CD546281 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.String IosShare::GenerateBigString(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosShare_GenerateBigString_mFE96DB178EF42B67BB7ACEAE1144BB2AE2F2CE02 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_pathList, const RuntimeMethod* method) ;
// System.Void IosShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare_ShareMultipleFileOfSameType_mB7C833FADA177F0B59B9BDB4D1F0656C3DF788C4 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean NativeShare::IsItAndroidPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_IsItAndroidPlatform_m584A414EC6A01C4D80FC67F5BBC14DB4C31324B8 (const RuntimeMethod* method) ;
// System.Void AndroidShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare__ctor_m53E4A3596BC9AB276D768898B5EC05D38ADC6CD4 (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, const RuntimeMethod* method) ;
// System.Boolean NativeShare::IsItIosPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_IsItIosPlatform_m27D339142DB8695E31182E85B18CF8E81BDE5506 (const RuntimeMethod* method) ;
// System.Void IosShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare__ctor_mCD89E3AE7D960662AD353D515C9E668223F89254 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TestShare::takeScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestShare_takeScreenshotAndSave_mA5B4F9E7351115923F82B670017F253F631899BB (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TestShare::takeMultipleScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestShare_takeMultipleScreenshotAndSave_mA953E8953404511F8FF660E495B5943E059C5DBE (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) ;
// System.Void TestShare/<takeScreenshotAndSave>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenshotAndSaveU3Ed__4__ctor_m7C334710D46BC59C5B2BEBCBA46C3F16BA352693 (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TestShare/<takeMultipleScreenshotAndSave>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeMultipleScreenshotAndSaveU3Ed__5__ctor_m3052C49098F509941F052F77E0D004A68AA34290 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void NativeShare::ShareSingleFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareSingleFile_mBF7B7167E8C23DB4CB879246EE37A1AF1CA267EC (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) ;
// System.Void NativeShare::ShareText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareText_m76EBFCE6F12312CA7475919D2A1C788D3EFD5578 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_message, String_t* ___1_shareDialogTitle, const RuntimeMethod* method) ;
// System.Void NativeShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareMultipleFileOfSameType_m540C7AA09E51841C1A822E271F95ED4566C9A39D (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.Void TestShare::shareScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_shareScreenshot_mA237B408634B0B0E85722C1F0F13F1B70F697A95 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void TestShare::shareMultipleFileOfSameType(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_shareMultipleFileOfSameType_m8C7A82AB280CF608E08C08B0441A265504D82F88 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_listOfPaths, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _shareText(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _shareFile(char*, char*);
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
// System.Void AndroidShare::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_Start_mC256B218B55201BAC5E7E5ED05E0AE95514685FA (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, const RuntimeMethod* method) 
{
	{
		// SetUpShare();
		AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE(NULL);
		// }
		return;
	}
}
// System.Void AndroidShare::SetUpShare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA220A22C5FAAB625E013DB9D2FE393F2A347F292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB711CD804BFE28E6E1D3AA80288BF0802F62CD76);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_share == null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4;
		V_0 = (bool)((((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// _share = new AndroidJavaObject("com.SmileSoft.unityplugin.Share.ShareFragment");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteralB711CD804BFE28E6E1D3AA80288BF0802F62CD76, L_2, NULL);
		((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4), (void*)L_3);
		// _share.Call("SetUp", NativeShare.fileProviderName);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		String_t* L_7 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___fileProviderName_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteralA220A22C5FAAB625E013DB9D2FE393F2A347F292, L_6, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void AndroidShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_ShareMultipleFileOfSameType_mB0799A7BFF6FFF1E125A1AF0192FC4D68D4142BC (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9D75C3424EE53414678BAD3B6C52692B37367C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetUpShare();
		AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE(NULL);
		// _share.Call("ShareMultipleFileOfSameFileType", path, fileType, message, shareDialogTitle);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___0_path;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_fileType;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_message;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___3_shareDialogTitle;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral9B9D75C3424EE53414678BAD3B6C52692B37367C, L_8, NULL);
		// }
		return;
	}
}
// System.Void AndroidShare::ShareSingleFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_ShareSingleFile_m563FDB1924F585F0D475D3CF390F6F95B43B1687 (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, String_t* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704FE4C1C20548241129E014E18A7ACD41B42E3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetUpShare();
		AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE(NULL);
		// _share.Call("ShareSingleFile", path, fileType, message, shareDialogTitle);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_path;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_fileType;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_message;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___3_shareDialogTitle;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral704FE4C1C20548241129E014E18A7ACD41B42E3D, L_8, NULL);
		// }
		return;
	}
}
// System.Void AndroidShare::ShareText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_ShareText_m5CE22BBE8AA5998A206632CAD6A60BF7B428A402 (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, String_t* ___0_message, String_t* ___1_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2B22D77A4A232EFC1337C2D8FA179C035F938E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetUpShare();
		AndroidShare_SetUpShare_mF0448DCCA86D21030E9B6DB47187D3A34BA63DAE(NULL);
		// _share.Call("ShareText", message, shareDialogTitle);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_StaticFields*)il2cpp_codegen_static_fields_for(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var))->____share_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_message;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_shareDialogTitle;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral2D2B22D77A4A232EFC1337C2D8FA179C035F938E, L_4, NULL);
		// }
		return;
	}
}
// System.Void AndroidShare::ShareMultipleFileOfMultipleType(System.String[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare_ShareMultipleFileOfMultipleType_mDBB493C773C618926FAAC33AA2E0CB086BB74308 (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_message, String_t* ___2_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShareMultipleFileOfSameType(path, NativeShare.TYPE_FILE, message, shareDialogTitle);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		String_t* L_1 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_FILE_7;
		String_t* L_2 = ___1_message;
		String_t* L_3 = ___2_shareDialogTitle;
		AndroidShare_ShareMultipleFileOfSameType_mB0799A7BFF6FFF1E125A1AF0192FC4D68D4142BC(__this, L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AndroidShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShare__ctor_m53E4A3596BC9AB276D768898B5EC05D38ADC6CD4 (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Int32 IosShare::_shareText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IosShare__shareText_m802B91E213FEEAE96832B859C9C2F901CD546281 (String_t* ___0_message, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_shareText)(____0_message_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	return returnValue;
}
// System.Int32 IosShare::_shareFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IosShare__shareFile_mE294B9604F1F2739B141B064D258F9AB60236B08 (String_t* ___0_path, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_message' to native representation
	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_shareFile)(____0_path_marshaled, ____1_message_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_message' native representation
	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

	return returnValue;
}
// System.Void IosShare::ShareSingleFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare_ShareSingleFile_m46240788BEAA4121E80B3173DEDC6411B04E07CD (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, String_t* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	{
		// _shareFile(path, message);
		String_t* L_0 = ___0_path;
		String_t* L_1 = ___2_message;
		int32_t L_2;
		L_2 = IosShare__shareFile_mE294B9604F1F2739B141B064D258F9AB60236B08(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void IosShare::ShareText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare_ShareText_m839B77F979EBE2138DF0AA41AD5E915F9961BFCA (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, String_t* ___0_message, String_t* ___1_shareDialogTitle, const RuntimeMethod* method) 
{
	{
		// _shareText(message);
		String_t* L_0 = ___0_message;
		int32_t L_1;
		L_1 = IosShare__shareText_m802B91E213FEEAE96832B859C9C2F901CD546281(L_0, NULL);
		// }
		return;
	}
}
// System.Void IosShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare_ShareMultipleFileOfSameType_mB7C833FADA177F0B59B9BDB4D1F0656C3DF788C4 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	{
		// _shareFile(GenerateBigString(path), message);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_path;
		String_t* L_1;
		L_1 = IosShare_GenerateBigString_mFE96DB178EF42B67BB7ACEAE1144BB2AE2F2CE02(__this, L_0, NULL);
		String_t* L_2 = ___2_message;
		int32_t L_3;
		L_3 = IosShare__shareFile_mE294B9604F1F2739B141B064D258F9AB60236B08(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void IosShare::ShareMultipleFileOfMultipleType(System.String[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare_ShareMultipleFileOfMultipleType_m49677E0FF659658134F375709C4284FE4486232E (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_message, String_t* ___2_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShareMultipleFileOfSameType(path, NativeShare.TYPE_FILE, message, shareDialogTitle);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		String_t* L_1 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_FILE_7;
		String_t* L_2 = ___1_message;
		String_t* L_3 = ___2_shareDialogTitle;
		IosShare_ShareMultipleFileOfSameType_mB7C833FADA177F0B59B9BDB4D1F0656C3DF788C4(__this, L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.String IosShare::GenerateBigString(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosShare_GenerateBigString_mFE96DB178EF42B67BB7ACEAE1144BB2AE2F2CE02 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_pathList, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BC098865036DAC85769523D873A2D529E84B2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF636682AD9D5689A6E8551505B81046BBCFFE14B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		// string bigString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string separator = "<smile123>";
		V_1 = _stringLiteralF636682AD9D5689A6E8551505B81046BBCFFE14B;
		// for (int i = 0; i < pathList.Length; i++)
		V_2 = 0;
		goto IL_003e;
	}

IL_0011:
	{
		// if (i == pathList.Length - 1)
		int32_t L_0 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_pathList;
		NullCheck(L_1);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1))))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// bigString = bigString + pathList[i];
		String_t* L_3 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___0_pathList;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, L_7, NULL);
		V_0 = L_8;
		goto IL_0039;
	}

IL_002c:
	{
		// bigString = bigString + pathList[i] + separator;
		String_t* L_9 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ___0_pathList;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, L_13, L_14, NULL);
		V_0 = L_15;
	}

IL_0039:
	{
		// for (int i = 0; i < pathList.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < pathList.Length; i++)
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ___0_pathList;
		NullCheck(L_18);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.Log("UNITY>> in unity Try to share screeShot  p " + bigString);
		String_t* L_20 = V_0;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral60BC098865036DAC85769523D873A2D529E84B2F, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
		// return bigString;
		String_t* L_22 = V_0;
		V_5 = L_22;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		String_t* L_23 = V_5;
		return L_23;
	}
}
// System.Void IosShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosShare__ctor_mCD89E3AE7D960662AD353D515C9E668223F89254 (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NativeShare::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Awake_m6A3FE7DD99125F6188A05D26966723F23AB04F5C (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (instance == null)
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// instance = this;
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11), (void*)__this);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void NativeShare::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Start_m1A84988C4D97305B5CDB21CCA3E8A62ACCADAF31 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsItAndroidPlatform())
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NativeShare_IsItAndroidPlatform_m584A414EC6A01C4D80FC67F5BBC14DB4C31324B8(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// _nativeShare = new AndroidShare();
		AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553* L_2 = (AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553*)il2cpp_codegen_object_new(AndroidShare_t84B160B3CBD7656942B5E59E0299D913E98B4553_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidShare__ctor_m53E4A3596BC9AB276D768898B5EC05D38ADC6CD4(L_2, NULL);
		__this->____nativeShare_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeShare_10), (void*)L_2);
	}

IL_0015:
	{
		// if (IsItIosPlatform())
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeShare_IsItIosPlatform_m27D339142DB8695E31182E85B18CF8E81BDE5506(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// _nativeShare = new IosShare();
		IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7* L_5 = (IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7*)il2cpp_codegen_object_new(IosShare_t12B09B9CA061BBD5809A5E8BDA9A1CC6170829B7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IosShare__ctor_mCD89E3AE7D960662AD353D515C9E668223F89254(L_5, NULL);
		__this->____nativeShare_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeShare_10), (void*)L_5);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void NativeShare::ShareText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareText_m76EBFCE6F12312CA7475919D2A1C788D3EFD5578 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_message, String_t* ___1_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativeShare.ShareText(message, shareDialogTitle);
		RuntimeObject* L_0 = __this->____nativeShare_10;
		String_t* L_1 = ___0_message;
		String_t* L_2 = ___1_shareDialogTitle;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void INativeShare::ShareText(System.String,System.String) */, INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void NativeShare::ShareSingleFile(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareSingleFile_mBF7B7167E8C23DB4CB879246EE37A1AF1CA267EC (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, String_t* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _nativeShare?.ShareSingleFile(path, fileType, message, shareDialogTitle);
		RuntimeObject* L_0 = __this->____nativeShare_10;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		String_t* L_2 = ___0_path;
		String_t* L_3 = ___1_fileType;
		String_t* L_4 = ___2_message;
		String_t* L_5 = ___3_shareDialogTitle;
		NullCheck(G_B2_0);
		InterfaceActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(1 /* System.Void INativeShare::ShareSingleFile(System.String,System.String,System.String,System.String) */, INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var, G_B2_0, L_2, L_3, L_4, L_5);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void NativeShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareMultipleFileOfSameType_m540C7AA09E51841C1A822E271F95ED4566C9A39D (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_fileType, String_t* ___2_message, String_t* ___3_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativeShare.ShareMultipleFileOfSameType(path, fileType, message, shareDialogTitle);
		RuntimeObject* L_0 = __this->____nativeShare_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_path;
		String_t* L_2 = ___1_fileType;
		String_t* L_3 = ___2_message;
		String_t* L_4 = ___3_shareDialogTitle;
		NullCheck(L_0);
		InterfaceActionInvoker4< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, String_t*, String_t* >::Invoke(2 /* System.Void INativeShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String) */, INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void NativeShare::ShareMultipleFileOfMultipleType(System.String[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_ShareMultipleFileOfMultipleType_m2945102C8C68472816246B10D0AC41B737506AE1 (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_path, String_t* ___1_message, String_t* ___2_shareDialogTitle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativeShare.ShareMultipleFileOfSameType(path, NativeShare.TYPE_FILE, message, shareDialogTitle);
		RuntimeObject* L_0 = __this->____nativeShare_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		String_t* L_2 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_FILE_7;
		String_t* L_3 = ___1_message;
		String_t* L_4 = ___2_shareDialogTitle;
		NullCheck(L_0);
		InterfaceActionInvoker4< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, String_t*, String_t* >::Invoke(2 /* System.Void INativeShare::ShareMultipleFileOfSameType(System.String[],System.String,System.String,System.String) */, INativeShare_t155853FC5C092B47EDD8CB173D0B97053A05C9ED_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Boolean NativeShare::IsItAndroidPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_IsItAndroidPlatform_m584A414EC6A01C4D80FC67F5BBC14DB4C31324B8 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// return result;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_0007;
	}

IL_0007:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Boolean NativeShare::IsItIosPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_IsItIosPlatform_m27D339142DB8695E31182E85B18CF8E81BDE5506 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// result = true;
		V_0 = (bool)1;
		// return result;
		bool L_0 = V_0;
		V_1 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_1;
		return L_1;
	}
}
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_m40A41AF25FD6EF4889A9AA3CF794B1F666AEEAAB (NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NativeShare::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__cctor_m6D63B4758922E555A9E60438967677EB73439D7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B2C21C861FE979F286143E349A8A705D52379B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462464BE4AA7B2537162046319847622EB2E91A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral496BA3585DD3BB11DC36F1536C6708C7F5D2DFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90238D58BA003CD4FFA5B10AFDDB4BFBF7C65EFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string TYPE_VIDEO = "video/*";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_VIDEO_4 = _stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_VIDEO_4), (void*)_stringLiteral88D3AF1882A99EF42ED88963253B1967EFDCD6AE);
		// public static string TYPE_AUDIO = "audio/*";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_AUDIO_5 = _stringLiteral90238D58BA003CD4FFA5B10AFDDB4BFBF7C65EFA;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_AUDIO_5), (void*)_stringLiteral90238D58BA003CD4FFA5B10AFDDB4BFBF7C65EFA);
		// public static string TYPE_IMAGE = "image/*";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_IMAGE_6 = _stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_IMAGE_6), (void*)_stringLiteral6759FA5F111D1DC4A539DCDCF4F4CFC6C5100E8E);
		// public static string TYPE_FILE = "file/*";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_FILE_7 = _stringLiteral0B2C21C861FE979F286143E349A8A705D52379B5;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_FILE_7), (void*)_stringLiteral0B2C21C861FE979F286143E349A8A705D52379B5);
		// public static string TYPE_PDF = "application/pdf*";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_PDF_8 = _stringLiteral462464BE4AA7B2537162046319847622EB2E91A3;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_PDF_8), (void*)_stringLiteral462464BE4AA7B2537162046319847622EB2E91A3);
		// public static string fileProviderName = "com.SmileSoft.unityplugin";
		((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___fileProviderName_9 = _stringLiteral496BA3585DD3BB11DC36F1536C6708C7F5D2DFD7;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___fileProviderName_9), (void*)_stringLiteral496BA3585DD3BB11DC36F1536C6708C7F5D2DFD7);
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
// System.Void TestShare::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_Awake_mA9EBD4E25EFFC81361187C9AB45E82586525B2A6 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TestShare::takeScreenShotAndShare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_takeScreenShotAndShare_mF23BE331FD34E2BE5397C731F0E769C15ADE211C (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(takeScreenshotAndSave());
		RuntimeObject* L_0;
		L_0 = TestShare_takeScreenshotAndSave_mA5B4F9E7351115923F82B670017F253F631899BB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TestShare::ShareMultipleScreenShot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_ShareMultipleScreenShot_mBA216204AEE9807A94BCED738841252D886B1B47 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(takeMultipleScreenshotAndSave());
		RuntimeObject* L_0;
		L_0 = TestShare_takeMultipleScreenshotAndSave_mA953E8953404511F8FF660E495B5943E059C5DBE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TestShare::takeScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestShare_takeScreenshotAndSave_mA5B4F9E7351115923F82B670017F253F631899BB (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* L_0 = (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289*)il2cpp_codegen_object_new(U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CtakeScreenshotAndSaveU3Ed__4__ctor_m7C334710D46BC59C5B2BEBCBA46C3F16BA352693(L_0, 0, NULL);
		U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TestShare::takeMultipleScreenshotAndSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestShare_takeMultipleScreenshotAndSave_mA953E8953404511F8FF660E495B5943E059C5DBE (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* L_0 = (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6*)il2cpp_codegen_object_new(U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CtakeMultipleScreenshotAndSaveU3Ed__5__ctor_m3052C49098F509941F052F77E0D004A68AA34290(L_0, 0, NULL);
		U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TestShare::shareScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_shareScreenshot_mA237B408634B0B0E85722C1F0F13F1B70F697A95 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral505333A35EC164FFAFDD5AB028BFE6C5A9A58382);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeShare.instance.ShareSingleFile(path, NativeShare.TYPE_IMAGE, "Share the Bell Jar", "Share the Bell Jar");
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11;
		String_t* L_1 = ___0_path;
		String_t* L_2 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_IMAGE_6;
		NullCheck(L_0);
		NativeShare_ShareSingleFile_mBF7B7167E8C23DB4CB879246EE37A1AF1CA267EC(L_0, L_1, L_2, _stringLiteral505333A35EC164FFAFDD5AB028BFE6C5A9A58382, _stringLiteral505333A35EC164FFAFDD5AB028BFE6C5A9A58382, NULL);
		// }
		return;
	}
}
// System.Void TestShare::ShareText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_ShareText_m59C219D30EAD70DFE4FAB9A3E4E81CA7FF745928 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE2B0036E20406FFEBCAC1629FB9EC2B6DF740E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55660B2299B194045AAB130BDC655F4E55339BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeShare.instance.ShareText("Share Message", "Share By Native Share Plugin");
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11;
		NullCheck(L_0);
		NativeShare_ShareText_m76EBFCE6F12312CA7475919D2A1C788D3EFD5578(L_0, _stringLiteral4EE2B0036E20406FFEBCAC1629FB9EC2B6DF740E, _stringLiteral55660B2299B194045AAB130BDC655F4E55339BC6, NULL);
		// }
		return;
	}
}
// System.Void TestShare::shareMultipleFileOfSameType(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare_shareMultipleFileOfSameType_m8C7A82AB280CF608E08C08B0441A265504D82F88 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_listOfPaths, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE2B0036E20406FFEBCAC1629FB9EC2B6DF740E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55660B2299B194045AAB130BDC655F4E55339BC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativeShare.instance.ShareMultipleFileOfSameType(listOfPaths, NativeShare.TYPE_IMAGE, "Share Message", "Share By Native Share Plugin");
		il2cpp_codegen_runtime_class_init_inline(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var);
		NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4* L_0 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___instance_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_listOfPaths;
		String_t* L_2 = ((NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t0B7C725A1FCE1E52BA01E79041E8138DFE73D1D4_il2cpp_TypeInfo_var))->___TYPE_IMAGE_6;
		NullCheck(L_0);
		NativeShare_ShareMultipleFileOfSameType_m540C7AA09E51841C1A822E271F95ED4566C9A39D(L_0, L_1, L_2, _stringLiteral4EE2B0036E20406FFEBCAC1629FB9EC2B6DF740E, _stringLiteral55660B2299B194045AAB130BDC655F4E55339BC6, NULL);
		// }
		return;
	}
}
// System.Void TestShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestShare__ctor_mD18D24D8D53D90061ECF0187464B76F53104D7D1 (TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TestShare/<takeScreenshotAndSave>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenshotAndSaveU3Ed__4__ctor_m7C334710D46BC59C5B2BEBCBA46C3F16BA352693 (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestShare/<takeScreenshotAndSave>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenshotAndSaveU3Ed__4_System_IDisposable_Dispose_m60B2C6BA18C338B84F8D069458D26FDF534B78A0 (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TestShare/<takeScreenshotAndSave>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtakeScreenshotAndSaveU3Ed__4_MoveNext_mE7EE373263E4500FD56363C3E9F639C7647D1C6E (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B25DEABB68F89ACA47FAEDFBB43396CAF1949C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Texture2D screenImage = new Texture2D(Screen.width, Screen.height);
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_6, L_4, L_5, NULL);
		__this->___U3CscreenImageU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscreenImageU3E5__1_3), (void*)L_6);
		// screenImage.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___U3CscreenImageU3E5__1_3;
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), (0.0f), (0.0f), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_7, L_10, 0, 0, NULL);
		// screenImage.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___U3CscreenImageU3E5__1_3;
		NullCheck(L_11);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_11, NULL);
		// byte[] imageBytes = screenImage.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___U3CscreenImageU3E5__1_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_12, NULL);
		__this->___U3CimageBytesU3E5__2_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageBytesU3E5__2_4), (void*)L_13);
		// string img_name = "BellJar.png";
		__this->___U3Cimg_nameU3E5__3_5 = _stringLiteral33B25DEABB68F89ACA47FAEDFBB43396CAF1949C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cimg_nameU3E5__3_5), (void*)_stringLiteral33B25DEABB68F89ACA47FAEDFBB43396CAF1949C);
		// string destination_path = Application.persistentDataPath + "/" + img_name; ;
		String_t* L_14;
		L_14 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_15 = __this->___U3Cimg_nameU3E5__3_5;
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_15, NULL);
		__this->___U3Cdestination_pathU3E5__4_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cdestination_pathU3E5__4_6), (void*)L_16);
		// System.IO.File.WriteAllBytes(destination_path, imageBytes);
		String_t* L_17 = __this->___U3Cdestination_pathU3E5__4_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___U3CimageBytesU3E5__2_4;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_17, L_18, NULL);
		// shareScreenshot(destination_path);
		TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* L_19 = __this->___U3CU3E4__this_2;
		String_t* L_20 = __this->___U3Cdestination_pathU3E5__4_6;
		NullCheck(L_19);
		TestShare_shareScreenshot_mA237B408634B0B0E85722C1F0F13F1B70F697A95(L_19, L_20, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestShare/<takeScreenshotAndSave>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtakeScreenshotAndSaveU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDEEF855418010596BD8C38FD3283E164BD3F18F6 (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestShare/<takeScreenshotAndSave>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_m89A0CB0315A799C92EF5046AF158CA39A3D8D4DD (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_Reset_m89A0CB0315A799C92EF5046AF158CA39A3D8D4DD_RuntimeMethod_var)));
	}
}
// System.Object TestShare/<takeScreenshotAndSave>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtakeScreenshotAndSaveU3Ed__4_System_Collections_IEnumerator_get_Current_mBC086F5B580D9AA3E36A6C4A132D0DC6B9E8E240 (U3CtakeScreenshotAndSaveU3Ed__4_tF30E171D9C191533EBA26576D65DBFFC750B2289* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TestShare/<takeMultipleScreenshotAndSave>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeMultipleScreenshotAndSaveU3Ed__5__ctor_m3052C49098F509941F052F77E0D004A68AA34290 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TestShare/<takeMultipleScreenshotAndSave>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_IDisposable_Dispose_m48BFD2F16E9B4407B6031A082314D6844E3C29A4 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TestShare/<takeMultipleScreenshotAndSave>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtakeMultipleScreenshotAndSaveU3Ed__5_MoveNext_mDF1D95618021FCF3A6D2F2665A9E3D4609F3C1F6 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00457DC730F29479DCF3C831E96D0B44D4D9FFEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4884E341D26A2DEAD17A1D31C7996A39A4275DE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0034;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_3 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Texture2D screenImage = new Texture2D(Screen.width, Screen.height);
		int32_t L_4;
		L_4 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_6, L_4, L_5, NULL);
		__this->___U3CscreenImageU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CscreenImageU3E5__1_3), (void*)L_6);
		// screenImage.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___U3CscreenImageU3E5__1_3;
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_9;
		L_9 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), (0.0f), (0.0f), ((float)L_8), ((float)L_9), /*hidden argument*/NULL);
		NullCheck(L_7);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_7, L_10, 0, 0, NULL);
		// screenImage.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___U3CscreenImageU3E5__1_3;
		NullCheck(L_11);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_11, NULL);
		// byte[] imageBytes = screenImage.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___U3CscreenImageU3E5__1_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_12, NULL);
		__this->___U3CimageBytesU3E5__2_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageBytesU3E5__2_4), (void*)L_13);
		// string img_name1 = "ScreenShot1.png";
		__this->___U3Cimg_name1U3E5__3_5 = _stringLiteral00457DC730F29479DCF3C831E96D0B44D4D9FFEF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cimg_name1U3E5__3_5), (void*)_stringLiteral00457DC730F29479DCF3C831E96D0B44D4D9FFEF);
		// string destination_path1 = Application.persistentDataPath + "/" + img_name1; ;
		String_t* L_14;
		L_14 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_15 = __this->___U3Cimg_name1U3E5__3_5;
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_15, NULL);
		__this->___U3Cdestination_path1U3E5__4_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cdestination_path1U3E5__4_6), (void*)L_16);
		// System.IO.File.WriteAllBytes(destination_path1, imageBytes);
		String_t* L_17 = __this->___U3Cdestination_path1U3E5__4_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___U3CimageBytesU3E5__2_4;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_17, L_18, NULL);
		// string img_name2 = "ScreenShot2.png";
		__this->___U3Cimg_name2U3E5__5_7 = _stringLiteral4884E341D26A2DEAD17A1D31C7996A39A4275DE8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cimg_name2U3E5__5_7), (void*)_stringLiteral4884E341D26A2DEAD17A1D31C7996A39A4275DE8);
		// string destination_path2 = Application.persistentDataPath + "/" + img_name2; ;
		String_t* L_19;
		L_19 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_20 = __this->___U3Cimg_name2U3E5__5_7;
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_19, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_20, NULL);
		__this->___U3Cdestination_path2U3E5__6_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Cdestination_path2U3E5__6_8), (void*)L_21);
		// System.IO.File.WriteAllBytes(destination_path2, imageBytes);
		String_t* L_22 = __this->___U3Cdestination_path2U3E5__6_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___U3CimageBytesU3E5__2_4;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_22, L_23, NULL);
		// string[] listOfPaths = new string[2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___U3ClistOfPathsU3E5__7_9 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistOfPathsU3E5__7_9), (void*)L_24);
		// listOfPaths[0] = destination_path1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___U3ClistOfPathsU3E5__7_9;
		String_t* L_26 = __this->___U3Cdestination_path1U3E5__4_6;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_26);
		// listOfPaths[1] = destination_path2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = __this->___U3ClistOfPathsU3E5__7_9;
		String_t* L_28 = __this->___U3Cdestination_path2U3E5__6_8;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
		// shareMultipleFileOfSameType(listOfPaths);
		TestShare_t0D2D09446F55D81B4524903055A6EEE616A36EFC* L_29 = __this->___U3CU3E4__this_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___U3ClistOfPathsU3E5__7_9;
		NullCheck(L_29);
		TestShare_shareMultipleFileOfSameType_m8C7A82AB280CF608E08C08B0441A265504D82F88(L_29, L_30, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TestShare/<takeMultipleScreenshotAndSave>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C2E92BE12824E78EE2E5E23FF57EC699DBCB067 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TestShare/<takeMultipleScreenshotAndSave>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_Collections_IEnumerator_Reset_mCD4ECE31423C293E2015911F8E7D546AB7003259 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_Collections_IEnumerator_Reset_mCD4ECE31423C293E2015911F8E7D546AB7003259_RuntimeMethod_var)));
	}
}
// System.Object TestShare/<takeMultipleScreenshotAndSave>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CtakeMultipleScreenshotAndSaveU3Ed__5_System_Collections_IEnumerator_get_Current_m095C8C11EC30D7F43F6C7C64B13CE02DE5C9A521 (U3CtakeMultipleScreenshotAndSaveU3Ed__5_t8477C1CE578CA971C5FBD3F40E6064DB3C6480F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
