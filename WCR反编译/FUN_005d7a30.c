// FUN_005d7a30 @ 005d7a30

void FUN_005d7a30(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *local_90;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  char *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_005d835c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar1 = local_20;
    (*DAT_028cb790)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = pcVar1;
  }
  else {
    pcVar1 = "WCAppInfo";
    _objc_getClass();
    local_48 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      pcVar1 = local_20;
      (*DAT_028cb790)(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_18 = pcVar1;
    }
    else {
      _objc_alloc_init();
      pcVar2 = PTR_WCRefineMomentsTailCatalog_026ce7d0;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_nameForAppID__026a5c60,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_90 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_90;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setAppID__026a5c68);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAppID__026a5c68,local_30);
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setAppName__026a5c70);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAppName__026a5c70,local_58);
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_40 = 1;
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

