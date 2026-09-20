// FUN_007aad08 @ 007aad08

void FUN_007aad08(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_007ab5f4();
  if ((param_1 & 1) == 0) {
    (*DAT_028ccbb0)(local_18,local_20,local_21 & 1);
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (uVar2 == uVar3) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_popViewControllerAnimated__0269ede0,0);
      _objc_unsafeClaimAutoreleasedReturnValue(uVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,0,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

