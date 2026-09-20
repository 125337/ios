// makeTimePickerWithDate: @ 01ea9f5c

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoItemEditViewController::makeTimePickerWithDate_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIDatePicker_026ce060;
  _objc_alloc_init();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDatePickerMode__0269cf38,0);
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setPreferredDatePickerStyle__0269cf48,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMinuteInterval__026b9658,5);
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDate__0269cf58,local_28);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

