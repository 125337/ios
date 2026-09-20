// disableChatAtMePromptEnabled @ 0209032c

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::disableChatAtMePromptEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_30 = SVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKey__0269e048,SVar2);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKey__0269e048,&cf_abTestChatAtMeReminderEnabled);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_60 == (undefined *)0x0;
    local_40 = local_60;
    if (bVar1) {
      local_48 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_48;
    }
    _objc_storeStrong(&local_38,local_60);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_38,local_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeObjectForKey__0269d700,&cf_abTestChatAtMeReminderEnabled);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40,0);
  }
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar3;
}

