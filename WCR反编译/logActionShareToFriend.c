// logActionShareToFriend @ 00928130

/* Function Stack Size: 0x10 bytes */

void WCRefineCrashMonitorViewController::logActionShareToFriend(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_38;
  bool local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_logPlainText_026aa678);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_31 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_logPlainText_026aa678);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_80;
  }
  local_31 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_80;
  if ((local_31 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fe__ne_);
    local_38 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDateFormat__0269d1c8,&cf_yyMMddHHmmss);
    puVar4 = local_40;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRangeTitle_026aa680);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_WCRefine_crash_______log);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_68 = 0;
    local_70 = 0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_writeToFile_atomically_encoding__026a33a8,local_60,1,4,&local_70);
    _objc_storeStrong(&local_68,local_70);
    bVar1 = ((ulong)pcVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_forwardFileAtPath_fromViewCo_026a9b60,
                 local_60,local_18);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_QeQ4NeeN1Y_);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

