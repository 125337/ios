// historyTimeTextForRecord: @ 01b322bc

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineKeywordAlertHistoryViewController::historyTimeTextForRecord_
          (WCRefineKeywordAlertHistoryViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  double in_d0;
  cfstringStruct *local_88;
  cfstringStruct *local_60;
  undefined *local_58 [2];
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar4 = local_38;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    pcVar2 = local_40;
    bVar1 = pcVar4 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_44 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_40,0);
    if (local_44 != 0) goto LAB_01b3257c;
  }
  pcVar2 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar2 & 1) == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608), in_d0 <= 0.0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    local_58[0] = puVar3;
    _objc_alloc_init();
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringFromDate__0269d1d8,local_58[0]);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_44 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
  }
LAB_01b3257c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

