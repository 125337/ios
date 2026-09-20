// clearSelectedCandidates @ 018631f0

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::clearSelectedCandidates(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setSelectedCandidates__026b6930,*(undefined8 *)PTR____NSArray0___02578280
            );
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSourceTitle__026b6938,&cf__gb);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzzb);
  return;
}

