// rebuildSpotlightLayer @ 0164e4bc

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::rebuildSpotlightLayer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_d0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_d2;
  undefined8 uVar12;
  undefined8 in_d3;
  undefined8 uVar13;
  undefined *local_380;
  undefined *local_378;
  uint local_2bc;
  uint local_2b4;
  ulong local_298;
  ulong local_290;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  byte local_1b2;
  byte local_1b1;
  ID local_1b0;
  byte local_1a1;
  ID local_1a0;
  byte local_191;
  long local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  long local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar2;
  _memset(auStack_188,0,0x40);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_strokeLayers_026b2088);
  _objc_retainAutoreleasedReturnValue();
  local_290 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_290 != 0) {
    lVar7 = *local_178;
    local_298 = 0;
    do {
      do {
        if (*local_178 - lVar7 != 0) {
          _objc_enumerationMutation(*local_178 - lVar7,IVar3);
        }
        lVar8 = *(long *)(local_180 + local_298 * 8);
        local_148 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_path_0269d4d8);
        local_191 = 0;
        local_2b4 = 0;
        if (lVar8 != 0) {
          lVar8 = local_148;
          _objc_getAssociatedObject(local_148,DAT_028c6008);
          _objc_retainAutoreleasedReturnValue();
          local_191 = 1;
          local_190 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2b4 = (uint)lVar8;
        }
        if ((local_191 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_190);
        }
        if ((local_2b4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_addObject__0269d180,local_148);
        }
        local_298 = local_298 + 1;
      } while (local_298 < local_290);
      local_290 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_298 = 0;
    } while (local_290 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentStrokeLayer_026b2078);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1a1 = 0;
  local_1b1 = 0;
  local_2bc = 0;
  if (IVar4 != 0) {
    IVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentStrokeLayer_026b2078);
    _objc_retainAutoreleasedReturnValue();
    local_1a1 = 1;
    local_1a0 = IVar4;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_2bc = (uint)IVar4;
  }
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if ((local_1a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1a0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_140;
  if ((local_2bc & 1) != 0) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentStrokeLayer_026b2078);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateMode_026b1e08);
  local_1b2 = false;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateShapeTool_026b1e28);
    local_1b2 = IVar3 == 8;
  }
  puVar2 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  if ((puVar2 == (undefined *)0x0) && ((local_1b2 & 1) == 0)) {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSpotlightLayer__026b2098,0);
    local_1b8 = 1;
  }
  else {
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setSpotlightLayer__026b2098);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_drawCanvas_026b1bd8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_insertSublayer_atIndex__026ca738,IVar5,0);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_annotateSpotlightOpacity_026b20a0);
    uVar10 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_hasActiveCropSelection_026b1f60);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_imageDisplayFrame_026b1f90);
      local_1d8 = uVar10;
      local_1d0 = in_d0;
      local_1c8 = in_d2;
      local_1c0 = in_d3;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_cropRect_026b1ec0);
      local_1d8 = uVar10;
      local_1d0 = in_d0;
      local_1c8 = in_d2;
      local_1c0 = in_d3;
    }
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    uVar10 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPathWithRect__026a03f8);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar2;
    _memset(auStack_228,0,0x40);
    puVar2 = local_140;
    (*(code *)PTR__objc_retain_02578638)();
    local_378 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10);
    uVar11 = local_1d0;
    uVar12 = local_1c8;
    uVar13 = local_1c0;
    if (local_378 != (undefined *)0x0) {
      lVar7 = *local_218;
      local_380 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar7 != 0) {
            _objc_enumerationMutation(*local_218 - lVar7,puVar2);
          }
          puVar1 = local_1e0;
          puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          uVar9 = *(undefined8 *)(local_220 + (long)local_380 * 8);
          local_1e8 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_path_0269d4d8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_bezierPathWithCGPath__026a2070,uVar9);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendPath__026a0408);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                   0x10);
        local_380 = (undefined *)0x0;
      } while (local_378 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_drawCanvas_026b1bd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar10,uVar11,uVar12,uVar13);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_1e0;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGPath_026ca478);
    IVar3 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_spotlightLayer_026b2090);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_1e0,0);
    local_1b8 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

