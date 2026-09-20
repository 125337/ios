// setHomeGroupingInlineCompactRowHeight: @ 01ffeac0

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setHomeGroupingInlineCompactRowHeight_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  SEL SVar2;
  double local_80;
  double local_78;
  double local_70;
  ID local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (0.0 < local_28) {
    if (local_28 <= 20.0) {
      local_78 = 20.0;
    }
    else {
      local_78 = local_28;
    }
    if (local_78 <= 68.0) {
      local_80 = local_78;
    }
    else {
      local_80 = 68.0;
    }
    local_70 = local_80;
  }
  else {
    local_70 = 52.0;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObject_forKey__026ca9e8,puVar1);
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

