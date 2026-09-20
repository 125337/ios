// mergeDrawingIntoImageIfNeeded @ 01660518

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::mergeDrawingIntoImageIfNeeded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  double in_d0;
  double dVar9;
  double dVar10;
  double in_d1;
  undefined8 uVar11;
  double in_d2;
  double in_d3;
  ulong local_4c8;
  ulong local_4c0;
  double local_460;
  double local_458;
  uint local_41c;
  uint local_3dc;
  ulong local_3b0;
  ulong local_3a8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  undefined8 local_2b0;
  ID local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_280;
  double local_278;
  double local_270;
  ulong local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined *local_1b8;
  double local_1b0;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  ID local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_141;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_141 = 0;
  bVar2 = true;
  uVar1 = IVar3 != 0;
  if ((bool)uVar1) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_141 = uVar1;
    local_140 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_141;
  }
  local_141 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_imageDisplayFrame_026b1f90);
    local_168 = in_d0;
    local_160 = in_d1;
    local_158 = in_d2;
    local_150 = in_d3;
    _CGRectIsEmpty(in_d0,in_d1,in_d2);
    if ((IVar3 & 1) == 0) {
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar4 = local_130;
      local_178 = in_d0;
      local_170 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _UIGraphicsBeginImageContextWithOptions(local_178,local_170,0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      dVar9 = *(double *)PTR__CGPointZero_025782e0;
      uVar11 = *(undefined8 *)(PTR__CGPointZero_025782e0 + 8);
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      _UIGraphicsGetCurrentContext();
      local_180 = IVar3;
      _CGContextSaveGState(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar10 = dVar9 / local_158;
      local_198 = dVar9;
      local_190 = uVar11;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      local_188 = dVar10;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1b0 = dVar10;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_1a0 = local_158 / local_150;
      _CGContextScaleCTM(local_188,local_158 / local_150,local_180);
      dVar9 = -local_168;
      local_458 = -local_160;
      _CGContextTranslateCTM(local_180);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
      local_460 = dVar9;
      if (IVar4 != 0) {
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_bezierPathWithCGPath__026a2070,IVar4);
        _objc_retainAutoreleasedReturnValue();
        local_1b8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_setUsesEvenOddFillRule__026b22e8,1);
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateSpotlightOpacity_026b20a0);
        local_460 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_fill_026a3198);
        _objc_storeStrong(&local_1b8,0);
        local_458 = dVar9;
      }
      _memset(auStack_200,0,0x40);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_strokeLayers_026b2088);
      _objc_retainAutoreleasedReturnValue();
      local_3a8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3a8 != 0) {
        lVar7 = *local_1f0;
        local_3b0 = 0;
        do {
          do {
            if (*local_1f0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1f0 - lVar7,IVar3);
            }
            uVar8 = *(ulong *)(local_1f8 + local_3b0 * 8);
            local_1c0 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_path_0269d4d8);
            if (uVar8 != 0) {
              uVar8 = local_1c0;
              _objc_getAssociatedObject(local_1c0,DAT_028c6008);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar8);
              puVar5 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
              if ((uVar6 & 1) == 0) {
                uVar8 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_path_0269d4d8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar5,PTR_s_bezierPathWithCGPath__026a2070,uVar8);
                _objc_retainAutoreleasedReturnValue();
                uVar8 = local_1c0;
                local_208 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_fillColor_026a80e8);
                local_211 = 0;
                local_3dc = 0;
                if (uVar8 != 0) {
                  uVar8 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_fillColor_026a80e8);
                  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                  _objc_retainAutoreleasedReturnValue();
                  local_211 = 1;
                  local_210 = puVar5;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
                  _CGColorEqualToColor(uVar8,puVar5);
                  local_3dc = (uint)uVar8 ^ 1;
                }
                if ((local_211 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_210);
                }
                puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                if ((local_3dc & 1) != 0) {
                  uVar8 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_fillColor_026a80e8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_colorWithCGColor__0269e058,uVar8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_fill_026a3198);
                }
                uVar8 = local_1c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_strokeColor_026a0398);
                local_221 = 0;
                local_41c = 0;
                if (uVar8 != 0) {
                  uVar8 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_strokeColor_026a0398);
                  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                  _objc_retainAutoreleasedReturnValue();
                  local_221 = 1;
                  local_220 = puVar5;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
                  _CGColorEqualToColor(uVar8,puVar5);
                  local_41c = (uint)uVar8 ^ 1;
                }
                if ((local_221 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_220);
                }
                puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
                if ((local_41c & 1) != 0) {
                  uVar8 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_strokeColor_026a0398);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_colorWithCGColor__0269e058,uVar8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  dVar9 = 2.0;
                  local_230 = 2.0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_lineWidth_026a0390);
                  in_d0 = 0.5;
                  local_240 = local_188;
                  local_248 = DAT_02323d38;
                  if (DAT_02323d38 <= local_188) {
                    local_458 = local_188;
                  }
                  else {
                    local_458 = DAT_02323d38;
                  }
                  local_250 = local_458;
                  local_458 = (dVar9 * (local_188 + local_1a0) * 0.5) / local_458;
                  local_460 = local_458;
                  if (local_458 <= local_230) {
                    local_460 = local_230;
                  }
                  local_258 = local_460;
                  local_238 = local_458;
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setLineWidth__026ca9b0);
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_setLineCapStyle__026a31c0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_208,PTR_s_setLineJoinStyle__026a31b8,1);
                  (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_stroke_026a31c8);
                }
                uVar8 = local_1c0;
                _objc_getAssociatedObject(local_1c0,DAT_028c6018);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
                local_260 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((uVar8 & 1) != 0) {
                  IVar4 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_drawCanvas_026b1bd8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_bounds_026ca548);
                  local_2a0 = local_460;
                  local_298 = local_458;
                  local_290 = in_d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar4,PTR_s_convertRect_fromView__026a9178,local_260);
                  local_280 = local_460;
                  local_278 = local_458;
                  local_270 = in_d0;
                  (*(code *)PTR__objc_release_02578630)(IVar4);
                  _CGContextSaveGState(local_180);
                  local_460 = local_280;
                  local_458 = local_278;
                  _CGContextTranslateCTM(local_180);
                  uVar8 = local_260;
                  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_layer_026ca788);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar8);
                  _CGContextRestoreGState(local_180);
                }
                _objc_storeStrong(&local_260);
                _objc_storeStrong(&local_208,0);
              }
            }
            local_3b0 = local_3b0 + 1;
          } while (local_3b0 < local_3a8);
          local_3a8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_a8,
                     0x10);
          local_3b0 = 0;
        } while (local_3a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_180;
      _CGContextRestoreGState();
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_2a8 = IVar3;
      _UIGraphicsEndImageContext();
      if (local_2a8 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setImage__026ca978,local_2a8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_invalidatePostProcessPipeline_026b2300);
      }
      _memset(auStack_2f0,0,0x40);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_strokeLayers_026b2088);
      _objc_retainAutoreleasedReturnValue();
      local_4c0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4c0 != 0) {
        lVar7 = *local_2e0;
        local_4c8 = 0;
        do {
          do {
            if (*local_2e0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_2e0 - lVar7,IVar3);
            }
            local_2b0 = *(undefined8 *)(local_2e8 + local_4c8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_removeBadgeForStroke__026b2308,local_2b0);
            (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_removeFromSuperlayer_026ca7f8);
            local_4c8 = local_4c8 + 1;
          } while (local_4c8 < local_4c0);
          local_4c0 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_128,
                     0x10);
          local_4c8 = 0;
        } while (local_4c0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_strokeLayers_026b2088);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSpotlightLayer__026b2098);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCurrentStrokeLayer__026b21b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectStrokeLayer__026b20c0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setDrawPath__026b2178,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_refreshPenUndoEnabled_026b21a8);
      _objc_storeStrong(&local_2a8,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

