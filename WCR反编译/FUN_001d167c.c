// FUN_001d167c @ 001d167c

byte FUN_001d167c(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  ulong *local_48;
  ulong *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_001d1cf8();
    local_30 = puVar1;
    FUN_001d1d6c();
    uVar2 = local_20;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    while (local_50 != 0) {
      if (((local_30 != (ulong *)0x0) &&
          (uVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_30),
          (uVar2 & 1) != 0)) ||
         ((local_48 != (ulong *)0x0 &&
          (uVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48),
          (uVar2 & 1) != 0)))) {
        local_11 = 1;
        goto LAB_001d1848;
      }
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_11 = 0;
LAB_001d1848:
    local_24 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

