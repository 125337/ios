// FUN_017ad60c @ 017ad60c

void FUN_017ad60c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_90;
  ulong local_80;
  ulong local_70;
  ulong local_60;
  ulong local_50;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    bVar4 = false;
    local_38 = uVar5;
    if (uVar5 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar4 = false;
      local_50 = uVar5;
      if (1 < uVar6) {
        local_60 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar4 = local_60 == local_28;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar4) {
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar5);
      local_2c = 1;
    }
    else {
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      bVar4 = false;
      if (local_38 != 0) {
        local_70 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        bVar4 = false;
        if (local_70 != 0) {
          local_80 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_90 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar4 = local_90 == local_28;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if (bVar4) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
        local_2c = 1;
      }
      else {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar5 == 0) {
          uVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_parentViewController_0269e500);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if (uVar6 != 0) {
            uVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_parentViewController_0269e500);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          local_2c = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
          local_2c = 1;
        }
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

