// FUN_01130208 @ 01130208

void FUN_01130208(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_DismissMyselfAnimated_;
  _NSSelectorFromString();
  uVar2 = local_18;
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_presentingViewController_026a0db0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 == 0) {
        if (local_30 != 0) {
          pcVar1 = &cf_PopViewControllerAnimated_;
          _NSSelectorFromString();
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar1);
          if ((uVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_popViewControllerAnimated__0269ede0,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar1,1);
          }
        }
        local_24 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
        local_24 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,local_20,1);
    local_24 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

