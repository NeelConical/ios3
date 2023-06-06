#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Texture2D>
struct TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeCameraNamespace.NCCameraCallbackiOS
struct NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// NativeCamera/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F;
// NativeCamera/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8;
// NativeCamera/<GetVideoThumbnailAsync>d__35
struct U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1;
// NativeCamera/<LoadImageAtPathAsync>d__33
struct U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA;
// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCBC6DF085E91D838E83F7628F5472C77ECBC8E;
IL2CPP_EXTERN_C String_t* _stringLiteralDF5C74EF04643CF550FCCFFCA8EA8BCAF7B03D20;
IL2CPP_EXTERN_C String_t* _stringLiteralE3287997374A5B6321B447152239EBE224279EB6;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m482A5A6B405892CEBE89DBA5F4D7FEFE93A0A51B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m9DF4A372AB0D3130126001C31BC429FCD9861C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_mF8BF528CD7DF9627E708ED2EC31BC1D2F77ACE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m166E319515C37D123475D5DCE65070CEB618EAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m5DD8F93945851324159B7F7DC7AEED9A2421000E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m02287CED749126DEE390041300F6AB934A6247B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_mF1840617059BB4A1B332E246BB8B25E7D0BBC192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_GetImageProperties_m906832D1F45ECF5821CFA3236192AE053761C050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_GetVideoProperties_m2E7F06E4A9C55A06A5752F8337951217018250EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF0E9D9D49305425E48612F9F1BC145ECE6B9E574 
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeCamera
struct NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// NativeCamera/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F  : public RuntimeObject
{
	// System.String NativeCamera/<>c__DisplayClass33_0::imagePath
	String_t* ___imagePath_0;
	// System.String NativeCamera/<>c__DisplayClass33_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeCamera/<>c__DisplayClass33_0::maxSize
	int32_t ___maxSize_2;
};

