// clearAllDrafts @ 010b37ac

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftManager::clearAllDrafts(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cleanUpPermanentVideoDirectory_026ae618);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drafts_026ae608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveDrafts_026ae610);
  return;
}

