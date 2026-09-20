// FUN_00740d94 @ 00740d94

/* WARNING: Removing unreachable block (ram,0x00740f80) */
/* WARNING: Removing unreachable block (ram,0x00740f60) */

undefined4 FUN_00740d94(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_14 = 0;
    local_38 = 1;
  }
  else {
    if (DAT_028cc748 == (char *)0x0) {
      pcVar2 = "WCWatchNativeMgr";
      _objc_getClass();
      DAT_028cc748 = pcVar2;
    }
    pcVar2 = DAT_028cc748;
    _objc_retainAutoreleaseReturnValue();
    FUN_00744160();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_replyYoTo_observer__026a7c98),
       ((ulong)pcVar2 & 1) == 0)) {
      local_14 = 0;
    }
    else {
      FUN_0074454c();
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_replyYoTo_observer__026a7c98,local_28,0);
      local_38 = 0;
      FUN_0074474c();
      local_14 = (int)pcVar2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

