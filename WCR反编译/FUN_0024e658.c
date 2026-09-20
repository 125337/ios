// FUN_0024e658 @ 0024e658

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0024e658(undefined8 param_1,double param_2,double param_3,double param_4,ulong param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double local_7e0;
  double local_788;
  double local_698;
  double local_670;
  double local_668;
  double local_658;
  undefined **local_600;
  undefined *local_5f0;
  undefined *local_578;
  undefined *local_570;
  uint local_4e4;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  undefined *local_318;
  double local_310;
  undefined8 local_308;
  double local_300;
  double local_2f8;
  undefined8 local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined8 local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  undefined *local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  byte local_1a1;
  ulong local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  double local_148;
  double local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  ulong local_120;
  byte local_111;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_e4;
  ulong local_e0 [4];
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_b8 = param_6;
  local_b0 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) != 0) {
    local_c0 = 0;
    uVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewModel_0269d080);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c0;
    local_c0 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c0;
    FUN_00258a44();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x24f74a);
      _objc_retainAutoreleasedReturnValue();
      local_e0[0] = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setHidden__026ca970,1);
      }
      FUN_00259c64(local_b0,0);
      local_e4 = 1;
      _objc_storeStrong(local_e0,0);
    }
    else {
      uVar2 = local_b0;
      FUN_0025a96c();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar2;
      FUN_0025ac90();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_b0;
      local_f8 = uVar2;
      _objc_getAssociatedObject(local_b0,DAT_026dfbb8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_b0;
      local_100 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x24f74a);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 0;
      local_4e4 = 0;
      local_108 = uVar2;
      if (local_100 != 0) {
        uVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isEqualToString__0269ccc8,local_f8);
        local_4e4 = 0;
        if (((uVar2 & 1) != 0) && (local_4e4 = 0, local_108 != 0)) {
          uVar2 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_111 = 1;
          local_110 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_4e4 = 0;
          if (uVar2 != 0) {
            uVar2 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_isHidden_026ca768);
            local_4e4 = (uint)uVar2 ^ 1;
          }
        }
      }
      if ((local_111 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_110);
      }
      if ((local_4e4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_WCRefine_ensureGroupChipBar_026a0e78);
        uVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewWithTag__026cabe0,0x24f74a);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar2;
        if (uVar2 == 0) {
          local_e4 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR_s_FG_1_026a1018;
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
          _objc_retainAutoreleasedReturnValue();
          FUN_0025a790();
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar1 = PTR_s_Link_100_026a1028;
          FUN_0025a790(PTR_s_Link_100_026a1028,0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar1;
          if (puVar1 == (undefined *)0x0) {
            param_4 = 1.0;
            puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
            param_2 = DAT_02323d98;
            param_3 = DAT_02323d90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_130;
            local_130 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar1);
          }
          puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_selectedFilterGroupId_026a0fe8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = 0.0;
          local_148 = 30.0;
          local_138 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setDelaysContentTouches__026ca908,0)
          ;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_setCanCancelContentTouches__026ca8b0,1);
          _memset(auStack_190,0,0x40);
          puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_filterChipOptions_026a1030);
          _objc_retainAutoreleasedReturnValue();
          local_570 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_570 != (undefined *)0x0) {
            lVar5 = *local_180;
            local_578 = (undefined *)0x0;
            do {
              do {
                if (*local_180 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_180 - lVar5,puVar1);
                }
                uVar6 = *(ulong *)(local_188 + (long)local_578 * 8);
                local_150 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar6,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupIdKey);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = local_150;
                local_198 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectForKeyedSubscript__0269d098,
                           _WCREmoticonGroupNameKey);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = local_198;
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_1a0 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
                uVar2 = local_1a0;
                if ((uVar6 & 1) == 0) {
LAB_0024ef98:
                  local_e4 = 6;
                }
                else {
                  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if ((uVar2 & 1) == 0) goto LAB_0024ef98;
                  uVar2 = local_198;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_isEqualToString__0269ccc8,local_138);
                  local_1a1 = (byte)uVar2;
                  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineEmoticonGroupStore_026ce420,
                             PTR_s_chipTitleForName_groupId_amongWr_026a1038,local_1a0,local_198,
                             local_f0);
                  _objc_retainAutoreleasedReturnValue();
                  local_5f0 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                  local_1b0 = puVar3;
                  _objc_alloc_init();
                  local_1b8 = local_5f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_5f0,PTR_s_setText__026caa88,local_1b0)
                  ;
                  local_1c1 = 0;
                  local_1d1 = 0;
                  if ((local_1a1 & 1) == 0) {
                    dVar10 = 13.0;
                    FUN_0025b488();
                    _objc_retainAutoreleasedReturnValue();
                    local_1d1 = 1;
                    local_1d0 = local_5f0;
                  }
                  else {
                    dVar10 = 13.0;
                    FUN_0025b3f0();
                    _objc_retainAutoreleasedReturnValue();
                    local_1c1 = 1;
                    local_1c0 = local_5f0;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setFont__026ca958,local_5f0)
                  ;
                  if ((local_1d1 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_1d0);
                  }
                  if ((local_1c1 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_1c0);
                  }
                  if ((local_1a1 & 1) == 0) {
                    local_600 = &local_128;
                  }
                  else {
                    local_600 = &local_130;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_setTextColor__026caa98,*local_600);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_setTextAlignment__026caa90,1);
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_sizeToFit_0269ec08);
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_bounds_026ca548);
                  local_200 = dVar10;
                  local_1f8 = param_2;
                  local_1f0 = param_3;
                  local_1e8 = param_4;
                  _CGRectGetWidth();
                  local_1e0 = dVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_bounds_026ca548);
                  local_228 = dVar10;
                  local_220 = param_2;
                  local_218 = param_3;
                  local_210 = param_4;
                  _CGRectGetHeight(dVar10,param_2,param_3,param_4);
                  local_238 = local_1e0 + 12.0;
                  local_240 = 0x4042000000000000;
                  local_658 = local_238;
                  if (local_238 < 36.0) {
                    local_658 = 36.0;
                  }
                  local_248 = local_658;
                  local_230 = local_658;
                  local_250 = 2.0;
                  local_258 = 1.0;
                  if ((local_1a1 & 1) == 0) {
                    local_668 = 0.0;
                  }
                  else {
                    local_668 = 3.0;
                  }
                  local_260 = dVar10 + local_668;
                  local_270 = 0;
                  local_278 = (local_148 - local_260) * 0.5;
                  local_670 = local_278;
                  if (local_278 <= 0.0) {
                    local_670 = 0.0;
                  }
                  local_280 = local_670;
                  local_268 = local_670;
                  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                  local_208 = dVar10;
                  _objc_alloc();
                  uVar7 = 0;
                  dVar10 = local_140;
                  dVar8 = local_230;
                  dVar12 = local_148;
                  FUN_00255258();
                  local_2a8 = dVar10;
                  local_2a0 = uVar7;
                  local_298 = dVar8;
                  local_290 = dVar12;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar10,uVar7,dVar8,dVar12,puVar3,PTR_s_initWithFrame__026ca6e8);
                  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
                  local_288 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_setBackgroundColor__026ca888);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_setUserInteractionEnabled__026caad8,1);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_setAccessibilityIdentifier__0269ebc0,local_198);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_setAccessibilityLabel__0269e968,local_1a0);
                  uVar7 = 0;
                  dVar10 = local_268;
                  param_3 = local_230;
                  param_4 = local_208;
                  FUN_00255258();
                  local_2f0 = uVar7;
                  dStack_2e8 = dVar10;
                  local_2e0 = param_3;
                  dStack_2d8 = param_4;
                  local_2c8 = uVar7;
                  dStack_2c0 = dVar10;
                  local_2b8 = param_3;
                  dStack_2b0 = param_4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,dVar10,local_1b8,PTR_s_setFrame__026ca960);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_setUserInteractionEnabled__026caad8,0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_addSubview__026ca4c0,local_1b8);
                  if ((local_1a1 & 1) != 0) {
                    local_300 = local_1e0 * 0.7;
                    local_308 = 0x4028000000000000;
                    local_698 = local_300;
                    if (local_300 < 12.0) {
                      local_698 = 12.0;
                    }
                    local_310 = local_698;
                    local_2f8 = local_698;
                    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
                    _objc_alloc();
                    dVar10 = (local_230 - local_2f8) * 0.5;
                    dVar8 = local_268 + local_208 + local_258;
                    param_3 = local_2f8;
                    param_4 = local_250;
                    FUN_00255258();
                    local_338 = dVar10;
                    local_330 = dVar8;
                    local_328 = param_3;
                    local_320 = param_4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (dVar10,dVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
                    local_318 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_setTag__026caa80,DAT_02323ea8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_318,PTR_s_setBackgroundColor__026ca888,local_130);
                    puVar3 = local_318;
                    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_layer_026ca788);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_318,PTR_s_setUserInteractionEnabled__026caad8,0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_288,PTR_s_addSubview__026ca4c0,local_318);
                    _objc_storeStrong(&local_318,0);
                  }
                  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_initWithTarget_action__026ca718,local_b0,
                             PTR_s_WCRefine_onGroupChipTap__026a0e88);
                  uVar2 = local_198;
                  local_340 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupAllId);
                  if ((uVar2 & 1) == 0) {
                    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
                    _objc_alloc();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_initWithTarget_action__026ca718,local_b0,
                               PTR_s_WCRefine_onGroupChipLongPress__026a0e98);
                    local_348 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (0x3fd6666666666666,puVar3,PTR_s_setMinimumPressDuration__026ca9c8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_348,PTR_s_setCancelsTouchesInView__026ca8b8,1);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_340,PTR_s_requireGestureRecognizerToFail__026ca810,local_348);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_288,PTR_s_addGestureRecognizer__026ca4a8,local_348);
                    _objc_storeStrong(&local_348,0);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_288,PTR_s_addGestureRecognizer__026ca4a8,local_340);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_addSubview__026ca4c0,local_288);
                  param_2 = local_230 + 4.0;
                  local_140 = local_140 + param_2;
                  _objc_storeStrong(&local_340);
                  _objc_storeStrong(&local_288,0);
                  _objc_storeStrong(&local_1b8,0);
                  _objc_storeStrong(&local_1b0,0);
                  local_e4 = 0;
                }
                _objc_storeStrong(&local_1a0);
                _objc_storeStrong(&local_198,0);
                local_578 = local_578 + 1;
              } while (local_578 < local_570);
              local_570 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,
                         auStack_a8,0x10);
              local_578 = (undefined *)0x0;
            } while (local_570 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_setAssociatedObject(local_b0,DAT_026dfbb8,local_f8,3);
          puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
          _objc_retainAutoreleasedReturnValue();
          local_350 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle_forState__026caab8,&cf_e_,0);
          FUN_0025b488(0x402a000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_350;
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_titleLabel_026caba0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_350,PTR_s_setTitleColor_forState__026caac0,local_130,0);
          puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar11 = 0;
          uVar7 = 0;
          uVar13 = 0x4018000000000000;
          uVar9 = 0x4018000000000000;
          FUN_0025b54c();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,local_350,PTR_s_setContentEdgeInsets__0269ebd0);
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_sizeToFit_0269ec08);
          dVar10 = local_140;
          local_788 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_bounds_026ca548);
          _CGRectGetWidth(local_788,uVar9,uVar11,uVar13);
          if (local_788 < 36.0) {
            local_788 = 36.0;
          }
          uVar7 = 0;
          dVar12 = local_148;
          FUN_00255258();
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_350,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_b0,
                     PTR_s_WCRefine_onCreateGroupChip_026a0e90,0x40);
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addSubview__026ca4c0,local_350);
          (*(code *)PTR__objc_msgSend_02578628)(local_350,PTR_s_frame_026ca640);
          _CGRectGetWidth(dVar10,uVar7);
          dVar10 = dVar10 + 4.0;
          local_7e0 = local_140 + dVar10;
          dVar8 = local_7e0;
          local_140 = local_7e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar8,dVar10,local_788,dVar12);
          if (local_7e0 < dVar8) {
            local_7e0 = dVar8;
          }
          dVar10 = local_148;
          FUN_0025b598();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_7e0,dVar10,local_120,PTR_s_setContentSize__026ca8e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsLayout_0269deb8);
          _objc_storeStrong(&local_350);
          _objc_storeStrong(&local_138,0);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          local_e4 = 0;
        }
        _objc_storeStrong(&local_120,0);
      }
      else {
        local_e4 = 1;
      }
      _objc_storeStrong(&local_108);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

