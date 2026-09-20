// wcr_textViewDidChange: @ 00f94dec

/* Function Stack Size: 0x18 bytes */

void WCRPageSheetMultilineInsetBinder::wcr_textViewDidChange_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar1 == IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_scrollCaretIntoView_026acce8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

