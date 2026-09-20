// FUN_0056e274 @ 0056e274

void FUN_0056e274(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_78;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if ((puVar1 == (undefined *)0x0) || (puVar1 = local_20, FUN_0056dec0(), ((ulong)puVar1 & 1) != 0))
  {
    puVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_30 = 1;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
    local_41 = 0;
    local_78 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
    }
    local_41 = puVar1 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_78;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIMenuItem_026ce778;
    _objc_alloc();
    puVar2 = puVar1;
    FUN_00566204();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithTitle_action__026a51e8,&cf_Y,puVar2);
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,puVar1);
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_30 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

