// wcrSelectFollowGlobal @ 017c92b8

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrSelectFollowGlobal(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionField_026b4df0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrFollowGlobalTitle_026b4ea8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrApplyPrompt_toField_name__026b4f40,&::cf___,IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrFinishSelection_026b4f48);
  return;
}