// NativeCamera/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8  : public RuntimeObject
{
	// System.String NativeCamera/<>c__DisplayClass35_0::videoPath
	String_t* ___videoPath_0;
	// System.String NativeCamera/<>c__DisplayClass35_0::temporaryImagePath
	String_t* ___temporaryImagePath_1;
	// System.Int32 NativeCamera/<>c__DisplayClass35_0::maxSize
	int32_t ___maxSize_2;
	// System.Double NativeCamera/<>c__DisplayClass35_0::captureTimeInSeconds
	double ___captureTimeInSeconds_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>
struct TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 
{
	// System.Int32 NativeCamera/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeCamera/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeCamera/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeCamera/ImageOrientation NativeCamera/ImageProperties::orientation
	int32_t ___orientation_3;
};
// Native definition for P/Invoke marshalling of NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeCamera/ImageProperties
struct ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// NativeCamera/VideoProperties
struct VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E 
{
	// System.Int32 NativeCamera/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeCamera/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeCamera/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeCamera/VideoProperties::rotation
	float ___rotation_3;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___m_task_2;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// NativeCamera/<GetVideoThumbnailAsync>d__35
struct U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1  : public RuntimeObject
{
	// System.Int32 NativeCamera/<GetVideoThumbnailAsync>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeCamera/<GetVideoThumbnailAsync>d__35::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeCamera/<GetVideoThumbnailAsync>d__35::videoPath
	String_t* ___videoPath_2;
	// System.Int32 NativeCamera/<GetVideoThumbnailAsync>d__35::maxSize
	int32_t ___maxSize_3;
	// System.Double NativeCamera/<GetVideoThumbnailAsync>d__35::captureTimeInSeconds
	double ___captureTimeInSeconds_4;
	// System.Boolean NativeCamera/<GetVideoThumbnailAsync>d__35::markTextureNonReadable
	bool ___markTextureNonReadable_5;
	// System.Boolean NativeCamera/<GetVideoThumbnailAsync>d__35::generateMipmaps
	bool ___generateMipmaps_6;
	// System.Boolean NativeCamera/<GetVideoThumbnailAsync>d__35::linearColorSpace
	bool ___linearColorSpace_7;
	// NativeCamera/<>c__DisplayClass35_0 NativeCamera/<GetVideoThumbnailAsync>d__35::<>8__1
	U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* ___U3CU3E8__1_8;
	// System.String NativeCamera/<GetVideoThumbnailAsync>d__35::<thumbnailPath>5__2
	String_t* ___U3CthumbnailPathU3E5__2_9;
	// System.String NativeCamera/<GetVideoThumbnailAsync>d__35::<>s__3
	String_t* ___U3CU3Es__3_10;
	// UnityEngine.Texture2D NativeCamera/<GetVideoThumbnailAsync>d__35::<>s__4
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CU3Es__4_11;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeCamera/<GetVideoThumbnailAsync>d__35::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_12;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D> NativeCamera/<GetVideoThumbnailAsync>d__35::<>u__2
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B ___U3CU3Eu__2_13;
};

// NativeCamera/<LoadImageAtPathAsync>d__33
struct U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA  : public RuntimeObject
{
	// System.Int32 NativeCamera/<LoadImageAtPathAsync>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D> NativeCamera/<LoadImageAtPathAsync>d__33::<>t__builder
	AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F ___U3CU3Et__builder_1;
	// System.String NativeCamera/<LoadImageAtPathAsync>d__33::imagePath
	String_t* ___imagePath_2;
	// System.Int32 NativeCamera/<LoadImageAtPathAsync>d__33::maxSize
	int32_t ___maxSize_3;
	// System.Boolean NativeCamera/<LoadImageAtPathAsync>d__33::markTextureNonReadable
	bool ___markTextureNonReadable_4;
	// System.Boolean NativeCamera/<LoadImageAtPathAsync>d__33::generateMipmaps
	bool ___generateMipmaps_5;
	// System.Boolean NativeCamera/<LoadImageAtPathAsync>d__33::linearColorSpace
	bool ___linearColorSpace_6;
	// NativeCamera/<>c__DisplayClass33_0 NativeCamera/<LoadImageAtPathAsync>d__33::<>8__1
	U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* ___U3CU3E8__1_7;
	// System.String NativeCamera/<LoadImageAtPathAsync>d__33::<loadPath>5__2
	String_t* ___U3CloadPathU3E5__2_8;
	// UnityEngine.Texture2D NativeCamera/<LoadImageAtPathAsync>d__33::<result>5__3
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CresultU3E5__3_9;
	// System.String NativeCamera/<LoadImageAtPathAsync>d__33::<>s__4
	String_t* ___U3CU3Es__4_10;
	// UnityEngine.Networking.UnityWebRequest NativeCamera/<LoadImageAtPathAsync>d__33::<www>5__5
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__5_11;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation NativeCamera/<LoadImageAtPathAsync>d__33::<asyncOperation>5__6
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___U3CasyncOperationU3E5__6_12;
	// UnityEngine.Texture2D NativeCamera/<LoadImageAtPathAsync>d__33::<texture>5__7
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CtextureU3E5__7_13;
	// UnityEngine.Texture2D NativeCamera/<LoadImageAtPathAsync>d__33::<mipmapTexture>5__8
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___U3CmipmapTextureU3E5__8_14;
	// Unity.Collections.NativeArray`1<System.Byte> NativeCamera/<LoadImageAtPathAsync>d__33::<textureData>5__9
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___U3CtextureDataU3E5__9_15;
	// System.Exception NativeCamera/<LoadImageAtPathAsync>d__33::<e>5__10
	Exception_t* ___U3CeU3E5__10_16;
	// System.String NativeCamera/<LoadImageAtPathAsync>d__33::<extension>5__11
	String_t* ___U3CextensionU3E5__11_17;
	// UnityEngine.TextureFormat NativeCamera/<LoadImageAtPathAsync>d__33::<format>5__12
	int32_t ___U3CformatU3E5__12_18;
	// System.Exception NativeCamera/<LoadImageAtPathAsync>d__33::<e>5__13
	Exception_t* ___U3CeU3E5__13_19;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> NativeCamera/<LoadImageAtPathAsync>d__33::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_20;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter NativeCamera/<LoadImageAtPathAsync>d__33::<>u__2
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__2_21;
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeCamera/CameraCallback
struct CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771  : public MulticastDelegate_t
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeCameraNamespace.NCCameraCallbackiOS
struct NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeCamera/CameraCallback NativeCameraNamespace.NCCameraCallbackiOS::callback
	CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___callback_5;
	// System.Single NativeCameraNamespace.NCCameraCallbackiOS::nextBusyCheckTime
	float ___nextBusyCheckTime_6;
};

// <Module>

// <Module>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// NativeCamera
struct NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields
{
	// System.String NativeCamera::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_0;
	// System.String NativeCamera::m_iOSSelectedImagePath
	String_t* ___m_iOSSelectedImagePath_1;
};

// NativeCamera

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// NativeCamera/<>c__DisplayClass33_0

// NativeCamera/<>c__DisplayClass33_0

// NativeCamera/<>c__DisplayClass35_0

// NativeCamera/<>c__DisplayClass35_0

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>
struct Task_1_t95921EB64E237ACD28589D64B693C652268F225E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA02CD66EEE1C447BE2C3BDAF4821F919418AE5FF* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Texture2D>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable

// NativeCamera/ImageProperties

// NativeCamera/ImageProperties

// NativeCamera/VideoProperties

// NativeCamera/VideoProperties

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>
struct AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t95921EB64E237ACD28589D64B693C652268F225E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// NativeCamera/<GetVideoThumbnailAsync>d__35

// NativeCamera/<GetVideoThumbnailAsync>d__35

// NativeCamera/<LoadImageAtPathAsync>d__33

// NativeCamera/<LoadImageAtPathAsync>d__33

// System.Func`1<System.String>

// System.Func`1<System.String>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// NativeCamera/CameraCallback

// NativeCamera/CameraCallback

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// NativeCameraNamespace.NCCameraCallbackiOS
struct NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields
{
	// NativeCameraNamespace.NCCameraCallbackiOS NativeCameraNamespace.NCCameraCallbackiOS::instance
	NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* ___instance_4;
	// System.Boolean NativeCameraNamespace.NCCameraCallbackiOS::<IsBusy>k__BackingField
	bool ___U3CIsBusyU3Ek__BackingField_7;
};

// NativeCameraNamespace.NCCameraCallbackiOS
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisRuntimeObject_mE44725AEF215E7D1ABDFF7330437097BAFF5F7A5_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 NativeCamera::_NativeCamera_CheckPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_CheckPermission_mBA65A3F23A88956C36B428138CB8CF914F891075 (const RuntimeMethod* method) ;
// System.Int32 NativeCamera::_NativeCamera_RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_RequestPermission_m7582D9816F0C8676ADDAE3DEBCCC1E058F638CDE (const RuntimeMethod* method) ;
// System.Int32 NativeCamera::_NativeCamera_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_CanOpenSettings_m9669238326F4B3BC0BA8979EDC552F7447BF2E11 (const RuntimeMethod* method) ;
// System.Void NativeCamera::_NativeCamera_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_OpenSettings_m5FD7161414315CBDFBDF9DDFCAC4184D289E3CDA (const RuntimeMethod* method) ;
// NativeCamera/Permission NativeCamera::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1 (bool ___0_isPicturePermission, const RuntimeMethod* method) ;
// System.Boolean NativeCamera::IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::Initialize(NativeCamera/CameraCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___0_callback, const RuntimeMethod* method) ;
// System.String NativeCamera::get_IOSSelectedImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_IOSSelectedImagePath_m797A6A282C2E14DCD2C7729A4F3BA3E0EC054BC3 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void NativeCamera::_NativeCamera_TakePicture(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_TakePicture_m297A53373955B2EA1B154A03F18CE569518B59ED (String_t* ___0_imageSavePath, int32_t ___1_maxSize, int32_t ___2_preferredCamera, const RuntimeMethod* method) ;
// System.Void NativeCamera::_NativeCamera_RecordVideo(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_RecordVideo_m26EB4DC0972772FFC1F4521E17F2F8F7816584CA (int32_t ___0_quality, int32_t ___1_maxDuration, int32_t ___2_preferredCamera, const RuntimeMethod* method) ;
// System.Int32 NativeCamera::_NativeCamera_HasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_HasCamera_m4609F602C13722CB70C1C6553D4E22780999B26C (const RuntimeMethod* method) ;
// System.Boolean NativeCameraNamespace.NCCameraCallbackiOS::get_IsBusy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1 (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String NativeCamera::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027 (const RuntimeMethod* method) ;
// System.String NativeCamera::_NativeCamera_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD (String_t* ___0_path, String_t* ___1_temporaryFilePath, int32_t ___2_maxSize, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, bool ___4_linear, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, bool ___2_markNonReadable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void NativeCamera/<LoadImageAtPathAsync>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__33__ctor_m97DE90EA0CDF38277E15CB4164409817BDF97686 (U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Create()
inline AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeCamera/<LoadImageAtPathAsync>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m02287CED749126DEE390041300F6AB934A6247B6 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::get_Task()
inline Task_1_t95921EB64E237ACD28589D64B693C652268F225E* AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t95921EB64E237ACD28589D64B693C652268F225E* (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String NativeCamera::_NativeCamera_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9 (String_t* ___0_path, String_t* ___1_thumbnailSavePath, int32_t ___2_maxSize, double ___3_captureTimeInSeconds, const RuntimeMethod* method) ;
// UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747 (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__35__ctor_m32550764ED9458ED197BF86857F84453A8A707E3 (U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::Start<NativeCamera/<GetVideoThumbnailAsync>d__35>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m5DD8F93945851324159B7F7DC7AEED9A2421000E (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m4CC6B9A3F0DD032BDFC0B8416CE27980382ED173_gshared)(__this, ___0_stateMachine, method);
}
// System.String NativeCamera::_NativeCamera_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetImageProperties_m7A666ADF5C25CCC3C9C28C1399CDAFDA3BEA1761 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void NativeCamera/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeCamera/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC (ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) ;
// System.String NativeCamera::_NativeCamera_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetVideoProperties_mE8A0DE43BF69428796A293D34678309D8825827D (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, float* ___3_result, const RuntimeMethod* method) ;
// System.Void NativeCamera/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D (VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NativeCamera/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m4A44110101F08454BA08B33D034A2C4E528A0E4A (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.String>(System.Func`1<TResult>)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3 (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___0_function, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))Task_Run_TisRuntimeObject_m030003C532BA57F9193CA5BED8F832043B5758E8_gshared)(___0_function, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeCamera/<LoadImageAtPathAsync>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m9DF4A372AB0D3130126001C31BC429FCD9861C04 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA (String_t* ___0_uri, bool ___1_nonReadable, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,NativeCamera/<LoadImageAtPathAsync>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m166E319515C37D123475D5DCE65070CEB618EAEF (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisRuntimeObject_mE44725AEF215E7D1ABDFF7330437097BAFF5F7A5_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared)(__this, method);
}
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixelData<System.Byte>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
inline void Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, int32_t ___1_mipLevel, int32_t ___2_sourceDataStartIndex, const RuntimeMethod* method)
{
	((  void (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, int32_t, const RuntimeMethod*))Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_gshared)(__this, ___0_data, ___1_mipLevel, ___2_sourceDataStartIndex, method);
}
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688 (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void NativeCamera/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m48AE36E83E3AC325A047D9D497F0D9C5E16C06E7 (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,NativeCamera/<GetVideoThumbnailAsync>d__35>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m482A5A6B405892CEBE89DBA5F4D7FEFE93A0A51B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeCamera::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeCamera_LoadImageAtPathAsync_mFE206BEA6BD5DD550C82067FDC68E936E2AE338B (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Texture2D>::GetAwaiter()
inline TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C (Task_1_t95921EB64E237ACD28589D64B693C652268F225E* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B (*) (Task_1_t95921EB64E237ACD28589D64B693C652268F225E*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911 (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.Texture2D>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>,NativeCamera/<GetVideoThumbnailAsync>d__35>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_mF8BF528CD7DF9627E708ED2EC31BC1D2F77ACE0B (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* __this, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* ___0_awaiter, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*, TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m88F9075FDCC2543975FBD89EEF959554B47051E3_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Texture2D>::GetResult()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeCameraNamespace.NCCameraCallbackiOS>()
inline NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* GameObject_AddComponent_TisNCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_mF1840617059BB4A1B332E246BB8B25E7D0BBC192 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 NativeCameraNamespace.NCCameraCallbackiOS::_NativeCamera_IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NCCameraCallbackiOS__NativeCamera_IsCameraBusy_mD6BB6BD8D6C98A21ED54547F000201AA6B072A1E (const RuntimeMethod* method) ;
// System.Void NativeCamera/CameraCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeCamera_CheckPermission();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeCamera_RequestPermission();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeCamera_CanOpenSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeCamera_OpenSettings();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeCamera_HasCamera();
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeCamera_TakePicture(char*, int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeCamera_RecordVideo(int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeCamera_GetImageProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeCamera_GetVideoProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeCamera_GetVideoThumbnail(char*, char*, int32_t, double);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeCamera_LoadImageAtPath(char*, char*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeCamera_IsCameraBusy();
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
// System.Int32 NativeCamera::_NativeCamera_CheckPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_CheckPermission_mBA65A3F23A88956C36B428138CB8CF914F891075 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_CheckPermission)();

	return returnValue;
}
// System.Int32 NativeCamera::_NativeCamera_RequestPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_RequestPermission_m7582D9816F0C8676ADDAE3DEBCCC1E058F638CDE (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_RequestPermission)();

	return returnValue;
}
// System.Int32 NativeCamera::_NativeCamera_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_CanOpenSettings_m9669238326F4B3BC0BA8979EDC552F7447BF2E11 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_CanOpenSettings)();

	return returnValue;
}
// System.Void NativeCamera::_NativeCamera_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_OpenSettings_m5FD7161414315CBDFBDF9DDFCAC4184D289E3CDA (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeCamera_OpenSettings)();

}
// System.Int32 NativeCamera::_NativeCamera_HasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera__NativeCamera_HasCamera_m4609F602C13722CB70C1C6553D4E22780999B26C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_HasCamera)();

	return returnValue;
}
// System.Void NativeCamera::_NativeCamera_TakePicture(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_TakePicture_m297A53373955B2EA1B154A03F18CE569518B59ED (String_t* ___0_imageSavePath, int32_t ___1_maxSize, int32_t ___2_preferredCamera, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	// Marshaling of parameter '___0_imageSavePath' to native representation
	char* ____0_imageSavePath_marshaled = NULL;
	____0_imageSavePath_marshaled = il2cpp_codegen_marshal_string(___0_imageSavePath);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeCamera_TakePicture)(____0_imageSavePath_marshaled, ___1_maxSize, ___2_preferredCamera);

	// Marshaling cleanup of parameter '___0_imageSavePath' native representation
	il2cpp_codegen_marshal_free(____0_imageSavePath_marshaled);
	____0_imageSavePath_marshaled = NULL;

}
// System.Void NativeCamera::_NativeCamera_RecordVideo(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera__NativeCamera_RecordVideo_m26EB4DC0972772FFC1F4521E17F2F8F7816584CA (int32_t ___0_quality, int32_t ___1_maxDuration, int32_t ___2_preferredCamera, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeCamera_RecordVideo)(___0_quality, ___1_maxDuration, ___2_preferredCamera);

}
// System.String NativeCamera::_NativeCamera_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetImageProperties_m7A666ADF5C25CCC3C9C28C1399CDAFDA3BEA1761 (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_GetImageProperties)(____0_path_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeCamera::_NativeCamera_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetVideoProperties_mE8A0DE43BF69428796A293D34678309D8825827D (String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_GetVideoProperties)(____0_path_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeCamera::_NativeCamera_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9 (String_t* ___0_path, String_t* ___1_thumbnailSavePath, int32_t ___2_maxSize, double ___3_captureTimeInSeconds, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, double);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_thumbnailSavePath' to native representation
	char* ____1_thumbnailSavePath_marshaled = NULL;
	____1_thumbnailSavePath_marshaled = il2cpp_codegen_marshal_string(___1_thumbnailSavePath);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_GetVideoThumbnail)(____0_path_marshaled, ____1_thumbnailSavePath_marshaled, ___2_maxSize, ___3_captureTimeInSeconds);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_thumbnailSavePath' native representation
	il2cpp_codegen_marshal_free(____1_thumbnailSavePath_marshaled);
	____1_thumbnailSavePath_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeCamera::_NativeCamera_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD (String_t* ___0_path, String_t* ___1_temporaryFilePath, int32_t ___2_maxSize, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Marshaling of parameter '___1_temporaryFilePath' to native representation
	char* ____1_temporaryFilePath_marshaled = NULL;
	____1_temporaryFilePath_marshaled = il2cpp_codegen_marshal_string(___1_temporaryFilePath);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_LoadImageAtPath)(____0_path_marshaled, ____1_temporaryFilePath_marshaled, ___2_maxSize);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_temporaryFilePath' native representation
	il2cpp_codegen_marshal_free(____1_temporaryFilePath_marshaled);
	____1_temporaryFilePath_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeCamera::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if( m_temporaryImagePath == null )
		String_t* L_0 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_2;
		L_2 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, NULL);
		((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0), (void*)L_3);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_4;
		L_4 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_002e:
	{
		// return m_temporaryImagePath;
		String_t* L_6 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_temporaryImagePath_0;
		V_1 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.String NativeCamera::get_IOSSelectedImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeCamera_get_IOSSelectedImagePath_m797A6A282C2E14DCD2C7729A4F3BA3E0EC054BC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCBC6DF085E91D838E83F7628F5472C77ECBC8E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if( m_iOSSelectedImagePath == null )
		String_t* L_0 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_iOSSelectedImagePath_1;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_iOSSelectedImagePath = Path.Combine( Application.temporaryCachePath, "CameraImg" );
		String_t* L_2;
		L_2 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_2, _stringLiteralCCCBC6DF085E91D838E83F7628F5472C77ECBC8E, NULL);
		((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_iOSSelectedImagePath_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_iOSSelectedImagePath_1), (void*)L_3);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_4;
		L_4 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_002e:
	{
		// return m_iOSSelectedImagePath;
		String_t* L_6 = ((NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_StaticFields*)il2cpp_codegen_static_fields_for(NativeCamera_tE85F6A2EFD4BDD17480FD3FC273A67753E6C629F_il2cpp_TypeInfo_var))->___m_iOSSelectedImagePath_1;
		V_1 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
// NativeCamera/Permission NativeCamera::CheckPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_CheckPermission_m0445839C87DFBA62F088F4A2116FFA53173470CD (bool ___0_isPicturePermission, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (Permission) _NativeCamera_CheckPermission();
		int32_t L_0;
		L_0 = NativeCamera__NativeCamera_CheckPermission_mBA65A3F23A88956C36B428138CB8CF914F891075(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// NativeCamera/Permission NativeCamera::RequestPermission(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1 (bool ___0_isPicturePermission, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (Permission) _NativeCamera_RequestPermission();
		int32_t L_0;
		L_0 = NativeCamera__NativeCamera_RequestPermission_m7582D9816F0C8676ADDAE3DEBCCC1E058F638CDE(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean NativeCamera::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_CanOpenSettings_m56BCC77D77E381E5181E956C018F4BBFB4E102BA (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _NativeCamera_CanOpenSettings() == 1;
		int32_t L_0;
		L_0 = NativeCamera__NativeCamera_CanOpenSettings_m9669238326F4B3BC0BA8979EDC552F7447BF2E11(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void NativeCamera::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCamera_OpenSettings_m8732D49A39F244910C6722CB78FD44694C0C254B (const RuntimeMethod* method) 
{
	{
		// _NativeCamera_OpenSettings();
		NativeCamera__NativeCamera_OpenSettings_m5FD7161414315CBDFBDF9DDFCAC4184D289E3CDA(NULL);
		// }
		return;
	}
}
// NativeCamera/Permission NativeCamera::TakePicture(NativeCamera/CameraCallback,System.Int32,System.Boolean,NativeCamera/PreferredCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_TakePicture_mC2A748E023DC5C34D19AF571325AF952A714AAD4 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___0_callback, int32_t ___1_maxSize, bool ___2_saveAsJPEG, int32_t ___3_preferredCamera, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// Permission result = RequestPermission( true );
		int32_t L_0;
		L_0 = NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1((bool)1, NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsCameraBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2;
		L_2 = NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54(NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// if( maxSize <= 0 )
		int32_t L_4 = ___1_maxSize;
		V_2 = (bool)((((int32_t)((((int32_t)L_4) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_6;
		L_6 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_6;
	}

IL_002e:
	{
		// NCCameraCallbackiOS.Initialize( callback );
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_7 = ___0_callback;
		NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8(L_7, NULL);
		// _NativeCamera_TakePicture( IOSSelectedImagePath + ( saveAsJPEG ? ".jpeg" : ".png" ), maxSize, (int) preferredCamera );
		String_t* L_8;
		L_8 = NativeCamera_get_IOSSelectedImagePath_m797A6A282C2E14DCD2C7729A4F3BA3E0EC054BC3(NULL);
		bool L_9 = ___2_saveAsJPEG;
		G_B7_0 = L_8;
		if (L_9)
		{
			G_B8_0 = L_8;
			goto IL_0044;
		}
	}
	{
		G_B9_0 = _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
		G_B9_1 = G_B7_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B9_0 = _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
		G_B9_1 = G_B8_0;
	}

IL_0049:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		int32_t L_11 = ___1_maxSize;
		int32_t L_12 = ___3_preferredCamera;
		NativeCamera__NativeCamera_TakePicture_m297A53373955B2EA1B154A03F18CE569518B59ED(L_10, L_11, L_12, NULL);
	}

IL_0057:
	{
		// return result;
		int32_t L_13 = V_0;
		V_3 = L_13;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// NativeCamera/Permission NativeCamera::RecordVideo(NativeCamera/CameraCallback,NativeCamera/Quality,System.Int32,System.Int64,NativeCamera/PreferredCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeCamera_RecordVideo_mFC9802F5F9A52504C23E339018820D8CED325292 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___0_callback, int32_t ___1_quality, int32_t ___2_maxDuration, int64_t ___3_maxSizeBytes, int32_t ___4_preferredCamera, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// Permission result = RequestPermission( false );
		int32_t L_0;
		L_0 = NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1((bool)0, NULL);
		V_0 = L_0;
		// if( result == Permission.Granted && !IsCameraBusy() )
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2;
		L_2 = NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54(NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// NCCameraCallbackiOS.Initialize( callback );
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_4 = ___0_callback;
		NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8(L_4, NULL);
		// _NativeCamera_RecordVideo( (int) quality, maxDuration, (int) preferredCamera );
		int32_t L_5 = ___1_quality;
		int32_t L_6 = ___2_maxDuration;
		int32_t L_7 = ___4_preferredCamera;
		NativeCamera__NativeCamera_RecordVideo_m26EB4DC0972772FFC1F4521E17F2F8F7816584CA(L_5, L_6, L_7, NULL);
	}

IL_002e:
	{
		// return result;
		int32_t L_8 = V_0;
		V_2 = L_8;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Boolean NativeCamera::DeviceHasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_DeviceHasCamera_m73F0E99DB7C414EA95D5600918FFC502373E41E7 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _NativeCamera_HasCamera() == 1;
		int32_t L_0;
		L_0 = NativeCamera__NativeCamera_HasCamera_m4609F602C13722CB70C1C6553D4E22780999B26C(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean NativeCamera::IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return NCCameraCallbackiOS.IsBusy;
		bool L_0;
		L_0 = NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747 (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_8 = NULL;
	Exception_t* V_9 = NULL;
	bool V_10 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_4 = ___0_imagePath;
		bool L_5;
		L_5 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_4, NULL);
		V_5 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_7 = ___0_imagePath;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_7, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_9 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747_RuntimeMethod_var)));
	}

IL_0038:
	{
		// if( maxSize <= 0 )
		int32_t L_10 = ___1_maxSize;
		V_6 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_12;
		L_12 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_12;
	}

IL_004c:
	{
		// string loadPath = _NativeCamera_LoadImageAtPath( imagePath, TemporaryImagePath, maxSize );
		String_t* L_13 = ___0_imagePath;
		String_t* L_14;
		L_14 = NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027(NULL);
		int32_t L_15 = ___1_maxSize;
		String_t* L_16;
		L_16 = NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD(L_13, L_14, L_15, NULL);
		V_0 = L_16;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_17 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_18, NULL);
		V_1 = L_19;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_21)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		if (L_23)
		{
			goto IL_0082;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_0083;
	}

IL_0082:
	{
		G_B10_0 = 3;
	}

IL_0083:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_24 = V_2;
		bool L_25 = ___3_generateMipmaps;
		bool L_26 = ___4_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_27, 2, 2, L_24, L_25, L_26, NULL);
		V_3 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e1:
			{// begin finally (depth: 1)
				{
					// if( loadPath != imagePath )
					String_t* L_28 = V_0;
					String_t* L_29 = ___0_imagePath;
					bool L_30;
					L_30 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_28, L_29, NULL);
					V_10 = L_30;
					bool L_31 = V_10;
					if (!L_31)
					{
						goto IL_0101;
					}
				}
				{
				}
				try
				{// begin try (depth: 2)
					// File.Delete( loadPath );
					String_t* L_32 = V_0;
					File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_32, NULL);
					goto IL_0100;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00fb;
					}
					throw e;
				}

CATCH_00fb:
				{// begin catch(System.Object)
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0100;
				}// end catch (depth: 2)

IL_0100:
				{
				}

IL_0101:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = V_3;
					String_t* L_34 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
					L_35 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_34, NULL);
					bool L_36 = ___2_markTextureNonReadable;
					bool L_37;
					L_37 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_33, L_35, L_36, NULL);
					V_7 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
					bool L_38 = V_7;
					if (!L_38)
					{
						goto IL_00c5_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
					String_t* L_39 = V_0;
					String_t* L_40;
					L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_39, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_40, NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_3;
					il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_41, NULL);
					// return null;
					V_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					goto IL_0108;
				}

IL_00c5_2:
				{
					goto IL_00df_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00c8_1;
				}
				throw e;
			}

CATCH_00c8_1:
			{// begin catch(System.Exception)
				// catch( Exception e )
				V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Debug.LogException( e );
				Exception_t* L_42 = V_9;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_42, NULL);
				// Object.DestroyImmediate( result );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_43 = V_3;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_43, NULL);
				// return null;
				V_8 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0108;
			}// end catch (depth: 2)

