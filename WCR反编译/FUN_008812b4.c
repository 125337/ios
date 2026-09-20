// FUN_008812b4 @ 008812b4

void FUN_008812b4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *local_7c0;
  undefined *local_7b8;
  uint local_784;
  ulong local_530;
  ulong local_528;
  undefined1 auStack_490 [8];
  long local_488;
  long *local_480;
  undefined8 local_450;
  byte local_441;
  undefined *local_440;
  undefined *local_438;
  double local_430;
  double dStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  double local_410;
  double dStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double dStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  double local_3d0;
  double local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  double local_3b0;
  double dStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined *local_390;
  undefined *local_388;
  double local_380;
  double dStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_360;
  double dStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  double local_340;
  double dStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  double local_320;
  double local_318;
  undefined8 local_310;
  undefined8 local_308;
  double local_300;
  double dStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  ulong local_2c8;
  double local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  undefined8 local_278;
  double local_270;
  double dStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  ulong local_208;
  ulong local_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  double local_198;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  byte local_139;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_5);
  local_138 = 0;
  _objc_storeStrong(&local_138,param_6);
  uVar1 = local_138;
  local_139 = param_7;
  if ((local_130 == 0) || (local_138 == 0)) {
    local_140 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_bounds_026ca548);
    local_180 = param_1;
    local_178 = param_2;
    local_170 = param_3;
    local_168 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_convertRect_toView__0269ded8,local_130);
    local_1c0 = param_1;
    dStack_1b8 = param_2;
    local_1b0 = param_3;
    uStack_1a8 = param_4;
    local_160 = param_1;
    dStack_158 = param_2;
    local_150 = param_3;
    uStack_148 = param_4;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    dStack_1e8 = dStack_158;
    local_1f0 = local_160;
    uStack_1d8 = uStack_148;
    local_1e0 = local_150;
    dVar9 = local_160;
    dVar11 = dStack_158;
    uVar12 = local_150;
    uVar13 = uStack_148;
    local_198 = param_1;
    _CGRectGetMinY();
    dVar10 = 1.7976931348623157e+308;
    local_1f8 = 1.7976931348623157e+308;
    uVar1 = local_130;
    local_1c8 = dVar9;
    FUN_0087f5a4();
    _objc_retainAutoreleasedReturnValue();
    local_200 = uVar1;
    _memset(auStack_248,0,0x40);
    uVar1 = local_200;
    (*(code *)PTR__objc_retain_02578638)();
    local_528 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,0x10);
    if (local_528 != 0) {
      lVar7 = *local_238;
      local_530 = 0;
      do {
        do {
          if (*local_238 - lVar7 != 0) {
            _objc_enumerationMutation(*local_238 - lVar7,uVar1);
          }
          uVar8 = *(ulong *)(local_240 + local_530 * 8);
          local_208 = uVar8;
          if (uVar8 != local_138) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar8;
            FUN_0087fb64();
            _objc_retainAutoreleasedReturnValue();
            local_250 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            uVar2 = local_250;
            FUN_0088011c();
            uVar8 = local_208;
            if ((uVar2 & 1) == 0) {
              local_140 = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_bounds_026ca548);
              local_290 = dVar10;
              local_288 = dVar11;
              local_280 = uVar12;
              local_278 = uVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar8,PTR_s_convertRect_toView__0269ded8,local_130);
              local_2c0 = dVar10;
              dStack_2b8 = dVar11;
              local_2b0 = uVar12;
              uStack_2a8 = uVar13;
              local_270 = dVar10;
              dStack_268 = dVar11;
              local_260 = uVar12;
              uStack_258 = uVar13;
              _CGRectGetMinY(dVar10,dVar11,uVar12);
              dVar11 = local_1f8;
              uVar12 = 0x3ff0000000000000;
              local_298 = dVar10;
              if (local_1c8 + 1.0 < dVar10) {
                if (dVar10 < local_1f8) {
                  local_1f8 = dVar10;
                }
                local_140 = 0;
              }
              else {
                local_140 = 3;
                dVar11 = local_1c8 + 1.0;
              }
            }
            _objc_storeStrong(&local_250,0);
          }
          local_530 = local_530 + 1;
        } while (local_530 < local_528);
        local_528 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,0x10
                  );
        local_530 = 0;
      } while (local_528 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar1;
    FUN_008825d8();
    _objc_retainAutoreleasedReturnValue();
    local_2c8 = uVar8;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = puVar3;
    while (puVar3 = local_2d0, (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_count_0269cfe0)
          , puVar3 != (undefined *)0x0) {
      puVar3 = local_2d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_2d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_removeLastObject_0269e830);
      puVar3 = local_2d8;
      puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      puVar4 = local_2d8;
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar3 = local_2d8;
        if (((ulong)puVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_390 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_390;
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_bounds_026ca548);
            local_3d0 = dVar10;
            local_3c8 = dVar11;
            local_3c0 = uVar12;
            local_3b8 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_convertRect_toView__0269ded8,local_130);
            local_3f0 = dVar10;
            dStack_3e8 = dVar11;
            local_3e0 = uVar12;
            uStack_3d8 = uVar13;
            local_3b0 = dVar10;
            dStack_3a8 = dVar11;
            local_3a0 = uVar12;
            uStack_398 = uVar13;
            _CGRectGetMinX(dVar10,dVar11,uVar12);
            uVar12 = 0x4020000000000000;
            dVar11 = local_198 + 8.0;
            if (dVar11 <= dVar10) {
              dStack_408 = dStack_3a8;
              local_410 = local_3b0;
              uStack_3f8 = uStack_398;
              local_400 = local_3a0;
              dVar10 = local_3b0;
              uVar13 = uStack_398;
              _CGRectGetMinY(local_3b0,dStack_3a8,local_3a0);
              uVar12 = 0x4018000000000000;
              dVar11 = local_1c8 - 6.0;
              if (dVar11 <= dVar10) {
                dStack_428 = dStack_3a8;
                local_430 = local_3b0;
                uStack_418 = uStack_398;
                local_420 = local_3a0;
                dVar10 = local_3b0;
                uVar13 = uStack_398;
                _CGRectGetMinY(local_3b0,dStack_3a8,local_3a0);
                uVar12 = 0x4000000000000000;
                dVar11 = local_1f8 - 2.0;
                if (dVar10 < dVar11) {
                  puVar3 = local_390;
                  (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar3;
                  FUN_008825d8();
                  _objc_retainAutoreleasedReturnValue();
                  local_438 = puVar4;
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  local_441 = 0;
                  puVar3 = local_438;
                  (*(code *)PTR__objc_msgSend_02578628)(local_438,PTR_s_length_0269cca0);
                  local_784 = 0;
                  if (puVar3 != (undefined *)0x0) {
                    puVar3 = local_438;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_438,PTR_s_isEqualToString__0269ccc8,local_2c8);
                    local_784 = 0;
                    if (((ulong)puVar3 & 1) == 0) {
                      puVar3 = local_438;
                      FUN_0087fb64();
                      _objc_retainAutoreleasedReturnValue();
                      local_441 = 1;
                      local_440 = puVar3;
                      FUN_0088011c();
                      local_784 = (uint)puVar3 ^ 1;
                    }
                  }
                  if ((local_441 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_440);
                  }
                  if ((local_784 & 1) != 0) {
                    FUN_00882804(local_390,&cf_phone,local_139 & 1);
                  }
                  _objc_storeStrong(&local_438,0);
                  local_140 = 0;
                  goto LAB_008822fc;
                }
              }
            }
            local_140 = 6;
          }
          else {
            local_140 = 6;
          }
