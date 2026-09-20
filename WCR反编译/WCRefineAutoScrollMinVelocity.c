// WCRefineAutoScrollMinVelocity @ 02123ec8

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::WCRefineAutoScrollMinVelocity(WCRefineConfig *this,ID param_1,SEL param_2)

{
  double in_d0;
  double local_80;
  double local_78;
  double local_70;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineAutoScrollMinVelocity);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_70 = 400.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_doubleValue_026ca608);
    local_70 = in_d0;
  }
  if (local_70 <= 100.0) {
    local_78 = 100.0;
  }
  else {
    local_78 = local_70;
  }
  if (local_78 <= 2000.0) {
    local_80 = local_78;
  }
  else {
    local_80 = 2000.0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_80;
}

