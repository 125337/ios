// ballSize @ 0160bbbc

/* Function Stack Size: 0x10 bytes */

double WCRSuperFloatProfileStore::ballSize(ID param_1,SEL param_2)

{
  double in_d0;
  double local_40;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentValueForKey__026b1898,&cf_ballSize);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_40 = in_d0;
  if (in_d0 <= 0.0) {
    local_40 = 52.0;
  }
  return local_40;
}

