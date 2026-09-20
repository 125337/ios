// FUN_0009b5f0 @ 0009b5f0

void FUN_0009b5f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0009b3d4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_valueForKey__0269d128);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_40 == 0) {
      pcVar3 = &cf_GetContact;
      _NSSelectorFromString();
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_performSelector__026ca7b8,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40;
        local_40 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

