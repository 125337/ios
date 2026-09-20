// wcrOpenPersonaAtGroup:index: @ 017c9388

/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrOpenPersonaAtGroup_index_
               (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_38;
  unsigned_long_long local_30;
  unsigned_long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrPersonaAtGroup_index__026b4f50,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsSelecting_026b4eb8);
    IVar1 = local_18;
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcrShowPersonaMenuAtGroup_index__026b4e30,local_28,local_30);
    }
    else {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectionField_026b4df0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_wcrApplyPrompt_toField_name__026b4f40,IVar2,IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrFinishSelection_026b4f48);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

