// handleDrawPan: @ 016560fc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::handleDrawPan_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ID IVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double in_d1;
  ID local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_220;
  double local_200;
  double local_1f8;
  double local_1e8;
  double local_1d0;
  double dStack_1c8;
  ID local_1c0;
  double local_1b8;
  double local_1b0;
  byte local_1a1;
  ID local_1a0;
  undefined1 auStack_198 [48];
  undefined *local_168 [3];
  double local_150;
  double dStack_148;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  undefined1 local_101;
  ID local_100;
  undefined *local_f8 [3];
  double local_e0;
  double dStack_d8;
  double local_c0;
  double dStack_b8;
  ID local_a8 [3];
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  int local_6c;
  long local_68;
  SEL local_60;
  ID local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  uVar3 = DAT_02323d40;
  dVar15 = DAT_02323d38;
  uVar2 = DAT_02323c60;
  local_68 = 0;
  dVar12 = DAT_02323d38;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  IVar6 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateMode_026b1e08);
  if ((IVar6 & 1) == 0) {
    local_6c = 1;
  }
  else {
    IVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_textInputOverlay_026b1e18);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar7 = local_68;
    if (IVar6 == 0) {
      IVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawCanvas_026b1bd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_locationInView__026ca798);
      local_80 = dVar12;
      dStack_78 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      lVar7 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_state_026cab20);
      if (lVar7 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_invalidateShapeHoldTimer_026b2118);
        IVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
        if (IVar6 == 9) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectStrokeLayer__026b20c0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setIsMovingSelectedStroke__026b21b0,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCurrentStrokeLayer__026b21b8,0);
          dStack_88 = dStack_78;
          local_90 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,local_58,PTR_s_setPendingTextPoint__026b2190);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          local_6c = 1;
          goto LAB_01658404;
        }
        IVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
        if (IVar6 == 10) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectStrokeLayer__026b20c0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setIsMovingSelectedStroke__026b21b0,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCurrentStrokeLayer__026b21b8,0);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          local_6c = 1;
          goto LAB_01658404;
        }
        IVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,dStack_78,local_58,PTR_s_hitTestStrokeAtPoint__026b21c0);
        _objc_retainAutoreleasedReturnValue();
        local_a8[0] = IVar6;
        if (IVar6 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectStrokeLayer__026b20c0);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectTextOverlay__026b20f8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setIsMovingSelectedStroke__026b21b0,0);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          dStack_d8 = dStack_78;
          local_e0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,local_58,PTR_s_setLastDrawPoint__026b1fd8);
          _CACurrentMediaTime();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLastMoveTime__026b1fe0);
          puVar10 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDrawPath__026b2178);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawPath_026b21d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_80,dStack_78);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          puVar10 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          IVar6 = local_58;
          local_f8[0] = puVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
          puVar10 = local_f8[0];
          uVar4 = DAT_028c6008;
          if (IVar6 == 8) {
            puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(puVar10,uVar4,puVar9,1);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar9 = puVar10;
            (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
            (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setFillColor__026ca948,puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar8 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_CGColor_026ca470);
            (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setStrokeColor__026caa78,puVar8)
            ;
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar10);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_f8[0],PTR_s_setLineWidth__026ca9b0);
          }
          else {
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
            if (IVar6 == 10) {
              puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                         PTR_s_colorWithRed_green_blue_alpha__0269cc48);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              puVar9 = puVar10;
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setFillColor__026ca948,puVar9)
              ;
              (*(code *)PTR__objc_release_02578630)(puVar10);
              puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              puVar9 = puVar10;
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8[0],PTR_s_setStrokeColor__026caa78,puVar9);
              (*(code *)PTR__objc_release_02578630)(puVar10);
              (*(code *)PTR__objc_msgSend_02578628)(0,local_f8[0],PTR_s_setLineWidth__026ca9b0);
            }
            else {
              puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              puVar9 = puVar10;
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setFillColor__026ca948,puVar9)
              ;
              (*(code *)PTR__objc_release_02578630)(puVar10);
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_currentAnnotateStrokeColor_026b20d0);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              IVar11 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8[0],PTR_s_setStrokeColor__026caa78,IVar11);
              (*(code *)PTR__objc_release_02578630)(IVar6);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_currentAnnotateLineWidth_026b20d8);
              (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setLineWidth__026ca9b0);
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8[0],PTR_s_setLineCap__026ca990,
                     *(undefined8 *)PTR__kCALineCapRound_02578408);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f8[0],PTR_s_setLineJoin__026ca9a8,
                     *(undefined8 *)PTR__kCALineJoinRound_02578418);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawPath_026b21d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          IVar11 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGPath_026ca478);
          (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_setPath__026caa08,IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawCanvas_026b1bd8);
          _objc_retainAutoreleasedReturnValue();
          IVar11 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setCurrentStrokeLayer__026b21b8,local_f8[0]);
          _objc_storeStrong(local_f8,0);
          local_6c = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectStrokeLayer__026b20c0,IVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setIsMovingSelectedStroke__026b21b0,1);
          dStack_b8 = dStack_78;
          local_c0 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,local_58,PTR_s_setStrokeMoveLastPoint__026b21c8);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCurrentStrokeLayer__026b21b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDrawPath__026b2178,0);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hintLabel_026b1ca0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          local_6c = 1;
        }
        _objc_storeStrong(local_a8,0);
        if (local_6c != 0) goto LAB_01658404;
      }
      else {
        lVar7 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_state_026cab20);
        if (lVar7 == 2) {
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
          if (IVar6 == 9) {
            local_6c = 1;
            goto LAB_01658404;
          }
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isMovingSelectedStroke_026b21d8);
          local_101 = 0;
          bVar5 = false;
          uVar1 = (IVar6 & 1) != 0;
          if ((bool)uVar1) {
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedStrokeLayer_026b2080);
            _objc_retainAutoreleasedReturnValue();
            bVar5 = IVar6 != 0;
            local_101 = uVar1;
            local_100 = IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar6);
            uVar1 = local_101;
          }
          local_101 = uVar1;
          dVar14 = local_80;
          if (bVar5) {
            dVar13 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokeMoveLastPoint_026b21e0);
            dVar12 = dStack_78;
            local_110 = dVar14 - dVar13;
            local_120 = dVar13;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokeMoveLastPoint_026b21e0);
            local_128 = dVar12 - dVar13;
            dStack_148 = dStack_78;
            local_150 = local_80;
            local_130 = dVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,dStack_78,local_58,PTR_s_setStrokeMoveLastPoint__026b21c8);
            local_48 = local_110;
            if ((dVar15 <= ABS(local_110)) || (local_50 = local_128, dVar15 <= ABS(local_128))) {
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedStrokeLayer_026b2080);
              _objc_retainAutoreleasedReturnValue();
              IVar11 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar6);
              puVar10 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
              if (IVar11 == 0) {
                local_6c = 1;
              }
              else {
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedStrokeLayer_026b2080);
                _objc_retainAutoreleasedReturnValue();
                IVar11 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar10,PTR_s_bezierPathWithCGPath__026a2070,IVar11);
                _objc_retainAutoreleasedReturnValue();
                local_168[0] = puVar10;
                (*(code *)PTR__objc_release_02578630)(IVar6);
                puVar10 = local_168[0];
                _CGAffineTransformMakeTranslation(local_110,local_128);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar10,PTR_s_applyTransform__026b1f20,auStack_198);
                puVar10 = local_168[0];
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGPath_026ca478);
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedStrokeLayer_026b2080);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar6);
                IVar6 = local_58;
                IVar11 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_selectedStrokeLayer_026b2080);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_110,local_128,IVar6,PTR_s_translateBadgeForStroke_dx_dy__026b21e8);
                (*(code *)PTR__objc_release_02578630)(IVar11);
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rebuildSpotlightLayer_026b1e70)
                ;
                local_6c = 1;
                _objc_storeStrong(local_168,0);
              }
            }
            else {
              local_6c = 1;
            }
            goto LAB_01658404;
          }
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
          local_1a1 = 0;
          bVar5 = false;
          if (0 < (long)IVar6) {
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
            _objc_retainAutoreleasedReturnValue();
            local_1a1 = 1;
            local_1a0 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar5 = IVar6 != 0;
          }
          if ((local_1a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1a0);
          }
          if (bVar5) {
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
            _objc_retainAutoreleasedReturnValue();
            IVar11 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1b8 = dVar12;
            local_1b0 = in_d1;
            (*(code *)PTR__objc_release_02578630)(IVar11);
            (*(code *)PTR__objc_release_02578630)(IVar6);
            IVar6 = local_58;
            IVar11 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
            dVar15 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,local_1b0,local_80,dStack_78,IVar6,
                       PTR_s_pathForAnnotateTool_from_to__026b2158,IVar11);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = IVar6;
            if (IVar6 == 0) {
              local_6c = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDrawPath__026b2178,IVar6);
              IVar6 = local_1c0;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGPath_026ca478);
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar6);
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
              if (IVar6 == 8) {
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rebuildSpotlightLayer_026b1e70)
                ;
              }
              else {
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
                if (IVar6 == 10) {
                  puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar2,uVar3,uVar3,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78
                             ,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
                  IVar6 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                  (*(code *)PTR__objc_release_02578630)(puVar10);
                  puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
                  IVar6 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                  (*(code *)PTR__objc_release_02578630)(puVar10);
                }
                else {
                  IVar6 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_58,PTR_s_currentAnnotateStrokeColor_026b20d0);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGColor_026ca470);
                  IVar11 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(IVar11);
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_58,PTR_s_currentAnnotateLineWidth_026b20d8);
                  IVar6 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(dVar15);
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                }
              }
              dStack_1c8 = dStack_78;
              local_1d0 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_80,local_58,PTR_s_setLastDrawPoint__026b1fd8);
              local_6c = 1;
            }
            _objc_storeStrong(&local_1c0,0);
            if (local_6c != 0) goto LAB_01658404;
          }
          dVar15 = local_80;
          dVar14 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastDrawPoint_026b1fa8);
          dVar12 = dStack_78;
          dVar15 = dVar15 - dVar14;
          local_1f8 = dVar14;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastDrawPoint_026b1fa8);
          local_30 = dVar12 - dVar14;
          local_200 = dVar14;
          local_28 = dVar15;
          _hypot(dVar15,local_30);
          local_1e8 = dVar15;
          if (dVar15 < DAT_02323d00) {
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_shapeHoldTimer_026b2108);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (IVar6 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_scheduleShapeHoldTimer_026b21f0);
            }
            local_6c = 1;
            goto LAB_01658404;
          }
          local_230 = local_80;
          local_220 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,local_58,PTR_s_setLastDrawPoint__026b1fd8);
          _CACurrentMediaTime();
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLastMoveTime__026b1fe0);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR__OBJC_CLASS___NSValue_026ce1f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,dStack_78,PTR__OBJC_CLASS___NSValue_026ce1f0,
                     PTR_s_valueWithCGPoint__0269e328);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar10);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawPath_026b21d0);
          _objc_retainAutoreleasedReturnValue();
          dVar15 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,dStack_78);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_drawPath_026b21d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGPath_026ca478);
          IVar11 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentAnnotateStrokeColor_026b20d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_CGColor_026ca470);
          IVar11 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentAnnotateLineWidth_026b20d8);
          IVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar15);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_scheduleShapeHoldTimer_026b21f0);
        }
        else {
          lVar7 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_state_026cab20);
          if ((lVar7 == 3) ||
             (lVar7 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_state_026cab20)
             , lVar7 == 4)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_invalidateShapeHoldTimer_026b2118);
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
            if (IVar6 == 9) {
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
              _objc_retainAutoreleasedReturnValue();
              IVar11 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_240 = dVar12;
              dStack_238 = in_d1;
              (*(code *)PTR__objc_release_02578630)(IVar11);
              (*(code *)PTR__objc_release_02578630)(IVar6);
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
              _objc_retainAutoreleasedReturnValue();
              IVar11 = IVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar5 = true;
              if (IVar11 != 0) {
                dVar15 = local_80 - local_240;
                local_40 = dStack_78 - dStack_238;
                local_38 = dVar15;
                _hypot(dVar15,local_40);
                bVar5 = dVar15 < 16.0;
              }
              (*(code *)PTR__objc_release_02578630)(IVar6);
              if (bVar5) {
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
                _objc_retainAutoreleasedReturnValue();
                IVar11 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                if (IVar11 == 0) {
                  dStack_248 = dStack_78;
                  local_250 = local_80;
                }
                else {
                  dStack_248 = dStack_238;
                  local_250 = local_240;
                }
                dStack_258 = dStack_248;
                local_260 = local_250;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_250,dStack_248,local_58,PTR_s_setPendingTextPoint__026b2190);
                (*(code *)PTR__objc_release_02578630)(IVar6);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_presentAnnotateTextInput_026b2198);
              }
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar6);
              local_6c = 1;
              goto LAB_01658404;
            }
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isMovingSelectedStroke_026b21d8);
            if ((IVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_setIsMovingSelectedStroke__026b21b0,0);
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rebuildSpotlightLayer_026b1e70);
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hintLabel_026b1ca0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar6);
              local_6c = 1;
              goto LAB_01658404;
            }
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
            if (IVar6 == 0) {
              _CACurrentMediaTime();
              dVar15 = dVar12;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastMoveTime_026b2018);
              in_d1 = 0.35;
              if (0.35 <= dVar12 - dVar15) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_applyRecognizedShapeIfPossible_026b2180);
              }
            }
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (IVar6 != 0) {
              IVar6 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_annotateShapeTool_026b1e28);
              if (IVar6 == 10) {
                dStack_268 = dStack_78;
                local_270 = local_80;
                IVar6 = local_58;
                dVar15 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
                _objc_retainAutoreleasedReturnValue();
                IVar11 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar6);
                if (IVar11 != 0) {
                  IVar6 = local_58;
                  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
                  _objc_retainAutoreleasedReturnValue();
                  IVar11 = IVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_280 = dVar15;
                  dStack_278 = in_d1;
                  local_270 = dVar15;
                  dStack_268 = in_d1;
                  (*(code *)PTR__objc_release_02578630)(IVar11);
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                }
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar6);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_setCurrentStrokeLayer__026b21b8,0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_270,dStack_268,local_58,PTR_s_placeSerialBadgeAtPoint__026b21a0);
              }
              else {
                IVar6 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentStrokeLayer_026b2078);
                _objc_retainAutoreleasedReturnValue();
                IVar11 = local_58;
                local_288 = IVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokeLayers_026b2088);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(IVar11);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_setCurrentStrokeLayer__026b21b8);
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rebuildSpotlightLayer_026b1e70)
                ;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_selectStrokeLayer__026b20c0,local_288);
                _objc_storeStrong(&local_288,0);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_refreshPenUndoEnabled_026b21a8);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDrawPath__026b2178,0);
            IVar6 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_strokePoints_026b2160);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar6);
          }
        }
      }
      local_6c = 0;
    }
    else {
      local_6c = 1;
    }
  }
LAB_01658404:
  _objc_storeStrong(&local_68,0);
  return;
}

