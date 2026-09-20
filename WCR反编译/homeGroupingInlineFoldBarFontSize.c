// homeGroupingInlineFoldBarFontSize @ 01ffe4d0

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::homeGroupingInlineFoldBarFontSize(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  ID IVar3;
  double in_d0;
  double local_a0;
  double local_98;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((IVar3 & 1) == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608), in_d0 <= 0.0)) {
    local_18 = 14.0;
  }
  else {
    local_98 = 10.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    if (local_98 <= 10.0) {
      local_98 = 10.0;
    }
    if (local_98 <= 22.0) {
      local_a0 = local_98;
    }
    else {
      local_a0 = 22.0;
    }
    local_18 = local_a0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

