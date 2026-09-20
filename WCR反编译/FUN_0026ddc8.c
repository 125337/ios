// FUN_0026ddc8 @ 0026ddc8

void FUN_0026ddc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 local_40;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar3;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_18;
  (*DAT_028c9560)(local_18,local_20,local_28);
  uVar2 = (uint)uVar3;
  FUN_0026e0d8();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = local_18;
    FUN_00270098(local_18,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_002702b8(local_18,uVar3);
    _objc_storeStrong(&local_40,0);
  }
  else {
    FUN_0026fcfc(local_18);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

