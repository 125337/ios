// FUN_002fc198 @ 002fc198

void FUN_002fc198(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  local_30 = 0;
  do {
    if (local_28 == 0 || 0x17 < local_30) {
      local_18 = 0;
LAB_002fc2a0:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    uVar1 = local_28;
    FUN_002f7e80();
    local_18 = local_28;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_002fc2a0;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_30 = local_30 + 1;
  } while( true );
}

