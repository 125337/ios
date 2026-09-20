// _WCRefineViewIsInsideScrollOrTimeoutNumber @ 00f12a38

byte _WCRefineViewIsInsideScrollOrTimeoutNumber(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  undefined4 local_34;
  ulong *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00f12bb8();
  local_28 = puVar1;
  FUN_00f12c2c();
  uVar2 = local_20;
  local_30 = puVar1;
  if (local_20 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar2;
    while (local_40 != 0) {
      if (((local_28 != (ulong *)0x0) &&
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_28),
          (uVar2 & 1) != 0)) ||
         ((local_30 != (ulong *)0x0 &&
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_30),
          (uVar2 & 1) != 0)))) {
        local_11 = 1;
        goto LAB_00f12b88;
      }
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_11 = 0;
LAB_00f12b88:
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

