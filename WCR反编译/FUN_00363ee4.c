// FUN_00363ee4 @ 00363ee4

void FUN_00363ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,3);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,local_18);
  }
  if ((local_20 != 0) && (local_20 != local_18)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_20);
  }
  if (((local_28 != 0) && (local_28 != local_18)) && (local_28 != local_20)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_28);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