IL_00df_1:
			{
				goto IL_0103;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0103:
	{
		// return result;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_3;
		V_8 = L_44;
		goto IL_0108;
	}

IL_0108:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_8;
		return L_45;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeCamera::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeCamera_LoadImageAtPathAsync_mFE206BEA6BD5DD550C82067FDC68E936E2AE338B (String_t* ___0_imagePath, int32_t ___1_maxSize, bool ___2_markTextureNonReadable, bool ___3_generateMipmaps, bool ___4_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m02287CED749126DEE390041300F6AB934A6247B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* V_0 = NULL;
	{
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_0 = (U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA*)il2cpp_codegen_object_new(U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadImageAtPathAsyncU3Ed__33__ctor_m97DE90EA0CDF38277E15CB4164409817BDF97686(L_0, NULL);
		V_0 = L_0;
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_3 = V_0;
		String_t* L_4 = ___0_imagePath;
		NullCheck(L_3);
		L_3->___imagePath_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___imagePath_2), (void*)L_4);
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_5 = V_0;
		int32_t L_6 = ___1_maxSize;
		NullCheck(L_5);
		L_5->___maxSize_3 = L_6;
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_7 = V_0;
		bool L_8 = ___2_markTextureNonReadable;
		NullCheck(L_7);
		L_7->___markTextureNonReadable_4 = L_8;
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_9 = V_0;
		bool L_10 = ___3_generateMipmaps;
		NullCheck(L_9);
		L_9->___generateMipmaps_5 = L_10;
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_11 = V_0;
		bool L_12 = ___4_linearColorSpace;
		NullCheck(L_11);
		L_11->___linearColorSpace_6 = L_12;
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_13 = V_0;
		NullCheck(L_13);
		L_13->___U3CU3E1__state_0 = (-1);
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_14 = V_0;
		NullCheck(L_14);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_15 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&L_14->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m02287CED749126DEE390041300F6AB934A6247B6(L_15, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m02287CED749126DEE390041300F6AB934A6247B6_RuntimeMethod_var);
		U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* L_16 = V_0;
		NullCheck(L_16);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_17 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&L_16->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_18;
		L_18 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_17, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_18;
	}
}
// UnityEngine.Texture2D NativeCamera::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* NativeCamera_GetVideoThumbnail_m7568A298D0A3BEABBDD10C973A4F9EB657C8644B (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, bool ___4_generateMipmaps, bool ___5_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___1_maxSize;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_2;
		L_2 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		___1_maxSize = L_2;
	}

