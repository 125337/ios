// FUN_005d6490 @ 005d6490

byte FUN_005d6490(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_50;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar5 = local_20;
  puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar6 = local_20;
  if ((uVar5 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar6;
    bVar2 = false;
    bVar1 = false;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    if (uVar6 == 0) {
      local_40 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar3 = true;
      if (local_40 == 0) {
        local_50 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar3 = local_50 != 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    if (bVar3) {
      local_11 = 1;
    }
    else {
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isViewLoaded_0269cde0);
      local_11 = 0;
      if ((uVar5 & 1) != 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_11 = uVar6 != 0;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

