// FUN_007c49e4 @ 007c49e4

void FUN_007c49e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  if ((DAT_028cce69 & 1) == 0) {
    (*DAT_028ccdd8)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

