// layoutShapeAttrBarContents @ 01670948

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::layoutShapeAttrBarContents(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_d2;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  ID local_5f8;
  undefined *local_5d0;
  undefined *local_5c0;
  double local_580;
  undefined8 local_460;
  ID local_410;
  ID local_408;
  undefined8 local_400;
  double dStack_3f8;
  double local_3f0;
  double dStack_3e8;
  undefined8 local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  ID local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  double local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  double local_380;
  undefined8 uStack_378;
  double local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  double local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  ID local_2f0;
  ID local_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  undefined8 local_2c0;
  double dStack_2b8;
  double local_2b0;
  double dStack_2a8;
  byte local_299;
  ID local_298;
  ID local_290;
  double local_288;
  double local_280;
  byte local_272;
  byte local_271;
  undefined *local_270;
  byte local_261;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  byte local_241;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  ID local_1c8;
  ID local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ID local_120;
  ID local_118;
  double local_110;
  undefined8 uStack_108;
  double dStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  double dStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double local_90;
  double local_88;
  double local_80;
  double local_60;
  double local_58;
  double local_50;
  undefined4 local_44;
  ID local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeAttrBar_026b1df0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  if (param_1 == 0) {
    local_44 = 1;
  }
  else {
    dVar5 = 200.0;
    local_58 = 200.0;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
    local_80 = dVar5;
    _CGRectGetWidth(dVar5,in_d1);
    local_580 = dVar5;
    if (dVar5 <= local_58) {
      local_580 = local_58;
    }
    local_88 = local_580;
    local_50 = local_580;
    local_60 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeAttrBarHeight_026b1e88);
    local_90 = local_580;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    local_b0 = local_580;
    local_a8 = dVar5;
    _CGRectGetHeight(local_580,dVar5);
    local_28 = local_580 - local_90;
    dVar5 = ABS(local_28);
    uVar7 = 0x3fe0000000000000;
    if (0.5 < dVar5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      dStack_b8 = local_90;
      dStack_d8 = local_90;
      dStack_f8 = local_90;
      local_110 = dVar5;
      uStack_108 = uVar7;
      local_f0 = dVar5;
      uStack_e8 = uVar7;
      local_d0 = dVar5;
      uStack_c8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,uVar7,in_d2,local_90,local_40,PTR_s_setFrame__026ca960);
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x199);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_40;
    local_118 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x198);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_118;
    puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_120 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropUsingFullScreenPrefs_026b24e0);
      pcVar1 = &cf_hQO_b_r;
      if ((IVar2 & 1) == 0) {
        pcVar1 = &cf__Sb_r;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setText__026caa88,pcVar1);
    }
    uVar7 = 0x4028000000000000;
    uVar8 = 0x4024000000000000;
    uVar9 = 0x405e000000000000;
    uVar11 = 0x403c000000000000;
    FUN_0163f5dc();
    local_160 = uVar7;
    uStack_158 = uVar8;
    local_150 = uVar9;
    uStack_148 = uVar11;
    local_140 = uVar7;
    uStack_138 = uVar8;
    local_130 = uVar9;
    uStack_128 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar8,uVar9,uVar11,local_118,PTR_s_setFrame__026ca960);
    uVar7 = 0x4024000000000000;
    uVar9 = 0x403c000000000000;
    dVar5 = local_50 - 56.0;
    uVar8 = 0x4048000000000000;
    FUN_0163f5dc();
    local_1a0 = dVar5;
    uStack_198 = uVar7;
    local_190 = uVar8;
    uStack_188 = uVar9;
    local_180 = dVar5;
    uStack_178 = uVar7;
    local_170 = uVar8;
    uStack_168 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar5,uVar7,uVar8,uVar9,local_120,PTR_s_setFrame__026ca960);
    local_1a8 = 44.0;
    local_1b0 = 32.0;
    local_1b8 = ((local_50 - 24.0) - 18.0) / 4.0;
    for (local_1c0 = 0; (long)local_1c0 < 4; local_1c0 = local_1c0 + 1) {
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,local_1c0 + 0x19a);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      local_1c8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((IVar2 & 1) == 0) {
        local_44 = 4;
      }
      else {
        dVar6 = (local_1b8 + 6.0) * (double)(long)local_1c0 + 12.0;
        dVar5 = local_1a8;
        dVar10 = local_1b8;
        dVar12 = local_1b0;
        FUN_0163f5dc();
        local_210 = dVar6;
        dStack_208 = dVar5;
        local_200 = dVar10;
        dStack_1f8 = dVar12;
        local_1e8 = dVar6;
        dStack_1e0 = dVar5;
        local_1d8 = dVar10;
        dStack_1d0 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar6,dVar5,dVar10,dVar12,local_1c8,PTR_s_setFrame__026ca960);
        IVar2 = local_1c0;
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropShapeUI_026b1ea8);
        local_211 = IVar2 == IVar3;
        local_221 = 0;
        local_231 = 0;
        local_241 = 0;
        local_251 = 0;
        local_5c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((bool)local_211) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
          _objc_retainAutoreleasedReturnValue();
          local_221 = 1;
          local_220 = local_5c0;
          (*(code *)PTR__objc_msgSend_02578628)(0x3fd6666666666666);
          _objc_retainAutoreleasedReturnValue();
          local_231 = 1;
          local_230 = local_5c0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
          _objc_retainAutoreleasedReturnValue();
          local_241 = 1;
          local_240 = local_5c0;
          (*(code *)PTR__objc_msgSend_02578628)(DAT_02323c90);
          _objc_retainAutoreleasedReturnValue();
          local_251 = 1;
          local_250 = local_5c0;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c8,PTR_s_setBackgroundColor__026ca888,local_5c0);
        if ((local_251 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_250);
        }
        if ((local_241 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_240);
        }
        if ((local_231 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_230);
        }
        if ((local_221 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_220);
        }
        local_261 = 0;
        local_271 = 0;
        local_5d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((local_211 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,0x3fd0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          local_271 = 1;
          local_270 = local_5d0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
          _objc_retainAutoreleasedReturnValue();
          local_261 = 1;
          local_260 = local_5d0;
        }
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_5d0,PTR_s_CGColor_026ca470);
        IVar2 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if ((local_271 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_270);
        }
        if ((local_261 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_260);
        }
        local_44 = 0;
      }
      _objc_storeStrong(&local_1c8,0);
    }
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropShapeUI_026b1ea8);
    local_272 = IVar2 == 0;
    local_280 = local_1a8 + local_1b0 + 10.0;
    local_288 = 40.0;
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeCornerRow_026b2628);
    _objc_retainAutoreleasedReturnValue();
    local_299 = 0;
    local_5f8 = IVar2;
    if (IVar2 == 0) {
      local_5f8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x1a4);
      _objc_retainAutoreleasedReturnValue();
      local_298 = local_5f8;
    }
    local_299 = IVar2 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_290 = local_5f8;
    if ((local_299 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_298);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_setHidden__026ca970,(local_272 ^ 1) & 1);
    if ((local_272 & 1) != 0) {
      uVar7 = 0;
      dVar5 = local_280;
      dVar10 = local_50;
      dVar12 = local_288;
      FUN_0163f5dc();
      local_2e0 = uVar7;
      dStack_2d8 = dVar5;
      local_2d0 = dVar10;
      dStack_2c8 = dVar12;
      local_2c0 = uVar7;
      dStack_2b8 = dVar5;
      local_2b0 = dVar10;
      dStack_2a8 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,dVar5,dVar10,dVar12,local_290,PTR_s_setFrame__026ca960);
      IVar2 = local_290;
      (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_viewWithTag__026cabe0,0x1a6);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_290;
      local_2e8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_viewWithTag__026cabe0,0x1a7);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x4028000000000000;
      uVar8 = 0x4018000000000000;
      uVar9 = 0x4042000000000000;
      uVar11 = 0x403c000000000000;
      local_2f0 = IVar3;
      FUN_0163f5dc();
      local_330 = uVar7;
      uStack_328 = uVar8;
      local_320 = uVar9;
      uStack_318 = uVar11;
      local_310 = uVar7;
      uStack_308 = uVar8;
      local_300 = uVar9;
      uStack_2f8 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,uVar8,uVar9,uVar11,local_2e8,PTR_s_setFrame__026ca960);
      uVar7 = 0x4018000000000000;
      uVar8 = 0x4042000000000000;
      uVar9 = 0x403c000000000000;
      dVar5 = local_50 - 48.0;
      FUN_0163f5dc();
      local_370 = dVar5;
      uStack_368 = uVar7;
      local_360 = uVar8;
      uStack_358 = uVar9;
      local_350 = dVar5;
      uStack_348 = uVar7;
      local_340 = uVar8;
      uStack_338 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,uVar7,uVar8,uVar9,local_2f0,PTR_s_setFrame__026ca960);
      uVar7 = 0x4048000000000000;
      dVar5 = (local_50 - 48.0) - 48.0;
      uVar8 = 0x4014000000000000;
      uVar9 = 0x403e000000000000;
      FUN_0163f5dc();
      IVar2 = local_30;
      local_390 = uVar7;
      uStack_388 = uVar8;
      local_380 = dVar5;
      uStack_378 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeCornerSlider_026b2630);
      _objc_retainAutoreleasedReturnValue();
      uStack_3a8 = uStack_388;
      local_3b0 = local_390;
      uStack_398 = uStack_378;
      local_3a0 = local_380;
      (*(code *)PTR__objc_msgSend_02578628)(local_390,uStack_388,local_380,uStack_378);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_280 = local_280 + local_288 + 4.0;
      _objc_storeStrong(&local_2f0);
      _objc_storeStrong(&local_2e8,0);
    }
    IVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_viewWithTag__026cabe0,0x1a5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0;
    dVar5 = local_280;
    dVar10 = local_50;
    dVar12 = local_288;
    local_3b8 = IVar2;
    FUN_0163f5dc();
    local_400 = uVar7;
    dStack_3f8 = dVar5;
    local_3f0 = dVar10;
    dStack_3e8 = dVar12;
    local_3d8 = uVar7;
    dStack_3d0 = dVar5;
    local_3c8 = dVar10;
    dStack_3c0 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,dVar5,dVar10,dVar12,local_3b8,PTR_s_setFrame__026ca960);
    IVar2 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_viewWithTag__026cabe0,0x1a8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_3b8;
    local_408 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_viewWithTag__026cabe0,0x1a9);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x4028000000000000;
    uVar8 = 0x4018000000000000;
    uVar9 = 0x4042000000000000;
    uVar11 = 0x403c000000000000;
    local_410 = IVar3;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar8,uVar9,uVar11,local_408,PTR_s_setFrame__026ca960);
    local_460 = 0x403c000000000000;
    dVar5 = (local_50 - 12.0) - 66.0;
    uVar8 = 0x4050800000000000;
    uVar7 = 0x401c000000000000;
    uVar9 = 0x403a000000000000;
    FUN_0163f5dc();
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowSideSeg_026b2638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowSideSeg_026b2638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetMinX(dVar5,uVar7,uVar8,uVar9);
    uVar7 = 0x4018000000000000;
    uVar8 = 0x403c000000000000;
    dVar5 = (dVar5 - 6.0) - 28.0;
    FUN_0163f5dc();
    (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_410,PTR_s_frame_026ca640);
    _CGRectGetMinX(dVar5,uVar7,local_460,uVar8);
    uVar7 = 0x4048000000000000;
    dVar5 = (dVar5 - 8.0) - 48.0;
    uVar8 = 0x4014000000000000;
    uVar9 = 0x403e000000000000;
    FUN_0163f5dc();
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowSlider_026b2640);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar8,dVar5,uVar9);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropCornerRadius_026b1eb0);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeCornerSlider_026b2630);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropCornerRadius_026b1eb0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeCornerValueLab_026b2648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropShadowAmount_026b1ee0);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowSlider_026b2640);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropShadowAmount_026b1ee0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___0f);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowValueLab_026b2650);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_cropShadowInner_026b1f00);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_shapeShadowSideSeg_026b2638);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_410);
    _objc_storeStrong(&local_408,0);
    _objc_storeStrong(&local_3b8,0);
    _objc_storeStrong(&local_290,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

