// FUN_0042029c @ 0042029c

void FUN_0042029c(double param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  undefined *local_30 [3];
  double local_18;
  
  local_18 = param_1;
  if (param_1 <= 0.0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = param_1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR__OBJC_CLASS___NSDate_026cdf88,
             PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_30[0] = puVar1;
  _objc_alloc_init();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss)
  ;
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringFromDate__0269d1d8,local_30[0]);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

