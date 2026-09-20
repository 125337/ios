// FUN_00505104 @ 00505104

byte FUN_00505104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  undefined8 *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_005055f8();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028caf80)(local_20,local_28,local_30);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

