// FUN_008c7a1c @ 008c7a1c

void FUN_008c7a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ce138)(local_18,local_20,local_28);
  if ((DAT_028ce1e8 & 1) != 0) {
    DAT_028ce1e8 = 0;
    DAT_028ce1e9 = 1;
    DAT_028ce049 = 0;
    DAT_028ce048 = 0;
    DAT_028ce04a = 0;
    FUN_008c9608();
    FUN_008c58c4(2,0,local_18);
    FUN_008c58c4(4,0,local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

