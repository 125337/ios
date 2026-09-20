// FUN_008cb928 @ 008cb928

void FUN_008cb928(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_c28 [1024];
  undefined1 uStack_828;
  undefined1 uStack_827;
  undefined1 uStack_826;
  undefined1 uStack_825;
  undefined1 uStack_824;
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
  _class_addMethod(pcVar1,PTR_s_WCRVPHandleAttachmentLongPress__026a9ce8,FUN_008cc340);
  _MSHookMessageEx(pcVar1,PTR_s_resetView_0269f310,FUN_008cc620,&DAT_028ce1f0);
  _MSHookMessageEx(pcVar1,PTR_s_numberOfAttachment_026a7c10,FUN_008cc68c,&DAT_028ce1f8);
  _MSHookMessageEx(pcVar1,PTR_s_getTextAtIndex__026a7c18,FUN_008cc844,&DAT_028ce200);
  _MSHookMessageEx(pcVar1,PTR_s_getDescAtIndex__026a7c20,FUN_008cc8cc,&DAT_028ce208);
  _MSHookMessageEx(pcVar1,PTR_s_getImageAtIndex__026a7c28,FUN_008cc954,&DAT_028ce210);
  _MSHookMessageEx(pcVar1,PTR_s_viewForAttachmentAtIndex__0269f340,FUN_008cce10,&DAT_028ce218);
  _MSHookMessageEx(pcVar1,PTR_s_OnAttachmentClicked__0269f348,FUN_008ccfa4,&DAT_028ce220);
  _MSHookMessageEx(pcVar1,PTR_s_MMTransparentButton_touchesEnded_026a7c30,FUN_008cd098,&DAT_028ce228
                  );
  pcVar1 = "MMGrowTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setX__026a5d38,FUN_008cd1d0,&DAT_028ce230);
  _MSHookMessageEx(pcVar1,PTR_s_setWidth__0269feb0,FUN_008cd22c,&DAT_028ce238);
  pcVar1 = "MMTransparentButton";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setX__026a5d38,FUN_008cd288,&DAT_028ce240);
  _MSHookMessageEx(pcVar1,PTR_s_setWidth__0269feb0,FUN_008cd2e4,&DAT_028ce248);
  pcVar1 = "MMRecordButton";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setX__026a5d38,FUN_008cd340,&DAT_028ce250);
  _MSHookMessageEx(pcVar1,PTR_s_setWidth__0269feb0,FUN_008cd39c,&DAT_028ce258);
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_combineToolView_0269f2e8,FUN_008cd3f8,&DAT_028ce260);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_008cd48c,&DAT_028ce268);
  _MSHookMessageEx(pcVar1,PTR_s_didSelectAttachmentAtIndex__026a7c38,FUN_008cd600,&DAT_028ce270);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_008cd71c,&DAT_028ce278);
  uStack_828 = 0x76;
  uStack_827 = 0x40;
  uStack_826 = 0x3a;
  uStack_825 = 0x40;
  uStack_824 = 0;
  _class_addMethod(pcVar1,PTR_s_WCRVPHandleQuickBarTap__026a9cf0,FUN_008cd7b0);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRVPHandlePlusLongPress__026a9cf8,FUN_008cd918);
  pcVar1 = "InputToolViewBar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_008cdc10,&DAT_028ce280);
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_008cdd5c,&DAT_028ce288);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_008cdfa0,&DAT_028ce290);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoicePackInc_026a9d00,FUN_008ce08c);
  pcVar1 = "AppFileMessageCellViewV2";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoicePackInc_026a9d00,FUN_008ce0fc);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoicePackUnz_026a9d08,FUN_008ce16c);
  pcVar1 = "AppFileMessageCellView";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoicePackInc_026a9d00,FUN_008ce1dc);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoicePackUnz_026a9d08,FUN_008ce24c);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

