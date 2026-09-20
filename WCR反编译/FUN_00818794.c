// FUN_00818794 @ 00818794

void FUN_00818794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_5;
  FUN_0083b53c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd140)(param_1,param_2,param_3,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_5;
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

