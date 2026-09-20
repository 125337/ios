// FUN_005bcec4 @ 005bcec4

void FUN_005bcec4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_005be1bc();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar2 = local_28;
  if (uVar1 == 0) {
    uVar2 = local_20;
    FUN_005be6b8(0);
    if ((uVar2 & 1) != 0) {
      uVar1 = local_20;
      FUN_005be1bc();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_28 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

