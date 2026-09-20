// FUN_0074e508 @ 0074e508

void FUN_0074e508(undefined8 param_1,undefined4 param_2,byte param_3)

{
  char *pcVar1;
  long lVar2;
  long local_48 [3];
  char *local_30;
  undefined4 local_24;
  byte local_1d;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_1d = param_3;
  local_1c = param_2;
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    if (DAT_028cc818 == (char *)0x0) {
      pcVar1 = "WCWatchNotificationMgr";
      _objc_getClass();
      DAT_028cc818 = pcVar1;
    }
    pcVar1 = DAT_028cc818;
    _objc_retainAutoreleaseReturnValue();
    FUN_00744160();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_addYoCount_contact_type__026a7d10
                  ), ((ulong)pcVar1 & 1) == 0)) {
      local_24 = 1;
    }
    else {
      lVar2 = local_18;
      FUN_0074e714();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = lVar2;
      if ((local_1d & 1) != 0) {
        FUN_0074eb8c(lVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_addYoCount_contact_type__026a7d10,1,local_18,local_1c);
      _objc_storeStrong(local_48,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

