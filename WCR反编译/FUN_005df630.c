// FUN_005df630 @ 005df630

ulong FUN_005df630(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  local_30 = param_4;
  FUN_005dffb8();
  if (((uVar1 & 1) != 0) || (uVar1 = local_18, FUN_005e0368(), (uVar1 & 1) != 0)) {
    uVar1 = local_18;
    FUN_005e6c20(local_18,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar1;
    FUN_005df9b4(uVar1,local_18);
    FUN_005dfa90(local_48[0],local_18);
    _objc_storeStrong(local_48,0);
  }
  uVar1 = local_18;
  (*DAT_028cb820)(local_18,local_20,local_28,local_30);
  _objc_storeStrong(&local_28,0);
  return uVar1;
}

