// FUN_007d62fc @ 007d62fc

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007d62fc(void)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *local_670;
  undefined *local_668;
  undefined *local_5c8;
  undefined *local_5c0;
  ulong local_560;
  undefined *local_528;
  undefined *local_520;
  undefined *local_4b8;
  undefined *local_4b0;
  cfstringStruct *local_480;
  cfstringStruct *local_478;
  cfstringStruct *local_470;
  long local_468;
  undefined *local_460;
  ulong local_458;
  long local_450;
  undefined1 *local_448;
  long local_440;
  undefined *local_438;
  undefined1 auStack_430 [8];
  long local_428;
  long *local_420;
  long local_3f0;
  undefined8 local_3e8;
  ulong local_3e0;
  undefined *local_3d8;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  long local_390;
  byte local_381;
  ulong local_380;
  ulong local_378;
  ulong local_370;
  undefined4 local_364;
  ulong local_360;
  undefined1 auStack_358 [8];
  long local_350;
  long *local_348;
  ulong local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  ulong local_2f8;
  undefined1 auStack_2f0 [8];
  long local_2e8;
  long *local_2e0;
  ulong local_2b0;
  undefined *local_298;
  undefined *local_290;
  undefined *local_288;
  ulong local_280;
  undefined8 local_278;
  undefined8 local_270;
  ulong local_268;
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [128];
  undefined1 auStack_160 [128];
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar5 = DAT_028ccd28;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028ccd28 == (undefined *)0x0) || ((DAT_026f46c8 & 1) != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_290 = puVar5;
    FUN_007d76a8();
    _objc_retainAutoreleasedReturnValue();
    local_298 = puVar5;
    _memset(auStack_2f0,0,0x40);
    puVar5 = local_298;
    (*(code *)PTR__objc_retain_02578638)();
    local_4b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_a8,0x10);
    if (local_4b0 != (undefined *)0x0) {
      lVar7 = *local_2e0;
      local_4b8 = (undefined *)0x0;
      do {
        do {
          if (*local_2e0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2e0 - lVar7,puVar5);
          }
          uVar8 = *(ulong *)(local_2e8 + (long)local_4b8 * 8);
          local_2b0 = uVar8;
          FUN_007d5f98();
          _objc_retainAutoreleasedReturnValue();
          local_2f8 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
          if (1 < uVar8) {
            (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_2f8);
          }
          _objc_storeStrong(&local_2f8,0);
          local_4b8 = local_4b8 + 1;
        } while (local_4b8 < local_4b0);
        local_4b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2f0,auStack_a8,
                   0x10);
        local_4b8 = (undefined *)0x0;
      } while (local_4b0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_e0 = &cf_viewcontroller;
    local_d8 = &cf_settingscontroller;
    local_d0 = &cf_settingcontroller;
    local_c8 = &cf_mainviewcontroller;
    local_c0 = &cf_maincontroller;
    local_b8 = &cf_controller;
    local_b0 = &cf_view;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_300 = puVar5;
    FUN_007d5940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_308 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__A_Z__2__,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_310 = puVar2;
    _memset(auStack_358,0,0x40);
    puVar5 = local_308;
    (*(code *)PTR__objc_retain_02578638)();
    local_520 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_160,0x10);
    if (local_520 != (undefined *)0x0) {
      lVar7 = *local_348;
      local_528 = (undefined *)0x0;
      do {
        do {
          if (*local_348 - lVar7 != 0) {
            _objc_enumerationMutation(*local_348 - lVar7,puVar5);
          }
          uVar8 = *(ulong *)(local_350 + (long)local_528 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_318 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar8 & 1) == 0) {
            local_560 = 0;
          }
          else {
            local_560 = local_318;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_360 = local_560;
          (*(code *)PTR__objc_msgSend_02578628)(local_560,PTR_s_length_0269cca0);
          if (local_560 == 0) {
            local_364 = 5;
          }
          else {
            uVar8 = local_360;
            FUN_007d5f98();
            _objc_retainAutoreleasedReturnValue();
            local_370 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
            if ((1 < uVar8) &&
               (uVar8 = local_370,
               (*(code *)PTR__objc_msgSend_02578628)(local_370,PTR_s_length_0269cca0), uVar8 < 0x19)
               ) {
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_370);
            }
            uVar3 = local_360;
            FUN_007d80e0();
            _objc_retainAutoreleasedReturnValue();
            local_378 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
            uVar8 = local_378;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_380 = uVar8;
              local_381 = 1;
              while ((local_381 & 1) != 0) {
                local_381 = 0;
                _memset(auStack_3d0,0,0x40);
                puVar2 = local_300;
                (*(code *)PTR__objc_retain_02578638)();
                local_5c0 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,
                           auStack_1e0,0x10);
                if (local_5c0 != (undefined *)0x0) {
                  lVar9 = *local_3c0;
                  local_5c8 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_3c0 - lVar9 != 0) {
                        _objc_enumerationMutation(*local_3c0 - lVar9,puVar2);
                      }
                      local_390 = *(long *)(local_3c8 + (long)local_5c8 * 8);
                      uVar8 = local_380;
                      (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
                      lVar10 = local_390;
                      (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_length_0269cca0);
                      if ((lVar10 + 1U < uVar8) &&
                         (uVar3 = local_380,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_380,PTR_s_hasSuffix__0269d018,local_390),
                         uVar8 = local_380, (uVar3 & 1) != 0)) {
                        uVar3 = local_380;
                        (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
                        lVar9 = local_390;
                        (*(code *)PTR__objc_msgSend_02578628)(local_390,PTR_s_length_0269cca0);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar8,PTR_s_substringToIndex__0269d6c0,uVar3 - lVar9);
                        _objc_retainAutoreleasedReturnValue();
                        uVar3 = local_380;
                        local_380 = uVar8;
                        (*(code *)PTR__objc_release_02578630)(uVar3);
                        local_381 = 1;
                        local_364 = 8;
                        goto LAB_007d6c6c;
                      }
                      local_5c8 = local_5c8 + 1;
                    } while (local_5c8 < local_5c0);
                    local_5c0 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3d0,
                               auStack_1e0,0x10);
                    local_5c8 = (undefined *)0x0;
                  } while (local_5c0 != (undefined *)0x0);
                }
                local_364 = 0;
