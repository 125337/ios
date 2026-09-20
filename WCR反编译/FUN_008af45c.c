// FUN_008af45c @ 008af45c

void FUN_008af45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,undefined8 param_7)

{
  undefined8 local_48;
  byte local_39;
  undefined8 local_38;
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
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_39 = param_6;
  _objc_storeStrong(&local_48,param_7);
  (*DAT_028cdf50)(local_18,local_20,local_28,local_30,local_38,local_39 & 1,local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

