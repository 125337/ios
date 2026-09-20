// FUN_00177c30 @ 00177c30

void FUN_00177c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_00179108(local_18);
  (*DAT_028c8880)(local_18,local_20,local_28,local_30);
  FUN_00179108(local_18);
  FUN_00179210(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

