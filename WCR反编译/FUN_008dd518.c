// FUN_008dd518 @ 008dd518

void FUN_008dd518(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_008dd6dc,&DAT_028ce2f0);
  _MSHookMessageEx(pcVar1,PTR_s_layoutContentView_026a0048,FUN_008dd764,&DAT_028ce2f8);
  _MSHookMessageEx(pcVar1,PTR_s_onBeginPlayingMsg_autoPlayEnable_026a9d88,FUN_008dd7a8,&DAT_028ce300
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onEndPlayingMsg_autoPlayEnabled__026a9d90,FUN_008dd850,&DAT_028ce308
                  );
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_vps_handlePan__026a9d98,FUN_008dd8f8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

