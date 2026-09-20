// FUN_003fc5f8 @ 003fc5f8

void FUN_003fc5f8(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WCAccountBaseViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillLayoutSubviews_0269f360,FUN_003fc8f4,&DAT_028ca630);
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_ipadLoginModeAction__026a3518,FUN_003fc930);
  pcVar1 = "WCAccountLoginControlLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_startLogic_0269d5b8,FUN_003fcba0,&DAT_028ca638);
  _MSHookMessageEx(pcVar1,PTR_s_startIPadLoginLogic_026a3520,FUN_003fcc18,&DAT_028ca640);
  pcVar1 = "WCAccountBackDeviceFirstViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_003fccec,&DAT_028ca648);
  pcVar1 = "WCAccountControlMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_isLogin__026a3528,FUN_003fcf10,&DAT_028ca650);
  pcVar1 = "DeviceInfo";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isiPad_026a3530,FUN_003fcf74,&DAT_028ca658);
  _MSHookMessageEx(pcVar1,PTR_s_isiPhone_026a3538,FUN_003fcfdc,&DAT_028ca660);
  _MSHookMessageEx(pcVar1,PTR_s_isiPadUniversal_026a3540,FUN_003fd044,&DAT_028ca668);
  pcVar1 = "DeviceUtility";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_deviceType_026a3548,FUN_003fd0ac,&DAT_028ca670);
  pcVar1 = "OnlineClientMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onGetChatListResponsed__026a3550,FUN_003fd104,&DAT_028ca678);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

