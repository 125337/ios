// circleRingSpacing @ 01614cfc

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRSuperFloatProfileStore::circleRingSpacing(WCRSuperFloatProfileStore *this,ID param_1,SEL param_2)

{
  double in_d0;
  double local_78;
  double local_70;
  double local_68;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_circleRingSpacing);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_68 = DAT_02339780;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_doubleValue_026ca608);
    local_68 = in_d0;
  }
  if (local_68 <= 2.5) {
    local_70 = local_68;
  }
  else {
    local_70 = 2.5;
  }
  if (local_70 <= DAT_02339788) {
    local_78 = DAT_02339788;
  }
  else {
    local_78 = local_70;
  }
  _objc_storeStrong(&local_28,0);
  return local_78;
}

