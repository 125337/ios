// FUN_00887860 @ 00887860

void FUN_00887860(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    FUN_0088798c(local_20,puVar1);
    puVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

