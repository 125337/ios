// finishApplyingChanges @ 018677c8

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::finishApplyingChanges(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsApplying__026b6b90,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applySuccessCount_026b6a48);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyFailCount_026b6a38);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setPendingChanges__026b6b88,*(undefined8 *)PTR____NSArray0___02578280);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPendingApplyIndex__026b69f8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_hQO9e_b);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__bbR);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

