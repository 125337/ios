// FUN_003d5e94 @ 003d5e94

void FUN_003d5e94(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct **ppcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double local_400;
  double local_3f8;
  cfstringStruct *local_3d8;
  undefined *local_380;
  undefined *local_378;
  undefined *local_368;
  undefined *local_360;
  cfstringStruct **local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined *local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  cfstringStruct *local_220;
  undefined *local_218;
  cfstringStruct *local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  cfstringStruct *local_1a0;
  undefined *local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  byte local_141;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  byte local_121;
  undefined *local_120;
  undefined *local_118;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  byte local_7a;
  byte local_79;
  cfstringStruct **local_78;
  cfstringStruct **local_70;
  undefined4 local_64;
  ulong local_60;
  ulong local_58;
  cfstringStruct **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  uVar14 = DAT_02323f38;
  uVar15 = DAT_02323ec8;
  uVar12 = DAT_02323e70;
  uVar8 = DAT_02323c98;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  uVar1 = local_58;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar1;
  FUN_003d7794();
  ppcVar2 = (cfstringStruct **)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((uVar1 & 1) == 0) {
    local_50 = (cfstringStruct **)0x0;
    local_64 = 1;
  }
  else {
    FUN_003d5540();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (ppcVar2,PTR_s_stringWithFormat__0269cca8,&cf_official_quick______);
    _objc_retainAutoreleasedReturnValue();
    local_70 = ppcVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    ppcVar2 = local_70;
    FUN_003d560c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = ppcVar2;
    if (ppcVar2 == (cfstringStruct **)0x0) {
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_pinned);
      local_79 = (byte)uVar1;
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_atme);
      local_7a = (byte)uVar1;
      dVar10 = 72.0;
      dVar7 = 72.0;
      FUN_003ae5d4();
      local_90 = dVar7;
      local_88 = dVar10;
      _UIGraphicsBeginImageContextWithOptions(dVar7,dVar10,0);
      uVar11 = 0;
      uVar16 = uVar11;
      dVar7 = local_90;
      dVar10 = local_88;
      FUN_00360240();
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      local_b0 = uVar11;
      local_a8 = uVar16;
      local_a0 = dVar7;
      local_98 = dVar10;
      _CGRectInset();
      local_d8 = uVar11;
      local_d0 = uVar16;
      local_c8 = dVar7;
      local_c0 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar11,uVar16,dVar7,dVar10,puVar3,PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 0;
      local_f9 = 0;
      local_109 = 0;
      local_b8 = puVar3;
      if ((local_7a & 1) == 0) {
        local_368 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((local_79 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02324040,uVar14,uVar15,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_109 = 1;
          local_108 = local_368;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323c70,DAT_02324038,0x3fee666666666666,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_f9 = 1;
          local_f8 = local_368;
        }
        local_360 = local_368;
      }
      else {
        local_360 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c68,DAT_02323f60,DAT_02323c78,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = local_360;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = local_360;
      if ((local_109 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      if ((local_f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      local_121 = 0;
      local_131 = 0;
      local_141 = 0;
      if ((local_7a & 1) == 0) {
        local_380 = PTR__OBJC_CLASS___UIColor_026cdf78;
        if ((local_79 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar12,DAT_02323d40,DAT_02323f18,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          local_140 = local_380;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar14,DAT_02323da8,uVar12,0x3ff0000000000000,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = local_380;
        }
        local_378 = local_380;
      }
      else {
        local_378 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c88,uVar8,uVar8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_121 = 1;
        local_120 = local_378;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = local_378;
      if ((local_141 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_140);
      }
      if ((local_131 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_130);
      }
      if ((local_121 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setFill_026a3190);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_fill_026a3198);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      uVar8 = 0x4036000000000000;
      uVar12 = 0x4032000000000000;
      uVar16 = 0x4047000000000000;
      uVar14 = 0x4047000000000000;
      FUN_00360240();
      local_170 = uVar8;
      local_168 = uVar12;
      local_160 = uVar14;
      local_158 = uVar16;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar8,uVar12,uVar14,uVar16,puVar3,PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFill_026a3190);
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_fill_026a3198);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,uVar15,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      uVar12 = 0x4032000000000000;
      dVar7 = 14.0;
      dVar10 = 10.0;
      uVar8 = 0x4038000000000000;
      FUN_00360240();
      local_190 = dVar7;
      local_188 = dVar10;
      local_180 = uVar8;
      local_178 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar7,dVar10,uVar8,uVar12,puVar3,PTR_s_bezierPathWithOvalInRect__026ca528);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      local_198 = (undefined *)0x0;
      if ((local_7a & 1) == 0) {
        local_3d8 = &cf_pin_fill;
        if ((local_79 & 1) == 0) {
          local_3d8 = &cf_envelope_badge_fill;
        }
      }
      else {
        local_3d8 = &cf_at;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_3d8;
      puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_3d8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_198;
      local_198 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_198 == (undefined *)0x0) && ((local_7a & 1) != 0)) {
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                   &cf_at_circle_fill);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_198;
        local_198 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if (((local_198 == (undefined *)0x0) && ((local_79 & 1) == 0)) && ((local_7a & 1) == 0)) {
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                   &cf_envelope_fill);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_198;
        local_198 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      if ((local_198 == (undefined *)0x0) && ((local_79 & 1) != 0)) {
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_mappin);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_198;
        local_198 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_198;
      if (local_198 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_imageWithTintColor_renderingMode_026a31a0,puVar5,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_198;
        local_198 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_size_026cab00);
        local_1b8 = 0x403f000000000000;
        if ((dVar7 <= 0.0) || (dVar10 <= 0.0)) {
          local_400 = 1.0;
        }
        else {
          local_1c8 = 31.0 / dVar7;
          local_1d0 = 31.0 / dVar10;
          local_3f8 = local_1d0;
          if (local_1c8 < local_1d0) {
            local_3f8 = local_1c8;
          }
          local_1d8 = local_3f8;
          local_400 = local_3f8;
        }
        local_1c0 = local_400;
        dVar9 = dVar7 * local_400;
        local_400 = dVar10 * local_400;
        local_1b0 = dVar7;
        local_1a8 = dVar10;
        FUN_003ae5d4();
        dVar7 = (local_90 - dVar9) * 0.5;
        dVar10 = (local_88 - local_400) * 0.5;
        local_1e8 = dVar9;
        local_1e0 = local_400;
        FUN_00360240();
        local_208 = dVar7;
        local_200 = dVar10;
        local_1f8 = dVar9;
        local_1f0 = local_400;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar7,dVar10,dVar9,local_400,local_198,PTR_s_drawInRect__026ca610);
      }
      ppcVar2 = &local_1a0;
      _objc_storeStrong(ppcVar2,0);
      if (local_198 == (undefined *)0x0) {
        pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_210 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_setStroke_026a31a8);
        (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_setFill_026a3190);
        puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
        if ((local_7a & 1) == 0) {
          if ((local_79 & 1) == 0) {
            uVar8 = 0x4034000000000000;
            uVar12 = 0x4039000000000000;
            uVar15 = 0x4040000000000000;
            uVar14 = 0x4037000000000000;
            FUN_00360240();
            local_2c0 = uVar8;
            local_2b8 = uVar12;
            local_2b0 = uVar15;
            local_2a8 = uVar14;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar12,uVar15,uVar14,0x4014000000000000,puVar3,
                       PTR_s_bezierPathWithRoundedRect_corner_026ca530);
            _objc_retainAutoreleasedReturnValue();
            local_2a0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4010000000000000,puVar3,PTR_s_setLineWidth__026ca9b0);
            (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_stroke_026a31c8);
            puVar3 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
            _objc_retainAutoreleasedReturnValue();
            local_2c8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4008000000000000,puVar3,PTR_s_setLineWidth__026ca9b0);
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setLineJoinStyle__026a31b8,1);
            puVar3 = local_2c8;
            uVar8 = 0x4036000000000000;
            uVar12 = 0x403c000000000000;
            FUN_003631ac();
            local_2d8 = uVar8;
            local_2d0 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar3,PTR_s_moveToPoint__026a01b0);
            puVar3 = local_2c8;
            uVar12 = 0x4042000000000000;
            uVar8 = 0x4043800000000000;
            FUN_003631ac();
            local_2e8 = uVar12;
            local_2e0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,uVar8,puVar3,PTR_s_addLineToPoint__026a01b8);
            puVar3 = local_2c8;
            uVar12 = 0x403c000000000000;
            uVar8 = 0x4049000000000000;
            FUN_003631ac();
            local_2f8 = uVar8;
            local_2f0 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar12,puVar3,PTR_s_addLineToPoint__026a01b8);
            (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_stroke_026a31c8);
            _objc_storeStrong(&local_2c8);
            _objc_storeStrong(&local_2a0,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
            _objc_retainAutoreleasedReturnValue();
            local_248 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x4012000000000000,puVar3,PTR_s_setLineWidth__026ca9b0);
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setLineJoinStyle__026a31b8);
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setLineCapStyle__026a31c0,1);
            puVar3 = local_248;
            uVar8 = 0x403d000000000000;
            uVar12 = 0x4034000000000000;
            FUN_003631ac();
            local_258 = uVar8;
            local_250 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar3,PTR_s_moveToPoint__026a01b0);
            puVar3 = local_248;
            uVar8 = 0x4046800000000000;
            uVar12 = 0x4042000000000000;
            FUN_003631ac();
            local_268 = uVar8;
            local_260 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar12,puVar3,PTR_s_addLineToPoint__026a01b8);
            puVar3 = local_248;
            uVar12 = 0x4043000000000000;
            uVar8 = 0x4045800000000000;
            FUN_003631ac();
            local_278 = uVar12;
            local_270 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,uVar8,puVar3,PTR_s_addLineToPoint__026a01b8);
            puVar3 = local_248;
            uVar12 = 0x4043000000000000;
            uVar8 = 0x4041000000000000;
            FUN_003631ac();
            local_288 = uVar8;
            local_280 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar3,PTR_s_moveToPoint__026a01b0);
            puVar3 = local_248;
            uVar12 = 0x4039000000000000;
            uVar8 = 0x4047800000000000;
            FUN_003631ac();
            local_298 = uVar12;
            local_290 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar12,uVar8,puVar3,PTR_s_addLineToPoint__026a01b8);
            (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_stroke_026a31c8);
            _objc_storeStrong(&local_248,0);
          }
        }
        else {
          local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
          dVar7 = 40.0;
          puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
          _objc_retainAutoreleasedReturnValue();
          local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
          local_30 = local_210;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
          _objc_retainAutoreleasedReturnValue();
          local_218 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_retain_02578638)();
          local_220 = &cf__;
          (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_sizeWithAttributes__026cab08,local_218);
          pcVar6 = local_220;
          dVar9 = (local_90 - dVar7) * 0.5;
          dVar13 = (local_88 - dVar10) * 0.5;
          local_230 = dVar7;
          local_228 = dVar10;
          FUN_003631ac();
          local_240 = dVar9;
          local_238 = dVar13;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar9,dVar13,pcVar6,PTR_s_drawAtPoint_withAttributes__026a31b0,local_218);
          _objc_storeStrong(&local_220);
          _objc_storeStrong(&local_218,0);
        }
        ppcVar2 = &local_210;
        _objc_storeStrong(ppcVar2,0);
      }
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_300 = ppcVar2;
      _UIGraphicsEndImageContext();
      if (local_300 != (cfstringStruct **)0x0) {
        FUN_003d5944(local_300,local_70);
      }
      ppcVar2 = local_300;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = ppcVar2;
      local_64 = 1;
      _objc_storeStrong(&local_300);
      _objc_storeStrong(&local_198,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_b8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_64 = 1;
      local_50 = ppcVar2;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

