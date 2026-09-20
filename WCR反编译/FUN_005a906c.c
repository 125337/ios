// FUN_005a906c @ 005a906c

void FUN_005a906c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined *local_48;
  undefined *local_38;
  undefined *local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  bVar1 = local_20 == (undefined *)0x0;
  if (bVar1) {
    local_70 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_70;
  }
  else {
    local_70 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
    local_38 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

