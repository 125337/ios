// wcr_compositedWatermarkImageForSourceImage:renderSize:layers: @ 006fb138

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x30 bytes */

ID __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_compositedWatermarkImageForSourceImage_renderSize_layers_
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2,ID param_3,
          CGSize param_4,ID param_5)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  double in_d0;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double in_d1;
  double dVar15;
  double dVar16;
  cfstringStruct *local_728;
  cfstringStruct *local_708;
  ulong local_5d0;
  ulong local_5c8;
  undefined *local_5a0;
  cfstringStruct *local_408;
  cfstringStruct *local_400;
  undefined1 auStack_3f8 [48];
  undefined1 auStack_3c8 [48];
  double local_398;
  double local_380;
  double local_368;
  double local_340;
  double dStack_338;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  cfstringStruct *local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  cfstringStruct *local_2a0;
  undefined *local_298;
  double local_290;
  double dStack_288;
  undefined *local_270;
  cfstringStruct *local_268;
  double local_260;
  double dStack_258;
  double local_240;
  double dStack_238;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  byte local_1f1;
  undefined1 auStack_1f0 [48];
  double local_1c0;
  double local_1b8;
  double local_190;
  double local_188;
  undefined1 auStack_180 [64];
  double local_140;
  double local_138;
  cfstringStruct *local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_104;
  double local_100;
  double dStack_f8;
  ulong local_e0;
  cfstringStruct *local_d8;
  SEL local_d0;
  cfstringStruct *local_c8;
  double local_c0;
  double dStack_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  local_d0 = param_2;
  local_c8 = (cfstringStruct *)param_1;
  local_c0 = in_d0;
  dStack_b8 = in_d1;
  _objc_storeStrong(&local_d8,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_4.field0_0x0);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    dVar15 = 0.0;
    dVar11 = 0.0;
    dVar16 = local_c0;
    dVar12 = dStack_b8;
    FUN_006f8f30();
    pcVar10 = local_d8;
    local_128 = dVar11;
    dStack_120 = dVar15;
    local_118 = dVar16;
    dStack_110 = dVar12;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_extent_026a71f0);
    uVar3 = (uint)pcVar10;
    local_140 = dVar15;
    local_138 = dVar11;
    _CGRectIsEmpty();
    dVar14 = dVar15;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_extent_026a71f0);
      dVar12 = -dVar12;
      dVar13 = dVar12;
      dVar14 = dVar16;
      local_190 = dVar15;
      local_188 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_extent_026a71f0);
      dVar16 = -dVar15;
      local_1c0 = dVar13;
      local_1b8 = dVar15;
      _CGAffineTransformMakeTranslation();
      pcVar10 = local_130;
      _memcpy(auStack_1f0,auStack_180,0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar10,PTR_s_imageByApplyingTransform__026a7208,auStack_1f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_130;
      local_130 = pcVar10;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      dVar11 = dVar15;
    }
    pcVar10 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_extent_026a71f0);
    local_1f1 = (byte)pcVar10;
    dStack_238 = dStack_120;
    local_240 = local_128;
    local_218 = dVar12;
    local_210 = dVar16;
    local_208 = dVar14;
    local_200 = dVar11;
    _CGRectContainsRect(dVar12,dVar16,dVar14,dVar11,local_128,dStack_120,local_118,dStack_110);
    dStack_258 = dStack_120;
    local_260 = local_128;
    pcVar6 = local_130;
    dVar16 = local_128;
    dVar12 = dStack_120;
    dVar14 = local_118;
    dVar11 = dStack_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_imageByCroppingToRect__026a71e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = local_130;
    local_130 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar10);
    pcVar10 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = PTR__OBJC_CLASS___CIImage_026ce890;
    local_268 = pcVar10;
    if ((local_1f1 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___CIColor_026ce898;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___CIColor_026ce898,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_imageWithColor__026a71e0);
      _objc_retainAutoreleasedReturnValue();
      dStack_288 = dStack_120;
      local_290 = local_128;
      puVar7 = puVar4;
      dVar16 = local_128;
      dVar12 = dStack_120;
      dVar14 = local_118;
      dVar11 = dStack_110;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_270 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = PTR__OBJC_CLASS___CIFilter_026ce8a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                 &cf_CISourceOverCompositing);
      _objc_retainAutoreleasedReturnValue();
      local_298 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setValue_forKey__0269d300,local_130,
                 *(undefined8 *)PTR__kCIInputImageKey_02578700);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_298,PTR_s_setValue_forKey__0269d300,local_270,
                 *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
      puVar4 = local_298;
      (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_outputImage_026a7240);
      _objc_retainAutoreleasedReturnValue();
      local_5a0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_5a0 = local_270;
      }
      _objc_storeStrong(&local_268,local_5a0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_298);
      _objc_storeStrong(&local_270,0);
    }
    _memset(auStack_2e0,0,0x40);
    uVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_5c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_a8,0x10);
    if (local_5c8 != 0) {
      lVar9 = *local_2d0;
      local_5d0 = 0;
      do {
        do {
          dVar15 = dVar16;
          dVar13 = dVar12;
          if (*local_2d0 - lVar9 != 0) {
            _objc_enumerationMutation(*local_2d0 - lVar9,uVar2);
            dVar15 = dVar16;
            dVar13 = dVar12;
          }
          pcVar10 = *(cfstringStruct **)(local_2d8 + local_5d0 * 8);
          local_2a0 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          dVar16 = dVar15;
          dVar12 = dVar13;
          if (pcVar10 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_imageSize_026a7288);
            bVar1 = true;
            dVar16 = dVar15;
            dVar12 = dVar15;
            local_2f0 = dVar15;
            local_2e8 = dVar13;
            if (0.0 < dVar15) {
              (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_imageSize_026a7288);
              bVar1 = dVar16 <= 0.0;
              dVar12 = dVar15;
              local_300 = dVar15;
              local_2f8 = dVar16;
            }
          }
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          if (!bVar1) {
            pcVar10 = local_2a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_preparedImage_026a7290);
            _objc_retainAutoreleasedReturnValue();
            local_308 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              dStack_338 = dStack_b8;
              local_340 = local_c0;
              pcVar10 = local_c8;
              dVar16 = local_c0;
              dVar12 = dStack_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_wcr_watermarkRectForLayer_render_026a7298,local_2a0);
              uVar3 = (uint)pcVar10;
              local_328 = dVar16;
              dStack_320 = dVar12;
              local_318 = dVar14;
              dStack_310 = dVar11;
              _CGRectIsEmpty();
              if ((((uVar3 & 1) == 0) && (dVar16 = local_318, 0.0 < local_318)) &&
                 (dVar16 = dStack_310, 0.0 < dStack_310)) {
                dVar12 = local_318;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_imageSize_026a7288);
                dVar16 = dStack_310;
                local_368 = local_318 / dVar12;
                dVar14 = dStack_310;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_imageSize_026a7288);
                local_380 = dVar16 / dVar12;
                local_398 = (dStack_b8 - dStack_320) - dStack_310;
                pcVar6 = local_2a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_image_026ca678);
                _objc_retainAutoreleasedReturnValue();
                _CGAffineTransformMakeScale(local_368,local_380);
                pcVar8 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar6,PTR_s_imageByApplyingTransform__026a7208,auStack_3c8);
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = local_308;
                local_308 = pcVar8;
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                pcVar10 = local_308;
                dVar12 = local_398;
                _CGAffineTransformMakeTranslation();
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar10,PTR_s_imageByApplyingTransform__026a7208,auStack_3f8);
                _objc_retainAutoreleasedReturnValue();
                pcVar6 = local_308;
                local_308 = pcVar10;
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                pcVar6 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_opacity_026a1fa0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar6,PTR_s_wcr_imageByApplyingOpacity_toIma_026a72a0,local_308);
                _objc_retainAutoreleasedReturnValue();
                pcVar10 = local_308;
                local_308 = pcVar6;
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                dVar16 = local_328;
                goto LAB_006fbdc0;
              }
              local_104 = 3;
            }
            else {
LAB_006fbdc0:
              pcVar10 = local_c8;
              if (local_308 == (cfstringStruct *)0x0) {
                local_104 = 3;
              }
              else {
                pcVar6 = local_2a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_blendMode_026a72a8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar10,PTR_s_wcr_blendFilterNameForValue__026a72b0,pcVar6);
                _objc_retainAutoreleasedReturnValue();
                local_708 = pcVar10;
                if (pcVar10 == (cfstringStruct *)0x0) {
                  local_708 = &cf_CISourceOverCompositing;
                }
                pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___CIFilter_026ce8a0;
                local_400 = pcVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___CIFilter_026ce8a0,PTR_s_filterWithName__026a7210,
                           local_708);
                _objc_retainAutoreleasedReturnValue();
                local_408 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar6,PTR_s_setValue_forKey__0269d300,local_308,
                           *(undefined8 *)PTR__kCIInputImageKey_02578700);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_408,PTR_s_setValue_forKey__0269d300,local_268,
                           *(undefined8 *)PTR__kCIInputBackgroundImageKey_025786f8);
                pcVar10 = local_408;
                (*(code *)PTR__objc_msgSend_02578628)(local_408,PTR_s_outputImage_026a7240);
                _objc_retainAutoreleasedReturnValue();
                local_728 = pcVar10;
                if (pcVar10 == (cfstringStruct *)0x0) {
                  local_728 = local_268;
                }
                _objc_storeStrong(&local_268,local_728);
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                _objc_storeStrong(&local_408);
                _objc_storeStrong(&local_400,0);
                local_104 = 0;
              }
            }
            _objc_storeStrong(&local_308,0);
          }
          local_5d0 = local_5d0 + 1;
        } while (local_5d0 < local_5c8);
        local_5c8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_a8,0x10
                  );
        local_5d0 = 0;
      } while (local_5c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar10 = local_268;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_128,dStack_120,local_118,dStack_110,local_268,
               PTR_s_imageByCroppingToRect__026a71e8);
    _objc_retainAutoreleasedReturnValue();
    local_104 = 1;
    local_b0 = pcVar10;
    _objc_storeStrong(&local_268);
    _objc_storeStrong(&local_130,0);
  }
  else {
    dStack_f8 = dStack_b8;
    local_100 = local_c0;
    pcVar10 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,dStack_b8,local_c8,PTR_s_wcr_legacyCompositedWatermarkIma_026a71c8,local_d8,
               local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_104 = 1;
    local_b0 = pcVar10;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

