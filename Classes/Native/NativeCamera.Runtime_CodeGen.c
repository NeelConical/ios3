#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Int32 NativeCamera::_NativeCamera_CheckPermission()
extern void NativeCamera__NativeCamera_CheckPermission_mBA65A3F23A88956C36B428138CB8CF914F891075 (void);
// 0x00000002 System.Int32 NativeCamera::_NativeCamera_RequestPermission()
extern void NativeCamera__NativeCamera_RequestPermission_m7582D9816F0C8676ADDAE3DEBCCC1E058F638CDE (void);
// 0x00000003 System.Int32 NativeCamera::_NativeCamera_CanOpenSettings()
extern void NativeCamera__NativeCamera_CanOpenSettings_m9669238326F4B3BC0BA8979EDC552F7447BF2E11 (void);
// 0x00000004 System.Void NativeCamera::_NativeCamera_OpenSettings()
extern void NativeCamera__NativeCamera_OpenSettings_m5FD7161414315CBDFBDF9DDFCAC4184D289E3CDA (void);
// 0x00000005 System.Int32 NativeCamera::_NativeCamera_HasCamera()
extern void NativeCamera__NativeCamera_HasCamera_m4609F602C13722CB70C1C6553D4E22780999B26C (void);
// 0x00000006 System.Void NativeCamera::_NativeCamera_TakePicture(System.String,System.Int32,System.Int32)
extern void NativeCamera__NativeCamera_TakePicture_m297A53373955B2EA1B154A03F18CE569518B59ED (void);
// 0x00000007 System.Void NativeCamera::_NativeCamera_RecordVideo(System.Int32,System.Int32,System.Int32)
extern void NativeCamera__NativeCamera_RecordVideo_m26EB4DC0972772FFC1F4521E17F2F8F7816584CA (void);
// 0x00000008 System.String NativeCamera::_NativeCamera_GetImageProperties(System.String)
extern void NativeCamera__NativeCamera_GetImageProperties_m7A666ADF5C25CCC3C9C28C1399CDAFDA3BEA1761 (void);
// 0x00000009 System.String NativeCamera::_NativeCamera_GetVideoProperties(System.String)
extern void NativeCamera__NativeCamera_GetVideoProperties_mE8A0DE43BF69428796A293D34678309D8825827D (void);
// 0x0000000A System.String NativeCamera::_NativeCamera_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
extern void NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9 (void);
// 0x0000000B System.String NativeCamera::_NativeCamera_LoadImageAtPath(System.String,System.String,System.Int32)
extern void NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD (void);
// 0x0000000C System.String NativeCamera::get_TemporaryImagePath()
extern void NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027 (void);
// 0x0000000D System.String NativeCamera::get_IOSSelectedImagePath()
extern void NativeCamera_get_IOSSelectedImagePath_m797A6A282C2E14DCD2C7729A4F3BA3E0EC054BC3 (void);
// 0x0000000E NativeCamera/Permission NativeCamera::CheckPermission(System.Boolean)
extern void NativeCamera_CheckPermission_m0445839C87DFBA62F088F4A2116FFA53173470CD (void);
// 0x0000000F NativeCamera/Permission NativeCamera::RequestPermission(System.Boolean)
extern void NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1 (void);
// 0x00000010 System.Boolean NativeCamera::CanOpenSettings()
extern void NativeCamera_CanOpenSettings_m56BCC77D77E381E5181E956C018F4BBFB4E102BA (void);
// 0x00000011 System.Void NativeCamera::OpenSettings()
extern void NativeCamera_OpenSettings_m8732D49A39F244910C6722CB78FD44694C0C254B (void);
// 0x00000012 NativeCamera/Permission NativeCamera::TakePicture(NativeCamera/CameraCallback,System.Int32,System.Boolean,NativeCamera/PreferredCamera)
extern void NativeCamera_TakePicture_mC2A748E023DC5C34D19AF571325AF952A714AAD4 (void);
// 0x00000013 NativeCamera/Permission NativeCamera::RecordVideo(NativeCamera/CameraCallback,NativeCamera/Quality,System.Int32,System.Int64,NativeCamera/PreferredCamera)
extern void NativeCamera_RecordVideo_mFC9802F5F9A52504C23E339018820D8CED325292 (void);
// 0x00000014 System.Boolean NativeCamera::DeviceHasCamera()
extern void NativeCamera_DeviceHasCamera_m73F0E99DB7C414EA95D5600918FFC502373E41E7 (void);
// 0x00000015 System.Boolean NativeCamera::IsCameraBusy()
extern void NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54 (void);
// 0x00000016 UnityEngine.Texture2D NativeCamera::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern void NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747 (void);
// 0x00000017 System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeCamera::LoadImageAtPathAsync(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern void NativeCamera_LoadImageAtPathAsync_mFE206BEA6BD5DD550C82067FDC68E936E2AE338B (void);
// 0x00000018 UnityEngine.Texture2D NativeCamera::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
extern void NativeCamera_GetVideoThumbnail_m7568A298D0A3BEABBDD10C973A4F9EB657C8644B (void);
// 0x00000019 System.Threading.Tasks.Task`1<UnityEngine.Texture2D> NativeCamera::GetVideoThumbnailAsync(System.String,System.Int32,System.Double,System.Boolean,System.Boolean,System.Boolean)
extern void NativeCamera_GetVideoThumbnailAsync_m8001058D169430C969DA22808DD73A3336BFF3B7 (void);
// 0x0000001A System.Threading.Tasks.Task`1<T> NativeCamera::TryCallNativeAndroidFunctionOnSeparateThread(System.Func`1<T>)
// 0x0000001B NativeCamera/ImageProperties NativeCamera::GetImageProperties(System.String)
extern void NativeCamera_GetImageProperties_m906832D1F45ECF5821CFA3236192AE053761C050 (void);
// 0x0000001C NativeCamera/VideoProperties NativeCamera::GetVideoProperties(System.String)
extern void NativeCamera_GetVideoProperties_m2E7F06E4A9C55A06A5752F8337951217018250EB (void);
// 0x0000001D System.Void NativeCamera/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeCamera/ImageOrientation)
extern void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC (void);
// 0x0000001E System.Void NativeCamera/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
extern void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D (void);
// 0x0000001F System.Void NativeCamera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern void CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE (void);
// 0x00000020 System.Void NativeCamera/CameraCallback::Invoke(System.String)
extern void CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A (void);
// 0x00000021 System.IAsyncResult NativeCamera/CameraCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void CameraCallback_BeginInvoke_m690E44108A53130266E7C1A57DC6E62F2B0BDCDF (void);
// 0x00000022 System.Void NativeCamera/CameraCallback::EndInvoke(System.IAsyncResult)
extern void CameraCallback_EndInvoke_m64D370EA45BBA56CF1B29C19E1B766B43542D7A6 (void);
// 0x00000023 System.Void NativeCamera/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m4A44110101F08454BA08B33D034A2C4E528A0E4A (void);
// 0x00000024 System.String NativeCamera/<>c__DisplayClass33_0::<LoadImageAtPathAsync>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4 (void);
// 0x00000025 System.Void NativeCamera/<LoadImageAtPathAsync>d__33::.ctor()
extern void U3CLoadImageAtPathAsyncU3Ed__33__ctor_m97DE90EA0CDF38277E15CB4164409817BDF97686 (void);
// 0x00000026 System.Void NativeCamera/<LoadImageAtPathAsync>d__33::MoveNext()
extern void U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1 (void);
// 0x00000027 System.Void NativeCamera/<LoadImageAtPathAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CLoadImageAtPathAsyncU3Ed__33_SetStateMachine_mF3C3C51A8DEDB6C3656E5F149CAA9759389F702C (void);
// 0x00000028 System.Void NativeCamera/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_m48AE36E83E3AC325A047D9D497F0D9C5E16C06E7 (void);
// 0x00000029 System.String NativeCamera/<>c__DisplayClass35_0::<GetVideoThumbnailAsync>b__0()
extern void U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A (void);
// 0x0000002A System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::.ctor()
extern void U3CGetVideoThumbnailAsyncU3Ed__35__ctor_m32550764ED9458ED197BF86857F84453A8A707E3 (void);
// 0x0000002B System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::MoveNext()
extern void U3CGetVideoThumbnailAsyncU3Ed__35_MoveNext_m8F4E3D2F5ED99B2632A283102DC411AD0E6C096A (void);
// 0x0000002C System.Void NativeCamera/<GetVideoThumbnailAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetVideoThumbnailAsyncU3Ed__35_SetStateMachine_mD7683E651477FBEFF482D54A5252AF897665C84D (void);
// 0x0000002D System.Void NativeCamera/<>c__DisplayClass36_0`1::.ctor()
// 0x0000002E System.Void NativeCamera/<>c__DisplayClass36_0`1::<TryCallNativeAndroidFunctionOnSeparateThread>b__0()
// 0x0000002F System.Void NativeCamera/<TryCallNativeAndroidFunctionOnSeparateThread>d__36`1::.ctor()
// 0x00000030 System.Void NativeCamera/<TryCallNativeAndroidFunctionOnSeparateThread>d__36`1::MoveNext()
// 0x00000031 System.Void NativeCamera/<TryCallNativeAndroidFunctionOnSeparateThread>d__36`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x00000032 System.Boolean NativeCameraNamespace.NCCameraCallbackiOS::get_IsBusy()
extern void NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA (void);
// 0x00000033 System.Void NativeCameraNamespace.NCCameraCallbackiOS::set_IsBusy(System.Boolean)
extern void NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601 (void);
// 0x00000034 System.Int32 NativeCameraNamespace.NCCameraCallbackiOS::_NativeCamera_IsCameraBusy()
extern void NCCameraCallbackiOS__NativeCamera_IsCameraBusy_mD6BB6BD8D6C98A21ED54547F000201AA6B072A1E (void);
// 0x00000035 System.Void NativeCameraNamespace.NCCameraCallbackiOS::Initialize(NativeCamera/CameraCallback)
extern void NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8 (void);
// 0x00000036 System.Void NativeCameraNamespace.NCCameraCallbackiOS::Update()
extern void NCCameraCallbackiOS_Update_m0DD66E73BE361507EDDD983F3B1D129EE56E22EF (void);
// 0x00000037 System.Void NativeCameraNamespace.NCCameraCallbackiOS::OnMediaReceived(System.String)
extern void NCCameraCallbackiOS_OnMediaReceived_m622F5D25E393368C3955B8E8EB22823FEE828836 (void);
// 0x00000038 System.Void NativeCameraNamespace.NCCameraCallbackiOS::.ctor()
extern void NCCameraCallbackiOS__ctor_mE968248C208D510DD191161A020E9446802253A6 (void);
static Il2CppMethodPointer s_methodPointers[56] = 
{
	NativeCamera__NativeCamera_CheckPermission_mBA65A3F23A88956C36B428138CB8CF914F891075,
	NativeCamera__NativeCamera_RequestPermission_m7582D9816F0C8676ADDAE3DEBCCC1E058F638CDE,
	NativeCamera__NativeCamera_CanOpenSettings_m9669238326F4B3BC0BA8979EDC552F7447BF2E11,
	NativeCamera__NativeCamera_OpenSettings_m5FD7161414315CBDFBDF9DDFCAC4184D289E3CDA,
	NativeCamera__NativeCamera_HasCamera_m4609F602C13722CB70C1C6553D4E22780999B26C,
	NativeCamera__NativeCamera_TakePicture_m297A53373955B2EA1B154A03F18CE569518B59ED,
	NativeCamera__NativeCamera_RecordVideo_m26EB4DC0972772FFC1F4521E17F2F8F7816584CA,
	NativeCamera__NativeCamera_GetImageProperties_m7A666ADF5C25CCC3C9C28C1399CDAFDA3BEA1761,
	NativeCamera__NativeCamera_GetVideoProperties_mE8A0DE43BF69428796A293D34678309D8825827D,
	NativeCamera__NativeCamera_GetVideoThumbnail_m86263934AA445B7405A57CD18E25FBDC56EF37E9,
	NativeCamera__NativeCamera_LoadImageAtPath_m9E8BE5FA7502D08B03FDDA2472A0327E1D4162AD,
	NativeCamera_get_TemporaryImagePath_m8697D60DFA6387A8227ABEE74C34C46FDC14E027,
	NativeCamera_get_IOSSelectedImagePath_m797A6A282C2E14DCD2C7729A4F3BA3E0EC054BC3,
	NativeCamera_CheckPermission_m0445839C87DFBA62F088F4A2116FFA53173470CD,
	NativeCamera_RequestPermission_m22C7DBA897A6DB77BFB1C2DF886FC1F331CFEDB1,
	NativeCamera_CanOpenSettings_m56BCC77D77E381E5181E956C018F4BBFB4E102BA,
	NativeCamera_OpenSettings_m8732D49A39F244910C6722CB78FD44694C0C254B,
	NativeCamera_TakePicture_mC2A748E023DC5C34D19AF571325AF952A714AAD4,
	NativeCamera_RecordVideo_mFC9802F5F9A52504C23E339018820D8CED325292,
	NativeCamera_DeviceHasCamera_m73F0E99DB7C414EA95D5600918FFC502373E41E7,
	NativeCamera_IsCameraBusy_m3373F1A16F70303B7F53D47A1143BED4152C2F54,
	NativeCamera_LoadImageAtPath_m0F2B227CF63FE99A67155B8C52A719AF5949C747,
	NativeCamera_LoadImageAtPathAsync_mFE206BEA6BD5DD550C82067FDC68E936E2AE338B,
	NativeCamera_GetVideoThumbnail_m7568A298D0A3BEABBDD10C973A4F9EB657C8644B,
	NativeCamera_GetVideoThumbnailAsync_m8001058D169430C969DA22808DD73A3336BFF3B7,
	NULL,
	NativeCamera_GetImageProperties_m906832D1F45ECF5821CFA3236192AE053761C050,
	NativeCamera_GetVideoProperties_m2E7F06E4A9C55A06A5752F8337951217018250EB,
	ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC,
	VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D,
	CameraCallback__ctor_m39376148047C9B1A537BC5DB202E142431A77AFE,
	CameraCallback_Invoke_mE8BD077A2F42B9DBC93521F630A1461381D3BB1A,
	CameraCallback_BeginInvoke_m690E44108A53130266E7C1A57DC6E62F2B0BDCDF,
	CameraCallback_EndInvoke_m64D370EA45BBA56CF1B29C19E1B766B43542D7A6,
	U3CU3Ec__DisplayClass33_0__ctor_m4A44110101F08454BA08B33D034A2C4E528A0E4A,
	U3CU3Ec__DisplayClass33_0_U3CLoadImageAtPathAsyncU3Eb__0_mF04E3E15BB01EE4DB425FA710820D86BBD2D31B4,
	U3CLoadImageAtPathAsyncU3Ed__33__ctor_m97DE90EA0CDF38277E15CB4164409817BDF97686,
	U3CLoadImageAtPathAsyncU3Ed__33_MoveNext_mB0BA02235CB532A94CFF566D1E23FAAE0D072FB1,
	U3CLoadImageAtPathAsyncU3Ed__33_SetStateMachine_mF3C3C51A8DEDB6C3656E5F149CAA9759389F702C,
	U3CU3Ec__DisplayClass35_0__ctor_m48AE36E83E3AC325A047D9D497F0D9C5E16C06E7,
	U3CU3Ec__DisplayClass35_0_U3CGetVideoThumbnailAsyncU3Eb__0_mAFD44E4FBDC86EF39F3D4EE3219AF84E17B7C77A,
	U3CGetVideoThumbnailAsyncU3Ed__35__ctor_m32550764ED9458ED197BF86857F84453A8A707E3,
	U3CGetVideoThumbnailAsyncU3Ed__35_MoveNext_m8F4E3D2F5ED99B2632A283102DC411AD0E6C096A,
	U3CGetVideoThumbnailAsyncU3Ed__35_SetStateMachine_mD7683E651477FBEFF482D54A5252AF897665C84D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NCCameraCallbackiOS_get_IsBusy_m9F87E496A3AC7F0B87DBDEB9B83572FB012B9ABA,
	NCCameraCallbackiOS_set_IsBusy_mE9430DC4EF0FB6B2886E1745A5366C1C1C736601,
	NCCameraCallbackiOS__NativeCamera_IsCameraBusy_mD6BB6BD8D6C98A21ED54547F000201AA6B072A1E,
	NCCameraCallbackiOS_Initialize_m056AEBAA4F9F101B18200CFDE27A4A09F3BDCFA8,
	NCCameraCallbackiOS_Update_m0DD66E73BE361507EDDD983F3B1D129EE56E22EF,
	NCCameraCallbackiOS_OnMediaReceived_m622F5D25E393368C3955B8E8EB22823FEE828836,
	NCCameraCallbackiOS__ctor_mE968248C208D510DD191161A020E9446802253A6,
};
extern void ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC_AdjustorThunk (void);
extern void VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[2] = 
{
	{ 0x0600001D, ImageProperties__ctor_mDB1459622F0FFEEA741B63898D7CE5B41AA4F9EC_AdjustorThunk },
	{ 0x0600001E, VideoProperties__ctor_m61A493A9C32C95FE9B3F84709AC0A2E92283F97D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[56] = 
{
	15309,
	15309,
	15309,
	15377,
	15309,
	12752,
	12702,
	14729,
	14729,
	11665,
	12317,
	15322,
	15322,
	14483,
	14483,
	15281,
	15377,
	11443,
	10698,
	15281,
	15281,
	10857,
	10857,
	10476,
	10476,
	0,
	15172,
	15173,
	1454,
	1452,
	4226,
	7768,
	1907,
	7768,
	9918,
	9744,
	9918,
	9918,
	7768,
	9918,
	9744,
	9918,
	9918,
	7768,
	0,
	0,
	0,
	0,
	0,
	15281,
	15062,
	15309,
	15075,
	9918,
	7768,
	9918,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x0200000E, { 6, 2 } },
	{ 0x0200000F, { 8, 8 } },
	{ 0x0600001A, { 0, 6 } },
};
extern const uint32_t g_rgctx_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5A46983A41847AE7D411347ACAB0F4E6AD3E9732;
extern const uint32_t g_rgctx_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1__ctor_m02F1335BF729861C97DAB09F50CE5E0EC1930CDD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mD7B84B18BFB1AE83670414E9C1E10A6519A1B8B7;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t1B209B4B83112A76F5E126B8DA14875DE5408DDD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5A46983A41847AE7D411347ACAB0F4E6AD3E9732_mC3C1E92CBDA515CAA196F35E2D2378ECD5EEBE92;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m39FD73783843396980B86C5FB50490DCC985DA5A;
extern const uint32_t g_rgctx_Func_1_tBFBE7CD55FC8CCC89AD582F4E1041CD55BD32D80;
extern const uint32_t g_rgctx_Func_1_Invoke_m6C748AD132CC8A0F6D22BDB49FBEDD3DB88C4DDD;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass36_0_1_t2F49F90160A781945B04F7C75D0FB13F64B8EA6A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass36_0_1__ctor_m62F25A4408BE83DBC20075C9FA2353D58EB7291B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass36_0_1_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Eb__0_m247BA7B6933BFE32C603086915522FA49D307513;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5E2F63CE094A0807EAD69A128E2457DDD677A72F_m31C89CFF4453CE778A4EEC52464611351332E35D;
extern const uint32_t g_rgctx_Func_1_t3953CDD6D831A9CDEA0E7F85A50DC835A2E70706;
extern const uint32_t g_rgctx_Func_1_Invoke_m3DBE44C24EAB5097D170BA2D3CDC32BB55A0621F;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_m000044157B120E7AF9B2B422E1BAA02A838DDCE3;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m0E8D0EC35DF4C250565A416767300C250BF245E6;
static const Il2CppRGCTXDefinition s_rgctxValues[16] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5A46983A41847AE7D411347ACAB0F4E6AD3E9732 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1__ctor_m02F1335BF729861C97DAB09F50CE5E0EC1930CDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mD7B84B18BFB1AE83670414E9C1E10A6519A1B8B7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t1B209B4B83112A76F5E126B8DA14875DE5408DDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5A46983A41847AE7D411347ACAB0F4E6AD3E9732_mC3C1E92CBDA515CAA196F35E2D2378ECD5EEBE92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m39FD73783843396980B86C5FB50490DCC985DA5A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_tBFBE7CD55FC8CCC89AD582F4E1041CD55BD32D80 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m6C748AD132CC8A0F6D22BDB49FBEDD3DB88C4DDD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass36_0_1_t2F49F90160A781945B04F7C75D0FB13F64B8EA6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass36_0_1__ctor_m62F25A4408BE83DBC20075C9FA2353D58EB7291B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass36_0_1_U3CTryCallNativeAndroidFunctionOnSeparateThreadU3Eb__0_m247BA7B6933BFE32C603086915522FA49D307513 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CTryCallNativeAndroidFunctionOnSeparateThreadU3Ed__36_1_t5E2F63CE094A0807EAD69A128E2457DDD677A72F_m31C89CFF4453CE778A4EEC52464611351332E35D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t3953CDD6D831A9CDEA0E7F85A50DC835A2E70706 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1_Invoke_m3DBE44C24EAB5097D170BA2D3CDC32BB55A0621F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_m000044157B120E7AF9B2B422E1BAA02A838DDCE3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m0E8D0EC35DF4C250565A416767300C250BF245E6 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_NativeCamera_Runtime_CodeGenModule;
const Il2CppCodeGenModule g_NativeCamera_Runtime_CodeGenModule = 
{
	"NativeCamera.Runtime.dll",
	56,
	s_methodPointers,
	2,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	16,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
