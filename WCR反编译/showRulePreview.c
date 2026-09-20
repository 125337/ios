// showRulePreview @ 01865e5c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::showRulePreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbegn);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasAnyRule_026b6b60);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQn__);
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_buildPendingChanges_026b6b68);
      _objc_retainAutoreleasedReturnValue();
      local_28 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
      puVar1 = PTR_WCRefineHelper_026ce000;
      if (IVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg);
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_previewMessageForChanges__026b6b70,local_28);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_O9e,IVar2,&cf_wSN,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      _objc_storeStrong(&local_28,0);
    }
  }
  return;
}

