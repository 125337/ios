// FUN_001ad210 @ 001ad210

byte FUN_001ad210(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_60;
  ulong local_50;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar6 = local_20;
  puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar6 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar6 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isViewLoaded_0269cde0);
    if ((uVar6 & 1) == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (uVar7 == 0) {
        uVar6 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = false;
        bVar2 = false;
        bVar1 = false;
        puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_38 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        bVar4 = false;
        if ((uVar6 & 1) != 0) {
          local_40 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          bVar4 = false;
          if (local_40 == local_20) {
            local_50 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_60 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            bVar4 = local_60 != 0;
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_60);
        }
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        if (bVar3) {
          (*(code *)PTR__objc_release_02578630)(local_40);
        }
        local_30 = 1;
        local_11 = bVar4;
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

