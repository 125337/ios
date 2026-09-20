// addExclusiveScene: @ 01c4ada8

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::addExclusiveScene_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_a0;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  ID local_40;
  long_long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sceneKey__026c1be0,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_a0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_a0;
  }
  else {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_70);
    (*(code *)PTR__objc_release_02578630)(local_60);
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsObject__0269cbb8,local_40);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_40);
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Enabled);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

