// wcrConfirmDelete @ 017cd064

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrConfirmDelete(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  int local_50;
  undefined *local_48;
  undefined *local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingDeleteName_026b5050);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingDeleteName__026b5048,0);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (IVar2 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
    bVar1 = (IVar2 & 1) == 0;
    if (bVar1) {
      local_48 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = (int)puVar3;
    }
    else {
      local_38 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = (int)puVar3;
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (local_50 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Rd1Y_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rd);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrReloadContent_026b4e40);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

