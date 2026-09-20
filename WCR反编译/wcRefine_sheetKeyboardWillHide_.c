// wcRefine_sheetKeyboardWillHide: @ 01e66b24

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineTextReplaceViewController::wcRefine_sheetKeyboardWillHide_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcRefine_activeSheetTextView_026c6cf8);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcRefineSheetTextViewBaseInset_026c6d00);
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_setContentInset__0269e770);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcRefineSheetTextViewBaseInset_026c6d00);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,local_30[0],PTR_s_setScrollIndicatorInsets__0269e778);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

