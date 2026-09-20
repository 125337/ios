// FUN_00442044 @ 00442044

byte FUN_00442044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_004514e4();
  if ((uVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028caa28)(local_20,local_28,local_30);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

