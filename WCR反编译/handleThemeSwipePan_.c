// handleThemeSwipePan: @ 01fc0824

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::handleThemeSwipePan_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  double in_d0;
  double dVar7;
  undefined8 in_d1;
  double local_198;
  double local_190;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ID local_120;
  ID local_118;
  double local_110;
  bool local_101;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  undefined1 local_89;
  ID local_88;
  undefined4 local_7c;
  undefined8 local_78;
  ID local_70;
  ID local_68;
  double local_60;
  double local_50;
  undefined8 local_48;
  ID local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_40);
  local_50 = in_d0;
  local_48 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_40);
  lVar6 = local_38;
  local_60 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar6 == 1) {
    local_68 = 0;
    local_78 = 0;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,local_48,local_28,PTR_s_themeNameAtPoint_cell__026ca0c8,&local_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_68,local_78);
    local_70 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if ((IVar4 == 0) || (local_68 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0xbff0000000000000,local_28,PTR_s_setThemeSwipeDragOffset__026ca0b0);
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenCell_026ca040);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 0;
      bVar3 = false;
      uVar1 = IVar4 != 0;
      if ((bool)uVar1) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenCell_026ca040);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = IVar5 != local_68;
        local_89 = uVar1;
        local_88 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        uVar1 = local_89;
      }
      local_89 = uVar1;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if (bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1);
      }
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenCell_026ca040);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_68;
      (*(code *)PTR__objc_release_02578630)();
      if (IVar5 != IVar4) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_removeThemeSwipeOverlayFromCell__026ca0d0,local_68);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_ensureThemeSwipeOverlayOnCell_na_026ca0d8,local_68,local_70);
        _objc_unsafeClaimAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSwipeOpenCell__026ca0a0,local_68);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setSwipeOpenThemeName__026ca0a8,local_70);
        (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setThemeSwipeDragOffset__026ca0b0);
      }
    }
    local_7c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeSwipeDragOffset_026ca0e0);
    if (in_d0 < 0.0) {
      local_7c = 1;
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenCell_026ca040);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      local_98 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_swipeOpenThemeName_026ca090);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      local_a0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_themeSwipeOverlayOnCell__026ca080,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_themeSwipeMenuWidthForName__026ca098,local_a0);
      if (((local_98 == 0) || (local_a8 == 0)) || (in_d0 < 1.0)) {
        local_7c = 1;
      }
      else {
        lVar6 = local_38;
        local_b0 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if (lVar6 == 2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeSwipeDragOffset_026ca0e0);
          local_b8 = in_d0 - local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,local_b0,local_28,PTR_s_setThemeSwipeOverlay_offset_menu_026ca0b8,
                     local_a8);
          local_7c = 1;
        }
        else {
          lVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
          if ((lVar6 == 3) ||
             (lVar6 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20)
             , lVar6 == 4)) {
            local_c8 = 0.0;
            local_d8 = local_b0;
            dVar7 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_themeSwipeDragOffset_026ca0e0);
            local_e0 = dVar7 - local_60;
            local_190 = local_e0;
            if (local_d8 < local_e0) {
              local_190 = local_d8;
            }
            local_e8 = local_190;
            local_d0 = local_190;
            if (local_190 <= local_c8) {
              local_198 = local_c8;
            }
            else {
              local_198 = local_190;
            }
            local_f0 = local_198;
            local_c0 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_velocityInView__026cabd0,local_40);
            bVar3 = local_b0 * 0.35 < local_c0;
            local_101 = local_198 <= 500.0 && (bVar3 || local_198 < -500.0);
            local_100 = local_198;
            local_f8 = local_190;
            if (local_198 <= 500.0 && (bVar3 || local_198 < -500.0)) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,local_28,PTR_s_setThemeSwipeDragOffset__026ca0b0);
              IVar5 = local_28;
              puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
              local_140 = PTR___NSConcreteStackBlock_02578660;
              local_138 = 0xc2000000;
              local_134 = 0;
              local_130 = FUN_01fc1088;
              local_128 = &DAT_0257a740;
              (*(code *)PTR__objc_retain_02578638)();
              IVar4 = local_a8;
              local_120 = IVar5;
              (*(code *)PTR__objc_retain_02578638)();
              local_118 = IVar4;
              local_110 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_02323da8,puVar2,PTR_s_animateWithDuration_animations__026ca4e0,
                         &local_140);
              _objc_storeStrong(&local_118);
              _objc_storeStrong(&local_120,0);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_closeThemeSwipeOverlayAnimated__026c9f78,1);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)PTR__CGPointZero_025782e0,
                       *(undefined8 *)(PTR__CGPointZero_025782e0 + 8),local_38,
                       PTR_s_setTranslation_inView__026a9fe8,local_40);
          }
          local_7c = 0;
        }
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

