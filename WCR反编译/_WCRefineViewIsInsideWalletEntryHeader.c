// _WCRefineViewIsInsideWalletEntryHeader @ 00f1287c

byte _WCRefineViewIsInsideWalletEntryHeader(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00f129c4();
  uVar2 = local_20;
  local_28 = puVar1;
  if ((local_20 == 0) || (puVar1 == (ulong *)0x0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar2;
    while (local_38 != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_28);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_00f12994;
      }
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_38;
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_11 = 0;
LAB_00f12994:
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

