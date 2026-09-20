// FUN_0008b550 @ 0008b550

void FUN_0008b550(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_30 = 0;
    while ((local_28 != 0 && local_30 < 10 &&
           ((local_30 < 1 || (uVar1 = local_28, FUN_0008bf48(local_30), (uVar1 & 1) == 0))))) {
      FUN_0008baac(local_28);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_30 = local_30 + 1;
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

