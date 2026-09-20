// FUN_003ccac0 @ 003ccac0

void FUN_003ccac0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong local_78;
  ulong local_70;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_28 == 0) || (uVar2 = local_20, FUN_003adbe4(), (uVar2 & 1) == 0)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    FUN_003cccac(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = local_28;
    local_38 = uVar2;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_nativePassthrough_026a2e00);
      bVar1 = false;
      if ((uVar2 & 1) == 0) {
        local_78 = local_28;
      }
      else {
        local_40 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nativeOriginalIndexPath_026a3078);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_70 = local_40;
        if (local_40 == 0) {
          local_70 = local_28;
        }
        local_78 = local_70;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_78;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

