// FUN_008e1424 @ 008e1424

void FUN_008e1424(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_uiVoiceTime_026a9da0,FUN_008e2aac,&DAT_028ce310);
  pcVar1 = "UploadVoiceWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_uiVoiceTime__026a3968,FUN_008e2b14,&DAT_028ce318);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_008e2b5c,&DAT_028ce320);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoiceToFile__026a9da8,FUN_008e2c48);
  _class_addMethod(pcVar1,PTR_s_WCRefine_sendVoiceFileToCurrentC_026a9db0,FUN_008e2de0);
  _class_addMethod(pcVar1,PTR_s_WCRefine_forwardVoiceFile__026a9db8,FUN_008e3098);
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_008e3250,&DAT_028ce328);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e333c);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3408);
  pcVar1 = "AppFileMessageCellViewV2";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3478);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e34e8);
  pcVar1 = "AppFileMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3558);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e35c8);
  pcVar1 = "VideoMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3638);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e36a8);
  pcVar1 = "AppVideoMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3718);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3788);
  pcVar1 = "AppDefaultMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e37f8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3868);
  pcVar1 = "AppUrlMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e38d8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3948);
  pcVar1 = "AppMusicMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e39b8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3a28);
  pcVar1 = "AppMusicMVMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3a98);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3b08);
  pcVar1 = "AppTingMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3b78);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3be8);
  pcVar1 = "AppTingListMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3c58);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3cc8);
  pcVar1 = "AppTingChatRoomMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToVoice_026a9dc0,FUN_008e3d38);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressMediaToFile__026a9dc8,FUN_008e3da8);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

