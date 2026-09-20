// timestampStringWithMilliseconds: @ 0091a77c

/* Function Stack Size: 0x14 bytes */

ID WCNavigationMonitor::timestampStringWithMilliseconds_(ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  pcVar1 = &cf_HH_mm_ss_SSS;
  if ((local_21 & 1) == 0) {
    pcVar1 = &cf_HH_mm_ss;
  }
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDateFormat__0269d1c8,pcVar1);
  puVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar2;
}

