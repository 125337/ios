// FUN_00870f1c @ 00870f1c

void FUN_00870f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  if ((DAT_028cd86a & 1) == 0) {
    (*DAT_028cd848)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = 0;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

