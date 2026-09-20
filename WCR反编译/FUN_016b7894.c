// FUN_016b7894 @ 016b7894

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016b7894(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong *local_a18;
  ulong local_9e8;
  ulong local_9e0;
  ulong local_9d8;
  ulong *local_8e0;
  ulong local_8c8;
  ulong *local_7e8;
  byte local_778;
  double local_720;
  double local_6f0;
  double local_600;
  ulong local_448;
  double local_440;
  double dStack_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  undefined8 local_410;
  double local_408;
  double local_400;
  double local_3f8;
  undefined8 local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  ulong local_360;
  byte local_352;
  bool local_351;
  ulong local_350;
  ulong local_348;
  ulong local_340;
  ulong local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  undefined8 local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
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
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  ulong local_208;
  double local_200;
  undefined8 local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  ulong local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  byte local_121;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  byte local_f1;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_c8;
  double local_c0;
  ulong local_b8;
  ulong local_b0;
  byte local_a1;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  double local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  double local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  dVar7 = DAT_02323d38;
  local_28 = 0;
  local_6f0 = DAT_02323d38;
  _objc_storeStrong(&local_28,param_5);
  if ((local_28 == 0) || (uVar4 = local_28, FUN_016a9384(), (uVar4 & 1) != 0)) {
    local_38 = 1;
  }
  else {
    uVar4 = local_28;
    FUN_016adc54();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    if (uVar4 == 0) {
      local_38 = 1;
    }
    else {
      FUN_016b9cb0();
      if (((uVar4 & 1) == 0) || (uVar4 = local_28, FUN_016b6d24(), (uVar4 & 1) != 0)) {
        FUN_016b3fe8(local_40,1);
        FUN_016b4420(local_28,0);
        local_38 = 1;
      }
      else {
        uVar4 = local_28;
        FUN_016b7790();
        if ((uVar4 & 1) == 0) {
          FUN_016b3fe8(local_40,1);
          local_38 = 1;
        }
        else {
          uVar4 = local_28;
          FUN_016b5d90();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_28;
          local_48 = uVar4;
          FUN_016b7284();
          _objc_retainAutoreleasedReturnValue();
          local_50 = uVar3;
          if ((uVar3 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
             (uVar3 & 1) == 0)) {
            local_38 = 1;
          }
          else {
            uVar4 = local_28;
            FUN_016b742c(local_28,local_50);
            local_51 = (byte)uVar4;
            local_69 = 0;
            local_79 = 0;
            if ((uVar4 & 1) == 0) {
              uVar4 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_objectForKeyedSubscript__0269d098,
                         &cf_repeatVerticalOffsetOther);
              _objc_retainAutoreleasedReturnValue();
              local_79 = 1;
              local_78 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            else {
              uVar4 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatVerticalOffset);
              _objc_retainAutoreleasedReturnValue();
              local_69 = 1;
              local_68 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            if ((local_79 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_78);
            }
            if ((local_69 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_68);
            }
            local_60 = local_6f0;
            local_91 = 0;
            local_a1 = 0;
            if ((local_51 & 1) == 0) {
              uVar4 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_objectForKeyedSubscript__0269d098,
                         &cf_repeatHorizontalOffsetOther);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_720 = local_6f0;
            }
            else {
              uVar4 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_repeatHorizontalOffset
                        );
              _objc_retainAutoreleasedReturnValue();
              local_91 = 1;
              local_90 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_720 = local_6f0;
            }
            if ((local_a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a0);
            }
            if ((local_91 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_90);
            }
            local_88 = local_720;
            uVar4 = local_28;
            FUN_016b9d4c();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_28;
            local_b0 = uVar4;
            FUN_016b9fc0();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = uVar3;
            if ((local_b0 == 0) && (uVar3 == 0)) {
              FUN_016b3fe8(local_40,1);
              local_38 = 1;
            }
            else {
              local_c0 = 0.0;
              local_c8 = 0.0;
              dStack_e8 = *(double *)(PTR__CGRectZero_025782f0 + 8);
              local_f0 = *(double *)PTR__CGRectZero_025782f0;
              dStack_d8 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
              dVar6 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
              uVar4 = local_28;
              local_e0 = dVar6;
              FUN_016ba27c(local_28,local_50);
              local_f1 = (byte)uVar4;
              _WCRFrostedBubbleEnabled();
              if ((uVar4 & 1) == 0) {
                dStack_118 = *(double *)(PTR__CGRectZero_025782f0 + 8);
                local_120 = *(double *)PTR__CGRectZero_025782f0;
                dStack_108 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
                local_110 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
              }
              else {
                uVar4 = local_28;
                _WCRFrostedBubbleShapeRectInCell();
                local_120 = dVar6;
                dStack_118 = param_2;
                local_110 = param_3;
                dStack_108 = param_4;
              }
              dStack_148 = dStack_118;
              local_150 = local_120;
              dStack_138 = dStack_108;
              local_140 = local_110;
              dVar6 = local_120;
              dVar11 = dStack_118;
              dVar12 = local_110;
              dVar13 = dStack_108;
              _CGRectIsEmpty();
              local_778 = 0;
              if ((uVar4 & 1) == 0) {
                dStack_168 = dStack_118;
                local_170 = local_120;
                dStack_158 = dStack_108;
                local_160 = local_110;
                dVar6 = local_120;
                dVar11 = dStack_118;
                dVar12 = local_110;
                dVar13 = dStack_108;
                _CGRectIsNull();
                local_778 = (byte)uVar4 ^ 1;
              }
              local_121 = local_778 & 1;
              FUN_016b7698();
              local_178 = uVar4;
              if ((local_121 & 1) == 0) {
                if ((local_f1 & 1) == 0) {
                  if ((uVar4 == 0) ||
                     (uVar3 = local_50,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_50,PTR_s_isKindOfClass__0269cd68,uVar4), local_8c8 = local_50,
                     (uVar3 & 1) == 0)) {
                    if (local_b0 == 0) {
                      local_a18 = &local_b8;
                    }
                    else {
                      local_a18 = &local_b0;
                    }
                    uVar4 = *local_a18;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_448 = uVar4;
                    if (uVar4 != 0) {
                      if ((local_51 & 1) == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
                        _CGRectGetMaxX(dVar6,dVar11);
                        dVar11 = 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        dVar12 = dVar12 / 2.0;
                        dVar6 = dVar6 + 1.0 + dVar12;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
                        _CGRectGetMinX(dVar6,dVar11);
                        dVar11 = 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        dVar12 = dVar12 / 2.0;
                        dVar6 = (dVar6 - 1.0) - dVar12;
                      }
                      local_c0 = dVar6;
                      (*(code *)PTR__objc_msgSend_02578628)(local_448,PTR_s_frame_026ca640);
                      _CGRectGetMinY();
                      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                      dVar13 = 2.0;
                      dVar11 = dVar11 / 2.0;
                      dVar6 = dVar6 + dVar11;
                      local_c8 = dVar6;
                      (*(code *)PTR__objc_msgSend_02578628)(local_448,PTR_s_frame_026ca640);
                      local_f0 = dVar6;
                      dStack_e8 = dVar11;
                      local_e0 = dVar13;
                      dStack_d8 = dVar12;
                    }
                    puVar5 = &local_448;
                    _objc_storeStrong(puVar5,0);
                    uVar2 = (uint)puVar5;
                  }
                  else {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_338 = local_8c8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_8c8,PTR_s_valueForKey__0269d128,&cf_parentModel);
                    _objc_retainAutoreleasedReturnValue();
                    local_351 = false;
                    bVar1 = local_8c8 == 0;
                    local_340 = local_8c8;
                    if (bVar1) {
                      local_8c8 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_8c8,PTR_s_valueForKey__0269d128,&cf_subViewModels);
                      _objc_retainAutoreleasedReturnValue();
                      local_350 = local_8c8;
                    }
                    local_351 = !bVar1;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_348 = local_8c8;
                    if ((local_351 & 1U) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_350);
                    }
                    uVar4 = local_348;
                    (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_count_0269cfe0);
                    local_352 = 1 < uVar4;
                    if (local_b0 == 0) {
                      local_8e0 = &local_b8;
                    }
                    else {
                      local_8e0 = &local_b0;
                    }
                    uVar4 = *local_8e0;
                    (*(code *)PTR__objc_retain_02578638)();
                    dVar10 = dVar13;
                    local_360 = uVar4;
                    if (uVar4 != 0) {
                      if ((local_51 & 1) == 0) {
                        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
                        local_3c0 = dVar6;
                        local_3b8 = dVar11;
                        local_3b0 = dVar12;
                        local_3a8 = dVar13;
                        _CGRectGetMaxX(dVar6,dVar11);
                        dVar9 = 1.0;
                        dVar11 = dVar6 + 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        dVar10 = dVar12 / 2.0;
                        dVar6 = dVar6 + 1.0 + dVar10;
                        local_3e0 = dVar11;
                        local_3d8 = dVar9;
                        local_3d0 = dVar12;
                        local_3c8 = dVar13;
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
                        local_380 = dVar6;
                        local_378 = dVar11;
                        local_370 = dVar12;
                        local_368 = dVar13;
                        _CGRectGetMinX(dVar6,dVar11);
                        dVar9 = 1.0;
                        dVar11 = dVar6 - 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        dVar10 = dVar12 / 2.0;
                        dVar6 = (dVar6 - 1.0) - dVar10;
                        local_3a0 = dVar11;
                        local_398 = dVar9;
                        local_390 = dVar12;
                        local_388 = dVar13;
                      }
                      uVar8 = 0x4000000000000000;
                      local_c0 = dVar6;
                      (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_frame_026ca640);
                      local_400 = dVar6;
                      local_3f8 = dVar10;
                      local_3f0 = uVar8;
                      local_3e8 = dVar9;
                      _CGRectGetMinY();
                      dVar13 = dVar6;
                      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                      dVar12 = 2.0;
                      dVar11 = dVar9 / 2.0;
                      dVar6 = dVar6 + dVar11;
                      local_420 = dVar13;
                      local_418 = dVar10;
                      local_410 = uVar8;
                      local_408 = dVar9;
                      local_c8 = dVar6;
                    }
                    if ((local_352 & 1) == 0) {
                      if (local_b0 == 0) {
                        local_9e8 = local_b8;
                      }
                      else {
                        local_9e8 = local_b0;
                      }
                      local_9e0 = local_9e8;
                    }
                    else {
                      if (local_b8 == 0) {
                        local_9d8 = local_b0;
                      }
                      else {
                        local_9d8 = local_b8;
                      }
                      local_9e0 = local_9d8;
                    }
                    (*(code *)PTR__objc_msgSend_02578628)(local_9e0,PTR_s_frame_026ca640);
                    local_440 = dVar6;
                    dStack_438 = dVar11;
                    local_430 = dVar12;
                    dStack_428 = dVar10;
                    local_f0 = dVar6;
                    dStack_e8 = dVar11;
                    local_e0 = dVar12;
                    dStack_d8 = dVar10;
                    _objc_storeStrong(&local_360);
                    _objc_storeStrong(&local_348,0);
                    _objc_storeStrong(&local_340,0);
                    puVar5 = &local_338;
                    _objc_storeStrong(puVar5,0);
                    uVar2 = (uint)puVar5;
                  }
                }
                else {
                  if (local_b8 == 0) {
                    local_7e8 = &local_b0;
                  }
                  else {
                    local_7e8 = &local_b8;
                  }
                  uVar4 = *local_7e8;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_208 = uVar4;
                  FUN_016ba5bc(uVar4,local_28);
                  uVar2 = (uint)uVar4;
                  local_250 = dVar6;
                  dStack_248 = dVar11;
                  local_240 = dVar12;
                  dStack_238 = dVar13;
                  local_228 = dVar6;
                  dStack_220 = dVar11;
                  local_218 = dVar12;
                  dStack_210 = dVar13;
                  local_f0 = dVar6;
                  dStack_e8 = dVar11;
                  local_e0 = dVar12;
                  dStack_d8 = dVar13;
                  _CGRectIsEmpty(dVar6,dVar11,dVar12,dVar13);
                  if ((uVar2 & 1) == 0) {
                    dStack_268 = dStack_e8;
                    local_270 = local_f0;
                    dStack_258 = dStack_d8;
                    local_260 = local_e0;
                    _CGRectIsNull(local_f0,dStack_e8,local_e0,dStack_d8);
                    if ((uVar2 & 1) == 0) {
                      if ((local_51 & 1) == 0) {
                        dStack_2c8 = dStack_e8;
                        local_2d0 = local_f0;
                        dStack_2b8 = dStack_d8;
                        local_2c0 = local_e0;
                        dVar6 = local_f0;
                        dVar12 = local_e0;
                        dVar13 = dStack_d8;
                        _CGRectGetMaxX(local_f0,dStack_e8);
                        uVar8 = 0x3ff0000000000000;
                        dVar11 = dVar6 + 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        local_c0 = dVar6 + 1.0 + dVar12 / 2.0;
                        local_2f0 = dVar11;
                        local_2e8 = uVar8;
                        local_2e0 = dVar12;
                        local_2d8 = dVar13;
                      }
                      else {
                        dStack_288 = dStack_e8;
                        local_290 = local_f0;
                        dStack_278 = dStack_d8;
                        local_280 = local_e0;
                        dVar6 = local_f0;
                        dVar12 = local_e0;
                        dVar13 = dStack_d8;
                        _CGRectGetMinX(local_f0,dStack_e8);
                        uVar8 = 0x3ff0000000000000;
                        dVar11 = dVar6 - 1.0;
                        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                        local_c0 = (dVar6 - 1.0) - dVar12 / 2.0;
                        local_2b0 = dVar11;
                        local_2a8 = uVar8;
                        local_2a0 = dVar12;
                        local_298 = dVar13;
                      }
                      dStack_308 = dStack_e8;
                      local_310 = local_f0;
                      dStack_2f8 = dStack_d8;
                      local_300 = local_e0;
                      dVar6 = local_f0;
                      dVar12 = dStack_e8;
                      dVar13 = local_e0;
                      dVar10 = dStack_d8;
                      _CGRectGetMinY();
                      dVar11 = dVar6;
                      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                      local_c8 = dVar6 + dVar10 / 2.0;
                      local_330 = dVar11;
                      local_328 = dVar12;
                      local_320 = dVar13;
                      local_318 = dVar10;
                    }
                  }
                  puVar5 = &local_208;
                  _objc_storeStrong(puVar5,0);
                  uVar2 = (uint)puVar5;
                }
              }
              else {
                dStack_e8 = dStack_118;
                local_f0 = local_120;
                dStack_d8 = dStack_108;
                local_e0 = local_110;
                if ((local_51 & 1) == 0) {
                  dStack_1d8 = dStack_118;
                  local_1e0 = local_120;
                  dStack_1c8 = dStack_108;
                  local_1d0 = local_110;
                  dVar6 = local_120;
                  dVar12 = local_110;
                  dVar13 = dStack_108;
                  _CGRectGetMaxX(local_120,dStack_118);
                  uVar8 = 0x3ff0000000000000;
                  uVar4 = local_40;
                  dVar11 = dVar6 + 1.0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                  uVar2 = (uint)uVar4;
                  local_c0 = dVar6 + 1.0 + dVar12 / 2.0;
                  local_200 = dVar11;
                  local_1f8 = uVar8;
                  local_1f0 = dVar12;
                  local_1e8 = dVar13;
                }
                else {
                  dStack_198 = dStack_118;
                  local_1a0 = local_120;
                  dStack_188 = dStack_108;
                  local_190 = local_110;
                  dVar6 = local_120;
                  dVar12 = local_110;
                  dVar13 = dStack_108;
                  _CGRectGetMinX(local_120,dStack_118);
                  uVar8 = 0x3ff0000000000000;
                  uVar4 = local_40;
                  dVar11 = dVar6 - 1.0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                  uVar2 = (uint)uVar4;
                  local_c0 = (dVar6 - 1.0) - dVar12 / 2.0;
                  local_1c0 = dVar11;
                  local_1b8 = uVar8;
                  local_1b0 = dVar12;
                  local_1a8 = dVar13;
                }
              }
              if ((local_51 & 1) == 0) {
                local_c0 = local_c0 + local_88;
              }
              else {
                local_c0 = local_c0 - local_88;
              }
              _CGRectIsEmpty(local_f0,dStack_e8,local_e0,dStack_d8);
              if (((uVar2 & 1) == 0) &&
                 (_CGRectIsNull(local_f0,dStack_e8,local_e0,dStack_d8), (uVar2 & 1) == 0)) {
                dVar6 = local_f0;
                _CGRectGetMinY(local_f0,dStack_e8,local_e0,dStack_d8);
                dVar11 = local_f0;
                dVar13 = dStack_e8;
                dVar10 = local_e0;
                dVar9 = dStack_d8;
                _CGRectGetHeight();
                dVar12 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
                _CGRectGetHeight(dVar12,dVar13,dVar10,dVar9);
                local_600 = local_60;
                if (local_60 < -15.0) {
                  local_600 = -15.0;
                }
                if (15.0 < local_600) {
                  local_600 = 15.0;
                }
                if (dVar7 <= ABS(local_600 - 10.0)) {
                  if (dVar7 <= ABS(local_600 + 10.0)) {
                    local_c8 = dVar6 + (0.5 - local_600 / 20.0) * dVar11;
                  }
                  else {
                    local_c8 = (dVar6 + dVar11) - dVar12 / 2.0;
                  }
                }
                else {
                  local_c8 = dVar6 + dVar12 / 2.0;
                }
                dVar7 = local_c0;
                dVar12 = local_c8;
                FUN_016ba8c4();
                dVar6 = dVar12;
                dVar13 = dVar7;
                FUN_016ba8f0(local_28);
                uVar4 = local_40;
                dVar11 = dVar13;
                dVar10 = dVar6;
                (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_center_026ca560);
                uVar2 = (uint)uVar4;
                FUN_016baa10(dVar7,dVar12,dVar6,dVar13);
                bVar1 = false;
                if (((uVar2 & 1) != 0) && (bVar1 = false, ABS(dVar7 - dVar11) < 0.5)) {
                  bVar1 = ABS(dVar12 - dVar10) < 0.5;
                }
                if (!bVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar7,dVar12,local_40,PTR_s_setCenter__026ca8c0);
                  FUN_016baa68(dVar7,dVar12,local_28);
                }
                uVar4 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isDescendantOfView__026ca760,local_28);
                if ((uVar4 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_addSubview__026ca4c0,local_40);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_bringSubviewToFront__026ca550,local_40);
                }
                FUN_016b3fe8(local_40,0);
                local_38 = 0;
              }
              else {
                FUN_016b3fe8(local_40,1);
                local_38 = 1;
              }
            }
            _objc_storeStrong(&local_b8);
            _objc_storeStrong(&local_b0,0);
          }
          _objc_storeStrong(&local_50);
          _objc_storeStrong(&local_48,0);
        }
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

