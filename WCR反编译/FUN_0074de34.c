// FUN_0074de34 @ 0074de34

void FUN_0074de34(long param_1)

{
  char *pcVar1;
  char *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_00740d94(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    if (DAT_028cc748 == (char *)0x0) {
      pcVar1 = "WCWatchNativeMgr";
      _objc_getClass();
      DAT_028cc748 = pcVar1;
    }
    pcVar1 = DAT_028cc748;
    _objc_retainAutoreleaseReturnValue();
    FUN_00744160();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_replyYoTo_observer__026a7c98);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_replyYoTo_observer__026a7c98,*(undefined8 *)(param_1 + 0x20),0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

