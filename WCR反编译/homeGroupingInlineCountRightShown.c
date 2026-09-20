// homeGroupingInlineCountRightShown @ 01ffd470

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::homeGroupingInlineCountRightShown(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_30 == (undefined *)0x0) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKey__0269e048,&cf_homeGroupingInlineRightDisplayMode);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = true;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
      bVar1 = puVar3 == (undefined *)0x0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInt__0269d810,bVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_30 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_28;
    puVar5 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar5);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_38,0);
  }
  puVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar5;
}

