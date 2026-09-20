// keywordAlertDeduplicationRule @ 01fe18c4

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::keywordAlertDeduplicationRule(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_30;
  local_38 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_40 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  puVar3 = local_38;
  if (local_40 == (undefined *)0x0) {
    puVar2 = PTR_s_keywordAlertDeduplicationEnabled_026ca2e0;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKey__0269e048);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_48;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540),
       ((ulong)puVar3 & 1) == 0)) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar2 = local_38;
    puVar3 = local_40;
    SVar1 = local_30;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    puVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_numberWithInt__0269d810,puVar4 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_keywordAlertDeduplicationEnabled_026ca2e0;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_48,0);
  }
  local_50 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
  puVar3 = local_38;
  if (((long)local_50 < 0) || (2 < (long)local_50)) {
    local_50 = (undefined *)0x0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
    _objc_retainAutoreleasedReturnValue();
    SVar1 = local_30;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_keywordAlertDeduplicationEnabled_026ca2e0;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return (long_long)local_50;
}

