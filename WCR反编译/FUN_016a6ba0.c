// FUN_016a6ba0 @ 016a6ba0

void FUN_016a6ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028e3dd0)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_18;
  local_28 = param_1;
  FUN_016d0f4c(local_18,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

