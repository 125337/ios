// FUN_00549714 @ 00549714

void FUN_00549714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_3c = param_6;
  _objc_storeStrong(&local_48,param_7);
  FUN_005581fc(local_30);
  FUN_00551b64(local_30);
  (*DAT_028cb3d8)(local_18,local_20,local_28,local_30,local_38,local_3c,local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

