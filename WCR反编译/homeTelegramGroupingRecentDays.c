// homeTelegramGroupingRecentDays @ 01ff81bc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::homeTelegramGroupingRecentDays(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
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
    local_18 = 3;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    if (((long)IVar2 < 1) || (local_18 = IVar2, 0x1e < (long)IVar2)) {
      local_18 = 3;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

