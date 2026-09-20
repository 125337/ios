// installKeyboardObservers @ 01965cc8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::installKeyboardObservers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
             PTR_s_wcr_keyboardFrameWillChange__026ba028,
             *(undefined8 *)PTR__UIKeyboardWillChangeFrameNotification_025781c8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
             PTR_s_wcr_keyboardWillHide__026aafe0,
             *(undefined8 *)PTR__UIKeyboardWillHideNotification_025781d0,0);
  _objc_storeStrong(&local_28,0);
  return;
}

