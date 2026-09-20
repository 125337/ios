// FUN_003f5cb4 @ 003f5cb4

void FUN_003f5cb4(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMGrowTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_003f606c,&DAT_028ca538);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_003f60a8,&DAT_028ca540);
  _MSHookMessageEx(pcVar1,PTR_s_MMTextView_LongPressGestureTouch_026a3470,FUN_003f61a0,&DAT_028ca548
                  );
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_inputBoxHandlePan__026a3478,FUN_003f6698);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_inputBoxHandleLongPress__026a3480,FUN_003f74f0);
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_inputBoxHandleDoubleTap__026a3488,FUN_003f7c28);
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_LongPressGestureT_026a3490,FUN_003f7f5c,&DAT_028ca550
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_LongPressGestureS_026a3498,FUN_003f867c,&DAT_028ca558
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

