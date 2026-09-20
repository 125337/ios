// makeTimePickerWithMinutes:action: @ 0194046c

/* Function Stack Size: 0x20 bytes */

ID WCRefineDoNotDisturbSettingsViewController::makeTimePickerWithMinutes_action_
             (ID param_1,SEL param_2,long_long param_3,SEL param_4)

{
  undefined *puVar1;
  undefined *local_38;
  SEL local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIDatePicker_026ce060;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDatePickerMode__0269cf38,0);
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setMinuteInterval__026b9658,5);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreferredDatePickerStyle__0269cf48,2);
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_dateFromMinutes__026b9660,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDate__0269cf58);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_18,local_30,0x1000);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