IL_0013:
	{
		// string thumbnailPath = _NativeCamera_GetVideoThumbnail( videoPath, TemporaryImagePath + ".png", maxSize, captureTimeInSeconds );
		String_t* L_3 = ___0_videoPath;
		String_t* L_4;
		L_4 = NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027(NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		int32_t L_6 = ___1_maxSize;
		double L_7 = ___2_captureTimeInSeconds;
		String_t* L_8;
		L_8 = NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9(L_3, L_5, L_6, L_7, NULL);
		V_0 = L_8;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
		String_t* L_12 = V_0;
		int32_t L_13 = ___1_maxSize;
		bool L_14 = ___3_markTextureNonReadable;
		bool L_15 = ___4_generateMipmaps;
		bool L_16 = ___5_linearColorSpace;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17;
		L_17 = NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747(L_12, L_13, L_14, L_15, L_16, NULL);
		V_3 = L_17;
		goto IL_004b;
	}

IL_0047:
	{
		// return null;
		V_3 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = V_3;
		return L_18;
	}
}
// System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeCamera::GetVideoThumbnailAsync(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t95921EB64E237ACD28589D64B693C652268F225E* NativeCamera_GetVideoThumbnailAsync_m8001058D169430C969DA22808DD73A3336BFF3B7 (String_t* ___0_videoPath, int32_t ___1_maxSize, double ___2_captureTimeInSeconds, bool ___3_markTextureNonReadable, bool ___4_generateMipmaps, bool ___5_linearColorSpace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m5DD8F93945851324159B7F7DC7AEED9A2421000E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* V_0 = NULL;
	{
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_0 = (U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1*)il2cpp_codegen_object_new(U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetVideoThumbnailAsyncU3Ed__35__ctor_m32550764ED9458ED197BF86857F84453A8A707E3(L_0, NULL);
		V_0 = L_0;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4(AsyncTaskMethodBuilder_1_Create_mEBDA40894C43C50AA47346AC784F528C9CA1ABD4_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_3 = V_0;
		String_t* L_4 = ___0_videoPath;
		NullCheck(L_3);
		L_3->___videoPath_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___videoPath_2), (void*)L_4);
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_5 = V_0;
		int32_t L_6 = ___1_maxSize;
		NullCheck(L_5);
		L_5->___maxSize_3 = L_6;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_7 = V_0;
		double L_8 = ___2_captureTimeInSeconds;
		NullCheck(L_7);
		L_7->___captureTimeInSeconds_4 = L_8;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_9 = V_0;
		bool L_10 = ___3_markTextureNonReadable;
		NullCheck(L_9);
		L_9->___markTextureNonReadable_5 = L_10;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_11 = V_0;
		bool L_12 = ___4_generateMipmaps;
		NullCheck(L_11);
		L_11->___generateMipmaps_6 = L_12;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_13 = V_0;
		bool L_14 = ___5_linearColorSpace;
		NullCheck(L_13);
		L_13->___linearColorSpace_7 = L_14;
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_15 = V_0;
		NullCheck(L_15);
		L_15->___U3CU3E1__state_0 = (-1);
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_16 = V_0;
		NullCheck(L_16);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_17 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&L_16->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m5DD8F93945851324159B7F7DC7AEED9A2421000E(L_17, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m5DD8F93945851324159B7F7DC7AEED9A2421000E_RuntimeMethod_var);
		U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* L_18 = V_0;
		NullCheck(L_18);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_19 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&L_18->___U3CU3Et__builder_1);
		Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_20;
		L_20 = AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E(L_19, AsyncTaskMethodBuilder_1_get_Task_mC842CA788344F6A0EAB9EFDE97E0FAC79368245E_RuntimeMethod_var);
		return L_20;
	}
}
// NativeCamera/ImageProperties NativeCamera::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 NativeCamera_GetImageProperties_m906832D1F45ECF5821CFA3236192AE053761C050 (String_t* ___0_imagePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 V_19;
	memset((&V_19), 0, sizeof(V_19));
	int32_t G_B6_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___0_imagePath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_3 = ___0_imagePath;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_3, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_5 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_GetImageProperties_m906832D1F45ECF5821CFA3236192AE053761C050_RuntimeMethod_var)));
	}

IL_0021:
	{
		// string value = _NativeCamera_GetImageProperties( imagePath );
		String_t* L_6 = ___0_imagePath;
		String_t* L_7;
		L_7 = NativeCamera__NativeCamera_GetImageProperties_m7A666ADF5C25CCC3C9C28C1399CDAFDA3BEA1761(L_6, NULL);
		V_0 = L_7;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_6 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0162;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_11 = V_0;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_11, ((int32_t)62), 0, NULL);
		V_7 = L_12;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_7;
		if (!L_13)
		{
			goto IL_005f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_7;
		NullCheck(L_14);
		G_B6_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_8 = (bool)G_B6_0;
		bool L_15 = V_8;
		if (!L_15)
		{
			goto IL_0161;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_7;
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_18, NULL);
		bool L_20;
		L_20 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_19, (&V_1), NULL);
		V_10 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0085:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_7;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_24, NULL);
		bool L_26;
		L_26 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_25, (&V_2), NULL);
		V_11 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_11;
		if (!L_27)
		{
			goto IL_00a0;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_00a0:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_7;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		V_3 = L_31;
		// if( mimeType.Length == 0 )
		String_t* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		V_12 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_12;
		if (!L_34)
		{
			goto IL_0146;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_35 = ___0_imagePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_36, NULL);
		V_13 = L_37;
		// if( extension == ".png" )
		String_t* L_38 = V_13;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		V_14 = L_39;
		bool L_40 = V_14;
		if (!L_40)
		{
			goto IL_00e4;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_0145;
	}

IL_00e4:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_41 = V_13;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
		if (L_42)
		{
			goto IL_0100;
		}
	}
	{
		String_t* L_43 = V_13;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
		G_B17_0 = ((int32_t)(L_44));
		goto IL_0101;
	}

IL_0100:
	{
		G_B17_0 = 1;
	}

IL_0101:
	{
		V_15 = (bool)G_B17_0;
		bool L_45 = V_15;
		if (!L_45)
		{
			goto IL_010f;
		}
	}
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_0145;
	}

IL_010f:
	{
		// else if( extension == ".gif" )
		String_t* L_46 = V_13;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		V_16 = L_47;
		bool L_48 = V_16;
		if (!L_48)
		{
			goto IL_0129;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_0145;
	}

IL_0129:
	{
		// else if( extension == ".bmp" )
		String_t* L_49 = V_13;
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, NULL);
		V_17 = L_50;
		bool L_51 = V_17;
		if (!L_51)
		{
			goto IL_0143;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_0145;
	}

IL_0143:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_0145:
	{
	}

IL_0146:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_7;
		NullCheck(L_52);
		int32_t L_53 = 3;
		String_t* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		String_t* L_55;
		L_55 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_54, NULL);
		bool L_56;
		L_56 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_55, (&V_9), NULL);
		V_18 = L_56;
		bool L_57 = V_18;
		if (!L_57)
		{
			goto IL_0160;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_58 = V_9;
		V_4 = L_58;
	}

IL_0160:
	{
	}

IL_0161:
	{
	}

IL_0162:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_59 = V_1;
		int32_t L_60 = V_2;
		String_t* L_61 = V_3;
		int32_t L_62 = V_4;
		ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 L_63;
		memset((&L_63), 0, sizeof(L_63));
		ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC((&L_63), L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		V_19 = L_63;
		goto IL_0170;
	}

IL_0170:
	{
		// }
		ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46 L_64 = V_19;
		return L_64;
	}
}
// NativeCamera/VideoProperties NativeCamera::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E NativeCamera_GetVideoProperties_m2E7F06E4A9C55A06A5752F8337951217018250EB (String_t* ___0_videoPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t G_B6_0 = 0;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___0_videoPath;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_3 = ___0_videoPath;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_3, NULL);
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_5 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeCamera_GetVideoProperties_m2E7F06E4A9C55A06A5752F8337951217018250EB_RuntimeMethod_var)));
	}

