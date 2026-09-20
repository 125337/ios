// exitSelectMode @ 019a5858

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::exitSelectMode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSelectMode__026ba728,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHiddenSelectionMode__026ba750,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavBar_026ba288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hideSelectBar_026ba730);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadVisibleViews_026ba408);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTitleCount_026ba450);
  return;
}

