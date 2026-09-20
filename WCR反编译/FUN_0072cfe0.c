// FUN_0072cfe0 @ 0072cfe0

void FUN_0072cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  FUN_0072f154(local_30);
  (*DAT_028cc420)(local_18,local_20,local_28,local_30,param_5 & 1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

