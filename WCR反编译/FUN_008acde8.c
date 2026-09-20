// FUN_008acde8 @ 008acde8

void FUN_008acde8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_60;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewController_026a5588);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    if (uVar1 == 0) {
      local_60 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_60;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (1 < uVar3) {
          uVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        local_2c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
        local_2c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

