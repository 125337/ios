// fanBottomEndAngle @ 016122e8

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRSuperFloatProfileStore::fanBottomEndAngle(WCRSuperFloatProfileStore *this,ID param_1,SEL param_2)

{
  double in_d0;
  double local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_fanBottomEndAngle);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_30 = 45.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_doubleValue_026ca608);
    local_30 = in_d0;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

