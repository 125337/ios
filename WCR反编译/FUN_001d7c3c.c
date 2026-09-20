// FUN_001d7c3c @ 001d7c3c

void FUN_001d7c3c(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  uint uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *local_708;
  undefined *local_700;
  undefined *local_670;
  undefined *local_668;
  uint local_61c;
  undefined *local_5c8;
  undefined *local_5c0;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_490;
  undefined1 auStack_488 [8];
  long local_480;
  long *local_478;
  undefined8 local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  undefined1 auStack_3f8 [8];
  long local_3f0;
  long *local_3e8;
  undefined8 local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  undefined1 auStack_370 [8];
  long local_368;
  long *local_360;
  undefined8 local_330;
  undefined *local_328;
  double local_320;
  long local_318;
  long local_310;
  ulong local_308;
  undefined *local_300;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  double local_258;
  long local_250;
  undefined *local_248;
  undefined4 local_240;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar2 = &local_230;
  local_230 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_5);
  uVar1 = (uint)ppuVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_230 == (undefined *)0x0)) {
    local_240 = 1;
  }
  else {
    puVar3 = local_230;
    FUN_001d9ce0();
    uVar1 = (uint)puVar3;
    if (((ulong)puVar3 & 1) == 0) {
      FUN_001d3fac();
      if ((uVar1 & 1) != 0) {
        puVar3 = local_230;
        FUN_001dca24();
        uVar1 = (uint)puVar3;
        if (((ulong)puVar3 & 1) != 0) {
          FUN_001dcc28(local_230);
          FUN_001d6d38(local_230);
          local_240 = 1;
          goto LAB_001d8c18;
        }
      }
      FUN_001d3fac();
      if ((uVar1 & 1) == 0) {
        FUN_001da6a8(local_230);
        pcVar4 = &cf_WCPuzzleImageView;
        _NSClassFromString();
        pcVar5 = &cf_WCImageView;
        local_2f0 = pcVar4;
        _NSClassFromString();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        puVar6 = local_230;
        local_2f8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithArray__0269eab8);
        _objc_retainAutoreleasedReturnValue();
        local_300 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_308 = 0;
        local_310 = 0;
        local_318 = 0;
        dVar9 = 0.0;
        local_320 = 0.0;
        while (puVar3 = local_300,
              (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_count_0269cfe0),
              puVar3 != (undefined *)0x0 && local_308 < 0x50) {
          puVar3 = local_300;
          (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_328 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_300,PTR_s_removeObjectAtIndex__0269d530,0);
          local_308 = local_308 + 1;
          puVar3 = local_328;
          (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_isHidden_026ca768);
          dVar12 = param_3;
          dVar11 = param_4;
          if ((((ulong)puVar3 & 1) != 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_alpha_026ca4d8),
             dVar12 = param_3, dVar11 = param_4, dVar9 <= DAT_02323cd0)) {
            _memset(auStack_370,0,0x40);
            puVar3 = local_328;
            (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_5c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_5c0 != (undefined *)0x0) {
              lVar7 = *local_360;
              local_5c8 = (undefined *)0x0;
              do {
                do {
                  if (*local_360 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_360 - lVar7,puVar3);
                  }
                  local_330 = *(undefined8 *)(local_368 + (long)local_5c8 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_300,PTR_s_addObject__0269d180,local_330);
                  local_5c8 = local_5c8 + 1;
                } while (local_5c8 < local_5c0);
                local_5c0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_370,
                           auStack_128,0x10);
                local_5c8 = (undefined *)0x0;
              } while (local_5c0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_240 = 4;
          }
          else {
            puVar3 = local_328;
            dVar10 = DAT_02323cd0;
            FUN_001d2ddc();
            dVar12 = param_3;
            dVar11 = param_4;
            if ((((ulong)puVar3 & 1) == 0) &&
               (puVar3 = local_328, FUN_001da12c(local_328,local_230), dVar12 = param_3,
               dVar11 = param_4, ((ulong)puVar3 & 1) == 0)) {
              uVar8 = 0;
              if (local_328 != local_230) {
                if ((local_2f0 != (cfstringStruct *)0x0) &&
                   (puVar3 = local_328,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_328,PTR_s_isKindOfClass__0269cd68,local_2f0), dVar11 = dVar9,
                   ((ulong)puVar3 & 1) != 0)) {
LAB_001d8574:
                  (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
                  dVar13 = 32.0;
                  local_61c = 0;
                  dVar9 = param_3;
                  dVar12 = dVar10;
                  local_390 = dVar11;
                  local_388 = dVar10;
                  local_380 = param_3;
                  local_378 = param_4;
                  if (32.0 <= param_3) {
                    dVar9 = dVar11;
                    (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
                    local_61c = 0;
                    dVar12 = dVar13;
                    dVar11 = param_3;
                    local_3b0 = param_3;
                    local_3a8 = dVar13;
                    local_3a0 = dVar10;
                    local_398 = dVar9;
                    if (32.0 <= dVar9) {
                      puVar3 = local_328;
                      FUN_001d2ddc();
                      local_61c = (uint)puVar3 ^ 1;
                      dVar12 = dVar13;
                      dVar11 = param_3;
                    }
                  }
                  if ((local_61c & 1) != 0) {
                    FUN_001d0ac4(local_328);
                    local_310 = local_310 + 1;
                  }
                  _memset(auStack_3f8,0,0x40);
                  puVar3 = local_328;
                  (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_subviews_026cab40);
                  _objc_retainAutoreleasedReturnValue();
                  local_668 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  if (local_668 != (undefined *)0x0) {
                    lVar7 = *local_3e8;
                    local_670 = (undefined *)0x0;
                    do {
                      do {
                        if (*local_3e8 - lVar7 != 0) {
                          _objc_enumerationMutation(*local_3e8 - lVar7,puVar3);
                        }
                        local_3b8 = *(undefined8 *)(local_3f0 + (long)local_670 * 8);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_300,PTR_s_addObject__0269d180,local_3b8);
                        local_670 = local_670 + 1;
                      } while (local_670 < local_668);
                      local_668 = puVar3;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f8,
                                 auStack_1a8,0x10);
                      local_670 = (undefined *)0x0;
                    } while (local_668 != (undefined *)0x0);
                  }
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                  local_240 = 4;
                  goto LAB_001d8adc;
                }
                uVar8 = 0;
                if (local_2f8 != (cfstringStruct *)0x0) {
                  puVar3 = local_328;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_328,PTR_s_isKindOfClass__0269cd68,local_2f8);
                  uVar8 = (ulong)puVar3 & 0xffffffff;
                  dVar11 = dVar9;
                  if (((ulong)puVar3 & 1) != 0) goto LAB_001d8574;
                }
              }
              puVar3 = local_328;
              FUN_001de258(uVar8,local_328,local_230);
              dVar12 = param_3;
              dVar11 = param_4;
              if (((ulong)puVar3 & 1) != 0) {
                FUN_001d9428(local_328);
                (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
                dVar12 = param_3;
                dVar11 = param_3;
                dVar13 = dVar9;
                local_420 = dVar9;
                local_418 = dVar10;
                local_410 = param_3;
                local_408 = param_4;
                (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_bounds_026ca548);
                dVar9 = param_3 * dVar13;
                local_440 = dVar12;
                local_438 = dVar11;
                local_430 = dVar10;
                local_428 = dVar13;
                local_400 = dVar9;
                if (local_320 < dVar9) {
                  local_320 = dVar9;
                  _objc_storeStrong(&local_318,local_328);
                }
                local_310 = local_310 + 1;
                dVar12 = dVar10;
              }
              _memset(auStack_488,0,0x40);
              puVar3 = local_328;
              (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              local_700 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_700 != (undefined *)0x0) {
                lVar7 = *local_478;
                local_708 = (undefined *)0x0;
                do {
                  do {
                    if (*local_478 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_478 - lVar7,puVar3);
                    }
                    local_448 = *(undefined8 *)(local_480 + (long)local_708 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_300,PTR_s_addObject__0269d180,local_448);
                    local_708 = local_708 + 1;
                  } while (local_708 < local_700);
                  local_700 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_488,
                             auStack_228,0x10);
                  local_708 = (undefined *)0x0;
                } while (local_700 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar3);
              local_240 = 0;
            }
            else {
              FUN_001d6720(local_328);
              local_240 = 4;
            }
          }