IL_0021:
	{
		// string value = _NativeCamera_GetVideoProperties( videoPath );
		String_t* L_6 = ___0_videoPath;
		String_t* L_7;
		L_7 = NativeCamera__NativeCamera_GetVideoProperties_mE8A0DE43BF69428796A293D34678309D8825827D(L_6, NULL);
		V_0 = L_7;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)0);
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		V_6 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_00f6;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_11 = V_0;
		NullCheck(L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_11, ((int32_t)62), 0, NULL);
		V_7 = L_12;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_7;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_7;
		NullCheck(L_14);
		G_B6_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B6_0 = 0;
	}

IL_0065:
	{
		V_8 = (bool)G_B6_0;
		bool L_15 = V_8;
		if (!L_15)
		{
			goto IL_00f5;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_7;
		NullCheck(L_16);
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_18, NULL);
		bool L_20;
		L_20 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_19, (&V_1), NULL);
		V_9 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_008a:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_7;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_24, NULL);
		bool L_26;
		L_26 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_25, (&V_2), NULL);
		V_10 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00a5;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_00a5:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_7;
		NullCheck(L_28);
		int32_t L_29 = 2;
		String_t* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		String_t* L_31;
		L_31 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_30, NULL);
		bool L_32;
		L_32 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_31, (&V_3), NULL);
		V_11 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00c1;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)0);
	}

IL_00c1:
	{
		// if( !float.TryParse( properties[3].Trim().Replace( ',', '.' ), NumberStyles.Float, CultureInfo.InvariantCulture, out rotation ) )
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_7;
		NullCheck(L_34);
		int32_t L_35 = 3;
		String_t* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		String_t* L_37;
		L_37 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_36, NULL);
		NullCheck(L_37);
		String_t* L_38;
		L_38 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_37, ((int32_t)44), ((int32_t)46), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_39;
		L_39 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_40;
		L_40 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_38, ((int32_t)167), L_39, (&V_4), NULL);
		V_12 = (bool)((((int32_t)L_40) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_00f4;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00f4:
	{
	}

IL_00f5:
	{
	}

IL_00f6:
	{
		// if( rotation == -90f )
		float L_42 = V_4;
		V_13 = (bool)((((float)L_42) == ((float)(-90.0f)))? 1 : 0);
		bool L_43 = V_13;
		if (!L_43)
		{
			goto IL_010c;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_010c:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int64_t L_46 = V_3;
		float L_47 = V_4;
		VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E L_48;
		memset((&L_48), 0, sizeof(L_48));
		VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D((&L_48), L_44, L_45, L_46, L_47, /*hidden argument*/NULL);
		V_14 = L_48;
		goto IL_011a;
	}

IL_011a:
	{
		// }
		VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E L_49 = V_14;
		return L_49;
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
// Conversion methods for marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke_back(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_pinvoke_cleanup(ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.___width_0;
	marshaled.___height_1 = unmarshaled.___height_1;
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mimeType_2);
	marshaled.___orientation_3 = unmarshaled.___orientation_3;
}
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com_back(const ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled, ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46& unmarshaled)
{
	int32_t unmarshaledwidth_temp_0 = 0;
	unmarshaledwidth_temp_0 = marshaled.___width_0;
	unmarshaled.___width_0 = unmarshaledwidth_temp_0;
	int32_t unmarshaledheight_temp_1 = 0;
	unmarshaledheight_temp_1 = marshaled.___height_1;
	unmarshaled.___height_1 = unmarshaledheight_temp_1;
	unmarshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mimeType_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaledorientation_temp_3 = 0;
	unmarshaledorientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.___orientation_3 = unmarshaledorientation_temp_3;
}
// Conversion method for clean up from marshalling of: NativeCamera/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshal_com_cleanup(ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeCamera/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeCamera/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC (ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.mimeType = mimeType;
		String_t* L_2 = ___2_mimeType;
		__this->___mimeType_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimeType_2), (void*)L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___3_orientation;
		__this->___orientation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, String_t* ___2_mimeType, int32_t ___3_orientation, const RuntimeMethod* method)
{
	ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImageProperties_t58867341A9993287DFFDD26325DE0EE68DD52E46*>(__this + _offset);
	ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC(_thisAdjusted, ___0_width, ___1_height, ___2_mimeType, ___3_orientation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeCamera/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D (VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method) 
{
	{
		// this.width = width;
		int32_t L_0 = ___0_width;
		__this->___width_0 = L_0;
		// this.height = height;
		int32_t L_1 = ___1_height;
		__this->___height_1 = L_1;
		// this.duration = duration;
		int64_t L_2 = ___2_duration;
		__this->___duration_2 = L_2;
		// this.rotation = rotation;
		float L_3 = ___3_rotation;
		__this->___rotation_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_width, int32_t ___1_height, int64_t ___2_duration, float ___3_rotation, const RuntimeMethod* method)
{
	VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoProperties_t6D7A73E485C96B765AD8710810E46D38907DFC0E*>(__this + _offset);
	VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D(_thisAdjusted, ___0_width, ___1_height, ___2_duration, ___3_rotation, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Multicast(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* currentDelegate = reinterpret_cast<CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenInst(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	NullCheck(___0_path);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStatic(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_path, method);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStaticInvoker(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_path);
}
void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_ClosedStaticInvoker(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_path);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_path' to native representation
	char* ____0_path_marshaled = NULL;
	____0_path_marshaled = il2cpp_codegen_marshal_string(___0_path);

	// Native function invocation
	il2cppPInvokeFunc(____0_path_marshaled);

	// Marshaling cleanup of parameter '___0_path' native representation
	il2cpp_codegen_marshal_free(____0_path_marshaled);
	____0_path_marshaled = NULL;

}
// System.Void NativeCamera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_Multicast;
}
// System.Void NativeCamera/CameraCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeCamera/CameraCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraCallback_BeginInvoke_m690E44108A53130266E7C1A57DC6E62F2B0BDCDF (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_path;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeCamera/CameraCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_EndInvoke_m64D370EA45BBA56CF1B29C19E1B766B43542D7A6 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeCamera/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m4A44110101F08454BA08B33D034A2C4E528A0E4A (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeCamera/<>c__DisplayClass33_0::<LoadImageAtPathAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4 (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* __this, const RuntimeMethod* method) 
{
	{
		// string loadPath = await Task.Run( () => _NativeCamera_LoadImageAtPath( imagePath, temporaryImagePath, maxSize ) );
		String_t* L_0 = __this->___imagePath_0;
		String_t* L_1 = __this->___temporaryImagePath_1;
		int32_t L_2 = __this->___maxSize_2;
		String_t* L_3;
		L_3 = NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD(L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Void NativeCamera/<LoadImageAtPathAsync>d__33::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__33__ctor_m97DE90EA0CDF38277E15CB4164409817BDF97686 (U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeCamera/<LoadImageAtPathAsync>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1 (U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m9DF4A372AB0D3130126001C31BC429FCD9861C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m166E319515C37D123475D5DCE65070CEB618EAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3287997374A5B6321B447152239EBE224279EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* V_6 = NULL;
	bool V_7 = false;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_8;
	memset((&V_8), 0, sizeof(V_8));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	String_t* G_B19_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B19_1 = NULL;
	String_t* G_B18_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	String_t* G_B20_1 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B20_2 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B56_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B54_0 = NULL;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B55_0 = NULL;
	int32_t G_B57_0 = 0;
	U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* G_B57_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_0121_1;
		}

IL_0017_1:
		{
			goto IL_01a7_1;
		}

IL_001c_1:
		{
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_3 = (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass33_0__ctor_m4A44110101F08454BA08B33D034A2C4E528A0E4A(L_3, NULL);
			__this->___U3CU3E8__1_7 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)L_3);
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_4 = __this->___U3CU3E8__1_7;
			String_t* L_5 = __this->___imagePath_2;
			NullCheck(L_4);
			L_4->___imagePath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___imagePath_0), (void*)L_5);
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_6 = __this->___U3CU3E8__1_7;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			// if( string.IsNullOrEmpty( imagePath ) )
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_8 = __this->___U3CU3E8__1_7;
			NullCheck(L_8);
			String_t* L_9 = L_8->___imagePath_0;
			bool L_10;
			L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
			V_2 = L_10;
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_0069_1;
			}
		}
		{
			// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1_RuntimeMethod_var)));
		}

IL_0069_1:
		{
			// if( !File.Exists( imagePath ) )
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_13 = __this->___U3CU3E8__1_7;
			NullCheck(L_13);
			String_t* L_14 = L_13->___imagePath_0;
			bool L_15;
			L_15 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_14, NULL);
			V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_3;
			if (!L_16)
			{
				goto IL_009b_1;
			}
		}
		{
			// throw new FileNotFoundException( "File not found at " + imagePath );
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_17 = __this->___U3CU3E8__1_7;
			NullCheck(L_17);
			String_t* L_18 = L_17->___imagePath_0;
			String_t* L_19;
			L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_18, NULL);
			FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_20 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
			NullCheck(L_20);
			FileNotFoundException__ctor_mA8C9C93DB8C5B96D6B5E59B2AE07154F265FB1A1(L_20, L_19, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1_RuntimeMethod_var)));
		}

IL_009b_1:
		{
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_21 = __this->___U3CU3E8__1_7;
			NullCheck(L_21);
			int32_t L_22 = L_21->___maxSize_2;
			V_4 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_4;
			if (!L_23)
			{
				goto IL_00c2_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_24 = __this->___U3CU3E8__1_7;
			int32_t L_25;
			L_25 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_24);
			L_24->___maxSize_2 = L_25;
		}

IL_00c2_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_26 = __this->___U3CU3E8__1_7;
			String_t* L_27;
			L_27 = NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027(NULL);
			NullCheck(L_26);
			L_26->___temporaryImagePath_1 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&L_26->___temporaryImagePath_1), (void*)L_27);
			// string loadPath = await Task.Run( () => _NativeCamera_LoadImageAtPath( imagePath, temporaryImagePath, maxSize ) );
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_28 = __this->___U3CU3E8__1_7;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_29 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_29);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_30;
			L_30 = Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3(L_29, Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
			NullCheck(L_30);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_31;
			L_31 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_30, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_5 = L_31;
			bool L_32;
			L_32 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_5), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_013e_1;
			}
		}
		{
			int32_t L_33 = 0;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_34 = V_5;
			__this->___U3CU3Eu__1_20 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_20))->___m_task_0), (void*)NULL);
			V_6 = __this;
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_35 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m9DF4A372AB0D3130126001C31BC429FCD9861C04(L_35, (&V_5), (&V_6), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m9DF4A372AB0D3130126001C31BC429FCD9861C04_RuntimeMethod_var);
			goto IL_055a;
		}

