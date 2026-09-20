// FUN_005e6fc0 @ 005e6fc0

void FUN_005e6fc0(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "FakeMainFrameItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateNameLabel_026a2ff8,FUN_005e73e8,&DAT_028cb840);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_005e7484,&DAT_028cb848);
  pcVar1 = "MainFrameItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateNameLabel_026a2ff8,FUN_005e7520,&DAT_028cb850);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_005e75bc,&DAT_028cb858);
  pcVar1 = "CommonMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isShowChatRoomDisplayName_026a5d30,FUN_005e7658,&DAT_028cb860);
  pcVar1 = "MMCPLabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_005e7704,&DAT_028cb868);
  _MSHookMessageEx(pcVar1,PTR_s_setLeft__026a5290,FUN_005e779c,&DAT_028cb870);
  _MSHookMessageEx(pcVar1,PTR_s_setX__026a5d38,FUN_005e78cc,&DAT_028cb878);
  _MSHookMessageEx(pcVar1,PTR_s_setWidth__0269feb0,FUN_005e79fc,&DAT_028cb880);
  pcVar1 = "CommonMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutInternal_0269f018,FUN_005e7b2c,&DAT_028cb888);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_005e7be0,&DAT_028cb890);
  _class_addMethod(pcVar1,PTR_s_wcr_applyNameplateIfNeeded_026a5d40,FUN_005e7c68);
  pcVar1 = "ContactsItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_005e8530,&DAT_028cb898);
  pcVar1 = "WCTimeLineCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_005e8a54,&DAT_028cb8a0);
  _MSHookMessageEx(pcVar1,PTR_s_initNickLabel_026a5d48,FUN_005e8aa0,&DAT_028cb8a8);
  _class_addMethod(pcVar1,PTR_s_wcr_applyMomentsNameplate_026a5d50,FUN_005e8aec);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_refreshForcedChatNicknameSnapsho_026a5d58);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

