// pendingSectionTitle @ 01eb6308

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoListEditorViewController::pendingSectionTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentFilter_026aa1d0);
  if (param_1 != 0) {
    if (param_1 == 1) {
      puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      local_30 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_zh_CN);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDateFormat__0269d1c8,&cf_EEE);
      puVar1 = local_30;
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_N_Y_);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_30,0);
      goto LAB_01eb6544;
    }
    if (param_1 == 2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_e8_;
      goto LAB_01eb6544;
    }
    if (param_1 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__g_b;
      goto LAB_01eb6544;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_L_N;
LAB_01eb6544:
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

