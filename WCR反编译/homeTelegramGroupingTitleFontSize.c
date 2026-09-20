// homeTelegramGroupingTitleFontSize @ 01ff9e60

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::homeTelegramGroupingTitleFontSize(WCRefineConfig *this,ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
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
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar2 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
    if (0.0 < in_d0) {
      if ((in_d0 < 12.0) || (local_18 = in_d0, 20.0 < in_d0)) {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 0.0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

