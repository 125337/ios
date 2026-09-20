// FUN_01d7628c @ 01d7628c

void FUN_01d7628c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_components_fromDate__026a44c0,0x1c);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_year_0269fa28);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_month_026a52a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_day_026a4c38);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringWithFormat__0269cca8,&cf__04ld__02ld__02ld);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

