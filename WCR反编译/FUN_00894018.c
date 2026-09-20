// FUN_00894018 @ 00894018

void FUN_00894018(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cda78)(local_18,local_20,local_24,local_30);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

