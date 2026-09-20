// finishBatchDelete @ 0185aaf8

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::finishBatchDelete(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsDeleting__026b6a18,0);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingHistoryEntries_026b6a10);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingHistoryEntries_026b6a10);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _WCRefineBatchDeleteFriendAppendHistoryEntries();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingHistoryEntries_026b6a10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applySuccessCount_026b6a48);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyFailCount_026b6a38);
  puVar1 = PTR____NSArray0___02578280;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setPendingCandidates__026b69f0,*(undefined8 *)PTR____NSArray0___02578280)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingApplyIndex__026b69f8,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setSelectedCandidates__026b6930,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSourceTitle__026b6938,&cf__gb);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (IVar2 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__bbR);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  return;
}

