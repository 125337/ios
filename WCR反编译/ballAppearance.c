// ballAppearance @ 0160c89c

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::ballAppearance(ID param_1,SEL param_2)

{
  ID local_78;
  ID local_70;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_ballAppearance);
  _objc_retainAutoreleasedReturnValue();
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (2 < (long)local_70) {
    local_70 = 2;
  }
  if ((long)local_70 < 1) {
    local_78 = 0;
  }
  else {
    local_78 = local_70;
  }
  return local_78;
}

