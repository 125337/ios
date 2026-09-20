// FUN_00771c78 @ 00771c78

void FUN_00771c78(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_88;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20,param_2);
  pcVar1 = local_20;
  FUN_00771368();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  if (local_20 == (cfstringStruct *)0x0) {
    local_88 = &cf___;
  }
  else {
    local_88 = local_20;
  }
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,&cf_wxid);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_28,&cf_nickname);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_amount);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_timestamp);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_localizedStringFromDate_dateStyl_026a7e10,puVar3,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_timeString);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_anomaly,&cf_source);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_0257fa80,&cf_note);
  FUN_007717b8();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_48);
  FUN_00771864(local_50);
  FUN_007719f0(0);
  _objc_storeStrong(&DAT_028cc8a8,0);
  FUN_00772240();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

