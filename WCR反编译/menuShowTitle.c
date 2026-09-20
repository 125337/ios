// menuShowTitle @ 0160ebf4

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatProfileStore::menuShowTitle(ID param_1,SEL param_2)

{
  int local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_menuShowTitle);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boolValue_026ca540);
    local_2c = (int)param_1;
  }
  _objc_storeStrong(&local_28,0);
  return (uint)(local_2c != 0);
}

