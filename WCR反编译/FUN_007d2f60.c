// FUN_007d2f60 @ 007d2f60

void FUN_007d2f60(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_13c;
  ulong local_100;
  ulong local_e0;
  ulong local_b8;
  ulong local_80;
  ulong local_78;
  bool local_69;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  bool local_51;
  ulong local_50;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_51 = false;
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_30;
    FUN_007cdd54();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b8;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_b8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar2 = local_38;
  FUN_007cdf10();
  uVar3 = local_38;
  if ((uVar2 & 1) == 0) {
    local_69 = false;
    bVar1 = local_30 == 0;
    if (bVar1) {
      local_e0 = 0;
    }
    else {
      local_e0 = local_30;
      FUN_007cbb3c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_e0;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar3;
    if (uVar3 == 0) {
      local_80 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_80;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_100;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar2 = local_78;
    FUN_007cdf10();
    uVar3 = local_78;
    if ((uVar2 & 1) == 0) {
      uVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_13c = 0;
      if (uVar2 != 0) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_007cdf10();
        local_13c = (uint)uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      (*(code *)PTR__objc_release_02578630)();
      if ((local_13c & 1) == 0) {
        FUN_007d3860();
        _objc_retainAutoreleasedReturnValue();
        local_28 = uVar3;
      }
      else {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_28 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
    }
    local_58 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar3;
    local_58 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

