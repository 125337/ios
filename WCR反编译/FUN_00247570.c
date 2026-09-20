// FUN_00247570 @ 00247570

void FUN_00247570(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentViewController_026a0d90);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  if (uVar1 == 0) {
    local_38 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_forwardBasedViewController_026a0d98);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,
             PTR_s_checkNonActionsheetOptionsAfterP_026a0da8);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_checkNonActionsheetOptionsAfterP_026a0da8);
    FUN_002478d4(local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

