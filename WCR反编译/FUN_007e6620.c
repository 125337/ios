// FUN_007e6620 @ 007e6620

void FUN_007e6620(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_28;
  undefined *local_20;
  uint local_14;
  
  uVar3 = NEON_ucvtf((ulong)param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_14 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_20 = puVar1;
  _objc_alloc_init();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss)
  ;
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringFromDate__0269d1d8,local_20);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

