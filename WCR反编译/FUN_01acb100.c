// FUN_01acb100 @ 01acb100

void FUN_01acb100(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct **ppcVar5;
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
  double local_3d0;
  double local_3c8;
  cfstringStruct *local_3a8;
  undefined *local_348;
  undefined *local_340;
  undefined *local_330;
  undefined *local_328;
  cfstringStruct **local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined *local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  byte local_129;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  byte local_109;
  undefined *local_108;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  byte local_66;
  byte local_65;
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
  FUN_01a9eff8();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar1;
  FUN_01acca38();
  if ((uVar1 & 1) == 0) {
    local_50 = (cfstringStruct **)0x0;
    local_64 = 1;
  }
  else {
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_pinned);
    local_65 = (byte)uVar1;
    uVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_isEqualToString__0269ccc8,&cf_wcrefine_quick_atme);
    local_66 = (byte)uVar1;
    dVar10 = 72.0;
    dVar7 = 72.0;
    FUN_01a9eca0();
    local_78 = dVar7;
    local_70 = dVar10;
    _UIGraphicsBeginImageContextWithOptions(dVar7,dVar10,0);
    uVar11 = 0;
    uVar16 = uVar11;
    dVar7 = local_78;
    dVar10 = local_70;
    FUN_01a9eccc();
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    local_98 = uVar11;
    local_90 = uVar16;
    local_88 = dVar7;
    local_80 = dVar10;
    _CGRectInset();
    local_c0 = uVar11;
    local_b8 = uVar16;
    local_b0 = dVar7;
    local_a8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar11,uVar16,dVar7,dVar10,puVar2,PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 0;
    local_e1 = 0;
    local_f1 = 0;
    local_a0 = puVar2;
    if ((local_66 & 1) == 0) {
      local_330 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_65 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324040,uVar14,uVar15,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = local_330;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c70,DAT_02324038,0x3fee666666666666,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_e1 = 1;
        local_e0 = local_330;
      }
      local_328 = local_330;
    }
    else {
      local_328 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c68,DAT_02323f60,DAT_02323c78,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = local_328;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_328;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    local_109 = 0;
    local_119 = 0;
    local_129 = 0;
    if ((local_66 & 1) == 0) {
      local_348 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_65 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar12,DAT_02323d40,DAT_02323f18,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = local_348;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar14,DAT_02323da8,uVar12,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 1;
        local_118 = local_348;
      }
      local_340 = local_348;
    }
    else {
      local_340 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c88,uVar8,uVar8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = local_340;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_340;
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setFill_026a3190);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_fill_026a3198);
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setFill_026a3190);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    uVar8 = 0x4036000000000000;
    uVar12 = 0x4032000000000000;
    uVar16 = 0x4047000000000000;
    uVar14 = 0x4047000000000000;
    FUN_01a9eccc();
    local_150 = uVar8;
    local_148 = uVar12;
    local_140 = uVar14;
    local_138 = uVar16;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar12,uVar14,uVar16,puVar2,PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,uVar15,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    uVar12 = 0x4032000000000000;
    dVar7 = 14.0;
    dVar10 = 10.0;
    uVar8 = 0x4038000000000000;
    FUN_01a9eccc();
    local_170 = dVar7;
    local_168 = dVar10;
    local_160 = uVar8;
    local_158 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar7,dVar10,uVar8,uVar12,puVar2,PTR_s_bezierPathWithOvalInRect__026ca528);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_178 = (undefined *)0x0;
    if ((local_66 & 1) == 0) {
      local_3a8 = &cf_pin_fill;
      if ((local_65 & 1) == 0) {
        local_3a8 = &cf_envelope_badge_fill;
      }
    }
    else {
      local_3a8 = &cf_at;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = local_3a8;
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_3a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_178;
    local_178 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((local_178 == (undefined *)0x0) && ((local_66 & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                 &cf_at_circle_fill);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_178;
      local_178 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (((local_178 == (undefined *)0x0) && ((local_65 & 1) == 0)) && ((local_66 & 1) == 0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                 &cf_envelope_fill);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_178;
      local_178 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_178 == (undefined *)0x0) && ((local_65 & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_mappin);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_178;
      local_178 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_178;
    if (local_178 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_imageWithTintColor_renderingMode_026a31a0,puVar4,1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_178;
      local_178 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_size_026cab00);
      local_198 = 0x403f000000000000;
      if ((dVar7 <= 0.0) || (dVar10 <= 0.0)) {
        local_3d0 = 1.0;
      }
      else {
        local_1a8 = 31.0 / dVar7;
        local_1b0 = 31.0 / dVar10;
        local_3c8 = local_1b0;
        if (local_1a8 < local_1b0) {
          local_3c8 = local_1a8;
        }
        local_1b8 = local_3c8;
        local_3d0 = local_3c8;
      }
      local_1a0 = local_3d0;
      dVar9 = dVar7 * local_3d0;
      local_3d0 = dVar10 * local_3d0;
      local_190 = dVar7;
      local_188 = dVar10;
      FUN_01a9eca0();
      dVar7 = (local_78 - dVar9) * 0.5;
      dVar10 = (local_70 - local_3d0) * 0.5;
      local_1c8 = dVar9;
      local_1c0 = local_3d0;
      FUN_01a9eccc();
      local_1e8 = dVar7;
      local_1e0 = dVar10;
      local_1d8 = dVar9;
      local_1d0 = local_3d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar7,dVar10,dVar9,local_3d0,local_178,PTR_s_drawInRect__026ca610);
    }
    ppcVar5 = &local_180;
    _objc_storeStrong(ppcVar5,0);
    if (local_178 == (undefined *)0x0) {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_1f0 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_setStroke_026a31a8);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setFill_026a3190);
      puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      if ((local_66 & 1) == 0) {
        if ((local_65 & 1) == 0) {
          uVar8 = 0x4034000000000000;
          uVar12 = 0x4039000000000000;
          uVar15 = 0x4040000000000000;
          uVar14 = 0x4037000000000000;
          FUN_01a9eccc();
          local_2a0 = uVar8;
          local_298 = uVar12;
          local_290 = uVar15;
          local_288 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,uVar12,uVar15,uVar14,0x4014000000000000,puVar2,
                     PTR_s_bezierPathWithRoundedRect_corner_026ca530);
          _objc_retainAutoreleasedReturnValue();
          local_280 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4010000000000000,puVar2,PTR_s_setLineWidth__026ca9b0);
          (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_stroke_026a31c8);
          puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4008000000000000,puVar2,PTR_s_setLineWidth__026ca9b0);
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_setLineJoinStyle__026a31b8,1);
          puVar2 = local_2a8;
          uVar8 = 0x4036000000000000;
          uVar12 = 0x403c000000000000;
          FUN_01accb28();
          local_2b8 = uVar8;
          local_2b0 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar2,PTR_s_moveToPoint__026a01b0);
          puVar2 = local_2a8;
          uVar12 = 0x4042000000000000;
          uVar8 = 0x4043800000000000;
          FUN_01accb28();
          local_2c8 = uVar12;
          local_2c0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar8,puVar2,PTR_s_addLineToPoint__026a01b8);
          puVar2 = local_2a8;
          uVar12 = 0x403c000000000000;
          uVar8 = 0x4049000000000000;
          FUN_01accb28();
          local_2d8 = uVar8;
          local_2d0 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar2,PTR_s_addLineToPoint__026a01b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_stroke_026a31c8);
          _objc_storeStrong(&local_2a8);
          _objc_storeStrong(&local_280,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4012000000000000,puVar2,PTR_s_setLineWidth__026ca9b0);
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setLineJoinStyle__026a31b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_setLineCapStyle__026a31c0,1);
          puVar2 = local_228;
          uVar8 = 0x403d000000000000;
          uVar12 = 0x4034000000000000;
          FUN_01accb28();
          local_238 = uVar8;
          local_230 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar2,PTR_s_moveToPoint__026a01b0);
          puVar2 = local_228;
          uVar8 = 0x4046800000000000;
          uVar12 = 0x4042000000000000;
          FUN_01accb28();
          local_248 = uVar8;
          local_240 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar2,PTR_s_addLineToPoint__026a01b8);
          puVar2 = local_228;
          uVar12 = 0x4043000000000000;
          uVar8 = 0x4045800000000000;
          FUN_01accb28();
          local_258 = uVar12;
          local_250 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar8,puVar2,PTR_s_addLineToPoint__026a01b8);
          puVar2 = local_228;
          uVar12 = 0x4043000000000000;
          uVar8 = 0x4041000000000000;
          FUN_01accb28();
          local_268 = uVar8;
          local_260 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar12,puVar2,PTR_s_moveToPoint__026a01b0);
          puVar2 = local_228;
          uVar12 = 0x4039000000000000;
          uVar8 = 0x4047800000000000;
          FUN_01accb28();
          local_278 = uVar12;
          local_270 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,uVar8,puVar2,PTR_s_addLineToPoint__026a01b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_stroke_026a31c8);
          _objc_storeStrong(&local_228,0);
        }
      }
      else {
        local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
        dVar7 = 40.0;
        puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_boldSystemFontOfSize__0269cf28);
        _objc_retainAutoreleasedReturnValue();
        local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
        local_30 = local_1f0;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_retain_02578638)();
        local_200 = &cf__;
        (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_sizeWithAttributes__026cab08,local_1f8);
        pcVar6 = local_200;
        dVar9 = (local_78 - dVar7) * 0.5;
        dVar13 = (local_70 - dVar10) * 0.5;
        local_210 = dVar7;
        local_208 = dVar10;
        FUN_01accb28();
        local_220 = dVar9;
        local_218 = dVar13;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar9,dVar13,pcVar6,PTR_s_drawAtPoint_withAttributes__026a31b0,local_1f8);
        _objc_storeStrong(&local_200);
        _objc_storeStrong(&local_1f8,0);
      }
      ppcVar5 = &local_1f0;
      _objc_storeStrong(ppcVar5,0);
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = ppcVar5;
    _UIGraphicsEndImageContext();
    ppcVar5 = local_2e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = ppcVar5;
    local_64 = 1;
    _objc_storeStrong(&local_2e0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_a0,0);
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

