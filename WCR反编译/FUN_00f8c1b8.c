// FUN_00f8c1b8 @ 00f8c1b8

byte FUN_00f8c1b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0x3ff0000000000000;
  uVar2 = local_20;
  local_28 = param_2;
  FUN_00f93510(local_20,&local_30,&local_38,&local_40,&local_48);
  puVar1 = local_28;
  local_11 = (uVar2 & 1) != 0;
  if ((bool)local_11) {
    uVar3 = local_30;
    uVar4 = local_38;
    uVar5 = local_40;
    uVar6 = local_48;
    FUN_00f9364c();
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

