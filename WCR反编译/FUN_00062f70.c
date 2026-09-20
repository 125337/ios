// FUN_00062f70 @ 00062f70

void FUN_00062f70(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_delegate);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_30 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
      if ((uVar2 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_delegate_0269d0e0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_30 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

