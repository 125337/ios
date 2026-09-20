// wcrCreatePersona @ 017caf38

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrCreatePersona(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined *local_90;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOriginalPersonaName__026b4fa8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWorkingName__026b4fb0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWorkingPrompt__026b4fb8,0);
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
  pcVar2 = &cf_e____;
  if ((IVar4 & 1) == 0) {
    pcVar2 = &cf_e_N;
  }
  pcVar3 = &cf_HQ____w_NTW_;
  if ((IVar4 & 1) == 0) {
    pcVar3 = &cf_HQ_Nw_NTW_;
  }
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_50 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_90;
  }
  else {
    local_30 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_90;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrShowEditStage_title_message_d_026b4fd0,1,pcVar2,pcVar3,local_90,0x14,0
            );
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return;
}

