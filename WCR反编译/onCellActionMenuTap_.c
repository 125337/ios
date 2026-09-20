// onCellActionMenuTap: @ 015f39cc

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::onCellActionMenuTap_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  double in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_f0;
  long local_d8;
  ID local_b0;
  byte local_a1;
  ID local_a0;
  byte local_91;
  ID local_90;
  byte local_81;
  ID local_80;
  ID local_78;
  long local_50;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenu_026b1588);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_locationInView__026ca798);
  local_48 = in_d0;
  local_40 = in_d1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenu_026b1588);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectContainsPoint(in_d0,in_d1,in_d2,in_d3,local_48,local_40);
  if ((IVar3 & 1) == 0) {
    local_d8 = -1;
  }
  else {
    local_d8 = (long)(local_40 / 36.0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_50 = local_d8;
  local_81 = 0;
  local_91 = 0;
  local_a1 = 0;
  if (-1 < local_d8) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenuActions_026b15c0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_d8 < (long)IVar2) {
      local_f0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionMenuActions_026b15c0);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)();
      goto LAB_015f3c48;
    }
  }
  local_f0 = 0xffffffffffffffff;
LAB_015f3c48:
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_78 = local_f0;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellActionUsername_026b15c8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b0 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissCellActionMenu_026b1298);
  if (-1 < (long)local_78) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_performCellMenuAction_username__026b15d0,local_78,local_b0);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_38,0);
  return;
}

