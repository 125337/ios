// beginRangeReselection @ 019fb758

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationCheckViewController::beginRangeReselection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isRunning_026aca10);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prepareForRangeReselection_026bb4d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showSourceMenu_026b6950);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQf_PS_MRhKm);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

