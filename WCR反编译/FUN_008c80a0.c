// FUN_008c80a0 @ 008c80a0

void FUN_008c80a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028ce198)(local_18,local_20,local_24,local_30);
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 0;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  FUN_008c58c4(2,0,0);
  FUN_008c58c4(4,0,0);
  _objc_storeStrong(&local_30,0);
  return;
}

