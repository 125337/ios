// FUN_00870f7c @ 00870f7c

void FUN_00870f7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  if ((DAT_028cd864 & 1) == 0) {
    (*DAT_028cd850)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    FUN_0088e654();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

