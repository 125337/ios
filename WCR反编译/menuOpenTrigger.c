// menuOpenTrigger @ 01611438

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::menuOpenTrigger(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_menuOpenTrigger);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ballAppearance_026b18a0);
  if (IVar1 == 0) {
    if (local_30 == 0) {
      local_80 = 2;
    }
    else {
      local_80 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    }
    if (local_80 == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 2;
    }
  }
  else {
    if (local_30 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    }
    if ((long)local_88 < 3) {
      local_90 = local_88;
    }
    else {
      local_90 = 2;
    }
    if ((long)local_90 < 1) {
      local_98 = 0;
    }
    else {
      local_98 = local_90;
    }
    local_18 = local_98;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

