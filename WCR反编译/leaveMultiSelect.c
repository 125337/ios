// leaveMultiSelect @ 01c76734

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::leaveMultiSelect(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setMultiSelect__026c26e0,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedFiles_026c2690);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_configureNavigationItems_026c25e0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateLegendLabel_026c2650);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applySearch_026bf910);
  return;
}

