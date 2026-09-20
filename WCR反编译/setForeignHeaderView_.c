// setForeignHeaderView: @ 007f0d28

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHeaderContainerView::setForeignHeaderView_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (*(ID *)(local_18 + (long)_foreignHeaderView) == local_28) {
    bVar1 = false;
    if (local_28 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar2 != local_18;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_insertSubview_atIndex__026ca748,local_28,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_18 + (long)_foreignHeaderView),
               PTR_s_removeFromSuperview_026ca800);
    _objc_storeStrong(local_18 + (long)_foreignHeaderView,local_28);
    if (local_28 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_insertSubview_atIndex__026ca748,local_28,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNeedsLayout_0269deb8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

