// FUN_005fe728 @ 005fe728

void FUN_005fe728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
  }
  else {
    pcVar1 = &cf_GetContact;
    _NSSelectorFromString();
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_getChatContact;
      _NSSelectorFromString();
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_18 = uVar2;
      }
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

