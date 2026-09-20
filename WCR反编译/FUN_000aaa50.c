// FUN_000aaa50 @ 000aaa50

void FUN_000aaa50(void)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_2028 [1024];
  undefined1 auStack_1c28 [1024];
  undefined1 auStack_1828 [1024];
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MainTabBarViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_000ab3b0,&DAT_028c8090);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_000ab470,&DAT_028c8098);
  _MSHookMessageEx(pcVar1,PTR_s_setSelectedIndex__0269e450,FUN_000ab4cc,&DAT_028c80a0);
  _MSHookMessageEx(pcVar1,PTR_s_setSelectedViewController__0269e458,FUN_000ab6ec,&DAT_028c80a8);
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_addLongPressGestureToTa_0269e460,FUN_000abd6c);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleTabBarLongPress__0269e468,FUN_000ac584);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("q");
  _memcpy(auStack_c28 + 3,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_performActionForButtonI_0269e470,FUN_000accf0);
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_executeAction__0269e478,FUN_000ad3b4);
  auStack_1428[0] = 0x76;
  auStack_1428[1] = 0x40;
  auStack_1428[2] = 0x3a;
  sVar2 = _strlen("q");
  _memcpy(auStack_1428 + 3,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_1428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_showActionSelectionShee_0269e480,FUN_000af134);
  auStack_1828[0] = 0x76;
  auStack_1828[1] = 0x40;
  auStack_1828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  uVar3 = (int)sVar2 + 3;
  sVar2 = _strlen("q");
  _memcpy(auStack_1828 + uVar3,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_1828[uVar3 + (int)sVar2] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleActionSelected_bu_0269e488,FUN_000afb40);
  auStack_1c28[0] = 0x76;
  auStack_1c28[1] = 0x40;
  auStack_1c28[2] = 0x3a;
  sVar2 = _strlen("q");
  _memcpy(auStack_1c28 + 3,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_1c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_showActionMenuForButton_0269e490,FUN_000affb4);
  auStack_2028[0] = 0x76;
  auStack_2028[1] = 0x40;
  auStack_2028[2] = 0x3a;
  sVar2 = _strlen("q");
  _memcpy(auStack_2028 + 3,"q",sVar2);
  sVar2 = _strlen("q");
  auStack_2028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_showCustomControllerInp_0269e498,FUN_000b06dc);
  _class_addMethod(pcVar1,PTR_s_wcrefine_cancelCustomControllerI_0269e4a0,FUN_000b0a08);
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleCustomControllerI_0269e4a8,FUN_000b0a40);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

