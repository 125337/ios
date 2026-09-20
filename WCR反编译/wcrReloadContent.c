// wcrReloadContent @ 017c6764

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrReloadContent(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrRebuildGroups_026b4e80);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  if (IVar1 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrReloadList_026b4e88);
  }
  return;
}

