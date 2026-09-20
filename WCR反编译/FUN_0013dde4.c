// FUN_0013dde4 @ 0013dde4

void FUN_0013dde4(void)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 uStack_828;
  undefined1 uStack_827;
  undefined1 uStack_826;
  undefined1 uStack_825;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_combineToolView_0269f2e8,FUN_0013e71c,&DAT_028c86a8);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0013e75c,&DAT_028c86b0);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0013e928,&DAT_028c86b8);
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextViewBeginEditing__0269f2f0,FUN_0013e990,&DAT_028c86c0);
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextViewEndEditing__0269f2f8,FUN_0013eba0,&DAT_028c86c8);
  _MSHookMessageEx(pcVar1,PTR_s_keyboardWillHide__0269f300,FUN_0013ecc4,&DAT_028c86d0);
  _MSHookMessageEx(pcVar1,PTR_s_getGroupUndoneBarHeight_0269f308,FUN_0013ed9c,&DAT_028c86d8);
  pcVar1 = "InputToolViewBar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0013fb90,&DAT_028c86e0);
  pcVar1 = "SelectAttachmentView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_resetView_0269f310,FUN_0013fbcc,&DAT_028c86e8);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0013fc60,&DAT_028c86f0);
  _MSHookMessageEx(pcVar1,PTR_s_calculateEmoticonViewFrameAtInde_0269f318,FUN_001402a0,&DAT_028c86f8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidScroll__0269eb48,FUN_00140a40,&DAT_028c8700);
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewDidEndDecelerating__0269eb40,FUN_00140e30,&DAT_028c8708);
  _MSHookMessageEx(pcVar1,PTR_s_scrollViewToPage_animated__0269f320,FUN_001411b8,&DAT_028c8710);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_001413ac,&DAT_028c8718);
  _MSHookMessageEx(pcVar1,PTR_s_setHidden__026ca970,FUN_001413e8,&DAT_028c8720);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToSuperview_0269f328,FUN_00141430,&DAT_028c8728);
  _MSHookMessageEx(pcVar1,PTR_s_setAlpha__026ca860,FUN_0014146c,&DAT_028c8730);
  _MSHookMessageEx(pcVar1,PTR_s_setTransform__026caad0,FUN_001414b0,&DAT_028c8738);
  pcVar1 = "SelectAttachmentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_00141528,&DAT_028c8740);
  pcVar2 = "dealloc";
  _sel_registerName("dealloc");
  _MSHookMessageEx(pcVar1,pcVar2,FUN_001415f8,&DAT_028c8748);
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar3 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_428[(int)sVar3 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRAttachOnLocalSettingsChanged__0269f330,FUN_001416b8);
  _MSHookMessageEx(pcVar1,PTR_s_initObjectItem_0269f338,FUN_0014180c,&DAT_028c8750);
  _MSHookMessageEx(pcVar1,PTR_s_viewForAttachmentAtIndex__0269f340,FUN_00141858,&DAT_028c8758);
  _MSHookMessageEx(pcVar1,PTR_s_OnAttachmentClicked__0269f348,FUN_001418bc,&DAT_028c8760);
  uStack_828 = 0x76;
  uStack_827 = 0x40;
  uStack_826 = 0x3a;
  uStack_825 = 0;
  _class_addMethod(pcVar1,PTR_s_WCRAttachEnsureLongPressGesture_0269f350,FUN_001419f8);
  sVar3 = _strlen("B");
  _memcpy(auStack_c28,"B",sVar3);
  sVar3 = _strlen("B");
  auStack_c28[sVar3 & 0xffffffff] = 0x40;
  auStack_c28[(int)sVar3 + 1] = 0x3a;
  uVar4 = (int)sVar3 + 2;
  sVar3 = _strlen("@");
  _memcpy(auStack_c28 + uVar4,"@",sVar3);
  sVar3 = _strlen("@");
  uVar4 = uVar4 + (int)sVar3;
  sVar3 = _strlen("@");
  _memcpy(auStack_c28 + uVar4,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_c28[uVar4 + (int)sVar3] = 0;
  _class_addMethod(pcVar1,PTR_s_gestureRecognizer_shouldReceiveT_0269e2c0,FUN_00141e48);
  sVar3 = _strlen("B");
  _memcpy(auStack_1028,"B",sVar3);
  sVar3 = _strlen("B");
  auStack_1028[sVar3 & 0xffffffff] = 0x40;
  auStack_1028[(int)sVar3 + 1] = 0x3a;
  uVar4 = (int)sVar3 + 2;
  sVar3 = _strlen("@");
  _memcpy(auStack_1028 + uVar4,"@",sVar3);
  sVar3 = _strlen("@");
  uVar4 = uVar4 + (int)sVar3;
  sVar3 = _strlen("@");
  _memcpy(auStack_1028 + uVar4,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_1028[uVar4 + (int)sVar3] = 0;
  _class_addMethod(pcVar1,PTR_s_gestureRecognizer_shouldRecogniz_0269e2d0,FUN_0014228c);
  auStack_1428[0] = 0x76;
  auStack_1428[1] = 0x40;
  auStack_1428[2] = 0x3a;
  sVar3 = _strlen("@");
  _memcpy(auStack_1428 + 3,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_1428[(int)sVar3 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRAttachHandleLongPressToOpenSe_0269f358,FUN_001423a8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillLayoutSubviews_0269f360,FUN_0014267c,&DAT_028c8768);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_001426b8,&DAT_028c8770);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0014270c,&DAT_028c8778);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_0014276c,&DAT_028c8780);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_001427b4,&DAT_028c8788);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

