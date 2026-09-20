// FUN_001f5684 @ 001f5684

void FUN_001f5684(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  byte bVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined *local_648;
  byte local_4a8;
  byte local_4a4;
  uint local_49c;
  undefined *local_480;
  undefined *local_408;
  double local_3f8;
  double local_3e8;
  undefined *local_2f8;
  undefined8 local_2f0;
  double dStack_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined8 local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  byte local_2a9;
  undefined *local_2a8;
  byte local_299;
  undefined *local_298;
  byte local_289;
  undefined *local_288;
  undefined *local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  ulong local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  char local_1c9;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  double local_110;
  byte local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  byte local_c8;
  bool local_b9;
  undefined *local_b8;
  undefined *local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  byte local_8d;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  
  dVar18 = DAT_02323cd0;
  local_28 = (undefined *)0x0;
  dVar12 = DAT_02323cd0;
  _objc_storeStrong(&local_28,param_5);
  if ((local_28 == (undefined *)0x0) ||
     (puVar4 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getBgImageView_0269f0e0),
     ((ulong)puVar4 & 1) == 0)) {
    local_38 = 1;
    goto LAB_001f7150;
  }
  puVar7 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getBgImageView_0269f0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
  puVar4 = local_40;
  if (((ulong)puVar7 & 1) == 0) {
    local_38 = 1;
  }
  else {
    puVar7 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = (uint)puVar7;
    local_48 = puVar4;
    FUN_001f726c();
    if ((uVar3 & 1) == 0) {
      FUN_001f72ac(local_48);
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      dVar14 = 1.0;
      bVar1 = true;
      local_3e8 = param_3;
      dVar15 = param_2;
      local_68 = dVar12;
      local_60 = param_2;
      local_58 = param_3;
      local_50 = param_4;
      if (1.0 < param_3) {
        local_3e8 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        bVar1 = local_3e8 <= 1.0;
        dVar15 = dVar14;
        dVar12 = param_3;
        local_88 = param_3;
        local_80 = dVar14;
        local_78 = param_2;
        local_70 = local_3e8;
      }
      dVar14 = 1.0;
      if (bVar1) {
        local_38 = 1;
      }
      else {
        puVar4 = local_28;
        FUN_001f7848();
        local_89 = (byte)puVar4;
        local_8a = local_89;
        FUN_001f79f8();
        local_8b = local_8a;
        FUN_001f7a94();
        if ((((local_8a & 1) == 0) || (puVar4 = local_28, FUN_001f7b30(), ((ulong)puVar4 & 1) == 0))
           || (local_8a = 0, (local_8b & 1) != 0)) {
          local_8c = 1;
          local_8d = 1;
          FUN_001f7d4c(local_28,&local_8c,&local_8d);
          local_408 = local_48;
          FUN_001f7fa4();
          local_98 = local_3e8;
          if ((local_8b & 1) == 0) {
            dVar14 = 0.0;
            fVar10 = 12.0;
            if ((local_8a & 1) == 0) {
              fVar10 = 0.0;
            }
            local_3e8 = (double)fVar10;
          }
          else {
            FUN_001f8654();
          }
          local_a0 = local_3e8;
          if ((local_8b & 1) == 0) {
            local_3f8 = 0.0;
          }
          else {
            FUN_001f8750();
            local_3f8 = local_3e8;
          }
          local_a8 = local_3f8;
          local_b9 = false;
          bVar1 = local_3f8 <= 0.0;
          if (bVar1) {
            local_408 = (undefined *)0x0;
          }
          else {
            FUN_001f8830();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = local_408;
          }
          local_b9 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_408;
          if ((local_b9 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
          local_e0 = local_a0;
          local_d8 = local_98;
          local_d0 = local_a8;
          bVar9 = 2;
          if ((local_8c & 1) == 0) {
            bVar9 = 0;
          }
          bVar2 = 4;
          if ((local_8d & 1) == 0) {
            bVar2 = 0;
          }
          local_c8 = 8;
          if ((local_8a & 1) == 0) {
            local_c8 = 0;
          }
          local_c8 = (local_89 & 1) != 0 | bVar9 | bVar2 | local_c8;
          local_100 = local_3f8;
          dStack_f8 = dVar14;
          local_f0 = dVar15;
          dStack_e8 = dVar12;
          _memset(&local_140,0,0x40);
          puVar4 = local_48;
          _objc_getAssociatedObject(local_48,&DAT_028c9120);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_getValue_size__026a0388,&local_140,0x40);
          }
          local_159 = 0;
          local_169 = 0;
          puVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
          puVar6 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)puVar6 & 1) == 0) {
            local_480 = (undefined *)0x0;
          }
          else {
            local_480 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            local_159 = 1;
            local_158 = local_480;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_169 = 1;
            local_168 = local_480;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_480;
          if ((local_169 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_168);
          }
          if ((local_159 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar4 = local_48;
          _objc_getAssociatedObject(local_48,&DAT_028c9121);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_48;
          local_178 = puVar4;
          _objc_getAssociatedObject(local_48,&DAT_028c9122);
          _objc_retainAutoreleasedReturnValue();
          dVar12 = local_a8;
          local_180 = puVar7;
          if (0.0 < local_a8) {
            local_4a8 = 0;
            dVar17 = dVar14;
            if (puVar7 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isHidden_026ca768);
              local_4a8 = 0;
              dVar17 = dVar14;
              if (((ulong)puVar7 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_frame_026ca640);
                puVar7 = local_48;
                local_1a8 = dVar12;
                local_1a0 = dVar15;
                local_198 = dVar14;
                local_190 = local_3f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
                dVar11 = local_1a8;
                dVar16 = local_1a0;
                dVar17 = local_198;
                dVar19 = local_190;
                local_1c8 = local_3f8;
                local_1c0 = dVar14;
                local_1b8 = dVar15;
                local_1b0 = dVar12;
                _CGRectEqualToRect();
                local_4a8 = 0;
                dVar12 = dVar11;
                dVar15 = dVar16;
                local_3f8 = dVar19;
                if (((ulong)puVar7 & 1) != 0) {
                  puVar7 = local_180;
                  (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_lineWidth_026a0390);
                  dVar17 = 2.0;
                  dVar12 = ABS(dVar11 - local_a8 * 2.0);
                  local_4a8 = 0;
                  dVar15 = dVar18;
                  local_3f8 = dVar11;
                  if (dVar12 < dVar18) {
                    puVar4 = local_180;
                    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_strokeColor_026a0398);
                    puVar7 = (undefined *)0x0;
                    local_4a8 = 0;
                    local_3f8 = dVar11;
                    if (puVar4 != (undefined *)0x0) {
                      puVar7 = (undefined *)0x0;
                      local_4a8 = 0;
                      if (local_b0 != (undefined *)0x0) {
                        puVar7 = local_180;
                        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_strokeColor_026a0398);
                        puVar4 = local_b0;
                        _objc_retainAutorelease();
                        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
                        _CGColorEqualToColor(puVar7,puVar4);
                        local_4a8 = (byte)puVar7;
                        local_3f8 = dVar11;
                      }
                    }
                  }
                }
              }
            }
            local_49c = (uint)puVar7;
            local_4a4 = local_4a8;
          }
          else {
            local_49c = 1;
            if (puVar7 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isHidden_026ca768);
              local_49c = (uint)puVar7;
            }
            local_4a4 = (byte)local_49c;
            dVar17 = dVar14;
          }
          local_181 = local_4a4 & 1;
          local_1c9 = false;
          if (local_148 != (undefined *)0x0) {
            dStack_1e8 = dStack_138;
            local_1f0 = local_140;
            dStack_1d8 = dStack_128;
            local_1e0 = local_130;
            dStack_208 = dStack_f8;
            local_210 = local_100;
            dStack_1f8 = dStack_e8;
            local_200 = local_f0;
            _CGRectEqualToRect();
            local_1c9 = false;
            dVar12 = local_140;
            dVar15 = dStack_138;
            dVar17 = local_130;
            local_3f8 = dStack_128;
            if ((local_49c & 1) != 0) {
              dVar12 = ABS(local_120 - local_e0);
              local_1c9 = false;
              dVar15 = dVar18;
              dVar17 = local_e0;
              if (dVar12 < dVar18) {
                dVar12 = ABS(local_118 - local_d8);
                local_1c9 = false;
                dVar17 = local_d8;
                if (dVar12 < dVar18) {
                  dVar12 = ABS(local_110 - local_d0);
                  local_1c9 = false;
                  dVar17 = local_d0;
                  if (dVar12 < dVar18) {
                    local_1c9 = local_108 == local_c8;
                  }
                }
              }
            }
          }
          dVar18 = dVar17;
          dVar14 = local_3f8;
          if ((((bool)local_1c9 == false) || (local_150 == (undefined *)0x0)) ||
             ((local_150 != local_178 ||
              (puVar4 = local_150,
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_path_0269d4d8), dVar18 = dVar17,
              dVar14 = local_3f8, puVar4 == (undefined *)0x0)))) {
LAB_001f63ec:
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
            uVar8 = (ulong)(local_89 & 1);
            local_278 = dVar12;
            local_270 = dVar15;
            local_268 = dVar18;
            local_260 = dVar14;
            FUN_001f8ab0(dVar12,uVar8,local_8c & 1,local_8d & 1,local_8a & 1);
            _objc_retainAutoreleasedReturnValue();
            local_258 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1)
            ;
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(0);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setClipsToBounds__026ca8c8,0);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            uVar13 = 0;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
            puVar7 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_289 = 0;
            local_299 = 0;
            local_2a9 = 0;
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
            puVar6 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)puVar6 & 1) == 0) {
              local_648 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              local_2a9 = 1;
              local_2a8 = local_648;
            }
            else {
              local_648 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              local_289 = 1;
              local_288 = local_648;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_299 = 1;
              local_298 = local_648;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_280 = local_648;
            if ((local_2a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2a8);
            }
            if ((local_299 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_298);
            }
            if ((local_289 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_288);
            }
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
            local_2f0 = uVar13;
            dStack_2e8 = dVar15;
            local_2e0 = dVar18;
            dStack_2d8 = dVar14;
            local_2d0 = uVar13;
            dStack_2c8 = dVar15;
            local_2c0 = dVar18;
            dStack_2b8 = dVar14;
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,local_280,PTR_s_setFrame__026ca960);
            uVar8 = local_258;
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_CGPath_026ca478);
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_setPath__026caa08,uVar8);
            puVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _objc_setAssociatedObject(local_48,&DAT_028c9121,local_280,1);
            puVar4 = local_48;
            _objc_getAssociatedObject(local_48,&DAT_028c9122);
            _objc_retainAutoreleasedReturnValue();
            local_2f8 = puVar4;
            if (local_a8 <= 0.0) {
              if (puVar4 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHidden__026ca970,1);
              }
            }
            else {
              dVar12 = local_a8;
              if (puVar4 == (undefined *)0x0) {
                puVar7 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = local_2f8;
                local_2f8 = puVar7;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                _objc_retainAutorelease();
                puVar7 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
                (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setFillColor__026ca948,puVar7)
                ;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                puVar4 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar4);
                _objc_setAssociatedObject(local_48,&DAT_028c9122,local_2f8,1);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar12,dVar15,dVar18,dVar14,local_2f8,PTR_s_setFrame__026ca960);
              uVar8 = local_258;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_CGPath_026ca478);
              (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setPath__026caa08,uVar8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8 * 2.0,local_2f8,PTR_s_setLineWidth__026ca9b0);
              puVar4 = local_b0;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
              (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setStrokeColor__026caa78,puVar4)
              ;
              (*(code *)PTR__objc_msgSend_02578628)(local_2f8,PTR_s_setHidden__026ca970,0);
            }
            puVar4 = local_48;
            puVar7 = PTR__OBJC_CLASS___NSValue_026ce1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_value_withObjCType__026a03a0,
                       &local_100,"{?={CGRect={CGPoint=dd}{CGSize=dd}}dddC}");
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(puVar4,&DAT_028c9120,puVar7,1);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            puVar4 = local_48;
            puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(puVar4,&DAT_028c9123,puVar7,1);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
            _objc_storeStrong(&local_2f8);
            _objc_storeStrong(&local_280,0);
            _objc_storeStrong(&local_258,0);
            local_38 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_frame_026ca640);
            puVar4 = local_48;
            dVar11 = dVar15;
            dVar16 = dVar12;
            local_230 = dVar12;
            local_228 = dVar15;
            local_220 = dVar17;
            local_218 = local_3f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
            uVar3 = (uint)puVar4;
            dVar12 = local_230;
            dVar15 = local_228;
            dVar18 = local_220;
            dVar14 = local_218;
            local_250 = local_3f8;
            local_248 = dVar17;
            local_240 = dVar11;
            local_238 = dVar16;
            _CGRectEqualToRect();
            if (((uVar3 & 1) == 0) || ((local_181 & 1) == 0)) goto LAB_001f63ec;
            local_38 = 1;
          }
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_178,0);
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_b0,0);
        }
        else {
          FUN_001f72ac(local_48);
          local_38 = 1;
        }
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_001f7150:
  _objc_storeStrong(&local_28,0);
  return;
}

