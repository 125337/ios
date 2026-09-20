// toggleSelectedPin @ 01c75e6c

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::toggleSelectedPin(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pinnedFiles_026c2658);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_containsObject__0269cbb8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  if ((IVar1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    if (IVar2 != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_insertObject_atIndex__0269eac0,IVar2,0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_v);
    }
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedFile_026c26d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObject__0269d678);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Smn_v);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPinnedFiles__026c2668,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadFiles_026c25e8);
  _objc_storeStrong(&local_28,0);
  return;
}

