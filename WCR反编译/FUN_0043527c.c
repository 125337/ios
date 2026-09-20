// FUN_0043527c @ 0043527c

void FUN_0043527c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_30;
  FUN_00438174();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*DAT_028ca910)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else {
    uVar1 = local_30;
    FUN_0043836c(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

