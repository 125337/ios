// migrateLegacySyncedDraft @ 01c47edc

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateSpecialUserDetailViewController::migrateLegacySyncedDraft
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_40;
  long local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_draft_026b65e8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar2 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
    local_21 = (byte)IVar4;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_resolvedExclusiveScenesForConfig_026c1bd8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    for (local_38 = 0; local_38 < 6; local_38 = local_38 + 1) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneKey__026c1be0,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar5 = local_30;
      local_40 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsObject__0269cbb8,IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,puVar5);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Enabled)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_40,0);
    }
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDraftDirty__026c1be8,1);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

