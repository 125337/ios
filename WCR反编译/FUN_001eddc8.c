// FUN_001eddc8 @ 001eddc8

byte FUN_001eddc8(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    FUN_001eb904();
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar3 = local_20;
      FUN_001efd18();
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar3 = local_20;
        FUN_001eff1c();
        if ((uVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

