// wcr_setSecureHosting: @ 015e40b8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::wcr_setSecureHosting_(ID param_1,SEL param_2,bool param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_60;
  ID local_58;
  int local_50;
  undefined1 local_49;
  ID local_48;
  ID local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_40;
  local_49 = 0;
  bVar2 = true;
  uVar1 = local_40 != 0;
  if ((bool)uVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secureCanvas_026b1180);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == IVar4;
    local_49 = uVar1;
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  if (bVar2) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_40;
    local_40 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar3 = local_40;
  if (local_40 == 0) {
    local_50 = 1;
    goto LAB_015e471c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = IVar3;
  if ((local_31 & 1) == 0) {
LAB_015e43e8:
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_58;
    if (IVar5 != IVar3) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_addSubview__026ca4c0);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_58;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_58;
    if (IVar5 != IVar3) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_addSubview__026ca4c0);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    bVar2 = false;
    if ((local_31 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secureCanvas_026b1180);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (bVar2) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_secureCanvas_026b1180);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    local_50 = 0;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_secureCanvasCreateIfNeeded_026b1198);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar3;
    if (IVar3 == 0) {
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,local_60,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAutoresizingMask__026ca878,0x12);
      IVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_40;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 != IVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_60);
      }
      _objc_storeStrong(&local_58,local_60);
      local_50 = 0;
    }
    _objc_storeStrong(&local_60,0);
    if (local_50 == 0) goto LAB_015e43e8;
  }
  _objc_storeStrong(&local_58,0);
LAB_015e471c:
  _objc_storeStrong(&local_40,0);
  return;
}

