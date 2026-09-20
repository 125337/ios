// FUN_008ceaa4 @ 008ceaa4

void FUN_008ceaa4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong local_90;
  bool local_51;
  ulong local_50;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else if ((param_2 == 0) ||
          (uVar1 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2)
          , (uVar1 & 1) == 0)) {
    if (param_3 == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_20;
      FUN_008ce760(local_20,param_3);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_90;
    }
    local_51 = param_3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

