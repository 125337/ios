// FUN_0015a334 @ 0015a334

void FUN_0015a334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015ab30();
  if ((uVar1 & 1) != 0) {
    FUN_00166fc8(local_18,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

