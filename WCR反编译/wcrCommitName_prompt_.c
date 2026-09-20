// wcrCommitName:prompt: @ 017cc8dc

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRefineAIPersonaLibraryViewController::wcrCommitName_prompt_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  int local_6c;
  undefined *local_58;
  undefined *local_48;
  ID local_38 [3];
  SEL local_20;
  ID local_18;
  
  local_38[2] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_originalPersonaName_026b5030);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  local_38[0] = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_58 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (int)puVar5;
  }
  else {
    local_48 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (int)puVar5;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  if (local_6c == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
    pcVar2 = &cf____TYbNQn____Qz;
    if ((IVar3 & 1) == 0) {
      pcVar2 = &cf_NTYbNQn_NQz;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78,pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrFinishEdit_026b4fe0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrFinishEdit_026b4fe0);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

