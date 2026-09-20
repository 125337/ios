// FUN_00692550 @ 00692550

void FUN_00692550(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_b0;
  ulong local_88;
  bool local_61;
  ulong local_60;
  ulong local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_41 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
  if ((uVar1 & 1) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_88;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_28 == 0) {
    local_18 = 0;
    local_48 = 1;
  }
  else {
    pcVar2 = &cf_m_delegate;
    _NSSelectorFromString();
    uVar1 = local_28;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
    local_61 = (uVar1 & 1) == 0;
    if (local_61) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_b0;
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_b0;
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (local_58 == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_delegate);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_48 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

