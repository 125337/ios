// FUN_0158c8b0 @ 0158c8b0

void FUN_0158c8b0(long param_1)

{
  long lVar1;
  long lVar2;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (lVar2 == lVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_popViewControllerAnimated__0269ede0,1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

