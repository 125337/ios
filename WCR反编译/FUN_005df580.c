// FUN_005df580 @ 005df580

void FUN_005df580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_005df9b4(local_28,local_18);
  FUN_005dfa90(local_28,local_18);
  (*DAT_028cb818)(local_18,local_20,local_28,param_4);
  _objc_storeStrong(&local_28,0);
  return;
}

