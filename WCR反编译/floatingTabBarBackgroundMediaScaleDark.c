// floatingTabBarBackgroundMediaScaleDark @ 0213c200

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::floatingTabBarBackgroundMediaScaleDark(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  double in_d0;
  double local_90;
  double local_88;
  double local_80;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_30 == 0) {
    local_80 = 1.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    local_80 = in_d0;
  }
  if (local_80 <= DAT_02323c68) {
    local_88 = DAT_02323c68;
  }
  else {
    local_88 = local_80;
  }
  if (local_88 <= 5.0) {
    local_90 = local_88;
  }
  else {
    local_90 = 5.0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_90;
}

