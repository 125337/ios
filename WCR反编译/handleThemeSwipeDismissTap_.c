// handleThemeSwipeDismissTap: @ 01fc10d8

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::handleThemeSwipeDismissTap_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_swipeOpenCell_026ca040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  IVar2 = local_18;
  if (IVar1 == 0) {
    local_2c = 1;
    goto LAB_01fc12c4;
  }
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_swipeOpenCell_026ca040);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_themeSwipeOverlayOnCell__026ca080);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,0)
    ;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_38);
    IVar2 = local_38;
    uVar3 = in_d0;
    uVar4 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectContainsPoint(uVar3,uVar4,in_d2,in_d3,in_d0,in_d1);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isHidden_026ca768);
      if ((IVar2 & 1) == 0) {
        local_2c = 1;
        goto LAB_01fc12b4;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1)
    ;
    local_2c = 0;
  }
LAB_01fc12b4:
  _objc_storeStrong(&local_38,0);
LAB_01fc12c4:
  _objc_storeStrong(&local_28,0);
  return;
}

