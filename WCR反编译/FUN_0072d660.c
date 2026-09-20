// FUN_0072d660 @ 0072d660

void FUN_0072d660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_0072f2ac(local_28);
  uVar1 = local_18;
  (*DAT_028cc458)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

