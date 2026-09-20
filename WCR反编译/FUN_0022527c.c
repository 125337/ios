// FUN_0022527c @ 0022527c

void FUN_0022527c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  undefined4 local_30;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001cf8b0();
  if (((uVar1 & 1) == 0) || (local_18 == 0)) {
    local_30 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_00223b40();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    if (uVar3 == 0) {
      local_30 = 1;
    }
    else {
      uVar4 = local_18;
      FUN_00225400(local_18,uVar3,local_20);
      if ((uVar4 & 1) == 0) {
        FUN_002250e0(local_38);
      }
      else {
        FUN_00223fd8(local_18,local_38);
      }
      local_30 = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

