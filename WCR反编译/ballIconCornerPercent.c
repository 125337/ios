// ballIconCornerPercent @ 0160bd8c

/* Function Stack Size: 0x10 bytes */

double WCRSuperFloatProfileStore::ballIconCornerPercent(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double local_80;
  double local_78;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_ballIconCornerPercent);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    local_78 = 100.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    if (100.0 < local_78) {
      local_78 = 100.0;
    }
    if (local_78 <= 0.0) {
      local_80 = 0.0;
    }
    else {
      local_80 = local_78;
    }
    local_18 = local_80;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

