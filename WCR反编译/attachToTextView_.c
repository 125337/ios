// attachToTextView: @ 00f94430

/* Function Stack Size: 0x18 bytes */

void WCRPageSheetMultilineInsetBinder::attachToTextView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_78 [9];
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextView__026ab040,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentInset_0269dcc8);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,local_18,PTR_s_setBaseInset__026aafc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setScrollEnabled__0269e428,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAlwaysBounceVertical__026ca868,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setKeyboardDismissMode__026aafc0,2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_78[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeObserver__0269f128,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_wcr_keyboardWillChange__026aafd8,
               *(undefined8 *)PTR__UIKeyboardWillChangeFrameNotification_025781c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_wcr_keyboardWillHide__026aafe0,
               *(undefined8 *)PTR__UIKeyboardWillHideNotification_025781d0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78[0],PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_wcr_textViewDidChange__026acce0,
               *(undefined8 *)PTR__UITextViewTextDidChangeNotification_02578218,local_28);
    _objc_storeStrong(local_78,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

