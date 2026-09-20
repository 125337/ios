// updateCellActionMenuForGesture: @ 015f3d98

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::updateCellActionMenuForGesture_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 uVar4;
  double in_d1;
  double dVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_e0;
  ID local_58;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenu_026b1588);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar4 = local_38;
  if (IVar2 != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenu_026b1588);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_locationInView__026ca798);
    uVar4 = in_d0;
    dVar5 = in_d1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenu_026b1588);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectContainsPoint(uVar4,dVar5,in_d2,in_d3,in_d0,in_d1);
    if ((IVar3 & 1) == 0) {
      local_e0 = 0xffffffffffffffff;
    }
    else {
      local_e0 = (ID)(in_d1 / 36.0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_58 = local_e0;
    bVar1 = true;
    if (-1 < (long)local_e0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenuLabels_026b15d8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = (long)IVar3 <= (long)local_e0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      local_58 = 0xffffffffffffffff;
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenuIndex_026b15e0);
    if (local_58 != IVar2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setCellActionMenuIndex__026b15b0,local_58);
      if (-1 < (long)local_58) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      }
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenuLabels_026b15d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

