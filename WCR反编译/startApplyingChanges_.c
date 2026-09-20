// startApplyingChanges: @ 0186677c

/* Function Stack Size: 0x18 bytes */

void WCRefineBatchRemarkViewController::startApplyingChanges_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if ((lVar1 != 0) &&
     (IVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isApplying_026b6b18),
     (IVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingChanges__026b6b88,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingApplyIndex__026b69f8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setApplySuccessCount__026b6a00,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setApplyFailCount__026b6a08,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsApplying__026b6b90,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_processNextBatchRemarkChunk_026b6b98);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

