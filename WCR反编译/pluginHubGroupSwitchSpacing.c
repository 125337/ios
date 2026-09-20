// pluginHubGroupSwitchSpacing @ 02043f80

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::pluginHubGroupSwitchSpacing(WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float in_s0;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_pluginHubGroupSwitchSpacing);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  if ((undefined *)param_1 == (undefined *)0x0) {
    in_s0 = 0.0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_pluginHubGroupSwitchSpacing);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_floatValue_026a5b48);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (double)in_s0;
}

