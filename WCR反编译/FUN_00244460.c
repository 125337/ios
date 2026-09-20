// FUN_00244460 @ 00244460

void FUN_00244460(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_d0;
  undefined *local_c8;
  byte local_b9;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if (local_28 == 0) {
    _NSLog(&cf__wcr__edit_image_send_abortreason_nil_logicsource___);
    local_40 = 1;
  }
  else {
    local_48 = 0;
    uVar3 = local_28;
    FUN_00245610();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_48;
    uVar4 = local_28;
    local_50 = uVar3;
    FUN_00245a2c(local_28,&local_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,local_60);
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_69 = 0;
    bVar1 = local_50 != 0;
    if (bVar1) {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
    }
    local_79 = 0;
    bVar2 = local_58 != 0;
    local_69 = bVar1;
    if (bVar2) {
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar3;
    }
    local_89 = 0;
    local_99 = 0;
    uVar3 = local_28;
    local_79 = bVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentViewController_026a0d90);
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentViewController_026a0d90);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = uVar4;
    }
    local_a9 = 0;
    local_b9 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_forwardBasedViewController_026a0d98);
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_forwardBasedViewController_026a0d98);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = uVar5;
    }
    _NSLog(&
           cf__wcr__edit_image_send_sendpreparedsource___session___wrap___contact___currentVC___basedVC___
          );
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (local_58 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      _NSLog(&cf__wcr__edit_image_send_abortreason_no_current_contactsession___);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRJ_Y);
      local_40 = 1;
    }
    else {
      local_c8 = PTR_s_editImageActionSheetClickedButto_026a0d60;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,
                 PTR_s_editImageActionSheetClickedButto_026a0d60);
      if ((uVar3 & 1) == 0) {
        _NSLog(&cf__wcr__edit_image_send_abortreason_missing_edit_action_selectorsource___);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRHr_gfN_ecS);
        local_40 = 1;
      }
      else {
        _objc_setAssociatedObject(local_28,&DAT_028c9371,local_58,1);
        uVar3 = local_28;
        _objc_setAssociatedObject(local_28,&DAT_028c9372,local_48,3);
        FUN_00244ef4();
        _objc_retainAutoreleasedReturnValue();
        local_d0 = uVar3;
        _NSLog(&
               cf__wcr__edit_image_send_officialedit_forwardbranchrequestedsource___session___title___
              );
        (*(code *)PTR__objc_msgSend_02578628)(local_28,local_c8,local_d0);
        _NSLog(&cf__wcr__edit_image_send_officialedit_forwardbranchreturnedsource___);
        _objc_storeStrong(&local_d0,0);
        local_40 = 0;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

