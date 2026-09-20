// FUN_00434a04 @ 00434a04

void FUN_00434a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar1 = (uint)puVar3;
  FUN_00437b9c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ca8d0)(local_18,local_20,local_28,param_4,param_5,param_6,param_7 & 1,param_8);
  }
  else {
    uVar2 = param_8;
    FUN_00437c38();
    (*DAT_028ca8d0)(local_18,local_20,local_28,param_4,param_5,param_6,param_7 & 1,uVar2);
    FUN_00437c80(local_18,param_8,param_6);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

