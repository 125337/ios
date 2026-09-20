// FUN_002ce0bc @ 002ce0bc

byte FUN_002ce0bc(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_130;
  ulong local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  int local_50;
  byte local_49;
  ulong local_48;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_49 = 0;
  bVar1 = true;
  if (local_30 != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    bVar1 = true;
    local_48 = uVar2;
    if (uVar2 != 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768);
      bVar1 = true;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8);
        bVar1 = param_1 <= DAT_02323d38;
      }
    }
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    local_21 = 0;
    local_50 = 1;
    goto LAB_002ce89c;
  }
  uVar2 = local_30;
  FUN_0029cc70();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar2;
  if (uVar2 == 0) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_selectedIndex_0269e580);
    if (uVar2 < 4) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      if (uVar2 == 0) {
        local_21 = 1;
        local_50 = 1;
      }
      else {
        local_68 = 0;
        puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) == 0) {
          uVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar2 != 0) {
            uVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_68;
            local_68 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
        }
        else {
          _objc_storeStrong(&local_68,local_60);
        }
        if (local_68 == 0) {
LAB_002ce774:
          uVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar2;
          if ((uVar2 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isBeingDismissed_0269f460),
             (uVar2 & 1) != 0)) {
            local_21 = 1;
          }
          else {
            local_21 = 0;
          }
          local_50 = 1;
          _objc_storeStrong(&local_90,0);
        }
        else {
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_70 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_visibleViewController_0269d460);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 0;
          local_130 = uVar2;
          if (uVar2 == 0) {
            local_130 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_topViewController_0269e588);
            _objc_retainAutoreleasedReturnValue();
            local_80 = local_130;
          }
          local_81 = uVar2 == 0;
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = local_130;
          if ((local_81 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_80);
          }
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (((local_70 == 0) || (local_78 == 0)) || (local_78 == local_70)) {
            uVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_viewControllers_0269e348);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar2);
            lVar5 = uVar4 - 1;
            if (uVar4 == 0 || lVar5 == 0) {
              local_50 = 0;
            }
            else {
              lVar5 = 1;
              local_21 = 0;
              local_50 = 1;
            }
          }
          else {
            lVar5 = 1;
            local_21 = 0;
            local_50 = 1;
          }
          _objc_storeStrong(lVar5,&local_78);
          _objc_storeStrong(&local_70,0);
          if (local_50 == 0) goto LAB_002ce774;
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 0;
      local_50 = 1;
    }
  }
  _objc_storeStrong(&local_58,0);
LAB_002ce89c:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

