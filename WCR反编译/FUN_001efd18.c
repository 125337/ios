// FUN_001efd18 @ 001efd18

byte FUN_001efd18(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long local_50;
  ulong local_48 [3];
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
    FUN_001f0120();
    uVar2 = local_20;
    local_30 = puVar1;
    if (puVar1 == (ulong *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar2;
      for (local_50 = 0; local_48[0] != 0 && local_50 < 0x50; local_50 = local_50 + 1) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isKindOfClass__0269cd68,local_30);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          goto LAB_001efed4;
        }
        uVar3 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48[0];
        local_48[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_11 = 0;
LAB_001efed4:
      local_24 = 1;
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

