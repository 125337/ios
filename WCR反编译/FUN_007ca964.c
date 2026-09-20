// FUN_007ca964 @ 007ca964

byte FUN_007ca964(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_98;
  ulong local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  FUN_007cbb3c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_98 = uVar2;
    if (uVar2 == 0) {
      local_98 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = uVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_69 = 0;
    bVar1 = true;
    if (local_50 != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar2 == 0;
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    uVar2 = local_50;
    if (bVar1) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (uVar2 == uVar4) {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_NewMainFrameViewController);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_containsString__0269d0b0,&cf_ContactsViewController);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_78,PTR_s_containsString__0269d0b0,&cf_FindFriend);
            if (((uVar2 & 1) == 0) &&
               (uVar2 = local_78,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_78,PTR_s_containsString__0269d0b0,&cf_Discover), (uVar2 & 1) == 0))
            {
              local_21 = 0;
            }
            else {
              local_21 = 1;
            }
          }
          else {
            local_21 = 1;
          }
        }
        else {
          local_21 = 1;
        }
        local_48 = 1;
        _objc_storeStrong(&local_78,0);
      }
      else {
        local_21 = 0;
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

