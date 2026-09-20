// voiceCloneProvider @ 02036b3c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::voiceCloneProvider(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_58;
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
  IVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) == 0) {
    local_58 = 0;
  }
  else {
    local_58 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_58;
}

