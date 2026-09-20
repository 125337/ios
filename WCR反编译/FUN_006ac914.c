// FUN_006ac914 @ 006ac914

void FUN_006ac914(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  if (uVar2 == 0) {
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_indexOfObject__0269e870,local_18);
    uVar1 = local_20;
    if (uVar2 == 0x7fffffffffffffff) {
      local_24 = 1;
    }
    else if (uVar2 == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
      if (1 < uVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_popToRootViewControllerAnimated__026a6720,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      local_24 = 0;
    }
    else {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2 - 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_popToViewController_animated__0269e4f8,uVar3,0);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

