// loadItemsFromRule @ 01a0841c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordMultiReplyEditorViewController::loadItemsFromRule(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID local_50;
  undefined *local_48;
  ID local_40;
  byte local_31;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ruleIndex_026bb6c0);
  local_31 = 0;
  bVar1 = false;
  if (IVar3 != 0x7fffffffffffffff) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ruleIndex_026bb6c0);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 < IVar4;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rules_026a44d8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ruleIndex_026bb6c0);
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,IVar4);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_48 = (undefined *)0x0;
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_multiItems);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = PTR_WCRefineHelper_026ce000;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_multiContent);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      puVar6 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_autoReplySanitizedMultiItems__026a3620,local_50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObjectsFromArray__0269d540,local_48);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setItems__026a17a8,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

