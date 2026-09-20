// configureWebViewTouchRouting @ 01e8797c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::configureWebViewTouchRouting(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_installWebEdgeLongPressIfNeeded_026c7258);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelaysContentTouches__026ca908,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCanCancelContentTouches__026ca8b0,0);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_enclosingTableView_026c6e68);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar1;
    if (IVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setDelaysContentTouches__026ca908,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setCanCancelContentTouches__026ca8b0,1);
      IVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_panGestureRecognizer_0269dd98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

