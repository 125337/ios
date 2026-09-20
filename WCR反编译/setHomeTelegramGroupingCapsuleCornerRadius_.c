// setHomeTelegramGroupingCapsuleCornerRadius: @ 01ff9a70

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeTelegramGroupingCapsuleCornerRadius_
               (ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  SEL SVar2;
  ID local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_3;
  if (param_3 < 0.0) {
    local_30 = 0.0;
  }
  if (16.0 < local_30) {
    local_30 = 16.0;
  }
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObject_forKey__026ca9e8,puVar1);
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38,0);
  return;
}

