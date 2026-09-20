// FUN_003314cc @ 003314cc

void FUN_003314cc(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_18;
  
  puVar1 = param_1;
  FUN_00331804();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028c9e50)(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    local_18 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

