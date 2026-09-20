// FUN_0169b5c4 @ 0169b5c4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0169b5c4(void)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  undefined1 uStack_424;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar4 = "CommonMessageCellView";
  _objc_getClass();
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0x40;
  uStack_424 = 0;
  _class_addMethod(pcVar4,PTR_s_performRepeatEnhanceAction__026b2ab8,FUN_0169ddd8);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar4,PTR_s_performRepeatEnhanceFileTagLongP_026b2ac0,FUN_0169defc);
  _class_addMethod(pcVar4,PTR_s_performRepeatEnhanceGestureActio_026a4360,FUN_0169e190);
  _MSHookMessageEx(pcVar4,PTR_s_initWithViewModel__0269f008,FUN_0169e28c,&DAT_028e3d88);
  _MSHookMessageEx(pcVar4,PTR_s_updateNodeStatus_0269f010,FUN_016a01ac,&DAT_028e3d90);
  _MSHookMessageEx(pcVar4,PTR_s_layoutSubviews_0269de80,FUN_016a3a6c,&DAT_028e3d98);
  _MSHookMessageEx(pcVar4,PTR_s_prepareForReuse_0269e760,FUN_016a3abc,&DAT_028e3da0);
  _MSHookMessageEx(pcVar4,PTR_s_repeatEnhanceDarkModeChanged__026b2ac8,FUN_016a3bbc,&DAT_028e3da8);
  pcVar3 = "dealloc";
  _sel_registerName("dealloc");
  _MSHookMessageEx(pcVar4,pcVar3,FUN_016a3fb4,&DAT_028e3db0);
  pcVar4 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_filteredMenuItems__026a1e08,FUN_016a40a0,&DAT_028e3db8);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressQuickPostToM_026b2ad0,FUN_016a4d44);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressThemeCardQui_026b2ad8,FUN_016a4e94);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressWordSegmenta_026b2ae0,FUN_016a4f1c);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressQuickReuse__026b2ae8,FUN_016a4fe4);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressRepeat__026b2af0,FUN_016a5054);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressAddToClipboa_026b2af8,FUN_016a5120);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressParseLink__026b2b00,FUN_016a51a8);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressAIReply__026b2b08,FUN_016a53a4);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressVoiceForward_026a99d0,FUN_016a5414);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10,FUN_016a5484);
  _class_addMethod(pcVar4,PTR_s_WCRefine_confirmMessageRepositor_026b2b18,FUN_016a54f4);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onConvertImageToEmotico_026ac0a8,FUN_016a5564);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onSaveEmoticonToAlbum__026ac0f0,FUN_016a57e4);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onSaveEmoticonToLocalRe_026ac0f8,FUN_016a5914);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onEmoticonResize__026ac108,FUN_016a59e0);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onEmoticonSpeed__026ac110,FUN_016a5b10);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onEmoticonResizeAndSpee_026ac100,FUN_016a5c40);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onEmoticonToSelfie__026ac118,FUN_016a5d98);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onRemoveEmoticonSelfie__026ac120,FUN_016a5ec8);
  pcVar4 = "ImageMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_operationMenuItems_026a1618,FUN_016a5ff8,&DAT_028e3dc0);
  pcVar4 = "VideoMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_operationMenuItems_026a1618,FUN_016a60a8,&DAT_028e3dc8);
  pcVar4 = "AppFileMessageCellViewV2";
  _objc_getClass();
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressRepeat__026b2af0,FUN_016a6158);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressAddToClipboa_026b2af8,FUN_016a6224);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10,FUN_016a62ac);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportFontBeautify__026b2b20,FUN_016a631c);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportToDoHTML__026b2b28,FUN_016a638c);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportLocalEmoticon__026b2b30,FUN_016a63fc);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressOpenFileMana_026b2b38,FUN_016a646c);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onConvertImageToEmotico_026ac0a8,FUN_016a64dc);
  _class_addMethod(pcVar4,PTR_s_WCRefine_confirmMessageRepositor_026b2b40,FUN_016a660c);
  pcVar4 = "AppFileMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressRepeat__026b2af0,FUN_016a667c);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressAddToClipboa_026b2af8,FUN_016a6748);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10,FUN_016a67d0);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportFontBeautify__026b2b20,FUN_016a6840);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportToDoHTML__026b2b28,FUN_016a68b0);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onImportLocalEmoticon__026b2b30,FUN_016a6920);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressOpenFileMana_026b2b38,FUN_016a6990);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onConvertImageToEmotico_026ac0a8,FUN_016a6a00);
  _class_addMethod(pcVar4,PTR_s_WCRefine_confirmMessageRepositor_026b2b40,FUN_016a6b30);
  pcVar4 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_operationMenuItems_026a1618,FUN_016a6ba0,&DAT_028e3dd0);
  _MSHookMessageEx(pcVar4,PTR_s_filteredMenuItems__026a1e08,FUN_016a6c38,&DAT_028e3dd8);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressSaveToMessag_026b2b10,FUN_016a6d70);
  _class_addMethod(pcVar4,PTR_s_WCRefine_confirmMessageRepositor_026b2b40,FUN_016a6de0);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressRepeat__026b2af0,FUN_016a6e50);
  _class_addMethod(pcVar4,PTR_s_WCRefine_onLongPressAddToClipboa_026b2af8,FUN_016a6f1c);
  pcVar4 = "MMMenuController";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_setMenuItems__026a0080,FUN_016a6fa4,&DAT_028e3de0);
  pcVar4 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_viewDidAppear__0269cd50,FUN_016a708c,&DAT_028e3de8);
  _MSHookMessageEx(pcVar4,PTR_s_viewDidDisappear__0269de98,FUN_016a725c,&DAT_028e3df0);
  _MSHookMessageEx(pcVar4,PTR_s_viewDidLayoutSubviews_0269de90,FUN_016a7300,&DAT_028e3df8);
  _class_addMethod(pcVar4,PTR_s_WCRefine_cancelMessageRepository_026b2b48,FUN_016a7510);
  _class_addMethod(pcVar4,PTR_s_WCRefine_finishMessageRepository_026b2b50,FUN_016a75bc);
  _class_addMethod(pcVar4,PTR_s_WCRefine_confirmMessageRepositor_026b2b58,FUN_016a76d0);
  _MSHookMessageEx(pcVar4,PTR_s_tableView_cellForRowAtIndexPath__0269e790,FUN_016a7a38,&DAT_028e3e00
                  );
  pcVar4 = "UIViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar4,PTR_s_traitCollectionDidChange__0269f168,FUN_016a7f84,&DAT_028e3e08);
  pcVar4 = "CommonMessageCellView";
  _objc_getClass();
  bVar1 = false;
  if (pcVar4 != (char *)0x0) {
    _class_getInstanceMethod(pcVar4,PTR_s_layoutInternal_0269f018);
    bVar1 = pcVar4 != (char *)0x0;
  }
  DAT_028e3e10 = bVar1;
  if ((bool)DAT_028e3e10 != false) {
    pcVar4 = "CommonMessageCellView";
    _objc_getClass();
    _MSHookMessageEx(pcVar4,PTR_s_layoutInternal_0269f018,FUN_016a81d0,&DAT_028e3e18);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

