// homeTelegramGroupingSwipeMode @ 01ff8730

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::homeTelegramGroupingSwipeMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
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
  if ((IVar3 & 1) == 0) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_homeTelegramGroupingSwipeSwitchEnabled);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((IVar3 & 1) == 0) ||
       (IVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540),
       (IVar3 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    local_40 = IVar3;
    if (((long)IVar3 < 0) || (2 < (long)IVar3)) {
      local_18 = 0;
      local_44 = 1;
    }
    else {
      local_44 = 1;
      local_18 = IVar3;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

