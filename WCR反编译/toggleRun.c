// toggleRun @ 019fcf90

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationCheckViewController::toggleRun(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isRunning_026aca10);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isPaused_026a14d8);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_queueCount_026acab8);
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cursor_026acaa8);
      if (puVar2 < puVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resume_026a1720);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
        goto LAB_019fd108;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_startFresh_026bb500);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pause_0269f2d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
LAB_019fd108:
  _objc_storeStrong(&local_28,0);
  return;
}

