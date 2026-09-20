// toggleSelecting @ 01f7c910

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::toggleSelecting(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selecting_026c9890);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSelecting__026c9978,(uint)IVar1 ^ 1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedPaths_026ba4d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setupNavBar_026ba288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildListSections_026ba410);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_isInPageSheetHost_026c98b0);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_refreshPageSheetFloatBar_026c98c0);
  }
  return;
}

