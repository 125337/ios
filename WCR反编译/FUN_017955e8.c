// FUN_017955e8 @ 017955e8

void FUN_017955e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_017959c4;
  }
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 == 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = lVar2;
    if ((lVar2 == 0) || (lVar2 == local_20)) {
LAB_01795780:
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tabBarController_026a1c08);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar2;
      if ((lVar2 == 0) || (lVar2 == local_20)) {
LAB_0179585c:
        lVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        local_58 = lVar2;
        if ((lVar2 == 0) || (lVar2 == local_20)) {
LAB_01795944:
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_presentingViewController_026a0db0);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_30;
          local_30 = lVar2;
          (*(code *)PTR__objc_release_02578630)(lVar1);
          local_18 = local_30;
          if (local_30 == 0) goto LAB_01795944;
          (*(code *)PTR__objc_retain_02578638)();
        }
        local_24 = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_presentingViewController_026a0db0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_30;
        local_30 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        lVar2 = local_30;
        if (local_30 == 0) goto LAB_0179585c;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar2;
        local_24 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar2 = local_30;
      if (local_30 == 0) goto LAB_01795780;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar2;
      local_24 = 1;
    }
    _objc_storeStrong(local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_30,0);
LAB_017959c4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

