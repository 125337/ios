// abTestDictationMode @ 0202ffec

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestDictationMode(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL SVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_disableChatVoiceDictationEnabled);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_30;
  if ((IVar1 & 1) != 0) {
    local_18 = 2;
    local_34 = 1;
    goto LAB_02030254;
  }
  SVar2 = local_28;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar3 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((IVar3 & 1) == 0) {
LAB_020301bc:
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_abTestDictationEnabled);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar1 & 1) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  else {
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
    FUN_02030270();
    if (IVar3 == 1) {
      local_18 = 1;
    }
    else {
      if (IVar3 != 2) goto LAB_020301bc;
      local_18 = 2;
    }
  }
  local_34 = 1;
  _objc_storeStrong(&local_40,0);
LAB_02030254:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

