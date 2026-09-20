// redrawCanvas @ 01d4a22c

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::redrawCanvas(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_d1;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *local_428;
  undefined *local_3f0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined *local_260;
  ID local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  ID local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  undefined *local_128;
  undefined *local_120;
  ID local_118;
  undefined8 local_110;
  byte local_101;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  uVar18 = DAT_02339db0;
  uVar6 = DAT_02339af0;
  uVar5 = DAT_02324020;
  uVar4 = DAT_02323e70;
  uVar3 = DAT_02323e40;
  uVar2 = DAT_02323e10;
  uVar17 = DAT_02323db8;
  uVar1 = DAT_02323d48;
  uVar14 = DAT_02323d40;
  uVar19 = DAT_02323d00;
  uVar16 = DAT_02323c68;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar15 = DAT_02323e40;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canvasOverlay_026c46d0);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar9 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar8 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
  _objc_retainAutoreleasedReturnValue();
  IVar9 = IVar8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar8);
  if (IVar9 != 0) {
    puVar10 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_50;
    local_60 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar8);
    IVar8 = local_50;
    if (IVar9 == 4) {
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_80 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_70 = uVar15;
      local_68 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_90 = uVar15;
      local_88 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_b0 = uVar15;
      local_a8 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = uVar15;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_d0 = uVar15;
      local_c8 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,local_68,local_60,PTR_s_moveToPoint__026a01b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,local_88,local_60,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,local_c8,local_60,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,local_a8,local_60,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_closePath_026a66f8);
      puVar12 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_60;
      local_e8 = puVar12;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setPath__026caa08,puVar10);
      IVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isAligned_026c4838);
      local_f1 = 0;
      local_101 = 0;
      local_3f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,uVar18,uVar4,uVar16,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        local_100 = local_3f0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_CGColor_026ca470);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar14,uVar17,uVar6,uVar16,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = local_3f0;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_CGColor_026ca470);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setFillColor__026ca948,local_3f0);
      if ((local_101 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_100);
      }
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      IVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)();
      local_110 = 0x3ff0000000000000;
      FUN_01d4c3ec(local_70,local_68,local_90,local_88,local_b0,local_a8,local_d0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      local_118 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_118;
      local_120 = puVar10;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setPath__026caa08,IVar8);
      IVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isAligned_026c4838);
      local_129 = 0;
      local_139 = 0;
      local_428 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((IVar8 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,uVar18,uVar4,uVar19,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = local_428;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_CGColor_026ca470);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar14,uVar17,uVar6,uVar19,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = local_428;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_428,PTR_s_CGColor_026ca470);
        uVar18 = uVar17;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setStrokeColor__026caa78,local_428);
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_138);
      }
      if ((local_129 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_128);
      }
      uVar15 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setLineWidth__026ca9b0);
      puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar12 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setFillColor__026ca948,puVar12);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      IVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)(IVar8);
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_e8,0);
      in_d1 = uVar18;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar8 = local_50;
      if (1 < IVar9) {
        IVar9 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
        _objc_retainAutoreleasedReturnValue();
        IVar11 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_160 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
        local_150 = uVar15;
        local_148 = in_d1;
        (*(code *)PTR__objc_release_02578630)(IVar11);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        IVar8 = local_50;
        IVar9 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
        _objc_retainAutoreleasedReturnValue();
        IVar11 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_180 = uVar15;
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
        local_170 = uVar15;
        local_168 = in_d1;
        (*(code *)PTR__objc_release_02578630)(IVar11);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,local_148,local_60,PTR_s_moveToPoint__026a01b0);
        uVar14 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addLineToPoint__026a01b8);
        IVar8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        IVar8 = local_50;
        if (2 < IVar9) {
          IVar9 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points_026c4688);
          _objc_retainAutoreleasedReturnValue();
          IVar11 = IVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1a0 = uVar14;
          (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
          local_190 = uVar14;
          local_188 = local_168;
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,local_148,local_60,PTR_s_moveToPoint__026a01b0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_190,local_188,local_60,PTR_s_addLineToPoint__026a01b8);
        }
        puVar12 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_60;
        local_1a8 = puVar12;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGPath_026ca478);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setPath__026caa08,puVar10);
        puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,uVar18,uVar4,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar12 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setStrokeColor__026caa78,puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        uVar15 = 0x4000000000000000;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setLineWidth__026ca9b0);
        puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar12 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setFillColor__026ca948,puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_38 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setLineDashPattern__026ca998);
        (*(code *)PTR__objc_release_02578630)(puVar13);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        IVar8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar9);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        _objc_storeStrong(&local_1a8,0);
        in_d1 = uVar18;
      }
    }
    _objc_storeStrong(&local_60,0);
  }
  IVar8 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isDoubleMode_026c4670);
  local_1b1 = 0;
  bVar7 = false;
  if ((IVar8 & 1) != 0) {
    IVar8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    local_1b1 = 1;
    local_1b0 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar7 = IVar8 != 0;
  }
  if ((local_1b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  if (bVar7) {
    puVar10 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = local_50;
    local_1c0 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar8);
    IVar8 = local_50;
    if (IVar9 == 4) {
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1e0 = uVar15;
      local_1d8 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_1d0 = uVar15;
      local_1c8 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_200 = uVar15;
      local_1f8 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_1f0 = uVar15;
      local_1e8 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_220 = uVar15;
      local_218 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_210 = uVar15;
      local_208 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      IVar8 = local_50;
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_240 = uVar15;
      local_238 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
      local_230 = uVar15;
      local_228 = in_d1;
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d0,local_1c8,local_1c0,PTR_s_moveToPoint__026a01b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0,local_1e8,local_1c0,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_230,local_228,local_1c0,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,local_208,local_1c0,PTR_s_addLineToPoint__026a01b8);
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_closePath_026a66f8);
      puVar12 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_1c0;
      local_248 = puVar12;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setPath__026caa08,puVar10);
      puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,uVar2,uVar3,uVar16,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar10 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_setFillColor__026ca948,puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      IVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)();
      local_250 = 0x3ff0000000000000;
      FUN_01d4c3ec(local_1d0,local_1c8,local_1f0,local_1e8,local_210,local_208,local_230,local_228);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      local_258 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = local_258;
      local_260 = puVar10;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setPath__026caa08,IVar8);
      puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,uVar2,uVar3,uVar19,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar10 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setStrokeColor__026caa78,puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      (*(code *)PTR__objc_msgSend_02578628)(local_250,local_260,PTR_s_setLineWidth__026ca9b0);
      puVar12 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar10 = puVar12;
      (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_CGColor_026ca470);
      (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_setFillColor__026ca948,puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar12);
      IVar9 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
      _objc_retainAutoreleasedReturnValue();
      IVar8 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar8);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      _objc_storeStrong(&local_260);
      _objc_storeStrong(&local_258,0);
      _objc_storeStrong(&local_248,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar8 = local_50;
      if (1 < IVar9) {
        IVar9 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        IVar11 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_280 = uVar15;
        local_278 = in_d1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
        local_270 = uVar15;
        local_268 = in_d1;
        (*(code *)PTR__objc_release_02578630)(IVar11);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        IVar8 = local_50;
        IVar9 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        IVar11 = IVar9;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2a0 = uVar15;
        local_298 = in_d1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
        local_290 = uVar15;
        local_288 = in_d1;
        (*(code *)PTR__objc_release_02578630)(IVar11);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270,local_268,local_1c0,PTR_s_moveToPoint__026a01b0);
        uVar16 = local_290;
        uVar19 = local_288;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addLineToPoint__026a01b8);
        IVar8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar8);
        IVar8 = local_50;
        if (2 < IVar9) {
          IVar9 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_points2_026c4690);
          _objc_retainAutoreleasedReturnValue();
          IVar11 = IVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2c0 = uVar16;
          local_2b8 = uVar19;
          (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_displayPointFromImagePoint__026c47b8);
          local_2b0 = uVar16;
          local_2a8 = uVar19;
          (*(code *)PTR__objc_release_02578630)(IVar11);
          (*(code *)PTR__objc_release_02578630)(IVar9);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_270,local_268,local_1c0,PTR_s_moveToPoint__026a01b0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b0,local_2a8,local_1c0,PTR_s_addLineToPoint__026a01b8);
        }
        puVar12 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_1c0;
        local_2c8 = puVar12;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGPath_026ca478);
        (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setPath__026caa08,puVar10);
        puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,uVar2,uVar3,0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar12 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setStrokeColor__026caa78,puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4000000000000000,local_2c8,PTR_s_setLineWidth__026ca9b0);
        puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar12 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setFillColor__026ca948,puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_48 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_40 = puVar12;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_48,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_2c8,PTR_s_setLineDashPattern__026ca998);
        (*(code *)PTR__objc_release_02578630)(puVar13);
        (*(code *)PTR__objc_release_02578630)(puVar12);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        IVar8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_canvasOverlay_026c46d0);
        _objc_retainAutoreleasedReturnValue();
        IVar9 = IVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar9);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        _objc_storeStrong(&local_2c8,0);
      }
    }
    _objc_storeStrong(&local_1c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

