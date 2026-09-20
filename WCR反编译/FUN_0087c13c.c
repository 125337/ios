// FUN_0087c13c @ 0087c13c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0087c13c(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint local_8c0;
  undefined *local_878;
  undefined *local_870;
  double *local_808;
  undefined **local_7f0;
  undefined *local_7c0;
  undefined *local_7b8;
  double local_740;
  double local_6a0;
  ulong local_5b0;
  undefined1 auStack_538 [8];
  long local_530;
  long *local_528;
  undefined8 local_4f8;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  double dStack_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double dStack_488;
  double local_480;
  double dStack_478;
  double local_470;
  double dStack_468;
  double local_460;
  double dStack_458;
  double local_450;
  double dStack_448;
  undefined *local_440;
  undefined1 auStack_438 [8];
  long local_430;
  long *local_428;
  undefined8 local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double dStack_398;
  double local_390;
  double dStack_388;
  double local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  double local_320;
  double dStack_318;
  double local_310;
  double dStack_308;
  double local_300;
  double dStack_2f8;
  undefined1 local_2e2;
  byte local_2e1;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined *local_278;
  undefined *local_270;
  undefined *local_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  undefined *local_218;
  undefined *local_210;
  double local_208;
  double local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  float local_1d4;
  double local_1d0;
  byte local_1c1;
  double local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  ulong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_6);
  if (local_130 == 0) {
    local_13c = 1;
    goto LAB_0087d1c8;
  }
  uVar4 = local_130;
  FUN_0087d9c4();
  _objc_retainAutoreleasedReturnValue();
  local_148 = uVar4;
  if (uVar4 == 0) {
    local_13c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_bounds_026ca548);
    local_198 = param_1;
    local_190 = param_2;
    local_188 = param_3;
    local_180 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_fromView__026a9178,local_130);
    bVar2 = (byte)uVar4;
    local_1c0 = param_1;
    uStack_1b8 = param_2;
    local_1b0 = param_3;
    dStack_1a8 = param_4;
    local_178 = param_1;
    uStack_170 = param_2;
    local_168 = param_3;
    dStack_160 = param_4;
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    local_1a0 = param_1;
    FUN_0087db80(param_1);
    local_1c1 = (bVar2 ^ 1) & 1;
    local_1d4 = 6.0;
    uStack_1f8 = uStack_170;
    local_200 = local_178;
    dStack_1e8 = dStack_160;
    local_1f0 = local_168;
    dVar8 = local_178;
    dVar10 = local_168;
    dVar12 = dStack_160;
    _CGRectGetHeight(local_178,uStack_170);
    dVar8 = dVar8 * DAT_02324358;
    local_6a0 = dVar8;
    if (dVar8 <= (double)local_1d4) {
      local_6a0 = (double)local_1d4;
    }
    local_208 = local_6a0;
    local_1d0 = local_6a0;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1e0 = dVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_210 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    dStack_238 = *(double *)(PTR__CGRectNull_025782e8 + 8);
    local_240 = *(double *)PTR__CGRectNull_025782e8;
    dStack_228 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
    local_230 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    dStack_258 = *(double *)(PTR__CGRectNull_025782e8 + 8);
    local_260 = *(double *)PTR__CGRectNull_025782e8;
    dStack_248 = *(double *)(PTR__CGRectNull_025782e8 + 0x18);
    dVar9 = *(double *)(PTR__CGRectNull_025782e8 + 0x10);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_250 = dVar9;
    local_218 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar5;
    while (puVar5 = local_268, (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_count_0269cfe0)
          , puVar5 != (undefined *)0x0) {
      puVar5 = local_268;
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_270 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_removeLastObject_0269e830);
      puVar5 = local_270;
      puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      puVar6 = local_270;
      local_740 = dVar9;
      dVar11 = dVar10;
      if (((ulong)puVar5 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = local_148;
        local_278 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_bounds_026ca548);
        local_2b8 = dVar9;
        local_2b0 = dVar8;
        local_2a8 = dVar10;
        local_2a0 = dVar12;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_convertRect_fromView__026a9178,local_278);
        local_298 = dVar9;
        dStack_290 = dVar8;
        local_288 = dVar10;
        dStack_280 = dVar12;
        if ((local_1c1 & 1) == 0) {
          local_740 = 0.0;
          dVar11 = dVar8;
        }
        else {
          dVar11 = dVar10;
          local_2e0 = dVar9;
          dStack_2d8 = dVar8;
          local_2d0 = dVar10;
          dStack_2c8 = dVar12;
          _CGRectGetMidY(dVar9,dVar8);
          local_740 = ABS(dVar9 - local_1a0);
          dVar10 = local_1a0;
          dVar9 = dVar12;
        }
        dVar12 = dVar9;
        local_2c0 = local_740;
        bVar1 = (local_1c1 & 1) != 0;
        dVar8 = dVar10;
        if (bVar1) {
          dVar8 = local_1d0;
        }
        local_2e1 = !bVar1 || local_740 <= local_1d0;
        puVar5 = local_278;
        FUN_0087dbb0();
        uVar3 = (uint)puVar5;
        local_2e2 = SUB81(puVar5,0);
        if (((ulong)puVar5 & 1) != 0) {
          dStack_328 = dStack_258;
          local_330 = local_260;
          dStack_318 = dStack_248;
          local_320 = local_250;
          dVar8 = dStack_258;
          dVar11 = local_250;
          dVar12 = dStack_248;
          _CGRectIsNull(local_260);
          if ((uVar3 & 1) == 0) {
            dStack_348 = dStack_258;
            local_350 = local_260;
            dStack_338 = dStack_248;
            local_340 = local_250;
            dStack_368 = dStack_290;
            local_370 = local_298;
            dStack_358 = dStack_280;
            local_360 = local_288;
            dVar8 = local_250;
            _CGRectUnion();
            dVar11 = dStack_258;
            dVar12 = local_260;
            local_310 = local_260;
            dStack_308 = dStack_258;
            local_300 = dVar8;
            dStack_2f8 = dStack_248;
          }
          else {
            dStack_308 = dStack_290;
            local_310 = local_298;
            dStack_2f8 = dStack_280;
            local_300 = local_288;
          }
          dStack_258 = dStack_308;
          local_260 = local_310;
          dStack_248 = dStack_2f8;
          local_250 = local_300;
          puVar5 = local_218;
          local_740 = local_300;
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_addObject__0269d180,local_278);
          uVar3 = (uint)puVar5;
          if ((local_2e1 & 1) != 0) {
            dStack_3a8 = dStack_238;
            local_3b0 = local_240;
            dStack_398 = dStack_228;
            local_3a0 = local_230;
            dVar8 = dStack_238;
            dVar11 = local_230;
            dVar12 = dStack_228;
            _CGRectIsNull(local_240);
            if ((uVar3 & 1) == 0) {
              dStack_3c8 = dStack_238;
              local_3d0 = local_240;
              dStack_3b8 = dStack_228;
              local_3c0 = local_230;
              dStack_3e8 = dStack_290;
              local_3f0 = local_298;
              dStack_3d8 = dStack_280;
              local_3e0 = local_288;
              dVar8 = local_230;
              _CGRectUnion();
              dVar11 = dStack_238;
              dVar12 = local_240;
              local_390 = local_240;
              dStack_388 = dStack_238;
              local_380 = dVar8;
              dStack_378 = dStack_228;
            }
            else {
              dStack_388 = dStack_290;
              local_390 = local_298;
              dStack_378 = dStack_280;
              local_380 = local_288;
            }
            dStack_238 = dStack_388;
            local_240 = local_390;
            dStack_228 = dStack_378;
            local_230 = local_380;
            local_740 = local_380;
            (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_addObject__0269d180,local_278);
          }
        }
        _objc_storeStrong(&local_278,0);
      }
      _memset(auStack_438,0,0x40);
      puVar5 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_7b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_7b8 != (undefined *)0x0) {
        lVar7 = *local_428;
        local_7c0 = (undefined *)0x0;
        do {
          do {
            if (*local_428 - lVar7 != 0) {
              _objc_enumerationMutation(*local_428 - lVar7,puVar5);
            }
            local_3f8 = *(undefined8 *)(local_430 + (long)local_7c0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_268,PTR_s_addObject__0269d180,local_3f8);
            local_7c0 = local_7c0 + 1;
          } while (local_7c0 < local_7b8);
          local_7b8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_438,auStack_a8,
                     0x10);
          local_7c0 = (undefined *)0x0;
        } while (local_7b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_270,0);
      dVar9 = local_740;
      dVar10 = dVar11;
    }
    puVar5 = local_210;
    (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined *)0x0) {
      local_7f0 = &local_218;
    }
    else {
      local_7f0 = &local_210;
    }
    puVar6 = *local_7f0;
    puVar5 = puVar6;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = (uint)puVar5;
    dStack_478 = dStack_238;
    local_480 = local_240;
    dStack_468 = dStack_228;
    local_470 = local_230;
    local_440 = puVar6;
    _CGRectIsNull(local_240,dStack_238,local_230,dStack_228);
    if ((uVar3 & 1) == 0) {
      local_808 = &local_240;
    }
    else {
      local_808 = &local_260;
    }
    dStack_458 = local_808[1];
    local_460 = *local_808;
    dStack_448 = local_808[3];
    local_450 = local_808[2];
    puVar5 = local_440;
    (*(code *)PTR__objc_msgSend_02578628)(local_440,PTR_s_count_0269cfe0);
    if (puVar5 == (undefined *)0x0) {
LAB_0087cc38:
      local_13c = 1;
    }
    else {
      dStack_498 = dStack_458;
      local_4a0 = local_460;
      dStack_488 = dStack_448;
      local_490 = local_450;
      dVar8 = local_460;
      dVar10 = dStack_458;
      dVar12 = local_450;
      dVar9 = dStack_448;
      _CGRectIsNull();
      if (((ulong)puVar5 & 1) != 0) goto LAB_0087cc38;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
      local_4c8 = dVar8;
      local_4c0 = dVar10;
      local_4b8 = dVar12;
      local_4b0 = dVar9;
      _CGRectGetMidX(dVar8,dVar10,dVar12,dVar9);
      dStack_4e8 = dStack_458;
      local_4f0 = local_460;
      dStack_4d8 = dStack_448;
      local_4e0 = local_450;
      dVar10 = local_460;
      dVar12 = dStack_448;
      local_4a8 = dVar8;
      _CGRectGetMidX(local_460,dStack_458);
      dVar8 = dVar8 - dVar10;
      dVar10 = -0.5;
      local_4d0 = dVar8;
      if ((dVar8 <= -0.5) || (dVar10 = 0.5, 0.5 <= dVar8)) {
        _memset(auStack_538,0,0x40);
        puVar5 = local_440;
        (*(code *)PTR__objc_retain_02578638)();
        local_870 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_538,auStack_128,
                   0x10);
        if (local_870 != (undefined *)0x0) {
          lVar7 = *local_528;
          local_878 = (undefined *)0x0;
          do {
            do {
              if (*local_528 - lVar7 != 0) {
                _objc_enumerationMutation(*local_528 - lVar7,puVar5);
              }
              local_4f8 = *(undefined8 *)(local_530 + (long)local_878 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_4f8,PTR_s_frame_026ca640);
              dVar8 = dVar8 + local_4d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_4f8,PTR_s_setFrame__026ca960);
              local_878 = local_878 + 1;
            } while (local_878 < local_870);
            local_870 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_538,
                       auStack_128,0x10);
            local_878 = (undefined *)0x0;
          } while (local_870 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        bVar1 = false;
        uVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isHidden_026ca768);
        local_8c0 = 1;
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_alpha_026ca4d8);
          local_8c0 = 1;
          dVar10 = DAT_02323cd0;
          if (DAT_02323cd0 < dVar8) {
            uVar4 = local_130;
            FUN_0087d624();
            local_8c0 = 1;
            if ((uVar4 & 1) == 0) {
              local_5b0 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              uVar4 = local_5b0;
              FUN_0087bdc8();
              local_8c0 = (uint)uVar4;
            }
          }
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_5b0);
        }
        if ((local_8c0 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar8,dVar10,0,dVar12,local_130,PTR_s_setFrame__026ca960);
        }
        local_13c = 0;
      }
      else {
        local_13c = 1;
      }
    }
    _objc_storeStrong(&local_440);
    _objc_storeStrong(&local_268,0);
    _objc_storeStrong(&local_218,0);
    _objc_storeStrong(&local_210,0);
  }
  _objc_storeStrong(&local_148,0);
LAB_0087d1c8:
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

