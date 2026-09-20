// FUN_008c74ac @ 008c74ac

void FUN_008c74ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  (*DAT_028ce0f0)(local_18,local_20,local_28,local_30);
  DAT_028ce048 = 1;
  DAT_028ce04a = 0;
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 0;
  DAT_028ce049 = 0;
  FUN_008c9838(local_28);
  FUN_008c9c70(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

