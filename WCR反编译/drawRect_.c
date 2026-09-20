// drawRect: @ 01d8d348

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

void WCRSSCrownView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double in_d0;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 in_d1;
  double dVar20;
  double dVar21;
  undefined8 in_d2;
  undefined8 in_d3;
  double dVar22;
  double local_7d8;
  double local_7d0;
  double local_7c0;
  double local_7b8;
  double local_7b0;
  double local_7a8;
  double local_610;
  double local_600;
  double local_5f0;
  double local_5e0;
  double local_5d0;
  double local_5c0;
  double local_5b0;
  double local_5a0;
  double local_590;
  ID local_578;
  undefined *local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  undefined *local_478;
  double local_470;
  long local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  undefined8 local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3b8;
  undefined8 local_3b0;
  undefined *local_3a8;
  undefined *local_3a0;
  double local_398;
  double local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined *local_370;
  undefined *local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_34c;
  undefined *local_348;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  undefined *local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined4 local_224;
  double local_220;
  double local_218;
  undefined4 local_20c;
  double local_208;
  double local_200;
  undefined4 local_1f4;
  undefined *local_1f0;
  double local_1e8;
  double local_1e0;
  undefined4 local_1d4;
  double local_1d0;
  double local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  double local_1b0;
  undefined4 local_1a4;
  undefined *local_1a0;
  double local_198;
  double local_190;
  undefined4 local_184;
  double local_180;
  double local_178;
  undefined4 local_16c;
  double local_168;
  double local_160;
  undefined4 local_154;
  undefined *local_150;
  undefined8 local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  byte local_111;
  ID local_110;
  ID local_108;
  double local_100;
  double local_f8;
  SEL local_f0;
  ID local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0 [4];
  double local_a0;
  double local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined *local_68;
  ID local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  dVar4 = DAT_02323f38;
  dVar3 = DAT_02323ec8;
  dVar15 = DAT_02323e88;
  dVar18 = DAT_02323da8;
  dVar22 = DAT_02323da0;
  dVar2 = DAT_02323d80;
  dVar13 = DAT_02323d70;
  dVar17 = DAT_02323d50;
  dVar1 = DAT_02323d40;
  dVar19 = DAT_02323d00;
  dVar16 = DAT_02323c90;
  dVar20 = DAT_02323c70;
  dVar21 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = param_2;
  local_e8 = param_1;
  local_e0 = in_d0;
  local_d8 = in_d1;
  local_d0 = in_d2;
  local_c8 = in_d3;
  _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3,param_1,param_2,param_3.field0_0x0.field0_0x0,
                  param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                  param_3.field1_0x10.field1_0x8);
  local_f8 = in_d0;
  _CGRectGetHeight(local_e0,local_d8,local_d0,local_c8);
  if ((8.0 <= local_f8) && (8.0 <= local_e0)) {
    IVar5 = local_e8;
    local_100 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_medalColor_026c4db0);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 0;
    local_578 = IVar5;
    if (IVar5 == 0) {
      FUN_01d8eb78();
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_578;
    }
    local_111 = IVar5 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_578;
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_120 = 0.0;
    local_128 = 0.0;
    local_130 = 0.0;
    local_138 = 0x3ff0000000000000;
    IVar5 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_getRed_green_blue_alpha__026ca660,&local_120,&local_128,&local_130,
               &local_138);
    if ((IVar5 & 1) == 0) {
      local_140 = 0.0;
      local_148 = 0x3ff0000000000000;
      IVar5 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108,PTR_s_getWhite_alpha__026ca668,&local_140,&local_148);
      if ((IVar5 & 1) != 0) {
        local_130 = local_140;
        local_128 = local_140;
        local_120 = local_140;
        local_138 = local_148;
      }
    }
    local_154 = 1;
    local_160 = local_120 + DAT_02323f18;
    local_590 = local_160;
    if (1.0 < local_160) {
      local_590 = 1.0;
    }
    local_168 = local_590;
    local_16c = 1;
    local_178 = local_128 + dVar15;
    local_5a0 = local_178;
    if (1.0 < local_178) {
      local_5a0 = 1.0;
    }
    local_180 = local_5a0;
    local_184 = 1;
    local_190 = local_130 + dVar20;
    local_5b0 = local_190;
    if (1.0 < local_190) {
      local_5b0 = 1.0;
    }
    local_198 = local_5b0;
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_590,local_5a0,local_5b0,local_138,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_1a4 = 1;
    local_1b0 = local_120 + dVar16;
    local_5c0 = local_1b0;
    if (1.0 < local_1b0) {
      local_5c0 = 1.0;
    }
    local_1b8 = local_5c0;
    local_1bc = 1;
    local_1c8 = local_128 + dVar2;
    local_5d0 = local_1c8;
    if (1.0 < local_1c8) {
      local_5d0 = 1.0;
    }
    local_1d0 = local_5d0;
    local_1d4 = 0;
    local_1e0 = local_130 - DAT_02323e38;
    local_5e0 = local_1e0;
    if (local_1e0 <= 0.0) {
      local_5e0 = 0.0;
    }
    local_1e8 = local_5e0;
    puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_150 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5c0,local_5d0,local_5e0,local_138,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_1f4 = 0;
    local_200 = local_120 - dVar3;
    local_5f0 = local_200;
    if (local_200 <= 0.0) {
      local_5f0 = 0.0;
    }
    local_208 = local_5f0;
    local_20c = 0;
    local_218 = local_128 - dVar18;
    local_600 = local_218;
    if (local_218 <= 0.0) {
      local_600 = 0.0;
    }
    local_220 = local_600;
    local_224 = 0;
    local_230 = local_130 - dVar1;
    local_610 = local_230;
    if (local_230 <= 0.0) {
      local_610 = 0.0;
    }
    local_238 = local_610;
    puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_1a0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_5f0,local_600,local_610,local_138,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_240 = local_100 * dVar13;
    local_248 = local_100 * DAT_02332e50;
    puVar7 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_1f0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    dVar11 = local_f8 * dVar17;
    dVar12 = local_248;
    local_250 = puVar7;
    FUN_01d8ebbc();
    local_260 = dVar11;
    local_258 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar12,puVar7,PTR_s_moveToPoint__026a01b0);
    puVar6 = local_250;
    dVar11 = local_f8 * dVar16;
    dVar12 = local_240;
    FUN_01d8ebbc();
    local_270 = dVar11;
    local_268 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar12,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar11 = local_f8 * DAT_02324058;
    dVar12 = local_240;
    FUN_01d8ebbc();
    local_280 = dVar11;
    local_278 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar12,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar12 = local_f8 * dVar18;
    dVar11 = local_100 * dVar4;
    FUN_01d8ebbc();
    local_290 = dVar12;
    local_288 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar11,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar11 = local_f8 * DAT_02324280;
    dVar12 = local_240;
    FUN_01d8ebbc();
    local_2a0 = dVar11;
    local_298 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar12,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar11 = local_f8 * DAT_0233a400;
    dVar12 = local_240;
    FUN_01d8ebbc();
    local_2b0 = dVar11;
    local_2a8 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(dVar11,dVar12,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar12 = local_f8 * DAT_02324048;
    dVar11 = local_100 * dVar20;
    FUN_01d8ebbc();
    local_2c0 = dVar12;
    local_2b8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar11,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar12 = local_f8 * 0.5;
    dVar11 = local_100 * dVar21;
    FUN_01d8ebbc();
    local_2d0 = dVar12;
    local_2c8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar11,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar12 = local_f8 * DAT_0233a320;
    dVar20 = local_100 * dVar20;
    FUN_01d8ebbc();
    local_2e0 = dVar12;
    local_2d8 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar12 = local_f8 * DAT_0233a328;
    dVar20 = local_240;
    FUN_01d8ebbc();
    local_2f0 = dVar12;
    local_2e8 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar12,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar13 = local_f8 * dVar13;
    dVar20 = local_240;
    FUN_01d8ebbc();
    local_300 = dVar13;
    local_2f8 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar20 = local_f8 * dVar19;
    dVar13 = local_100 * dVar4;
    FUN_01d8ebbc();
    local_310 = dVar20;
    local_308 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(dVar20,dVar13,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar13 = local_f8 * DAT_02339790;
    dVar20 = local_240;
    FUN_01d8ebbc();
    local_320 = dVar13;
    local_318 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar13 = local_f8 * DAT_02323e70;
    dVar20 = local_240;
    FUN_01d8ebbc();
    local_330 = dVar13;
    local_328 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    dVar13 = local_f8 * DAT_02323d48;
    dVar20 = local_248;
    FUN_01d8ebbc();
    local_340 = dVar13;
    local_338 = dVar20;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,dVar20,puVar6,PTR_s_addLineToPoint__026a01b8);
    puVar6 = local_250;
    (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_closePath_026a66f8);
    _UIGraphicsGetCurrentContext();
    local_348 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      local_34c = 1;
    }
    else {
      _CGContextSaveGState(puVar6);
      puVar6 = local_348;
      uVar14 = 0;
      uVar10 = 0x3ff6666666666666;
      FUN_01d8ebe8();
      puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_360 = uVar14;
      local_358 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,dVar3,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
      _CGContextSetShadowWithColor(local_360,local_358,DAT_02323e50,puVar6,puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setFill_026a3190);
      (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_fill_026a3198);
      _CGContextRestoreGState(local_348);
      _CGContextSaveGState(local_348);
      puVar6 = local_250;
      (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_addClip_026ca4a0);
      _CGColorSpaceCreateDeviceRGB();
      puVar7 = local_150;
      uStack_48 = _UNK_0233a418;
      local_50 = _DAT_0233a410;
      uStack_38 = _UNK_0233a428;
      local_40 = _DAT_0233a420;
      local_368 = puVar6;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_CGColor_026ca470);
      puVar6 = local_1a0;
      local_70 = puVar7;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      IVar5 = local_108;
      local_68 = puVar6;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_CGColor_026ca470);
      puVar6 = local_1f0;
      local_60 = IVar5;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_58 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_368;
      local_370 = puVar7;
      _CGGradientCreateWithColors(local_368,puVar7,&local_50);
      puVar6 = local_348;
      local_378 = puVar8;
      if (puVar8 != (undefined *)0x0) {
        dVar13 = local_f8 * dVar18;
        uVar10 = 0;
        FUN_01d8ebbc();
        dVar12 = local_f8 * dVar19;
        dVar20 = local_100;
        local_388 = dVar13;
        local_380 = uVar10;
        FUN_01d8ebbc();
        local_398 = dVar12;
        _CGContextDrawLinearGradient(local_388,local_380,dVar12,dVar20,puVar6,puVar8,0);
        _CGGradientRelease(local_378);
      }
      uStack_78 = _UNK_0233a438;
      local_80 = _DAT_0233a430;
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,dVar15,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
      puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_90 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,dVar1,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar7 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
      puVar9 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_88 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_3a0 = puVar9;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar7 = local_368;
      _CGGradientCreateWithColors(local_368,local_3a0,&local_80);
      puVar6 = local_348;
      local_3a8 = puVar7;
      if (puVar7 != (undefined *)0x0) {
        dVar13 = local_f8 * 0.5;
        uVar10 = 0;
        FUN_01d8ebbc();
        dVar15 = local_f8 * 0.5;
        dVar20 = local_100;
        local_3b8 = dVar13;
        local_3b0 = uVar10;
        FUN_01d8ebbc();
        local_3c8 = dVar15;
        _CGContextDrawLinearGradient(local_3b8,local_3b0,dVar15,dVar20,puVar6,puVar7,0);
        _CGGradientRelease(local_3a8);
      }
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,dVar3,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      dVar16 = local_f8 * dVar16;
      dVar13 = local_f8 * DAT_0232c678;
      dVar15 = local_100 * dVar22;
      dVar20 = local_240;
      FUN_01d8ec14();
      local_3e8 = dVar16;
      local_3e0 = dVar20;
      local_3d8 = dVar13;
      local_3d0 = dVar15;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar16,dVar20,dVar13,dVar15,puVar6,PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,dVar1,PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      dVar17 = local_f8 * dVar17;
      dVar20 = local_100 * DAT_02323f88;
      dVar16 = local_f8 * DAT_02323ee8;
      dVar22 = local_100 * dVar22;
      FUN_01d8ec14();
      local_408 = dVar17;
      local_400 = dVar20;
      local_3f8 = dVar16;
      local_3f0 = dVar22;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar17,dVar20,dVar16,dVar22,puVar6,PTR_s_bezierPathWithRect__026a03f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _CGColorSpaceRelease(local_368);
      _CGContextRestoreGState(local_348);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setStroke_026a31a8);
      local_410 = dVar19;
      local_418 = local_f8 * dVar2;
      local_7a8 = local_418;
      if (local_418 <= dVar19) {
        local_7a8 = dVar19;
      }
      local_420 = local_7a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_7a8,local_250,PTR_s_setLineWidth__026ca9b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_setLineJoinStyle__026a31b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_stroke_026a31c8);
      dVar18 = local_f8 * dVar18;
      dVar16 = local_100 * dVar4;
      FUN_01d8ebbc();
      dVar20 = local_f8 * 0.5;
      dVar21 = local_100 * dVar21;
      local_c0[0] = dVar18;
      local_c0[1] = dVar16;
      FUN_01d8ebbc();
      dVar19 = local_f8 * dVar19;
      dVar16 = local_100 * dVar4;
      local_c0[2] = dVar20;
      local_c0[3] = dVar21;
      FUN_01d8ebbc();
      local_a0 = dVar19;
      local_98 = dVar16;
      local_430 = 0x3ff8000000000000;
      local_438 = local_f8 * 0.075;
      local_7b0 = local_438;
      if (local_438 <= 1.5) {
        local_7b0 = 1.5;
      }
      local_440 = local_7b0;
      local_428 = local_7b0;
      local_450 = DAT_02323d88;
      local_458 = local_f8 * DAT_0232c688;
      local_7b8 = local_458;
      if (local_458 <= DAT_02323d88) {
        local_7b8 = DAT_02323d88;
      }
      local_460 = local_7b8;
      local_448 = local_7b8;
      for (local_468 = 0; puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268, local_468 < 3;
          local_468 = local_468 + 1) {
        if (local_468 == 1) {
          local_7c0 = local_448;
        }
        else {
          local_7c0 = local_428;
        }
        local_470 = local_7c0;
        dVar21 = local_c0[local_468 * 2] - local_7c0;
        dVar20 = local_c0[local_468 * 2 + 1] - local_7c0;
        dVar16 = local_7c0 * 2.0;
        local_7c0 = local_7c0 * 2.0;
        FUN_01d8ec14();
        local_498 = dVar21;
        local_490 = dVar20;
        local_488 = dVar16;
        local_480 = local_7c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar21,dVar20,dVar16,local_7c0,puVar6,PTR_s_bezierPathWithOvalInRect__026ca528);
        _objc_retainAutoreleasedReturnValue();
        local_478 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_setFill_026a3190);
        (*(code *)PTR__objc_msgSend_02578628)(local_478,PTR_s_fill_026a3198);
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setStroke_026a31a8);
        local_4a0 = DAT_02323c98;
        local_4a8 = local_f8 * DAT_0233a3f0;
        local_7d0 = local_4a8;
        if (local_4a8 <= DAT_02323c98) {
          local_7d0 = DAT_02323c98;
        }
        local_4b0 = local_7d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_7d0,local_478,PTR_s_setLineWidth__026ca9b0);
        (*(code *)PTR__objc_msgSend_02578628)(local_478,PTR_s_stroke_026a31c8);
        puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        local_4c0 = 0x3fe3333333333333;
        local_4c8 = local_470 * DAT_02332e48;
        local_7d8 = local_4c8;
        if (local_4c8 <= 0.6) {
          local_7d8 = 0.6;
        }
        local_4d0 = local_7d8;
        local_4b8 = local_7d8;
        dVar21 = local_c0[local_468 * 2] - DAT_02323e80 * local_470;
        dVar20 = local_c0[local_468 * 2 + 1] - dVar4 * local_470;
        dVar16 = local_7d8 * 2.0;
        local_7d8 = local_7d8 * 2.0;
        FUN_01d8ec14();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar21,dVar20,dVar16,local_7d8,puVar6,PTR_s_bezierPathWithOvalInRect__026ca528);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_4d8 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_02324258,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_msgSend_02578628)(local_4d8,PTR_s_fill_026a3198);
        _objc_storeStrong(&local_4d8);
        _objc_storeStrong(&local_478,0);
      }
      _objc_storeStrong(local_468 + -3,&local_3a0);
      _objc_storeStrong(&local_370,0);
      local_34c = 0;
    }
    _objc_storeStrong(&local_250);
    _objc_storeStrong(&local_1f0,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_108,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

