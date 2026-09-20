// FUN_0043b50c @ 0043b50c

void FUN_0043b50c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0043b6d0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_20;
    FUN_0043ade8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_0043bbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetContact_0269d2c0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