LAB_008822fc:
          _objc_storeStrong(&local_390,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_2e0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_bounds_026ca548);
        local_320 = dVar10;
        local_318 = dVar11;
        local_310 = uVar12;
        local_308 = uVar13;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_convertRect_toView__0269ded8,local_130);
        local_340 = dVar10;
        dStack_338 = dVar11;
        local_330 = uVar12;
        uStack_328 = uVar13;
        local_300 = dVar10;
        dStack_2f8 = dVar11;
        local_2f0 = uVar12;
        uStack_2e8 = uVar13;
        _CGRectGetMinX(dVar10,dVar11,uVar12);
        uVar12 = 0x4020000000000000;
        dVar11 = local_198 + 8.0;
        if (dVar10 < dVar11) {
LAB_00881b30:
          local_140 = 6;
        }
        else {
          dStack_358 = dStack_2f8;
          local_360 = local_300;
          uStack_348 = uStack_2e8;
          local_350 = local_2f0;
          dVar10 = local_300;
          uVar13 = uStack_2e8;
          _CGRectGetMinY(local_300,dStack_2f8,local_2f0);
          uVar12 = 0x4018000000000000;
          dVar11 = local_1c8 - 6.0;
          if (dVar10 < dVar11) goto LAB_00881b30;
          dStack_378 = dStack_2f8;
          local_380 = local_300;
          uStack_368 = uStack_2e8;
          local_370 = local_2f0;
          dVar10 = local_300;
          uVar13 = uStack_2e8;
          _CGRectGetMinY(local_300,dStack_2f8,local_2f0);
          uVar12 = 0x4000000000000000;
          dVar11 = local_1f8 - 2.0;
          if (dVar11 <= dVar10) goto LAB_00881b30;
          puVar3 = local_2e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_titleForState__026a2208,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_008825d8();
          _objc_retainAutoreleasedReturnValue();
          local_388 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_388;
          (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_length_0269cca0);
          if (puVar3 == (undefined *)0x0) {
            puVar4 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_titleLabel_026caba0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar6;
            FUN_008825d8();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_388;
            local_388 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          puVar3 = local_388;
          (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_length_0269cca0);
          if (puVar3 != (undefined *)0x0) {
            FUN_00884b64(local_2e0,local_139 & 1);
          }
          _objc_storeStrong(&local_388,0);
          local_140 = 0;
        }
        _objc_storeStrong(&local_2e0,0);
      }
      _memset(auStack_490,0,0x40);
      puVar3 = local_2d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_7b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_7b8 != (undefined *)0x0) {
        lVar7 = *local_480;
        local_7c0 = (undefined *)0x0;
        do {
          do {
            if (*local_480 - lVar7 != 0) {
              _objc_enumerationMutation(*local_480 - lVar7,puVar3);
            }
            local_450 = *(undefined8 *)(local_488 + (long)local_7c0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_addObject__0269d180,local_450);
            local_7c0 = local_7c0 + 1;
          } while (local_7c0 < local_7b8);
          local_7b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_490,auStack_128,
                     0x10);
          local_7c0 = (undefined *)0x0;
        } while (local_7b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_2d8,0);
    }
    _objc_storeStrong(0,&local_2d0);
    _objc_storeStrong(&local_2c8,0);
    _objc_storeStrong(&local_200,0);
    local_140 = 0;
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