IL_0121_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_36 = __this->___U3CU3Eu__1_20;
			V_5 = L_36;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_37 = (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*)(&__this->___U3CU3Eu__1_20);
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_013e_1:
		{
			String_t* L_39;
			L_39 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_5), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			__this->___U3CU3Es__4_10 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_10), (void*)L_39);
			String_t* L_40 = __this->___U3CU3Es__4_10;
			__this->___U3CloadPathU3E5__2_8 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)L_40);
			__this->___U3CU3Es__4_10 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_10), (void*)(String_t*)NULL);
			// Texture2D result = null;
			__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
			// if( !linearColorSpace )
			bool L_41 = __this->___linearColorSpace_6;
			V_7 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
			bool L_42 = V_7;
			if (!L_42)
			{
				goto IL_03ba_1;
			}
		}
		{
			// using( UnityWebRequest www = UnityWebRequestTexture.GetTexture( "file://" + loadPath, markTextureNonReadable && !generateMipmaps ) )
			String_t* L_43 = __this->___U3CloadPathU3E5__2_8;
			String_t* L_44;
			L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_43, NULL);
			bool L_45 = __this->___markTextureNonReadable_4;
			G_B18_0 = L_44;
			G_B18_1 = __this;
			if (!L_45)
			{
				G_B19_0 = L_44;
				G_B19_1 = __this;
				goto IL_019c_1;
			}
		}
		{
			bool L_46 = __this->___generateMipmaps_5;
			G_B20_0 = ((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			goto IL_019d_1;
		}

IL_019c_1:
		{
			G_B20_0 = 0;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
		}

IL_019d_1:
		{
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_47;
			L_47 = UnityWebRequestTexture_GetTexture_m45F855106C834021AC0DFA25FE31BA14C42693CA(G_B20_1, (bool)G_B20_0, NULL);
			NullCheck(G_B20_2);
			G_B20_2->___U3CwwwU3E5__5_11 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&G_B20_2->___U3CwwwU3E5__5_11), (void*)L_47);
		}

IL_01a7_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0399_1:
				{// begin finally (depth: 2)
					{
						int32_t L_48 = V_0;
						if ((((int32_t)L_48) >= ((int32_t)0)))
						{
							goto IL_03b1_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_49 = __this->___U3CwwwU3E5__5_11;
						if (!L_49)
						{
							goto IL_03b1_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_50 = __this->___U3CwwwU3E5__5_11;
						NullCheck(L_50);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_50);
					}

IL_03b1_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_51 = V_0;
					if ((((int32_t)L_51) == ((int32_t)1)))
					{
						goto IL_01ae_2;
					}
				}
				{
					goto IL_01b0_2;
				}

IL_01ae_2:
				{
					goto IL_0206_2;
				}

IL_01b0_2:
				{
					// UnityWebRequestAsyncOperation asyncOperation = www.SendWebRequest();
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_52 = __this->___U3CwwwU3E5__5_11;
					NullCheck(L_52);
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_53;
					L_53 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_52, NULL);
					__this->___U3CasyncOperationU3E5__6_12 = L_53;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__6_12), (void*)L_53);
					goto IL_022b_2;
				}

IL_01c4_2:
				{
					// await Task.Yield();
					il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
					YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_54;
					L_54 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
					V_9 = L_54;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_55;
					L_55 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_9), NULL);
					V_8 = L_55;
					bool L_56;
					L_56 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_8), NULL);
					if (L_56)
					{
						goto IL_0223_2;
					}
				}
				{
					int32_t L_57 = 1;
					V_0 = L_57;
					__this->___U3CU3E1__state_0 = L_57;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_58 = V_8;
					__this->___U3CU3Eu__2_21 = L_58;
					V_6 = __this;
					AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_59 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m166E319515C37D123475D5DCE65070CEB618EAEF(L_59, (&V_8), (&V_6), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA_m166E319515C37D123475D5DCE65070CEB618EAEF_RuntimeMethod_var);
					goto IL_055a;
				}

IL_0206_2:
				{
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_60 = __this->___U3CU3Eu__2_21;
					V_8 = L_60;
					YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_61 = (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*)(&__this->___U3CU3Eu__2_21);
					il2cpp_codegen_initobj(L_61, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
					int32_t L_62 = (-1);
					V_0 = L_62;
					__this->___U3CU3E1__state_0 = L_62;
				}

IL_0223_2:
				{
					YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_8), NULL);
				}

IL_022b_2:
				{
					// while( !asyncOperation.isDone )
					UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_63 = __this->___U3CasyncOperationU3E5__6_12;
					NullCheck(L_63);
					bool L_64;
					L_64 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_63, NULL);
					V_10 = (bool)((((int32_t)L_64) == ((int32_t)0))? 1 : 0);
					bool L_65 = V_10;
					if (L_65)
					{
						goto IL_01c4_2;
					}
				}
				{
					// if( www.result != UnityWebRequest.Result.Success )
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_66 = __this->___U3CwwwU3E5__5_11;
					NullCheck(L_66);
					int32_t L_67;
					L_67 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_66, NULL);
					V_11 = (bool)((((int32_t)((((int32_t)L_67) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					bool L_68 = V_11;
					if (!L_68)
					{
						goto IL_0278_2;
					}
				}
				{
					// Debug.LogWarning( "Couldn't use UnityWebRequest to load image, falling back to LoadImage: " + www.error );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_69 = __this->___U3CwwwU3E5__5_11;
					NullCheck(L_69);
					String_t* L_70;
					L_70 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_69, NULL);
					String_t* L_71;
					L_71 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE3287997374A5B6321B447152239EBE224279EB6, L_70, NULL);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_71, NULL);
					goto IL_038f_2;
				}

IL_0278_2:
				{
					// Texture2D texture = DownloadHandlerTexture.GetContent( www );
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_72 = __this->___U3CwwwU3E5__5_11;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_73;
					L_73 = DownloadHandlerTexture_GetContent_m86BC88F58305A1B21C21CE7D82658197932EFB18(L_72, NULL);
					__this->___U3CtextureU3E5__7_13 = L_73;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__7_13), (void*)L_73);
					// if( !generateMipmaps )
					bool L_74 = __this->___generateMipmaps_5;
					V_12 = (bool)((((int32_t)L_74) == ((int32_t)0))? 1 : 0);
					bool L_75 = V_12;
					if (!L_75)
					{
						goto IL_02aa_2;
					}
				}
				{
					// result = texture;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_76 = __this->___U3CtextureU3E5__7_13;
					__this->___U3CresultU3E5__3_9 = L_76;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_76);
					goto IL_0387_2;
				}

IL_02aa_2:
				{
					// Texture2D mipmapTexture = null;
					__this->___U3CmipmapTextureU3E5__8_14 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmipmapTextureU3E5__8_14), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_036c_2:
						{// begin finally (depth: 3)
							{
								int32_t L_77 = V_0;
								if ((((int32_t)L_77) >= ((int32_t)0)))
								{
									goto IL_037e_2;
								}
							}
							{
								// Object.DestroyImmediate( texture );
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_78 = __this->___U3CtextureU3E5__7_13;
								il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
								Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_78, NULL);
							}

IL_037e_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						try
						{// begin try (depth: 4)
							// NativeArray<byte> textureData = texture.GetRawTextureData<byte>();
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_79 = __this->___U3CtextureU3E5__7_13;
							NullCheck(L_79);
							NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_80;
							L_80 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(L_79, Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
							__this->___U3CtextureDataU3E5__9_15 = L_80;
							// mipmapTexture = new Texture2D( texture.width, texture.height, texture.format, true );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_81 = __this->___U3CtextureU3E5__7_13;
							NullCheck(L_81);
							int32_t L_82;
							L_82 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_81);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_83 = __this->___U3CtextureU3E5__7_13;
							NullCheck(L_83);
							int32_t L_84;
							L_84 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_83);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_85 = __this->___U3CtextureU3E5__7_13;
							NullCheck(L_85);
							int32_t L_86;
							L_86 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_85, NULL);
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_87 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
							NullCheck(L_87);
							Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_87, L_82, L_84, L_86, (bool)1, NULL);
							__this->___U3CmipmapTextureU3E5__8_14 = L_87;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmipmapTextureU3E5__8_14), (void*)L_87);
							// mipmapTexture.SetPixelData( textureData, 0 );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_88 = __this->___U3CmipmapTextureU3E5__8_14;
							NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_89 = __this->___U3CtextureDataU3E5__9_15;
							NullCheck(L_88);
							Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212(L_88, L_89, 0, 0, Texture2D_SetPixelData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEF965509752233B275EEAC4A67A506D223293212_RuntimeMethod_var);
							// mipmapTexture.Apply( true, markTextureNonReadable );
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_90 = __this->___U3CmipmapTextureU3E5__8_14;
							bool L_91 = __this->___markTextureNonReadable_4;
							NullCheck(L_90);
							Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_90, (bool)1, L_91, NULL);
							// result = mipmapTexture;
							Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_92 = __this->___U3CmipmapTextureU3E5__8_14;
							__this->___U3CresultU3E5__3_9 = L_92;
							Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_92);
							NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_93 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->___U3CtextureDataU3E5__9_15);
							il2cpp_codegen_initobj(L_93, sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
							goto IL_036a_3;
						}// end try (depth: 4)
						catch(Il2CppExceptionWrapper& e)
						{
							if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
							{
								IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
								goto CATCH_0333_3;
							}
							throw e;
						}

CATCH_0333_3:
						{// begin catch(System.Exception)
							{
								// catch( Exception e )
								V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
								Exception_t* L_94 = V_13;
								__this->___U3CeU3E5__10_16 = L_94;
								Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__10_16), (void*)L_94);
								// Debug.LogException( e );
								Exception_t* L_95 = __this->___U3CeU3E5__10_16;
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
								Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_95, NULL);
								// if( mipmapTexture )
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_96 = __this->___U3CmipmapTextureU3E5__8_14;
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
								bool L_97;
								L_97 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_96, NULL);
								V_14 = L_97;
								bool L_98 = V_14;
								if (!L_98)
								{
									goto IL_0367_3;
								}
							}
							{
								// Object.DestroyImmediate( mipmapTexture );
								Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_99 = __this->___U3CmipmapTextureU3E5__8_14;
								il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
								Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_99, NULL);
							}

