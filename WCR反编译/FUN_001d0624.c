// FUN_001d0624 @ 001d0624

void FUN_001d0624(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  ulong *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    FUN_001d1d6c();
    uVar2 = local_20;
    local_30 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    for (local_40 = 0; local_38 != 0 && local_40 < 0xc; local_40 = local_40 + 1) {
      if ((local_30 != (ulong *)0x0) &&
         (uVar2 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_30),
         local_18 = local_38, (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        goto LAB_001d07b0;
      }
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_18 = 0;
LAB_001d07b0:
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

