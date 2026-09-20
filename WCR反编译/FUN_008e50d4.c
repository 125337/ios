// FUN_008e50d4 @ 008e50d4

void FUN_008e50d4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_a8;
  undefined *local_60;
  undefined *local_50;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar3 = local_20;
  if (local_28 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar3;
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = ((ulong)puVar3 & 1) == 0;
    if (bVar1) {
      local_a8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_a8;
    }
    else {
      local_a8 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
      local_50 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_a8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_28);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    local_2c = 1;
    local_18 = puVar3;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

