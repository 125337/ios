// FUN_001d07e4 @ 001d07e4

void FUN_001d07e4(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_38;
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
    FUN_001d0624();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    if (uVar3 == 0) {
      local_28 = 1;
    }
    else {
      FUN_001d4148(uVar3);
      uVar3 = local_30;
      FUN_001d424c();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar3;
      if (uVar3 == 0) {
        local_28 = 1;
      }
      else {
        FUN_001d151c();
        if ((uVar3 & 1) == 0) {
          FUN_001d0988(local_38);
        }
        FUN_001d4b20(local_38);
        local_28 = 0;
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

