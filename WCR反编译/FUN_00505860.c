// FUN_00505860 @ 00505860

void FUN_00505860(void)

{
  uint uVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 auStack_2028 [1024];
  undefined1 uStack_1c28;
  undefined1 uStack_1c27;
  undefined1 uStack_1c26;
  undefined1 uStack_1c25;
  undefined1 uStack_1828;
  undefined1 uStack_1827;
  undefined1 uStack_1826;
  undefined1 uStack_1825;
  undefined1 uStack_1428;
  undefined1 uStack_1427;
  undefined1 uStack_1426;
  undefined1 uStack_1425;
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "NewMainFrameViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewDidAppear__0269cd50,FUN_00505f54,&DAT_028cafc0);
  _MSHookMessageEx(pcVar2,PTR_s_initNavigationTitileView_026a3ed8,FUN_005061c4,&DAT_028cafc8);
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_addLongPressToTitle_026a45f8,FUN_00506428);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar3 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_828[(int)sVar3 + 3] = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_addGestureToView__026a4600,FUN_005068ec);
  sVar3 = _strlen("@");
  _memcpy(auStack_c28,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_c28[sVar3 & 0xffffffff] = 0x40;
  auStack_c28[(int)sVar3 + 1] = 0x3a;
  uVar1 = (int)sVar3 + 2;
  sVar3 = _strlen("@");
  _memcpy(auStack_c28 + uVar1,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_c28[uVar1 + (int)sVar3] = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_findTitleLabelInView__026a4608,FUN_00506d74);
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar3 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_1028[(int)sVar3 + 3] = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_handleTitleLongPress__026a4610,FUN_005073bc);
  uStack_1428 = 0x76;
  uStack_1427 = 0x40;
  uStack_1426 = 0x3a;
  uStack_1425 = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_applyTitleLongPressTogg_026a4618,FUN_00507818);
  uStack_1828 = 0x76;
  uStack_1827 = 0x40;
  uStack_1826 = 0x3a;
  uStack_1825 = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_toggleMiYouMode_026a4620,FUN_005079c0);
  uStack_1c28 = 0x76;
  uStack_1c27 = 0x40;
  uStack_1c26 = 0x3a;
  uStack_1c25 = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_triggerByMiYouPassword_026a4628,FUN_00507b18);
  sVar3 = _strlen("@");
  _memcpy(auStack_2028,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_2028[sVar3 & 0xffffffff] = 0x40;
  auStack_2028[(int)sVar3 + 1] = 0x3a;
  uVar1 = (int)sVar3 + 2;
  sVar3 = _strlen("@");
  _memcpy(auStack_2028 + uVar1,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_2028[uVar1 + (int)sVar3] = 0;
  _class_addMethod(pcVar2,PTR_s_wcrefine_findSearchFieldInView__026a4630,FUN_00507da8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

