// FUN_01a767c0 @ 01a767c0

void FUN_01a767c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_01a76870();
  if ((uVar1 & 1) != 0) {
    DAT_028e44d0 = 0;
    FUN_01a76f28(local_28);
  }
  (*DAT_028e44c8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

