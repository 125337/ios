// wcr_prepareFrameTemplateInfo: @ 00703334

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_prepareFrameTemplateInfo_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double in_d0;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_3b0 [48];
  double local_380;
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined *local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  double local_250;
  double local_248;
  double local_240;
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
  byte local_1d9;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_188;
  double local_180;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_140;
  double local_138;
  undefined8 local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  double dStack_108;
  undefined8 local_f0;
  double dStack_e8;
  undefined8 local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_a0;
  double local_88;
  undefined4 local_7c;
  byte local_51;
  long local_50;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_51 = 0;
  bVar1 = true;
  if (local_38 != 0) {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frameImage_026a7278);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = lVar3;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_CGImage_0269e0e8);
    bVar1 = true;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_templateSize_026a70d0);
      bVar1 = true;
      if (0.0 < in_d0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_templateSize_026a70d0);
        bVar1 = in_d0 <= 0.0;
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar1) {
    local_7c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_templateSize_026a70d0);
    local_88 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_templateSize_026a70d0);
    dVar13 = 0.0;
    uVar8 = 0;
    dVar9 = local_88;
    local_a0 = in_d0;
    FUN_006f8f30();
    local_110 = uVar8;
    dStack_108 = dVar13;
    local_f0 = uVar8;
    dStack_e8 = dVar13;
    local_d0 = uVar8;
    dStack_c8 = dVar13;
    local_c0 = dVar9;
    dStack_b8 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,dVar13,dVar9,in_d0,local_38,PTR_s_setPreparedOutputRect__026a73e8);
    puVar5 = PTR__OBJC_CLASS___CIImage_026ce890;
    puVar4 = PTR__OBJC_CLASS___CIColor_026ce898;
    (*(code *)PTR__objc_msgSend_02578628)
              (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIColor_026ce898,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_imageWithColor__026a71e0);
    _objc_retainAutoreleasedReturnValue();
    dStack_128 = dStack_c8;
    local_130 = local_d0;
    dStack_118 = dStack_b8;
    local_120 = local_c0;
    puVar6 = puVar5;
    dVar12 = dStack_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,dStack_c8,local_c0,dStack_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedBackgroundImage__026a73f0);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    dVar9 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftTop_026a7250);
    dVar13 = local_a0;
    local_138 = dVar9 - dVar12;
    local_140 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightTop_026a7260);
    dVar9 = local_a0;
    local_150 = dVar13 - dVar12;
    local_158 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBottom_026a7268);
    dVar13 = local_a0;
    local_168 = dVar9 - dVar12;
    local_170 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBottom_026a7270);
    puVar5 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    dVar13 = dVar13 - dVar12;
    local_188 = dVar12;
    local_180 = dVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftTop_026a7250);
    dVar9 = local_138;
    local_1a0 = dVar13;
    local_198 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedTopLeft__026a73f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightTop_026a7260);
    dVar12 = local_150;
    local_1b0 = dVar13;
    local_1a8 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedTopRight__026a7400);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBottom_026a7268);
    dVar9 = local_168;
    local_1c0 = dVar13;
    local_1b8 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedBottomLeft__026a7408);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___CIVector_026ce8a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBottom_026a7270);
    dVar12 = local_180;
    local_1d0 = dVar13;
    local_1c8 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(dVar13,puVar5,PTR_s_vectorWithX_Y__026a7258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedBottomRight__026a7410);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_1d8 = DAT_02323d38;
    dVar9 = DAT_02323d38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftTop_026a7250);
    dVar13 = dVar9;
    dVar11 = dVar9;
    local_1f0 = dVar9;
    local_1e8 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBottom_026a7268);
    dVar9 = ABS(dVar9 - dVar13);
    local_1d9 = false;
    local_200 = dVar13;
    local_1f8 = dVar11;
    if (dVar9 <= local_1d8) {
      dVar12 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightTop_026a7260);
      dVar13 = dVar9;
      dVar11 = dVar9;
      local_210 = dVar9;
      local_208 = dVar12;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBottom_026a7270);
      dVar9 = ABS(dVar9 - dVar13);
      local_1d9 = false;
      local_220 = dVar13;
      local_218 = dVar11;
      if (dVar9 <= local_1d8) {
        dVar9 = ABS(local_138 - local_150);
        local_1d9 = false;
        if (dVar9 <= local_1d8) {
          dVar9 = ABS(local_168 - local_180);
          local_1d9 = dVar9 <= local_1d8;
        }
      }
    }
    dVar12 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftTop_026a7250);
    dVar13 = dVar9;
    dVar11 = dVar9;
    local_238 = dVar9;
    local_230 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_leftBottom_026a7268);
    uVar8 = 0x3fe0000000000000;
    dVar10 = (dVar9 + dVar13) * 0.5;
    local_248 = dVar13;
    local_240 = dVar11;
    local_228 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightTop_026a7260);
    dVar9 = dVar10;
    dVar12 = dVar10;
    local_260 = dVar10;
    local_258 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rightBottom_026a7270);
    local_250 = (dVar10 + dVar9) * 0.5;
    local_278 = (local_138 + local_150) * 0.5;
    dVar11 = (local_168 + local_180) * 0.5;
    dVar10 = local_250 - local_228;
    dVar14 = local_278 - dVar11;
    dVar13 = local_228;
    local_280 = dVar11;
    local_270 = dVar9;
    local_268 = dVar12;
    FUN_006f8f30();
    local_2a0 = dVar13;
    dStack_298 = dVar11;
    local_290 = dVar10;
    dStack_288 = dVar14;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedUseAffineVideoRect__026a7418,0);
    dVar13 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    dVar9 = *(double *)PTR__CGRectZero_025782f0;
    dVar11 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    dVar12 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_2e0 = dVar9;
    dStack_2d8 = dVar13;
    local_2d0 = dVar12;
    dStack_2c8 = dVar11;
    local_2c0 = dVar9;
    dStack_2b8 = dVar13;
    local_2b0 = dVar12;
    dStack_2a8 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedAffineVideoRect__026a7420);
    if ((((local_1d9 & 1) != 0) && (dVar13 = 1.0, dVar9 = local_290, 1.0 < local_290)) &&
       (dVar13 = 1.0, dVar9 = dStack_288, 1.0 < dStack_288)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setPreparedUseAffineVideoRect__026a7418,1);
      dStack_2f8 = dStack_298;
      local_300 = local_2a0;
      dStack_2e8 = dStack_288;
      local_2f0 = local_290;
      dStack_318 = dStack_298;
      local_320 = local_2a0;
      dStack_308 = dStack_288;
      local_310 = local_290;
      dVar9 = local_2a0;
      dVar13 = dStack_298;
      dVar12 = local_290;
      dVar11 = dStack_288;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedAffineVideoRect__026a7420);
    }
    puVar5 = PTR__OBJC_CLASS___CIImage_026ce890;
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frameImage_026a7278);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    lVar7 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_CGImage_0269e0e8);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_imageWithCGImage__026a7280,lVar7);
    _objc_retainAutoreleasedReturnValue();
    local_328 = puVar5;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar5 = local_328;
    (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_extent_026a71f0);
    uVar2 = (uint)puVar5;
    local_370 = dVar9;
    dStack_368 = dVar13;
    local_360 = dVar12;
    dStack_358 = dVar11;
    local_348 = dVar9;
    dStack_340 = dVar13;
    local_338 = dVar12;
    dStack_330 = dVar11;
    _CGRectIsEmpty(dVar9,dVar13,dVar12,dVar11);
    puVar5 = local_328;
    if ((((uVar2 & 1) == 0) && (0.0 < local_338)) && (0.0 < dStack_330)) {
      local_378 = local_88 / local_338;
      local_380 = local_a0 / dStack_330;
      _CGAffineTransformMakeScale(local_378,local_380);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_imageByApplyingTransform__026a7208,auStack_3b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_328;
      local_328 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPreparedFrameImage__026a7428,local_328);
    _objc_storeStrong(&local_328,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

