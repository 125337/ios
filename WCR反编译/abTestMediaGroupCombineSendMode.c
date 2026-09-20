// abTestMediaGroupCombineSendMode @ 020317ec

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestMediaGroupCombineSendMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_48;
  ID local_40;
  SEL local_38;
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
  IVar2 = local_30;
  local_38 = SVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,SVar1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_30;
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKey__0269e048,&cf_abTestMediaGroupCombineSendEnabled);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  IVar2 = local_48;
  if ((IVar5 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    IVar5 = local_30;
    if ((IVar2 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setObject_forKey__026ca9e8,puVar4,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = 1;
      goto LAB_02031a1c;
    }
  }
  IVar2 = local_30;
  FUN_0202f3fc(local_30,local_38,&cf_abTestMediaGroupCombineSendEnabled,0,0);
  local_18 = IVar2;
LAB_02031a1c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

