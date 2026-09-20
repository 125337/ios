// FUN_008927a4 @ 008927a4

void FUN_008927a4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  uVar1 = param_1;
  FUN_008a20bc();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd928)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

