// toggleToolbarCollapsed @ 01669de0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::toggleToolbarCollapsed(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toolbarCollapsed_026b1db8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setToolbarCollapsed__026b24a8,(uint)IVar1 ^ 1)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyToolbarCollapsedChrome_026b24b0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toolbarCollapsed_026b1db8);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__wQh_6ewpU_);
  }
  return;
}

