// FUN_01e80dac @ 01e80dac

void FUN_01e80dac(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_188;
  cfstringStruct *local_160;
  cfstringStruct *local_140;
  cfstringStruct *local_a8;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  bool local_41;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == (cfstringStruct *)0x0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_28;
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardSourceMode_026a8828);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardTitle_026c70d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDateEnabled_026c6df8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_stringWithFormat__0269cca8,&cf_mode__ld_title____dateOn__d);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDateEnabled_026c6df8);
  if (((ulong)pcVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    pcVar3 = local_28;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDateFormat_026c70e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = &cf_yyyy_MM_ddEEE;
    }
    else {
      local_a8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDateFormat_026c70e0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_a8;
    }
    local_41 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDateFormat__0269d1c8,local_a8);
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar4 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_zh_CN);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = local_30;
    puVar4 = local_38;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf__date___);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38,0);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardSourceMode_026a8828);
  puVar4 = PTR_WCRefineToDoStore_026cf6a0;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDailyOnly_026c7100);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_cardEntriesForBackend_dailyOnly__026c7108,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_50 = puVar4;
    FUN_01e9e0f0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDailyOnly_026c7100);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_appendFormat__0269d148,&cf__local____daily__d);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50,0);
  }
  else if (pcVar3 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDailyOnly_026c7100);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_cardEntriesForBackend_dailyOnly__026c7108,1,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_58 = puVar4;
    FUN_01e9e0f0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardDailyOnly_026c7100);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_appendFormat__0269d148,&cf__official____daily__d);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_58,0);
  }
  else if (pcVar3 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardWebHTMLEnabled_026c6d68);
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardWebURL_026c6dd0);
      _objc_retainAutoreleasedReturnValue();
      local_188 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_188 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8,local_188);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar4 = local_30;
      pcVar3 = local_28;
      FUN_01e73df8(local_28,local_68);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendFormat__0269d148,&cf____);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_68,0);
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardWebRuntimeStorage_026c73d8);
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_140 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
      }
      FUN_01e9d3d8();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_140;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_28;
      puVar4 = local_30;
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardWebHTML_026c6dc8);
      _objc_retainAutoreleasedReturnValue();
      local_160 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_160 = &cf___;
      }
      FUN_01e9d0d0(pcVar3,local_160);
      _objc_retainAutoreleasedReturnValue();
      FUN_01e9d1c8();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_appendFormat__0269d148,&cf_____storage__016llx);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_60,0);
    }
  }
  puVar4 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

