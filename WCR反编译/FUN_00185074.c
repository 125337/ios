// FUN_00185074 @ 00185074

void FUN_00185074(undefined8 param_1)

{
  bool bVar1;
  undefined *local_70;
  undefined *local_50;
  undefined *local_40;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_70 = local_20;
  FUN_001881a0();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_70 == (undefined *)0x0;
  local_28 = local_70;
  if (bVar1) {
    local_70 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_70;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_mutableCopy_0269d8a0);
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

