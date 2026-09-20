// wcr_applySettingsChange: @ 00134680

/* Function Stack Size: 0x14 bytes */

void WCRChatToolbarView::wcr_applySettingsChange_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  ID local_1a0;
  ID local_130;
  bool local_f9;
  ID local_f8;
  ID local_f0;
  undefined4 local_e8;
  byte local_e1;
  ID local_e0;
  byte local_d1;
  ID local_d0;
  byte local_c1;
  ID local_c0;
  ID local_a8 [5];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setActionSignature__0269f140,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
  local_58 = in_d0;
  uStack_50 = in_d1;
  local_48 = in_d2;
  FUN_00134e1c();
  uStack_78 = uStack_50;
  local_80 = local_58;
  local_70 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,uStack_50,local_48,in_d0,local_28,PTR_s_setFrame__026ca960);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  local_c1 = 0;
  local_d1 = 0;
  local_e1 = 0;
  local_130 = local_28;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_130;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attachmentController_0269f148);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_c0 = local_130;
    _WCRChatToolbarEnabledActions();
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8[0] = local_130;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar5 = local_28;
  IVar1 = local_a8[0];
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attachmentController_0269f148);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_reloadWithActions_inputToolView__0269f158,IVar1,IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_31 & 1) == 0) {
    local_e8 = 1;
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    IVar5 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_f9 = (IVar5 & 1) == 0;
    if (local_f9) {
      local_1a0 = 0;
    }
    else {
      local_1a0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_1a0;
    }
    local_f9 = !local_f9;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_1a0;
    if (local_f9) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setNeedsLayout_0269deb8);
    IVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((IVar5 & 1) != 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    _objc_storeStrong(&local_f0,0);
    local_e8 = 0;
  }
  _objc_storeStrong(local_a8,0);
  return;
}

