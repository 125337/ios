// ensureTabBarVisible @0x385dc

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::ensureTabBarVisible(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 local_f8;
  long local_e0;
  undefined1 local_d1;
  long local_d0;
  byte local_c1;
  long local_c0;
  undefined4 local_b8;
  byte local_b1;
  long local_b0;
  byte local_a1;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  byte local_81;
  long local_80;
  byte local_71;
  long local_70;
  long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_58 = param_2;
  local_50 = param_1;
  _objc_msgSend_host(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_navigationController(uVar4,local_f8);
  local_60 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_host(local_50,local_f8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_tabBarController(uVar4,local_f8);
  local_68 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_71 = 0;
  local_81 = 0;
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  bVar1 = true;
  if (local_68 != 0) {
    _objc_msgSend_topViewController(local_60,local_f8);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = lVar5;
    _objc_msgSend_host(local_50,local_f8);
    local_80 = _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    bVar1 = true;
    if (lVar5 == local_80) {
      _objc_msgSend_view(local_50,local_f8);
      local_90 = _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      uVar6 = _objc_msgSend_isHidden(local_90,local_f8);
      bVar1 = true;
      if ((uVar6 & 1) == 0) {
        _objc_msgSend_view(local_50,local_f8);
        local_a0 = _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        _objc_msgSend_window(local_a0,local_f8);
        local_b0 = _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        bVar1 = local_b0 == 0;
      }
    }
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_70);
  }
  if (bVar1) {
    local_b8 = 1;
  }
  else {
    _objc_msgSend_selectedViewController(local_68,local_f8);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    local_c1 = 0;
    local_d1 = 0;
    uVar2 = lVar5 != local_60;
    bVar1 = false;
    if ((bool)uVar2) {
      _objc_msgSend_selectedViewController(local_68,local_f8);
      lVar7 = _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = lVar7;
      _objc_msgSend_host(local_50,local_f8);
      local_d0 = _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar7 != local_d0;
      local_d1 = uVar2;
      (*(code *)PTR__objc_release_00110458)(local_d0);
      uVar2 = local_d1;
    }
    local_d1 = uVar2;
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_c0);
    }
    (*(code *)PTR__objc_release_00110458)(lVar5);
    if (bVar1) {
      local_b8 = 1;
    }
    else {
      _objc_msgSend_tabBar(local_68,local_f8);
      local_e0 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend_isHidden(local_e0,local_f8);
      if (((uVar6 & 1) != 0) ||
         (dVar10 = (double)_objc_msgSend_alpha(local_e0,local_f8), dVar10 < 0.99)) {
        local_48 = &cf_hidden;
        uVar4 = _objc_msgSend_isHidden(local_e0,local_f8);
        _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_f8,uVar4);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        local_40 = &cf_alpha;
        local_38 = uVar4;
        _objc_msgSend_alpha(local_e0,local_f8);
        _objc_msgSend_numberWithDouble_(&_OBJC_CLASS___NSNumber,local_f8);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        local_30 = uVar8;
        _objc_msgSend_dictionaryWithObjects_forKeys_count_
                  (&_OBJC_CLASS___NSDictionary,local_f8,&local_38,&local_48,2);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _Trace(&cf_chrome_tab_recovered);
        (*(code *)PTR__objc_release_00110458)(uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
      _objc_msgSend_host(local_50,local_f8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar3 = _objc_msgSend_hidesBottomBarWhenPushed(uVar4,local_f8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if ((uVar3 & 1) != 0) {
        _objc_msgSend_host(local_50,local_f8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setHidesBottomBarWhenPushed_(uVar4,local_f8,0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
      uVar6 = _objc_msgSend_isHidden(local_e0,local_f8);
      if ((uVar6 & 1) != 0) {
        _objc_msgSend_setHidden_(local_e0,local_f8,0);
      }
      dVar10 = (double)_objc_msgSend_alpha(local_e0,local_f8);
      if (dVar10 < 0.99) {
        _objc_msgSend_setAlpha_(0x3ff0000000000000,local_e0,local_f8);
      }
      _objc_msgSend_superview(local_e0,local_f8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_subviews(uVar4,local_f8);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_lastObject(uVar8,local_f8);
      lVar7 = _objc_retainAutoreleasedReturnValue();
      lVar5 = local_e0;
      (*(code *)PTR__objc_release_00110458)();
      (*(code *)PTR__objc_release_00110458)(uVar8);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      if (lVar7 - lVar5 != 0) {
        _objc_msgSend_superview(lVar7 - lVar5,local_e0,local_f8);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_bringSubviewToFront_(uVar4,local_f8,local_e0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
      }
      _objc_storeStrong(&local_e0,0);
      local_b8 = 0;
    }
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