LAB_007d6c6c:
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
              uVar8 = local_380;
              (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_length_0269cca0);
              if (1 < uVar8) {
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_380)
                ;
              }
              _objc_storeStrong(&local_380,0);
            }
            puVar2 = local_310;
            uVar8 = local_360;
            uVar3 = local_360;
            (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_length_0269cca0);
            local_278 = 0;
            local_270 = 0;
            local_3e8 = 0;
            local_3e0 = uVar3;
            local_280 = uVar3;
            local_268 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_matchesInString_options_range__0269ef68,uVar8,0,0,uVar3);
            _objc_retainAutoreleasedReturnValue();
            local_3d8 = puVar2;
            _memset(auStack_430,0,0x40);
            puVar2 = local_3d8;
            (*(code *)PTR__objc_retain_02578638)();
            local_668 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                       auStack_260,0x10);
            if (local_668 != (undefined *)0x0) {
              lVar9 = *local_420;
              local_670 = (undefined *)0x0;
              do {
                do {
                  if (*local_420 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_420 - lVar9,puVar2);
                  }
                  lVar10 = *(long *)(local_428 + (long)local_670 * 8);
                  puVar6 = PTR_s_range_0269ef50;
                  local_3f0 = lVar10;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  bVar1 = true;
                  local_440 = lVar10;
                  local_438 = puVar6;
                  if (lVar10 != 0x7fffffffffffffff) {
                    lVar10 = local_3f0;
                    puVar6 = PTR_s_range_0269ef50;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = puVar6 < (undefined1 *)((long)&MACH_HEADER.magic + 2);
                    local_450 = lVar10;
                    local_448 = puVar6;
                  }
                  uVar8 = local_360;
                  if (!bVar1) {
                    lVar10 = local_3f0;
                    puVar6 = PTR_s_range_0269ef50;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_468 = lVar10;
                    local_460 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar8,PTR_s_substringWithRange__0269d138,lVar10,puVar6);
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = uVar8;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_458 = uVar3;
                    (*(code *)PTR__objc_release_02578630)(uVar8);
                    uVar8 = local_458;
                    (*(code *)PTR__objc_msgSend_02578628)(local_458,PTR_s_length_0269cca0);
                    if ((1 < uVar8) &&
                       (uVar8 = local_458,
                       (*(code *)PTR__objc_msgSend_02578628)(local_458,PTR_s_length_0269cca0),
                       uVar8 < 0xd)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_290,PTR_s_addObject__0269d180,local_458);
                    }
                    _objc_storeStrong(&local_458,0);
                  }
                  local_670 = local_670 + 1;
                } while (local_670 < local_668);
                local_668 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                           auStack_260,0x10);
                local_670 = (undefined *)0x0;
              } while (local_668 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            uVar8 = local_370;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_370,PTR_s_containsString__0269d0b0,&cf_xuegao);
            if ((((uVar8 & 1) != 0) ||
                (uVar8 = local_370,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_370,PTR_s_containsString__0269d0b0,&cf_xxuegao), (uVar8 & 1) != 0))
               || (uVar8 = local_370,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_370,PTR_s_containsString__0269d0b0,&cf_pkc), (uVar8 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,&cf_pkc);
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,&cf_xuegao);
              pcVar4 = &cf__ORKb;
              FUN_007d5f98();
              _objc_retainAutoreleasedReturnValue();
              local_470 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              if (pcVar4 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_470)
                ;
              }
              pcVar4 = &cf___;
              FUN_007d5f98();
              _objc_retainAutoreleasedReturnValue();
              local_478 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              if (pcVar4 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_478)
                ;
              }
              pcVar4 = &cf___RKb;
              FUN_007d5f98();
              _objc_retainAutoreleasedReturnValue();
              local_480 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              if (pcVar4 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_addObject__0269d180,local_480)
                ;
              }
              _objc_storeStrong(&local_480);
              _objc_storeStrong(&local_478,0);
              _objc_storeStrong(&local_470,0);
            }
            _objc_storeStrong(&local_3d8);
            _objc_storeStrong(&local_378,0);
            _objc_storeStrong(&local_370,0);
            local_364 = 0;
          }
          _objc_storeStrong(&local_360,0);
          local_528 = local_528 + 1;
        } while (local_528 < local_520);
        local_520 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_358,auStack_160,
                   0x10);
        local_528 = (undefined *)0x0;
      } while (local_520 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar2 = local_290;
    (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_copy_0269d150);
    puVar5 = DAT_028ccd28;
    DAT_028ccd28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    DAT_026f46c8 = 0;
    puVar5 = DAT_028ccd28;
    (*(code *)PTR__objc_retain_02578638)();
    local_364 = 1;
    local_288 = puVar5;
    _objc_storeStrong(&local_310);
    _objc_storeStrong(&local_308,0);
    _objc_storeStrong(&local_300,0);
    _objc_storeStrong(&local_298,0);
    _objc_storeStrong(&local_290,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_288);
  return;
}

