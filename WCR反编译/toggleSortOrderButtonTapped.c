// toggleSortOrderButtonTapped @ 01b29bcc

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryViewController::toggleSortOrderButtonTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ascendingSortOrder_026be8f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setAscendingSortOrder__026be898,(uint)IVar1 ^ 1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

