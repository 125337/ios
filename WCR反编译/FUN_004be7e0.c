// FUN_004be7e0 @ 004be7e0

void FUN_004be7e0(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 uStack_828;
  undefined1 uStack_827;
  undefined1 uStack_826;
  undefined1 uStack_825;
  undefined1 uStack_824;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "NewMainFrameViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getAddBarButton_026a3ec8,FUN_004bee6c,&DAT_028cabe8);
  _MSHookMessageEx(pcVar1,PTR_s_initTitle_026a3ed0,FUN_004bf0ac,&DAT_028cabf0);
  _MSHookMessageEx(pcVar1,PTR_s_initNavigationTitileView_026a3ed8,FUN_004bf180,&DAT_028cabf8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_004bf2f8,&DAT_028cac00);
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_addLongPressGesture_026a3ee0,FUN_004bf3d0);
  uStack_828 = 0x76;
  uStack_827 = 0x40;
  uStack_826 = 0x3a;
  uStack_825 = 0x40;
  uStack_824 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_addLongPressGestureToAd_026a3ee8,FUN_004bf978);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_attachLongPressToView__026a3ef0,FUN_004c007c);
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_attachLongPressIfNeeded_026a3ef8,FUN_004c0170);
  auStack_1428[0] = 0x76;
  auStack_1428[1] = 0x40;
  auStack_1428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleLongPress__026a3f00,FUN_004c0610);
  _class_addMethod(pcVar1,PTR_s_wcrefine_openOwnPrivateFriend_026a3f08,FUN_004c0a88);
  _class_addMethod(pcVar1,PTR_s_wcrefine_openExternalMiYou_026a3f10,FUN_004c0b44);
  pcVar1 = "NewMainFrameRightTopMenuBtn";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithFrame__026ca6e8,FUN_004c0d14,&DAT_028cac08);
  _MSHookMessageEx(pcVar1,PTR_s_showRightTopMenuBtn_026a3f18,FUN_004c0eb8,&DAT_028cac10);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

