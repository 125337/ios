// inputBoxSwipeHasTextDistance @ 02144ca4

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::inputBoxSwipeHasTextDistance(WCRefineConfig *this,ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  double local_40;
  double local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((IVar1 & 1) == 0) {
    local_40 = 100.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_40 = in_d0;
  }
  local_30 = local_40;
  if (local_40 < 40.0) {
    local_30 = 40.0;
  }
  if (200.0 < local_30) {
    local_30 = 200.0;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

