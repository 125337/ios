// startBatchDelete @ 0185973c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::startBatchDelete(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDeleting_026b69a0);
  bVar1 = true;
  if ((IVar2 & 1) == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingCandidates__026b69f0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingApplyIndex__026b69f8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setApplySuccessCount__026b6a00,0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setApplyFailCount__026b6a08,0);
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingHistoryEntries_026b6a10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsDeleting__026b6a18,1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processNextDeleteChunk_026b6a20);
  }
  return;
}

