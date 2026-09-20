// FUN_00269598 @ 00269598

void FUN_00269598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c9520)(local_18,local_20,local_28,param_4);
  FUN_0026cf40(local_28,param_4);
  _objc_storeStrong(&local_28,0);
  return;
}

