// FUN_0162b9d4 @ 0162b9d4

byte FUN_0162b9d4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_58;
  ulong local_50;
  byte local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  FUN_016321b4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_0162be00();
    _objc_retainAutoreleasedReturnValue();
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 0;
    bVar1 = false;
    local_38 = param_1;
    if (param_1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 1 < param_1;
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar1) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PopToRootViewControllerAnimated__026b1a78);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_popToRootViewControllerAnimated__026a6720,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_PopToRootViewControllerAnimated__026b1a78,0);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedIndex__0269e450);
    uVar2 = local_20;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSelectedIndex__0269e450,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSelectedIndex__0269e450,0);
    }
    local_50 = 0;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_selectedViewController_0269d610);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_50;
    puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar3 = local_50;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (1 < uVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_popToRootViewControllerAnimated__026a6720,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_storeStrong(&local_58,0);
    }
    local_11 = 1;
    local_24 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

