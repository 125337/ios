// FUN_00368c14 @ 00368c14

void FUN_00368c14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    if (local_20 == (cfstringStruct *)0x0) {
      local_78 = &cf_entryAction;
    }
    else {
      local_78 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_78;
    FUN_0037807c();
    if (((ulong)local_78 & 1) != 0) {
      uVar1 = local_18;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    pcVar2 = &cf_updateUnReadCount;
    _NSSelectorFromString();
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2);
    }
    pcVar2 = &cf_wcrGrouping_scheduleRefreshForTrigger_;
    _NSSelectorFromString();
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2,local_30);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

