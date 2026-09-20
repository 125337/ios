// fanHaptic @ 01612740

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::fanHaptic(ID param_1,SEL param_2)

{
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentValueForKey__026b1898,&cf_fanHaptic);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_68 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_integerValue_026ca750);
    local_68 = param_1;
  }
  if ((long)local_68 < 4) {
    local_70 = local_68;
  }
  else {
    local_70 = 3;
  }
  if ((long)local_70 < 1) {
    local_78 = 0;
  }
  else {
    local_78 = local_70;
  }
  _objc_storeStrong(&local_28,0);
  return local_78;
}