IL_0367_3:
							{
								IL2CPP_POP_ACTIVE_EXCEPTION();
								goto IL_036a_3;
							}
						}// end catch (depth: 4)

IL_036a_3:
						{
							goto IL_037f_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_037f_2:
				{
					__this->___U3CmipmapTextureU3E5__8_14 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmipmapTextureU3E5__8_14), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
				}

IL_0387_2:
				{
					__this->___U3CtextureU3E5__7_13 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureU3E5__7_13), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
				}

IL_038f_2:
				{
					__this->___U3CasyncOperationU3E5__6_12 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__6_12), (void*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL);
					goto IL_03b2_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_03b2_1:
		{
			__this->___U3CwwwU3E5__5_11 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__5_11), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		}

IL_03ba_1:
		{
			// if( !result ) // Fallback to Texture2D.LoadImage if something goes wrong
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_100 = __this->___U3CresultU3E5__3_9;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_101;
			L_101 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_100, NULL);
			V_15 = (bool)((((int32_t)L_101) == ((int32_t)0))? 1 : 0);
			bool L_102 = V_15;
			if (!L_102)
			{
				goto IL_04f8_1;
			}
		}
		{
			// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
			U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_103 = __this->___U3CU3E8__1_7;
			NullCheck(L_103);
			String_t* L_104 = L_103->___imagePath_0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_105;
			L_105 = Path_GetExtension_m6FEAA9E14451BFD210B9D1AEC2430C813F570FE5(L_104, NULL);
			NullCheck(L_105);
			String_t* L_106;
			L_106 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_105, NULL);
			__this->___U3CextensionU3E5__11_17 = L_106;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CextensionU3E5__11_17), (void*)L_106);
			// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
			String_t* L_107 = __this->___U3CextensionU3E5__11_17;
			bool L_108;
			L_108 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_107, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, NULL);
			G_B54_0 = __this;
			if (L_108)
			{
				G_B56_0 = __this;
				goto IL_0415_1;
			}
		}
		{
			String_t* L_109 = __this->___U3CextensionU3E5__11_17;
			bool L_110;
			L_110 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_109, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, NULL);
			G_B55_0 = G_B54_0;
			if (L_110)
			{
				G_B56_0 = G_B54_0;
				goto IL_0415_1;
			}
		}
		{
			G_B57_0 = 4;
			G_B57_1 = G_B55_0;
			goto IL_0416_1;
		}

IL_0415_1:
		{
			G_B57_0 = 3;
			G_B57_1 = G_B56_0;
		}

IL_0416_1:
		{
			NullCheck(G_B57_1);
			G_B57_1->___U3CformatU3E5__12_18 = G_B57_0;
			// result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
			int32_t L_111 = __this->___U3CformatU3E5__12_18;
			bool L_112 = __this->___generateMipmaps_5;
			bool L_113 = __this->___linearColorSpace_6;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_114 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
			NullCheck(L_114);
			Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_114, 2, 2, L_111, L_112, L_113, NULL);
			__this->___U3CresultU3E5__3_9 = L_114;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)L_114);
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_04b6_1:
				{// begin finally (depth: 2)
					{
						int32_t L_115 = V_0;
						if ((((int32_t)L_115) >= ((int32_t)0)))
						{
							goto IL_04ef_1;
						}
					}
					{
						// if( loadPath != imagePath )
						String_t* L_116 = __this->___U3CloadPathU3E5__2_8;
						U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F* L_117 = __this->___U3CU3E8__1_7;
						NullCheck(L_117);
						String_t* L_118 = L_117->___imagePath_0;
						bool L_119;
						L_119 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_116, L_118, NULL);
						V_17 = L_119;
						bool L_120 = V_17;
						if (!L_120)
						{
							goto IL_04ee_1;
						}
					}
					{
					}
					try
					{// begin try (depth: 3)
						// File.Delete( loadPath );
						String_t* L_121 = __this->___U3CloadPathU3E5__2_8;
						File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_121, NULL);
						goto IL_04ed_1;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_04e8_1;
						}
						throw e;
					}

CATCH_04e8_1:
					{// begin catch(System.Object)
						// catch { }
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_04ed_1;
					}// end catch (depth: 3)

IL_04ed_1:
					{
					}

IL_04ee_1:
					{
					}

IL_04ef_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_122 = __this->___U3CresultU3E5__3_9;
						String_t* L_123 = __this->___U3CloadPathU3E5__2_8;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124;
						L_124 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_123, NULL);
						bool L_125 = __this->___markTextureNonReadable_4;
						bool L_126;
						L_126 = ImageConversion_LoadImage_m292ADCEED268A0A0AAD532BAB8D1710CF0FC8AEF(L_122, L_124, L_125, NULL);
						V_16 = (bool)((((int32_t)L_126) == ((int32_t)0))? 1 : 0);
						bool L_127 = V_16;
						if (!L_127)
						{
							goto IL_048a_3;
						}
					}
					{
						// Debug.LogWarning( "Couldn't load image at path: " + loadPath );
						String_t* L_128 = __this->___U3CloadPathU3E5__2_8;
						String_t* L_129;
						L_129 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral76F1B85647641622FD867CE16AF6C584C5081BD4, L_128, NULL);
						il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
						Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_129, NULL);
						// Object.DestroyImmediate( result );
						Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_130 = __this->___U3CresultU3E5__3_9;
						il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
						Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_130, NULL);
						// return null;
						V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
						goto IL_0530;
					}

IL_048a_3:
					{
						goto IL_04b4_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_048d_2;
					}
					throw e;
				}

CATCH_048d_2:
				{// begin catch(System.Exception)
					// catch( Exception e )
					V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_131 = V_13;
					__this->___U3CeU3E5__13_19 = L_131;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__13_19), (void*)L_131);
					// Debug.LogException( e );
					Exception_t* L_132 = __this->___U3CeU3E5__13_19;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_132, NULL);
					// Object.DestroyImmediate( result );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_133 = __this->___U3CresultU3E5__3_9;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
					Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_133, NULL);
					// return null;
					V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0530;
				}// end catch (depth: 3)

IL_04b4_2:
				{
					goto IL_04f0_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_04f0_1:
		{
			__this->___U3CextensionU3E5__11_17 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CextensionU3E5__11_17), (void*)(String_t*)NULL);
		}

IL_04f8_1:
		{
			// return result;
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_134 = __this->___U3CresultU3E5__3_9;
			V_1 = L_134;
			goto IL_0530;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0501;
		}
		throw e;
	}

CATCH_0501:
	{// begin catch(System.Exception)
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_7 = (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)(U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F*)NULL);
		__this->___U3CloadPathU3E5__2_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_135 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_136 = V_13;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_135, L_136, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_055a;
	}// end catch (depth: 1)

IL_0530:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_7 = (U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_7), (void*)(U3CU3Ec__DisplayClass33_0_t48392799E8A3E8E60B826A9E87D8702036BB781F*)NULL);
		__this->___U3CloadPathU3E5__2_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadPathU3E5__2_8), (void*)(String_t*)NULL);
		__this->___U3CresultU3E5__3_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__3_9), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_137 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_138 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_137, L_138, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_055a:
	{
		return;
	}
}
// System.Void NativeCamera/<LoadImageAtPathAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageAtPathAsyncU3Ed__33_SetStateMachine_mF3C3C51A8DEDB6C3656E5F149CAA9759389F702C (U3CLoadImageAtPathAsyncU3Ed__33_tBD8336403A58720C3A280DF1F16BCE1205EDF3DA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
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
// System.Void NativeCamera/<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m48AE36E83E3AC325A047D9D497F0D9C5E16C06E7 (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String NativeCamera/<>c__DisplayClass35_0::<GetVideoThumbnailAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string thumbnailPath = await Task.Run( () => _NativeCamera_GetVideoThumbnail( videoPath, temporaryImagePath + ".png", maxSize, captureTimeInSeconds ) );
		String_t* L_0 = __this->___videoPath_0;
		String_t* L_1 = __this->___temporaryImagePath_1;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		int32_t L_3 = __this->___maxSize_2;
		double L_4 = __this->___captureTimeInSeconds_3;
		String_t* L_5;
		L_5 = NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9(L_0, L_2, L_3, L_4, NULL);
		return L_5;
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
// System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__35__ctor_m32550764ED9458ED197BF86857F84453A8A707E3 (U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__35_MoveNext_m8F4E3D2F5ED99B2632A283102DC411AD0E6C096A (U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m482A5A6B405892CEBE89DBA5F4D7FEFE93A0A51B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_mF8BF528CD7DF9627E708ED2EC31BC1D2F77ACE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* V_4 = NULL;
	bool V_5 = false;
	TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00dd_1;
		}

IL_0017_1:
		{
			goto IL_0191_1;
		}

IL_001c_1:
		{
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_3 = (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			U3CU3Ec__DisplayClass35_0__ctor_m48AE36E83E3AC325A047D9D497F0D9C5E16C06E7(L_3, NULL);
			__this->___U3CU3E8__1_8 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_8), (void*)L_3);
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_4 = __this->___U3CU3E8__1_8;
			String_t* L_5 = __this->___videoPath_2;
			NullCheck(L_4);
			L_4->___videoPath_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&L_4->___videoPath_0), (void*)L_5);
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_6 = __this->___U3CU3E8__1_8;
			int32_t L_7 = __this->___maxSize_3;
			NullCheck(L_6);
			L_6->___maxSize_2 = L_7;
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_8 = __this->___U3CU3E8__1_8;
			double L_9 = __this->___captureTimeInSeconds_4;
			NullCheck(L_8);
			L_8->___captureTimeInSeconds_3 = L_9;
			// if( maxSize <= 0 )
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_10 = __this->___U3CU3E8__1_8;
			NullCheck(L_10);
			int32_t L_11 = L_10->___maxSize_2;
			V_2 = (bool)((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_0080_1;
			}
		}
		{
			// maxSize = SystemInfo.maxTextureSize;
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_13 = __this->___U3CU3E8__1_8;
			int32_t L_14;
			L_14 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
			NullCheck(L_13);
			L_13->___maxSize_2 = L_14;
		}

