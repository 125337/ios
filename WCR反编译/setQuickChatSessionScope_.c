// setQuickChatSessionScope: @ 0214d5b4

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setQuickChatSessionScope_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  long_long local_40;
  ID local_38;
  long_long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  if (((long)param_3 < 0) || (local_40 = param_3, 2 < (long)param_3)) {
    local_40 = 0;
  }
  local_30 = local_40;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setObject_forKey__026ca9e8,puVar1,&cf_quickChatSessionScope);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  return;
}

