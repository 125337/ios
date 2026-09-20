// FUN_003a2acc @ 003a2acc

void FUN_003a2acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  uint local_64;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 == 0) || (local_28 == 0)) {
    local_2c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_003a7d64(local_18,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_handleSelectIndexPath_tableView_;
    local_38 = uVar1;
    _NSSelectorFromString();
    if ((local_38 == 0) ||
       ((local_20 == 0 ||
        (uVar1 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2),
        (uVar1 & 1) == 0)))) {
      pcVar2 = &cf_onLogicOpenSession_;
      _NSSelectorFromString();
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_64 = 0;
      if (lVar3 != 0) {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
        local_64 = (uint)uVar1;
      }
      (*(code *)PTR__objc_release_02578630)(lVar3);
      uVar1 = local_18;
      if ((local_64 & 1) != 0) {
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_session_0269d000);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      local_2c = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2,local_38,local_20);
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

