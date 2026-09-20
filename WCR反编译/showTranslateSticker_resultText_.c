// showTranslateSticker:resultText: @ 01678680

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatCropViewController::showTranslateSticker_resultText_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double in_d0;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 in_d1;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double in_d2;
  double in_d3;
  double local_5e8;
  double local_4f8;
  double local_4b8;
  double local_4a8;
  double local_4a0;
  double local_460;
  ID local_448;
  long local_428;
  undefined *local_410;
  undefined *local_408;
  double local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  undefined8 uStack_3e8;
  double local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  undefined *local_3b8;
  long local_3b0;
  undefined8 local_3a8;
  double local_3a0;
  double local_398;
  undefined8 local_390;
  double local_388;
  undefined *local_380;
  undefined *local_378;
  undefined8 local_370;
  double dStack_368;
  double local_360;
  undefined8 uStack_358;
  double local_350;
  double local_348;
  undefined4 local_33c;
  undefined8 local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  undefined *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  double local_300;
  double dStack_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined *local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_240;
  double local_238;
  undefined8 local_230;
  double local_218;
  undefined8 local_210;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  double local_1b0;
  undefined4 local_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_120;
  ID local_118 [2];
  undefined8 local_108;
  undefined8 uStack_e8;
  double local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  bool local_a1;
  long local_a0;
  long local_98;
  undefined4 local_8c;
  long local_88;
  ID local_80;
  SEL local_78;
  ID local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  if (local_80 == 0) {
    local_8c = 1;
  }
  else {
    lVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    local_a1 = false;
    if (lVar1 == 0) {
      local_428 = 0;
    }
    else {
      local_428 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
      local_a0 = local_428;
    }
    local_a1 = lVar1 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_428;
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_dismissTranslateSticker_026b2448);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTranslateResultText__026b26d0,local_98);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasActiveCropSelection_026b1f60);
    IVar3 = local_70;
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imageDisplayFrame_026b1f90);
      local_d0 = in_d0;
      uStack_c8 = in_d1;
      local_c0 = in_d2;
      dStack_b8 = in_d3;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_cropRect_026b1ec0);
      local_d0 = in_d0;
      uStack_c8 = in_d1;
      local_c0 = in_d2;
      dStack_b8 = in_d3;
    }
    dVar9 = local_d0;
    uVar12 = uStack_c8;
    dVar13 = local_c0;
    dVar10 = dStack_b8;
    _CGRectIsEmpty();
    if ((((IVar3 & 1) != 0) || (uVar12 = 0x4020000000000000, dVar9 = local_c0, local_c0 < 8.0)) ||
       (uVar12 = 0x4020000000000000, dVar9 = dStack_b8, dStack_b8 < 8.0)) {
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_108 = uVar12;
      _CGRectInset();
      uStack_e8 = uVar12;
      local_d0 = dVar9;
      uStack_c8 = uVar12;
      local_c0 = dVar13;
      dStack_b8 = dVar10;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    IVar2 = local_70;
    local_460 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,uStack_c8,local_c0,dStack_b8,local_70,
               PTR_s_normalizeTranslateImage_forDispl_026b26e8,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_448 = IVar2;
    if (IVar2 == 0) {
      local_448 = local_80;
    }
    local_118[0] = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setTranslateResultImage__026b26c8,local_448);
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_130 = 0x3ff0000000000000;
    dStack_158 = 1.0;
    if (local_460 < 1.0) {
      local_460 = 1.0;
    }
    local_138 = local_460;
    local_120 = local_460;
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_CGImage_0269e0e8);
    _CGImageGetWidth();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    local_140 = (double)IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_CGImage_0269e0e8);
    _CGImageGetHeight();
    dVar9 = (double)IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    local_148 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_160 = dVar9;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_160 < 1.0) || (dStack_158 < 1.0)) {
      dVar9 = local_140 / local_120;
      dVar13 = local_148 / local_120;
      FUN_0163f628();
      local_170 = dVar9;
      dStack_168 = dVar13;
      local_160 = dVar9;
      dStack_158 = dVar13;
    }
    if (local_160 < 1.0) {
      local_160 = local_c0;
    }
    if (dStack_158 < 1.0) {
      dStack_158 = dStack_b8;
    }
    local_180 = local_c0 / local_160;
    local_188 = dStack_b8 / dStack_158;
    local_4a0 = local_188;
    if (local_180 < local_188) {
      local_4a0 = local_180;
    }
    local_190 = local_4a0;
    local_178 = local_4a0;
    if (1.0 < local_4a0) {
      local_178 = 1.0;
    }
    local_1a4 = 0x20;
    local_1b0 = local_160 * local_178;
    local_4a8 = local_1b0;
    if (local_1b0 <= 32.0) {
      local_4a8 = 32.0;
    }
    local_1b8 = local_4a8;
    local_1bc = 0x20;
    local_1c8 = dStack_158 * local_178;
    local_4b8 = local_1c8;
    if (local_1c8 <= 32.0) {
      local_4b8 = 32.0;
    }
    local_1d0 = local_4b8;
    FUN_0163f628();
    local_1d8 = 0x4042000000000000;
    local_1e0 = 8.0;
    local_1e8 = local_4b8 + 8.0 + 36.0;
    dVar9 = local_d0;
    local_1a0 = local_4a8;
    local_198 = local_4b8;
    _CGRectGetMidY(local_d0,uStack_c8,local_c0);
    uVar12 = 0x3fe0000000000000;
    dVar10 = dVar9 - local_198 * 0.5;
    IVar2 = local_70;
    local_1f0 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_218 = dVar10;
    local_210 = uVar12;
    _CGRectGetMaxY();
    IVar3 = local_70;
    dVar13 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = ((dVar10 - dVar9) - local_1e8) - 12.0;
    local_238 = dVar13;
    local_230 = uVar12;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_1f8 = dVar9;
    if (dVar9 < local_1f0) {
      IVar2 = local_70;
      dVar13 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar10 = dVar13 + 8.0;
      local_260 = dVar13;
      local_258 = dVar9;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_268 = local_1f8;
      local_4f8 = dVar10;
      if (dVar10 < local_1f8) {
        local_4f8 = local_1f8;
      }
      local_270 = local_4f8;
      local_1f0 = local_4f8;
      local_240 = dVar10;
    }
    _CGRectGetMidX(local_d0,uStack_c8,local_c0,dStack_b8);
    dVar11 = local_d0 - local_1a0 * 0.5;
    dVar9 = local_1f0;
    dVar13 = local_1a0;
    dVar10 = local_1e8;
    FUN_0163f5dc();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_290 = dVar11;
    local_288 = dVar9;
    local_280 = dVar13;
    local_278 = dVar10;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_290,local_288,local_280,local_278);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_298 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    puVar5 = local_298;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_298;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3e8f5c29);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_298;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar12 = 0;
    uVar14 = 0x4008000000000000;
    FUN_0163f628();
    puVar4 = local_298;
    local_2a8 = uVar12;
    uStack_2a0 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uStack_2b8 = uStack_2a0;
    local_2c0 = local_2a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2a8,uStack_2a0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_setClipsToBounds__026ca8c8,0);
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithImage__0269e558);
    local_2c8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setContentMode__026ca8e0,1);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setOpaque__026ca9f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setClipsToBounds__026ca8c8,1);
    puVar4 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar14 = 0;
    uVar12 = uVar14;
    dVar9 = local_1a0;
    dVar13 = local_198;
    FUN_0163f5dc();
    local_310 = uVar14;
    uStack_308 = uVar12;
    local_300 = dVar9;
    dStack_2f8 = dVar13;
    local_2e8 = uVar14;
    uStack_2e0 = uVar12;
    local_2d8 = dVar9;
    dStack_2d0 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar14,uVar12,dVar9,dVar13,local_2c8,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setAutoresizingMask__026ca878,0x22);
    (*(code *)PTR__objc_msgSend_02578628)(local_120,local_2c8,PTR_s_setContentScaleFactor__026b24d0)
    ;
    dVar9 = local_120;
    puVar4 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar9);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_2c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addSubview__026ca4c0,local_2c8);
    puVar4 = local_298;
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0164fe20(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    _objc_alloc();
    puVar5 = puVar4;
    FUN_0163f654();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithEffect__026ca6e0);
    local_318 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_3a0 = local_198 + local_1e0;
    local_33c = 0x50;
    local_348 = local_1a0;
    if (local_1a0 <= 80.0) {
      local_5e8 = 80.0;
    }
    else {
      local_5e8 = local_1a0;
    }
    local_350 = local_5e8;
    uVar14 = 0;
    uVar12 = local_1d8;
    FUN_0163f5dc();
    local_370 = uVar14;
    dStack_368 = local_3a0;
    local_360 = local_5e8;
    uStack_358 = uVar12;
    local_338 = uVar14;
    dStack_330 = local_3a0;
    local_328 = local_5e8;
    uStack_320 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)(uVar14,local_318,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setAutoresizingMask__026ca878,10);
    puVar4 = local_318;
    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = 0x4024000000000000;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addSubview__026ca4c0,local_318);
    local_48 = &cf_Y6R;
    local_40 = &cf_OX_;
    local_38 = &cf_cSeW_;
    local_30 = &cf_sQ;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_s_copyTranslateSticker_026b2700;
    local_378 = puVar4;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_saveTranslateSticker_026b2708;
    local_68 = puVar5;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_extractTranslateText_026b2710;
    local_60 = puVar4;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_s_dismissTranslateSticker_026b2448;
    local_58 = puVar6;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_380 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_bounds_026ca548);
    puVar4 = local_378;
    local_3a8 = uVar14;
    local_398 = local_5e8;
    local_390 = uVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_count_0269cfe0);
    local_388 = local_5e8 / (double)puVar4;
    for (local_3b0 = 0; lVar1 = local_3b0, puVar4 = local_378,
        (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_count_0269cfe0), lVar1 < (long)puVar4;
        local_3b0 = local_3b0 + 1) {
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_378;
      local_3b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_378,PTR_s_objectAtIndexedSubscript__0269cc78,local_3b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitle_forState__026caab8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_3b8;
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTitleColor_forState__026caac0,puVar5,0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
                 PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_3b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3fe6666666666666);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      dVar13 = local_388 * (double)local_3b0;
      uVar14 = 0;
      dVar9 = local_388;
      uVar12 = local_1d8;
      FUN_0163f5dc();
      local_400 = dVar13;
      uStack_3f8 = uVar14;
      local_3f0 = dVar9;
      uStack_3e8 = uVar12;
      local_3d8 = dVar13;
      uStack_3d0 = uVar14;
      local_3c8 = dVar9;
      uStack_3c0 = uVar12;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar13,uVar14,dVar9,uVar12,local_3b8,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_setAutoresizingMask__026ca878,7);
      IVar2 = local_70;
      puVar4 = local_3b8;
      puVar5 = local_380;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_380,PTR_s_objectAtIndexedSubscript__0269cc78,local_3b0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_addTarget_action_forControlEvent_026ca4c8,IVar2,puVar6,0x40);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_318;
      (*(code *)PTR__objc_msgSend_02578628)(local_318,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_3b8,0);
    }
    puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_408 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addGestureRecognizer__026ca4a8,puVar4);
    puVar4 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_026cee88;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_410 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addGestureRecognizer__026ca4a8,puVar4);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_toolbarScroll_026b1cb0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_bringSubviewToFront__026ca550);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setTranslateStickerView__026b24c0,local_298);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_floatingOverlays_026b1e00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFloatingOverlays__026b1be8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hintBlur_026b1c90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hintLabel_026b1ca0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__VB__SR);
    _objc_storeStrong(&local_410);
    _objc_storeStrong(&local_408,0);
    _objc_storeStrong(&local_380,0);
    _objc_storeStrong(&local_378,0);
    _objc_storeStrong(&local_318,0);
    _objc_storeStrong(&local_2c8,0);
    _objc_storeStrong(&local_298,0);
    _objc_storeStrong(local_118,0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

