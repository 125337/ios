// FUN_007496e0 @ 007496e0

void FUN_007496e0(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long local_48;
  long local_40 [3];
  char *local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
    goto LAB_0074989c;
  }
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
  if (pcVar1 == (char *)0x0) {
LAB_00749808:
    lVar2 = local_18;
    FUN_00748910(local_18,0);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar2;
    FUN_0074e2f8();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    FUN_0074e508(lVar2,0,0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
    local_1c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,
               PTR_s_displaySignalMessageWithDelay__026a7d08);
    if (((ulong)pcVar1 & 1) == 0) goto LAB_00749808;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_displaySignalMessageWithDelay__026a7d08,local_18);
    local_1c = 1;
  }
  _objc_storeStrong(&local_28,0);
LAB_0074989c:
  _objc_storeStrong(&local_18,0);
  return;
}

