// FUN_007b3828 @ 007b3828

byte FUN_007b3828(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_007bd820(local_20,local_30);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*DAT_028ccc58)(local_20,local_28,local_30);
    local_11 = (byte)uVar1 & 1;
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