IL_0080_1:
		{
			// string temporaryImagePath = TemporaryImagePath; // Must be accessed from main thread
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_15 = __this->___U3CU3E8__1_8;
			String_t* L_16;
			L_16 = NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027(NULL);
			NullCheck(L_15);
			L_15->___temporaryImagePath_1 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&L_15->___temporaryImagePath_1), (void*)L_16);
			// string thumbnailPath = await Task.Run( () => _NativeCamera_GetVideoThumbnail( videoPath, temporaryImagePath + ".png", maxSize, captureTimeInSeconds ) );
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_17 = __this->___U3CU3E8__1_8;
			Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_18 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_19;
			L_19 = Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3(L_18, Task_Run_TisString_t_mDC4F0FD46A6DD4FE57DE5788DEF07F7F277821C3_RuntimeMethod_var);
			NullCheck(L_19);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_20;
			L_20 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_19, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_3 = L_20;
			bool L_21;
			L_21 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_3), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00f9_1;
			}
		}
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_23 = V_3;
			__this->___U3CU3Eu__1_12 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_12))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_24 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m482A5A6B405892CEBE89DBA5F4D7FEFE93A0A51B(L_24, (&V_3), (&V_4), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_m482A5A6B405892CEBE89DBA5F4D7FEFE93A0A51B_RuntimeMethod_var);
			goto IL_0213;
		}

IL_00dd_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_25 = __this->___U3CU3Eu__1_12;
			V_3 = L_25;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_26 = (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*)(&__this->___U3CU3Eu__1_12);
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00f9_1:
		{
			String_t* L_28;
			L_28 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_3), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			__this->___U3CU3Es__3_10 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_10), (void*)L_28);
			String_t* L_29 = __this->___U3CU3Es__3_10;
			__this->___U3CthumbnailPathU3E5__2_9 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CthumbnailPathU3E5__2_9), (void*)L_29);
			__this->___U3CU3Es__3_10 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_10), (void*)(String_t*)NULL);
			// if( !string.IsNullOrEmpty( thumbnailPath ) )
			String_t* L_30 = __this->___U3CthumbnailPathU3E5__2_9;
			bool L_31;
			L_31 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_30, NULL);
			V_5 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			bool L_32 = V_5;
			if (!L_32)
			{
				goto IL_01c4_1;
			}
		}
		{
			// return await LoadImageAtPathAsync( thumbnailPath, maxSize, markTextureNonReadable, generateMipmaps, linearColorSpace );
			String_t* L_33 = __this->___U3CthumbnailPathU3E5__2_9;
			U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8* L_34 = __this->___U3CU3E8__1_8;
			NullCheck(L_34);
			int32_t L_35 = L_34->___maxSize_2;
			bool L_36 = __this->___markTextureNonReadable_5;
			bool L_37 = __this->___generateMipmaps_6;
			bool L_38 = __this->___linearColorSpace_7;
			Task_1_t95921EB64E237ACD28589D64B693C652268F225E* L_39;
			L_39 = NativeCamera_LoadImageAtPathAsync_mFE206BEA6BD5DD550C82067FDC68E936E2AE338B(L_33, L_35, L_36, L_37, L_38, NULL);
			NullCheck(L_39);
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_40;
			L_40 = Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C(L_39, Task_1_GetAwaiter_m88AFED53B032F7EDDB6F9746699970B9FFFC992C_RuntimeMethod_var);
			V_6 = L_40;
			bool L_41;
			L_41 = TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911((&V_6), TaskAwaiter_1_get_IsCompleted_m77FF413EE49A5859C0BC111104448D64F3C01911_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_01ae_1;
			}
		}
		{
			int32_t L_42 = 1;
			V_0 = L_42;
			__this->___U3CU3E1__state_0 = L_42;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_43 = V_6;
			__this->___U3CU3Eu__2_13 = L_43;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_13))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_44 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_mF8BF528CD7DF9627E708ED2EC31BC1D2F77ACE0B(L_44, (&V_6), (&V_4), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B_TisU3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1_mF8BF528CD7DF9627E708ED2EC31BC1D2F77ACE0B_RuntimeMethod_var);
			goto IL_0213;
		}

IL_0191_1:
		{
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B L_45 = __this->___U3CU3Eu__2_13;
			V_6 = L_45;
			TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B* L_46 = (TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_t6D65E8305E8A65AA4939559CBC191F5C2238F74B));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
		}

IL_01ae_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48;
			L_48 = TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C((&V_6), TaskAwaiter_1_GetResult_mE4B8867B0D8DAA1317AD64FE09FBD26E825A654C_RuntimeMethod_var);
			__this->___U3CU3Es__4_11 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_11), (void*)L_48);
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = __this->___U3CU3Es__4_11;
			V_1 = L_49;
			goto IL_01f0;
		}

IL_01c4_1:
		{
			// return null;
			V_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
			goto IL_01f0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c8;
		}
		throw e;
	}

CATCH_01c8:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_8 = (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_8), (void*)(U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8*)NULL);
		__this->___U3CthumbnailPathU3E5__2_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CthumbnailPathU3E5__2_9), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_50 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1697D9F7BF9D11383EDE12CEE54A18AC24A7786B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0213;
	}// end catch (depth: 1)

IL_01f0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_8 = (U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_8), (void*)(U3CU3Ec__DisplayClass35_0_tAFA9B36831A23416B6ECA4CAD97DA0F80572B7F8*)NULL);
		__this->___U3CthumbnailPathU3E5__2_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CthumbnailPathU3E5__2_9), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F* L_52 = (AsyncTaskMethodBuilder_1_t05B41371EF0E362ABCB54C56063FAA1E00C69A8F*)(&__this->___U3CU3Et__builder_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688(L_52, L_53, AsyncTaskMethodBuilder_1_SetResult_mAB04B95B4490AB6E1FCB475391576D15606A2688_RuntimeMethod_var);
	}

IL_0213:
	{
		return;
	}
}
// System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetVideoThumbnailAsyncU3Ed__35_SetStateMachine_mD7683E651477FBEFF482D54A5252AF897665C84D (U3CGetVideoThumbnailAsyncU3Ed__35_t3712CCF8438D8368E048907AE628C9FBC06BD1A1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
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
// System.Boolean NativeCameraNamespace.NCCameraCallbackiOS::get_IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 NativeCameraNamespace.NCCameraCallbackiOS::_NativeCamera_IsCameraBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NCCameraCallbackiOS__NativeCamera_IsCameraBusy_mD6BB6BD8D6C98A21ED54547F000201AA6B072A1E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeCamera_IsCameraBusy)();

	return returnValue;
}
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::Initialize(NativeCamera/CameraCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8 (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_mF1840617059BB4A1B332E246BB8B25E7D0BBC192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF5C74EF04643CF550FCCFFCA8EA8BCAF7B03D20);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA_inline(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0068;
	}

IL_000c:
	{
		// if( instance == null )
		NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* L_2 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// instance = new GameObject( "NCCameraCallbackiOS" ).AddComponent<NCCameraCallbackiOS>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_5, _stringLiteralDF5C74EF04643CF550FCCFFCA8EA8BCAF7B03D20, NULL);
		NullCheck(L_5);
		NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* L_6;
		L_6 = GameObject_AddComponent_TisNCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_mF1840617059BB4A1B332E246BB8B25E7D0BBC192(L_5, GameObject_AddComponent_TisNCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_mF1840617059BB4A1B332E246BB8B25E7D0BBC192_RuntimeMethod_var);
		((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4), (void*)L_6);
		// DontDestroyOnLoad( instance.gameObject );
		NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* L_7 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_8, NULL);
	}

IL_0041:
	{
		// instance.callback = callback;
		NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* L_9 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_10 = ___0_callback;
		NullCheck(L_9);
		L_9->___callback_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___callback_5), (void*)L_10);
		// instance.nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* L_11 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___instance_4;
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NullCheck(L_11);
		L_11->___nextBusyCheckTime_6 = ((float)il2cpp_codegen_add(L_12, (1.0f)));
		// IsBusy = true;
		NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601_inline((bool)1, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_Update_m0DD66E73BE361507EDDD983F3B1D129EE56E22EF (NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* V_3 = NULL;
	bool V_4 = false;
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA_inline(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		// if( Time.realtimeSinceStartup >= nextBusyCheckTime )
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_3 = __this->___nextBusyCheckTime_6;
		V_1 = (bool)((((int32_t)((!(((float)L_2) >= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		// nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___nextBusyCheckTime_6 = ((float)il2cpp_codegen_add(L_5, (1.0f)));
		// if( _NativeCamera_IsCameraBusy() == 0 )
		int32_t L_6;
		L_6 = NCCameraCallbackiOS__NativeCamera_IsCameraBusy_mD6BB6BD8D6C98A21ED54547F000201AA6B072A1E(NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		// IsBusy = false;
		NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601_inline((bool)0, NULL);
		// NativeCamera.CameraCallback _callback = callback;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_8 = __this->___callback_5;
		V_3 = L_8;
		// callback = null;
		__this->___callback_5 = (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)NULL);
		// if( _callback != null )
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_9 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		// _callback( null );
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_11 = V_3;
		NullCheck(L_11);
		CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline(L_11, (String_t*)NULL, NULL);
	}

IL_0065:
	{
	}

IL_0066:
	{
	}

IL_0067:
	{
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_OnMediaReceived_m622F5D25E393368C3955B8E8EB22823FEE828836 (NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// IsBusy = false;
		NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601_inline((bool)0, NULL);
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// path = null;
		___0_path = (String_t*)NULL;
	}

IL_0015:
	{
		// NativeCamera.CameraCallback _callback = callback;
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_3 = __this->___callback_5;
		V_0 = L_3;
		// callback = null;
		__this->___callback_5 = (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_5), (void*)(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)NULL);
		// if( _callback != null )
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_4 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// _callback( path );
		CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* L_6 = V_0;
		String_t* L_7 = ___0_path;
		NullCheck(L_6);
		CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline(L_6, L_7, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void NativeCameraNamespace.NCCameraCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NCCameraCallbackiOS__ctor_mE968248C208D510DD191161A020E9446802253A6 (NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___0_value;
		((NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_StaticFields*)il2cpp_codegen_static_fields_for(NCCameraCallbackiOS_tF5C648C984A85117A0E6525BF49A62E170DBAF60_il2cpp_TypeInfo_var))->___U3CIsBusyU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A_inline (CameraCallback_tF33A274B891CCEC46FF206A2C3907F370B4FF771* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_path, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
