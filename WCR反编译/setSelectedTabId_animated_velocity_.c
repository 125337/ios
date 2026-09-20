// setSelectedTabId:animated:velocity: @ 01e5a438

/* Function Stack Size: 0x24 bytes */

void WCRefineTelegramTabStripView::setSelectedTabId_animated_velocity_
               (ID param_1,SEL param_2,ID param_3,bool param_4,double param_5)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  uint local_36c;
  double local_310;
  double local_308;
  double local_300;
  uint local_204;
  cfstringStruct *local_200;
  undefined *local_1d8;
  undefined *local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  undefined *local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  undefined8 local_168;
  undefined4 local_15c;
  double local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ID local_118;
  undefined *local_110;
  ID local_108;
  ID local_100;
  byte local_f8;
  byte local_f2;
  byte local_f1;
  ID local_f0;
  byte local_e1;
  ID local_e0;
  byte local_d3;
  byte local_d2;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ID local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined *local_a0;
  ID local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  ID local_70;
  ID local_68;
  double local_60;
  byte local_51;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_51 = (byte)param_4;
  IVar2 = local_40;
  local_60 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_indicatorView_026c6920);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_presentationLayer_026ca7e0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar2;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
    local_90 = param_5;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_frame_026ca640);
    local_90 = param_5;
  }
  IVar2 = local_40;
  local_88 = in_d1;
  local_80 = in_d2;
  local_78 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  local_98 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_tg_indicator);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setInteractiveTransition__026c69d8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPreviewTabId__026c69e0,0);
  dVar7 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPreviewProgress__026c69e8);
  if (local_50 == (cfstringStruct *)0x0) {
    local_200 = &cf_all;
  }
  else {
    local_200 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setSelectedTabId__026b01c0,local_200);
  puVar4 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_visibleTabs_026a8350);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  local_a8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resolvedHighlightColor_026c6a20);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_40;
  local_b0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resolvedTextColor_026c6a28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_a8;
  local_b8 = IVar3;
  FUN_01e57eb8(local_a8,local_98);
  puVar4 = local_a8;
  IVar2 = local_40;
  local_c0 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  FUN_01e57eb8();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar5 = local_a8;
  local_c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
  puVar4 = local_c0;
  local_d0 = puVar5;
  FUN_01e58024(local_c0,local_c8,puVar5);
  local_d1 = (byte)puVar4;
  puVar4 = local_c0;
  FUN_01e58090(local_c0,local_c8,local_d0);
  local_d2 = (byte)puVar4;
  local_e1 = 0;
  local_f1 = 0;
  local_204 = 0;
  if ((local_51 & 1) != 0) {
    _UIAccessibilityIsReduceMotionEnabled();
    local_204 = 0;
    if (((ulong)puVar4 & 1) == 0) {
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_204 = 0;
      local_e0 = IVar2;
      if (IVar2 != 0) {
        IVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_indicatorView_026c6920);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_204 = 0;
        uVar1 = (uint)IVar2;
        if ((IVar2 & 1) == 0) {
          dVar7 = local_90;
          in_d1 = local_88;
          in_d2 = local_80;
          in_d3 = local_78;
          _CGRectIsEmpty();
          local_204 = uVar1 ^ 1;
        }
      }
    }
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  IVar2 = local_40;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_d3 = (byte)local_204 & 1;
  local_f2 = 0;
  if (((local_204 & 1) != 0) && (local_f2 = 1, (local_d1 & 1) == 0)) {
    local_f2 = local_d2;
  }
  local_f2 = local_f2 & 1;
  local_138 = PTR___NSConcreteGlobalBlock_02578658;
  local_130 = 0xd0800000;
  local_12c = 0;
  local_128 = FUN_01e5b374;
  local_120 = &DAT_0258c8d0;
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = local_a8;
  local_118 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_b0;
  local_110 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_b8;
  local_108 = IVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = IVar2;
  local_f8 = local_f2 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_performWithoutAnimation__0269e7e0,&local_138);
  IVar2 = local_40;
  if ((local_f2 & 1) == 0) {
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wrapGeneration_026c69b8);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setWrapGeneration__026c69c0,IVar3 + 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setWrapAnimating__026c69c8,0);
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_indicatorView_026c6920);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
    uVar1 = (uint)IVar2;
    local_180 = dVar8;
    local_178 = in_d1;
    local_170 = in_d2;
    local_168 = in_d3;
    _CGRectGetMidX(dVar8,in_d1,in_d2,in_d3);
    dVar7 = local_90;
    _CGRectGetMidX(local_90,local_88,local_80,local_78);
    local_188 = dVar8 - dVar7;
    if (((local_d3 & 1) != 0) && ((0.25 < ABS(local_188) || (0.25 < ABS(local_170 - local_80))))) {
      puVar5 = PTR__OBJC_CLASS___CASpringAnimation_026cf678;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CASpringAnimation_026cf678,PTR_s_animationWithKeyPath__026ca510,
                 &cf_position_x);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_190 = puVar5;
      _CGRectGetMidX(local_90,local_88,local_80,local_78);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFromValue__026ca968);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      _CGRectGetMidX(local_180,local_178,local_170,local_168);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setToValue__026caac8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setMass__026c6a40);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4076800000000000,local_190,PTR_s_setStiffness__026c6a48);
      (*(code *)PTR__objc_msgSend_02578628)(0x4041000000000000,local_190,PTR_s_setDamping__026c6a50)
      ;
      if (ABS(local_188) <= 1.0) {
        local_300 = 0.0;
      }
      else {
        local_300 = local_60 / local_188;
      }
      local_198 = local_300;
      local_1a0 = 0x4028000000000000;
      local_1b0 = 0xc028000000000000;
      local_1b8 = local_300;
      if (local_300 <= -12.0) {
        local_308 = -12.0;
      }
      else {
        local_308 = local_300;
      }
      local_1c0 = local_308;
      local_1a8 = local_308;
      if (local_308 <= 12.0) {
        local_310 = local_308;
      }
      else {
        local_310 = 12.0;
      }
      local_1c8 = local_310;
      ppuVar6 = &local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_310,local_190,PTR_s_setInitialVelocity__026c6a58);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_settlingDuration_026c6a60);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setDuration__026ca920);
      puVar4 = PTR__OBJC_CLASS___CASpringAnimation_026cf678;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CASpringAnimation_026cf678,PTR_s_animationWithKeyPath__026ca510,
                 &cf_bounds_size_width);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_1d0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setFromValue__026ca968);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_170,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setToValue__026caac8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_mass_026c6a68);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setMass__026c6a40);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_stiffness_026c6a70);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setStiffness__026c6a48);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_damping_026c6a78);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setDamping__026c6a50);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_duration_0269dd70);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setDuration__026ca920);
      puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_026cf370;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAAnimationGroup_026cf370,PTR_s_animation_026be960);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_190;
      local_30 = local_1d0;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setAnimations__026ca870);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_duration_0269dd70);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setDuration__026ca920);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addAnimation_forKey__026ca498,local_1d8,&cf_wcr_tg_indicator);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_flush_026a0810);
      _objc_storeStrong(&local_1d8);
      _objc_storeStrong(&local_1d0,0);
      _objc_storeStrong(ppuVar6,0);
      uVar1 = (uint)ppuVar6;
    }
    IVar2 = local_40;
    local_36c = 0;
    if ((local_51 & 1) != 0) {
      _UIAccessibilityIsReduceMotionEnabled();
      local_36c = uVar1 ^ 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_scrollSelectedToCenterAnimated__026c6a38,local_36c & 1);
    local_15c = 0;
  }
  else {
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedButton_026c6988);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_indicatorFrameForButton_style__026c6990,IVar3,puVar5);
    local_158 = dVar7;
    local_150 = in_d1;
    local_148 = in_d2;
    local_140 = in_d3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,local_88,local_80,local_78,local_158,local_150,local_148,local_140,local_40,
               PTR_s_wcr_animateWrapFrom_toFrame_forw_026c6a30,local_d1 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scrollSelectedToCenterAnimated__026c6a38,0)
    ;
    local_15c = 1;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

