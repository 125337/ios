// syncGroupMembers @ 01aaba50

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::syncGroupMembers(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingGroupId_026bdb58);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_captureInputDrafts_026bdb78);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persistSyncDraftToGroup_026bdce0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentBindSourceChooser_026bdce8);
  }
  return;
}

