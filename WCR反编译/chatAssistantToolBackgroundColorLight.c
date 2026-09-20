// chatAssistantToolBackgroundColorLight @ 0210c92c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatAssistantToolBackgroundColorLight(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_chatAssistantToolBackgroundColorLight);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setChatAssistantToolBackgroundCo_026bf6a8,puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
               param_1);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

