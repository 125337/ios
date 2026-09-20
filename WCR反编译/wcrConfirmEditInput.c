// wcrConfirmEditInput @ 017cc56c

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrConfirmEditInput(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editAlert_026b5018);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  FUN_017cc39c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editStage_026b5020);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditAlert__026b4ff0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditStage__026b4fe8,0);
  lVar6 = IVar3 - 1;
  if (lVar6 == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    puVar2 = PTR_WCRefineHelper_026ce000;
    if (IVar3 == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
      pcVar1 = &cf____TN_Nzz;
      if ((IVar3 & 1) == 0) {
        pcVar1 = &cf_NTN_Nzz;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrFinishEdit_026b4fe0);
      lVar6 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingName__026b4fb0,local_28);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_workingPrompt_026b5028);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar4 = local_18;
      IVar3 = local_28;
      if (IVar5 == 0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
        pcVar1 = &::cf_Q;
        if ((IVar5 & 1) == 0) {
          pcVar1 = &::cf_Q;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_wcrPresentPromptEditorTitle_mess_026b4fd8,IVar3,pcVar1,&::cf___,1);
        lVar6 = 1;
      }
      else {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_workingName_026b5008);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_workingPrompt_026b5028);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_wcrCommitName_prompt__026b5010,IVar3);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        lVar6 = 1;
      }
    }
  }
  _objc_storeStrong(lVar6,&local_28,0);
  return;
}

