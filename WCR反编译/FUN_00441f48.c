// FUN_00441f48 @ 00441f48

void FUN_00441f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_004514e4();
  if ((uVar1 & 1) == 0) {
    uVar2 = local_20;
    (*DAT_028caa20)(local_20,local_28,local_30,param_4);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  else {
    FUN_00452edc();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_4;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

