// FUN_001d0988 @ 001d0988

void FUN_001d0988(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_001cf8b0();
  if (((uVar1 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_001d151c();
    if ((uVar3 & 1) == 0) {
      FUN_001d5470(local_18);
      local_28 = 0;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar3;
      if (uVar3 != 0) {
        FUN_001d5470(uVar3);
      }
      local_28 = 1;
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

