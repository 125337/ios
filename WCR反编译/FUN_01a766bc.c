// FUN_01a766bc @ 01a766bc

void FUN_01a766bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_01a76870();
  if (((uVar1 & 1) == 0) ||
     ((local_28 - DAT_028e44d0 != 0 &&
      (uVar3 = local_28, FUN_01a77258(local_28 - DAT_028e44d0), (uVar3 & 1) == 0)))) {
    (*DAT_028e44c0)(local_18,local_20,local_28);
  }
  else if (local_28 == DAT_028e44d0) {
    DAT_028e44d0 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

