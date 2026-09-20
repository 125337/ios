// wcr_keyboardFrameWillChange: @ 01965f98

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerPreviewViewController::wcr_keyboardFrameWillChange_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d0;
  double dVar4;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar5;
  double local_100;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isSearchInputFirstResponder_026ba030);
  if (((IVar1 & 1) != 0) ||
     (IVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_searchPanelVisible_026b9dd8),
     (IVar1 & 1) != 0)) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_isSearchInputFirstResponder_026ba030);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyboardOverlap_026ba020);
      if (0.0 < in_d0) {
        (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setKeyboardOverlap__026b9e28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_animateKeyboardInsetsWithNot_026ba038,local_38);
      }
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = in_d0;
      uVar2 = in_d1;
      uVar3 = in_d2;
      uVar5 = in_d3;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _CGRectGetMaxY(local_100,uVar2,uVar3,uVar5);
      _CGRectGetMinY(in_d0,in_d1,in_d2,in_d3);
      local_100 = local_100 - in_d0;
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_100 <= 0.0) {
        local_100 = 0.0;
      }
      dVar4 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_keyboardOverlap_026ba020);
      if (0.5 <= ABS(local_100 - dVar4)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100,local_28,PTR_s_setKeyboardOverlap__026b9e28)
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_animateKeyboardInsetsWithNot_026ba038,local_38);
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

