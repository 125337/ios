// showDeletePreview @ 0185893c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::showDeletePreview(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbT_N);
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_showPreviewAlertWithTitle_candid_026b69d8,&cf__RdT_N);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  return;
}