LAB_001d8adc:
          _objc_storeStrong(&local_328,0);
          param_3 = dVar12;
          param_4 = dVar11;
        }
        if (local_318 != 0) {
          FUN_001d031c(local_318);
        }
        if (local_310 == 0) {
          puVar3 = local_230;
          FUN_001d8c8c();
          _objc_retainAutoreleasedReturnValue();
          local_490 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            FUN_001d9428(local_230);
          }
          else {
            FUN_001d9428(puVar3);
            FUN_001d031c(local_490);
          }
          _objc_storeStrong(&local_490,0);
        }
        FUN_001d6d38(local_230);
        FUN_001d7254(local_230);
        _objc_storeStrong(&local_318);
        _objc_storeStrong(&local_300,0);
        local_240 = 0;
      }
      else {
        FUN_001dd0f4(local_230);
        puVar3 = local_230;
        FUN_001dd6c4();
        _objc_retainAutoreleasedReturnValue();
        local_248 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
        if (puVar3 != (undefined *)0x0) {
          FUN_001dd748(puVar3,local_248,local_230);
          local_250 = 0;
          dVar9 = 0.0;
          local_258 = 0.0;
          _memset(auStack_2a0,0,0x40);
          puVar3 = local_248;
          (*(code *)PTR__objc_retain_02578638)();
          local_4d8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_a8,
                     0x10);
          if (local_4d8 != (undefined *)0x0) {
            lVar7 = *local_290;
            local_4e0 = (undefined *)0x0;
            do {
              do {
                dVar11 = param_3;
                dVar12 = param_4;
                if (*local_290 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_290 - lVar7,puVar3);
                  dVar11 = param_3;
                  dVar12 = param_4;
                }
                local_260 = *(undefined8 *)(local_298 + (long)local_4e0 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_bounds_026ca548);
                dVar10 = dVar11;
                param_4 = dVar11;
                param_3 = param_2;
                dVar13 = dVar9;
                local_2c8 = dVar9;
                local_2c0 = param_2;
                local_2b8 = dVar11;
                local_2b0 = dVar12;
                (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_bounds_026ca548);
                dVar9 = dVar11 * dVar13;
                param_2 = local_258;
                local_2e8 = dVar10;
                local_2e0 = param_4;
                local_2d8 = param_3;
                local_2d0 = dVar13;
                local_2a8 = dVar9;
                if (local_258 < dVar9) {
                  local_258 = dVar9;
                  _objc_storeStrong(&local_250,local_260);
                }
                local_4e0 = local_4e0 + 1;
              } while (local_4e0 < local_4d8);
              local_4d8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                         auStack_a8,0x10);
              local_4e0 = (undefined *)0x0;
            } while (local_4d8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_250 != 0) {
            FUN_001d031c(local_250);
          }
          _objc_storeStrong(&local_250,0);
        }
        FUN_001d6d38(local_230);
        FUN_001d7254(local_230);
        local_240 = 1;
        _objc_storeStrong(&local_248,0);
      }
    }
    else {
      FUN_001dc958(local_230);
      local_240 = 1;
    }
  }
LAB_001d8c18:
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

