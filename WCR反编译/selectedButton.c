// selectedButton @ 01e571c0

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTabStripView::selectedButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_buttonForTabId__026c6978);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

