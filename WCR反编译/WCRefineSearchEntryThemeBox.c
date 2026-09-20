// WCRefineSearchEntryThemeBox @ 02135f50

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::WCRefineSearchEntryThemeBox(ID param_1,SEL param_2)

{
  int local_34;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineSearchEntryThemeBox);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_34 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boolValue_026ca540);
    local_34 = (int)param_1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (uint)(local_34 != 0);
}

