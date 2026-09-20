// FUN_001edc3c @ 001edc3c

void FUN_001edc3c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar4;
  byte local_40;
  ulong local_38 [3];
  byte local_1d;
  undefined4 local_1c;
  ulong local_18;
  ulong *puVar3;
  
  puVar3 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    FUN_001f0a84();
    local_40 = 0;
    if ((uVar2 & 1) != 0) {
      uVar4 = local_18;
      FUN_001efd18();
      local_40 = 0;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_18;
        FUN_001eff1c();
        local_40 = 0;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_18;
          FUN_001ee184();
          local_40 = (byte)uVar4 ^ 1;
        }
      }
    }
    local_1d = local_40 & 1;
    uVar4 = local_18;
    FUN_001f0b20();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_1d;
    local_38[0] = uVar4;
    FUN_001f1484();
    FUN_001f0f2c(param_1,uVar4,bVar1 & 1);
    _objc_storeStrong(local_38,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

