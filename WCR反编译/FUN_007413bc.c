// FUN_007413bc @ 007413bc

void FUN_007413bc(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "SelectAttachmentViewController";
  _objc_getClass();
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRSSHandleSmallSignalAttachment_026a7c08,FUN_007418d4);
  _MSHookMessageEx(pcVar1,PTR_s_resetView_0269f310,FUN_00741bb4,&DAT_028cc660);
  _MSHookMessageEx(pcVar1,PTR_s_numberOfAttachment_026a7c10,FUN_00741c20,&DAT_028cc668);
  _MSHookMessageEx(pcVar1,PTR_s_getTextAtIndex__026a7c18,FUN_00741dd8,&DAT_028cc670);
  _MSHookMessageEx(pcVar1,PTR_s_getDescAtIndex__026a7c20,FUN_00741e60,&DAT_028cc678);
  _MSHookMessageEx(pcVar1,PTR_s_getImageAtIndex__026a7c28,FUN_00741ee8,&DAT_028cc680);
  _MSHookMessageEx(pcVar1,PTR_s_viewForAttachmentAtIndex__0269f340,FUN_007420a4,&DAT_028cc688);
  _MSHookMessageEx(pcVar1,PTR_s_OnAttachmentClicked__0269f348,FUN_00742238,&DAT_028cc690);
  _MSHookMessageEx(pcVar1,PTR_s_MMTransparentButton_touchesEnded_026a7c30,FUN_00742314,&DAT_028cc698
                  );
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didSelectAttachmentAtIndex__026a7c38,FUN_00742468,&DAT_028cc6a0);
  pcVar1 = "EventService";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_CreateProtobufEvent_Flag__026a7c40,FUN_00742584,&DAT_028cc6a8);
  pcVar1 = "WCWatchNativeMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnMsgNotAddDBNotify_MsgWrap__026a7c48,FUN_00742628,&DAT_028cc6b0);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_007428b4,&DAT_028cc6b8);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_007429fc,&DAT_028cc6c0);
  pcVar1 = "WCYoHudViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type__026a7c50,FUN_00742b44,&DAT_028cc6c8)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type_n_026a7c58,FUN_00742c04,&DAT_028cc6d0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type_n_026a7c60,FUN_00742ea8,&DAT_028cc6d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_addYoCount_forUsername_type__026a7c68,FUN_00743188,&DAT_028cc6e0);
  _MSHookMessageEx(pcVar1,PTR_s_refreshDescriptionTime_026a7c70,FUN_00743238,&DAT_028cc6e8);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0074327c,&DAT_028cc6f0);
  _MSHookMessageEx(pcVar1,PTR_s_didTapAvatarView__026a7c78,FUN_007432f0,&DAT_028cc6f8);
  pcVar1 = "WCYoWindowController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type_d_026a7c80,FUN_00743484,&DAT_028cc700
                  );
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type_d_026a7c88,FUN_00743554,&DAT_028cc708
                  );
  _MSHookMessageEx(pcVar1,PTR_s_setupYoWithCount_username_type_d_026a7c90,FUN_007437f8,&DAT_028cc710
                  );
  _MSHookMessageEx(pcVar1,PTR_s_addYoCount_forUsername_type__026a7c68,FUN_00743adc,&DAT_028cc718);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00743b74,&DAT_028cc720);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_00743ce0,&DAT_028cc728);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_00743e2c,&DAT_028cc730);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

