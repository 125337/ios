// FUN_002ef570 @ 002ef570

void FUN_002ef570(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_1828 [1024];
  undefined1 uStack_1428;
  undefined1 uStack_1427;
  undefined1 uStack_1426;
  undefined1 uStack_1425;
  undefined1 auStack_1028 [1024];
  undefined1 uStack_c28;
  undefined1 uStack_c27;
  undefined1 uStack_c26;
  undefined1 uStack_c25;
  undefined1 auStack_828 [1024];
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "UIViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_002efb18,&DAT_028c99f0);
  uStack_428 = 0x76;
  uStack_427 = 0x40;
  uStack_426 = 0x3a;
  uStack_425 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_setupTripleTapGesture_026a1e98,FUN_002efc88);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleTripleTap__026a1ea0,FUN_002f0260);
  uStack_c28 = 0x76;
  uStack_c27 = 0x40;
  uStack_c26 = 0x3a;
  uStack_c25 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_setupTwoFingerLongPress_026a1ea8,FUN_002f0780);
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleTwoFingerLongPres_026a1eb0,FUN_002f0ea0);
  pcVar1 = "UINavigationBar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_002f12dc,&DAT_028c99f8);
  uStack_1428 = 0x76;
  uStack_1427 = 0x40;
  uStack_1426 = 0x3a;
  uStack_1425 = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_setupGlobalTitleSwipeGe_026a1eb8,FUN_002f15b4);
  auStack_1828[0] = 0x76;
  auStack_1828[1] = 0x40;
  auStack_1828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcrefine_handleGlobalTitleSwipe__026a1ec0,FUN_002f182c);
  _MSHookMessageEx(pcVar1,PTR_s_gestureRecognizer_shouldReceiveT_0269e2c0,FUN_002f1b8c,&DAT_028c9a00
                  );
  _MSHookMessageEx(pcVar1,PTR_s_gestureRecognizerShouldBegin__0269e2b8,FUN_002f1e40,&DAT_028c9a08);
  _MSHookMessageEx(pcVar1,PTR_s_gestureRecognizer_shouldRecogniz_0269e2d0,FUN_002f1fa0,&DAT_028c9a10
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

