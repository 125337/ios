// FUN_008c84fc @ 008c84fc

void FUN_008c84fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  (*DAT_028ce1d0)(local_18,local_20,local_28,local_2c,local_38,local_40);
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 0;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  FUN_008c58c4(2,0,0);
  FUN_008c58c4(4,0,0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

