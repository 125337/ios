// FUN_00030ca0 @ 00030ca0

void FUN_00030ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c7ac8)(local_18,local_20,local_28);
  FUN_00045e0c(local_18);
  _objc_storeStrong(&local_28,0);
  return;
}

