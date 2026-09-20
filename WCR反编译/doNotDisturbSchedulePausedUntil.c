// doNotDisturbSchedulePausedUntil @ 01ff381c

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::doNotDisturbSchedulePausedUntil(WCRefineConfig *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  double in_d0;
  double local_68;
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
  local_30 = param_1;
  FUN_01fd9510(param_1,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    local_68 = in_d0;
    if (in_d0 <= 0.0) {
      local_68 = 0.0;
    }
    local_18 = local_68;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

