// FUN_006a9718 @ 006a9718

void FUN_006a9718(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  do {
    if (local_28 == 0) {
      local_18 = 0;
LAB_006a97e4:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    uVar2 = local_28;
    FUN_006a8bf8();
    uVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      goto LAB_006a97e4;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  } while( true );
}

