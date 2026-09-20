// FUN_0162b46c @ 0162b46c

byte FUN_0162b46c(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_90;
  ulong local_70;
  ulong local_50;
  ulong local_48;
  byte local_39;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  FUN_0162be00();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_30 = param_1;
    if (param_1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_30,local_20);
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_visibleViewController_0269d460);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar3;
        if (uVar3 == 0) {
          local_70 = local_20;
        }
        _objc_storeStrong(&local_20,local_70);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    local_39 = 0;
    bVar1 = false;
    if (local_30 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 1 < uVar3;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PopViewControllerAnimated__026a4db8);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_popViewControllerAnimated__0269ede0,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_11 = 1;
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_PopViewControllerAnimated__026a4db8,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_target_026a0dc8);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        local_90 = 0;
        if (uVar3 != 0) {
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_action_026a4358);
          local_90 = 0;
          if (uVar4 != 0) {
            local_50 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_target_026a0dc8);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            uVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_action_026a4358);
            uVar5 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,uVar4)
            ;
            local_90 = (uint)uVar5;
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_11 = (local_90 & 1) != 0;
        if ((bool)local_11) {
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_target_026a0dc8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_action_026a4358);
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_performSelector_withObject__026ca7c0,uVar4,local_48);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_24 = 1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
        local_11 = 1;
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

