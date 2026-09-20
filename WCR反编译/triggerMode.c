// triggerMode @ 0160b6f4

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::triggerMode(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballAppearance_026b18a0);
  if (IVar1 == 0) {
    local_18 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_currentValueForKey__026b1898,&cf_triggerMode);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    if (local_18 == 1) {
      local_18 = 0;
    }
  }
  return local_18;
}

