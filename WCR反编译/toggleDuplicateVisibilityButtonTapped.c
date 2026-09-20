// toggleDuplicateVisibilityButtonTapped @ 01b29ad0

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryViewController::toggleDuplicateVisibilityButtonTapped
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ID IVar3;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showingDuplicateRecords_026beaf0);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setShowingDuplicateRecords__026be8a0,(uint)IVar3 ^ 1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  }
  return;
}

