// FUN_0050c93c @ 0050c93c

void FUN_0050c93c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0050ebd4();
  if (((uVar1 & 1) == 0) || (uVar3 = local_18, FUN_00517318(), (uVar3 & 1) == 0)) {
    (*DAT_028cb048)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

