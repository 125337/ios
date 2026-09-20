// FUN_00527e18 @ 00527e18

byte FUN_00527e18(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_d4;
  ulong local_98;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  FUN_00528c30();
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    local_51 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isViewLoaded_0269cde0);
    if ((uVar2 & 1) == 0) {
      local_98 = 0;
    }
    else {
      local_98 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d4 = 0;
      if (uVar3 != 0) {
        uVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d4 = (uint)uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_d4 & 1) == 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (uVar4 == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          if (uVar2 == 0) {
            uVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar3 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (bVar1) {
            local_21 = 1;
          }
          else {
            local_21 = 0;
          }
        }
        else {
          local_21 = 1;
        }
      }
      else {
        local_21 = 1;
      }
      local_40 = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

