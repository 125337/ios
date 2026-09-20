// attach @ 009d6800

/* Function Stack Size: 0x10 bytes */

void WCRAnonAtSheetKeyboardBinder::attach(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_b8 [10];
  ID local_68 [4];
  ID local_48;
  undefined1 local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sheet_026aa728);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  if ((bool)uVar1) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_39 = uVar1;
    local_38 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_39;
  }
  local_39 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    local_48 = 0;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheet_026aa728);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) != 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sheet_026aa728);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_48;
      local_48 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    if (local_48 != 0) {
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,
                 PTR_s_setAutoAdjustAtKeyboardChange__026aafb8);
      IVar3 = local_48;
      if ((IVar4 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_autoAdjustAtKeyboardChange);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setAutoAdjustAtKeyboardChange__026aafb8,0);
      }
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setScrollEnabled__0269e428,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setAlwaysBounceVertical__026ca868,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setKeyboardDismissMode__026aafc0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_contentInset_0269dcc8);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,in_d2,in_d3,local_28,PTR_s_setBaseInset__026aafc8);
    IVar3 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_delegate_0269e808);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviousDelegate__026aafd0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setDelegate__026ca910,local_28);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_b8[0] = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_addObserver_selector_name_object_0269caf8,local_28,
               PTR_s_wcr_keyboardWillChange__026aafd8,
               *(undefined8 *)PTR__UIKeyboardWillChangeFrameNotification_025781c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8[0],PTR_s_addObserver_selector_name_object_0269caf8,local_28,
               PTR_s_wcr_keyboardWillHide__026aafe0,
               *(undefined8 *)PTR__UIKeyboardWillHideNotification_025781d0,0);
    _objc_storeStrong(local_b8,0);
    _objc_storeStrong(local_68,0);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

