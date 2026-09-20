// FUN_0072d338 @ 0072d338

void FUN_0072d338(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_29 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_3c = param_6;
  _objc_storeStrong(&local_48,param_7);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_8);
  FUN_0072f2ac(local_50);
  uVar1 = local_18;
  (*DAT_028cc440)(local_18,local_20,local_28,local_29 & 1,local_38,local_3c,local_48,local_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

