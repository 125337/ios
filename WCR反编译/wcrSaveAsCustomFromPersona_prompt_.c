// wcrSaveAsCustomFromPersona:prompt: @ 017cb21c

/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrSaveAsCustomFromPersona_prompt_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_a8;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setOriginalPersonaName__026b4fa8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingName__026b4fb0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWorkingPrompt__026b4fb8,local_30);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
  IVar4 = local_18;
  pcVar2 = &cf_SX__Nbv___;
  if ((IVar5 & 1) == 0) {
    pcVar2 = &cf_SX__NbvN;
  }
  pcVar3 = &cf_Qn____NS9eSX_;
  if ((IVar5 & 1) == 0) {
    pcVar3 = &cf_Qn_NNS9eSX_;
  }
  bVar1 = (IVar5 & 1) == 0;
  if (bVar1) {
    local_60 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_a8;
  }
  else {
    local_40 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a8;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_wcrShowEditStage_title_message_d_026b4fd0,1,pcVar2,pcVar3,local_a8,0x14,1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_70);
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

