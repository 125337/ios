// FUN_002d5790 @ 002d5790

byte FUN_002d5790(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b0;
  ulong local_88;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  FUN_002d5b2c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    local_30 = param_1;
    if (param_1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_51 = 0;
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((param_1 & 1) == 0) {
        local_88 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = local_88;
      }
      else {
        local_88 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = local_88;
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      uVar2 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = uVar2;
      if (uVar2 == 0) {
        local_b0 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      while (local_60 != 0) {
        uVar2 = local_60;
        FUN_002d5dd0(local_60,&cf_WCTimeLineViewController);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          goto LAB_002d5aa4;
        }
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60;
        local_60 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_11 = 0;
LAB_002d5aa4:
      local_24 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

