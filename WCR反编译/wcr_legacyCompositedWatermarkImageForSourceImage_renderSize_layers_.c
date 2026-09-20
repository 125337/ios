// wcr_legacyCompositedWatermarkImageForSourceImage:renderSize:layers: @ 006fc1a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

ID __thiscall
WCRefineScreenRecordingFrameProcessor::
wcr_legacyCompositedWatermarkImageForSourceImage_renderSize_layers_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3,
          CGSize param_4,ID param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  double in_d0;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double in_d1;
  double dVar16;
  double dVar17;
  undefined *local_670;
  cfstringStruct *local_650;
  ulong local_520;
  ulong local_518;
  undefined *local_4f0;
  undefined *local_3a0;
  cfstringStruct *local_398;
  undefined1 auStack_390 [48];
  undefined1 auStack_360 [48];
  cfstringStruct *local_330;
  double local_328;
  double local_310;
  double local_2f8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  cfstringStruct *local_240;
  undefined *local_238;
  double local_230;
  double dStack_228;
  undefined *local_208;
  double local_200;
  double dStack_1f8;
  undefined *local_1d8;
  undefined1 auStack_1d0 [48];
  double local_1a0;
  double local_198;
  double local_170;
  double local_168;
  undefined1 auStack_160 [64];
  double local_120;
  double local_118;
  undefined8 local_110 [3];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  SEL local_c8;
  cfstringStruct *local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  undefined8 uVar5;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = (cfstringStruct *)param_1;
  local_b8 = in_d0;
  dStack_b0 = in_d1;
  _objc_storeStrong(&local_d0,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4.field0_0x0);
  dVar16 = 0.0;
  dVar12 = 0.0;
  dVar14 = local_b8;
  dVar13 = dStack_b0;
  FUN_006f8f30();
  uVar5 = local_d0;
  local_f8 = dVar12;
  dStack_f0 = dVar16;
  local_e8 = dVar14;
  dStack_e0 = dVar13;
  (*(code *)PTR__objc_retain_02578638)();
  local_110[0] = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_extent_026a71f0);
  uVar4 = (uint)uVar5;
  local_120 = dVar16;
  local_118 = dVar12;
  _CGRectIsEmpty();
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_110[0],PTR_s_extent_026a71f0);
    dVar14 = -dVar13;
    local_170 = dVar16;
    local_168 = dVar12;
    (*(code *)PTR__objc_msgSend_02578628)(local_110[0],PTR_s_extent_026a71f0);
    local_1a0 = dVar14;
    local_198 = dVar16;
    _CGAffineTransformMakeTranslation(-dVar13,-dVar16);
    uVar5 = local_110[0];
    _memcpy(auStack_1d0,auStack_160,0x30);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_imageByApplyingTransform__026a7208,auStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_110[0];
    local_110[0] = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  puVar7 = PTR__OBJC_CLASS___CIImage_026ce890;
  puVar6 = PTR__OBJC_CLASS___CIColor_026ce898;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIColor_026ce898,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_imageWithColor__026a71e0);
  _objc_retainAutoreleasedReturnValue();
  dStack_1f8 = dStack_f0;
  local_200 = local_f8;
  puVar8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,dStack_f0,local_e8,dStack_e0);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar7 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
             &cf_CISourceOverCompositing);
  _objc_retainAutoreleasedReturnValue();
  dStack_228 = dStack_f0;
  local_230 = local_f8;
  uVar5 = local_110[0];
  dVar14 = local_f8;
  dVar12 = dStack_f0;
  dVar13 = local_e8;
  dVar16 = dStack_e0;
  local_208 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_110[0],PTR_s_imageByCroppingToRect__026a71e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_setValue_forKey__0269d300,uVar5,
             *(undefined8 *)PTR__kCIInputImageKey_02578700);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_208,PTR_s_setValue_forKey__0269d300,local_1d8,
             *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
  puVar7 = local_208;
  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_outputImage_026a7240);
  _objc_retainAutoreleasedReturnValue();
  local_4f0 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    local_4f0 = local_1d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = local_4f0;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  _memset(auStack_280,0,0x40);
  uVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_518 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,0x10);
  if (local_518 != 0) {
    lVar10 = *local_270;
    local_520 = 0;
    do {
      do {
        dVar15 = dVar14;
        dVar17 = dVar12;
        if (*local_270 - lVar10 != 0) {
          _objc_enumerationMutation(*local_270 - lVar10,uVar3);
          dVar15 = dVar14;
          dVar17 = dVar12;
        }
        pcVar11 = *(cfstringStruct **)(local_278 + local_520 * 8);
        local_240 = pcVar11;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        dVar14 = dVar15;
        dVar12 = dVar17;
        if (pcVar11 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_imageSize_026a7288);
          bVar1 = true;
          dVar14 = dVar15;
          dVar12 = dVar15;
          local_290 = dVar15;
          local_288 = dVar17;
          if (0.0 < dVar15) {
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_imageSize_026a7288);
            bVar1 = dVar14 <= 0.0;
            dVar12 = dVar15;
            local_2a0 = dVar15;
            local_298 = dVar14;
          }
        }
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        if (!bVar1) {
          pcVar11 = local_c0;
          dVar14 = local_b8;
          dVar12 = dStack_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_wcr_watermarkRectForLayer_render_026a7298,local_240);
          uVar4 = (uint)pcVar11;
          local_2c0 = dVar14;
          dStack_2b8 = dVar12;
          local_2b0 = dVar13;
          dStack_2a8 = dVar16;
          _CGRectIsEmpty();
          if ((((uVar4 & 1) == 0) && (dVar14 = local_2b0, 0.0 < local_2b0)) &&
             (dVar14 = dStack_2a8, 0.0 < dStack_2a8)) {
            dVar12 = local_2b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_imageSize_026a7288);
            dVar14 = dStack_2a8;
            local_2f8 = local_2b0 / dVar12;
            dVar13 = dStack_2a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_imageSize_026a7288);
            local_310 = dVar14 / dVar12;
            local_328 = (dStack_b0 - dStack_2b8) - dStack_2a8;
            pcVar11 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            _CGAffineTransformMakeScale(local_2f8,local_310);
            pcVar9 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar11,PTR_s_imageByApplyingTransform__026a7208,auStack_360);
            _objc_retainAutoreleasedReturnValue();
            local_330 = pcVar9;
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            pcVar11 = local_330;
            dVar12 = local_328;
            _CGAffineTransformMakeTranslation();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar11,PTR_s_imageByApplyingTransform__026a7208,auStack_390);
            _objc_retainAutoreleasedReturnValue();
            pcVar9 = local_330;
            local_330 = pcVar11;
            (*(code *)PTR__objc_release_02578630)(pcVar9);
            pcVar9 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_opacity_026a1fa0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar9,PTR_s_wcr_imageByApplyingOpacity_toIma_026a72a0,local_330);
            _objc_retainAutoreleasedReturnValue();
            pcVar11 = local_330;
            local_330 = pcVar9;
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            pcVar11 = local_c0;
            pcVar9 = local_240;
            (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_blendMode_026a72a8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar11,PTR_s_wcr_blendFilterNameForValue__026a72b0,pcVar9);
            _objc_retainAutoreleasedReturnValue();
            local_650 = pcVar11;
            if (pcVar11 == (cfstringStruct *)0x0) {
              local_650 = &cf_CISourceOverCompositing;
            }
            puVar7 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
            local_398 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,local_650)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_3a0 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_setValue_forKey__0269d300,local_330,
                       *(undefined8 *)PTR__kCIInputImageKey_02578700);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_3a0,PTR_s_setValue_forKey__0269d300,local_238,
                       *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
            puVar7 = local_3a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3a0,PTR_s_outputImage_026a7240);
            _objc_retainAutoreleasedReturnValue();
            local_670 = puVar7;
            if (puVar7 == (undefined *)0x0) {
              local_670 = local_238;
            }
            _objc_storeStrong(&local_238,local_670);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            _objc_storeStrong(&local_3a0);
            _objc_storeStrong(&local_398,0);
            _objc_storeStrong(&local_330,0);
            dVar14 = local_2c0;
          }
        }
        local_520 = local_520 + 1;
      } while (local_520 < local_518);
      local_518 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_a8,0x10);
      local_520 = 0;
    } while (local_518 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar7 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,dStack_f0,local_e8,dStack_e0,local_238,PTR_s_imageByCroppingToRect__026a71e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_238);
  _objc_storeStrong(&local_208,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(local_110,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar7;
}

