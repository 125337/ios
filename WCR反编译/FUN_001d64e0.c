// FUN_001d64e0 @ 001d64e0

byte FUN_001d64e0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_001d3fac();
  if (((uVar1 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_001d60d8();
    if ((uVar3 & 1) == 0) {
      pcVar4 = &cf_WCPuzzleImageView;
      _NSClassFromString();
      uVar3 = local_20;
      local_38 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar3;
      for (local_48 = 0; local_40 != 0 && local_48 < 0xc; local_48 = local_48 + 1) {
        if ((local_38 != (cfstringStruct *)0x0) &&
           (uVar3 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_38),
           (uVar3 & 1) != 0)) {
          local_11 = 1;
          goto LAB_001d66d8;
        }
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_11 = 0;
LAB_001d66d8:
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 0;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

