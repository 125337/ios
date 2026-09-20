// FUN_004d1108 @ 004d1108

void FUN_004d1108(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar4;
  uint local_50;
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar3;
  
  puVar3 = &local_30;
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar3,param_4);
  uVar2 = (uint)puVar3;
  FUN_004d211c();
  local_50 = 0;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_18;
    FUN_004d21f0();
    local_50 = (uint)uVar4;
  }
  bVar1 = DAT_028cace8 & 1;
  if ((local_50 & 1) != 0) {
    DAT_028cace8 = 1;
  }
  (*DAT_028cacb0)(local_18,local_20,local_21 & 1,local_30);
  DAT_028cace8 = bVar1;
  _objc_storeStrong(&local_30,0);
  return;
}

