// FUN_00659318 @ 00659318

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00659318(undefined8 param_1,undefined *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined *local_658;
  undefined *local_640;
  undefined *local_620;
  undefined *local_5f0;
  undefined *local_4c0;
  undefined *local_4b8;
  ulong local_450;
  ulong local_448;
  undefined *local_400;
  undefined *local_388;
  undefined *local_378;
  undefined *local_368;
  undefined *local_358;
  undefined *local_350;
  undefined1 local_341;
  undefined *local_340;
  undefined *local_338;
  undefined *local_330;
  ulong local_328;
  byte local_319;
  undefined *local_318;
  undefined *local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  uint local_2bc;
  undefined *local_2b8;
  ulong local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  ulong local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined *local_248;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  ulong local_228;
  undefined *local_220;
  int local_218;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  ulong local_158;
  ulong local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1f8 = (undefined *)0x0;
  _objc_storeStrong(&local_1f8,param_1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_200 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (uint)local_200;
  local_208 = puVar4;
  FUN_0064d8b4();
  local_1f0 = local_208;
  if ((uVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_218 = 1;
  }
  else {
    puVar5 = local_1f8;
    FUN_0064f9ac();
    _objc_retainAutoreleasedReturnValue();
    local_220 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    puVar4 = local_208;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = puVar4;
      local_218 = 1;
    }
    else {
      puVar4 = local_1f8;
      FUN_0065e4ec(local_1f8,local_200);
      local_228 = 0;
      FUN_00656968();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      puVar5 = local_200;
      FUN_006569dc(local_200,local_220,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_231 = 0;
      local_400 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_400 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_230 = local_400;
      }
      local_231 = puVar6 == (undefined *)0x0;
      _objc_storeStrong(&local_228,local_400);
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_sync_exit(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar7 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0);
      puVar4 = local_208;
      if (uVar7 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = puVar4;
        local_218 = 1;
      }
      else {
        puVar4 = local_1f8;
        FUN_0065b250();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_1f8;
        local_240 = puVar4;
        FUN_0064fac4(local_1f8,local_200);
        _objc_retainAutoreleasedReturnValue();
        local_250 = 0;
        local_258 = 0;
        local_260 = 0;
        local_248 = puVar5;
        _memset(auStack_2a8,0,0x40);
        uVar7 = local_228;
        (*(code *)PTR__objc_retain_02578638)();
        local_448 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,0x10
                  );
        if (local_448 != 0) {
          lVar13 = *local_298;
          local_450 = 0;
          do {
            do {
              if (*local_298 - lVar13 != 0) {
                _objc_enumerationMutation(*local_298 - lVar13,uVar7);
              }
              uVar15 = *(ulong *)(local_2a0 + local_450 * 8);
              local_268 = uVar15;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar15,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
              _objc_retainAutoreleasedReturnValue();
              local_2b0 = uVar15;
              if (uVar15 == 0) {
                local_218 = 3;
              }
              else {
                puVar4 = local_248;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_248,PTR_s_containsObject__0269cbb8,uVar15);
                if (((ulong)puVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_248,PTR_s_removeObject__0269d678,local_2b0);
                  local_260 = local_260 + 1;
                }
                puVar4 = local_240;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_240,PTR_s_objectForKeyedSubscript__0269d098,local_2b0);
                _objc_retainAutoreleasedReturnValue();
                local_2b8 = puVar4;
                if (puVar4 == (undefined *)0x0) {
                  uVar15 = local_268;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_268,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar15;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  uVar3 = (uint)uVar8;
                  (*(code *)PTR__objc_release_02578630)(uVar15);
                  local_2bc = uVar3;
                  if (uVar3 != 0) {
                    _memset(auStack_308,0,0x40);
                    puVar4 = local_240;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_4b8 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_308,
                               auStack_128,0x10);
                    if (local_4b8 != (undefined *)0x0) {
                      lVar14 = *local_2f8;
                      local_4c0 = (undefined *)0x0;
                      do {
                        do {
                          if (*local_2f8 - lVar14 != 0) {
                            _objc_enumerationMutation(*local_2f8 - lVar14,puVar4);
                          }
                          local_2c8 = *(undefined8 *)(local_300 + (long)local_4c0 * 8);
                          puVar5 = local_240;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_240,PTR_s_objectForKeyedSubscript__0269d098,local_2c8);
                          _objc_retainAutoreleasedReturnValue();
                          puVar6 = puVar5;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          local_310 = puVar6;
                          (*(code *)PTR__objc_release_02578630)(puVar5);
                          puVar5 = local_310;
                          local_319 = 0;
                          bVar2 = false;
                          if (local_310 != (undefined *)0x0) {
                            puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                            _objc_retainAutoreleasedReturnValue();
                            local_319 = 1;
                            bVar2 = false;
                            local_318 = puVar6;
                            if (puVar5 != puVar6) {
                              puVar5 = local_310;
                              FUN_00656104();
                              bVar2 = puVar5 == (undefined *)(ulong)local_2bc;
                            }
                          }
                          if ((local_319 & 1) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_318);
                          }
                          if (bVar2) {
                            puVar6 = local_240;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_240,PTR_s_objectForKeyedSubscript__0269d098,local_2c8);
                            _objc_retainAutoreleasedReturnValue();
                            puVar5 = local_2b8;
                            local_2b8 = puVar6;
                            (*(code *)PTR__objc_release_02578630)(puVar5);
                            _objc_storeStrong(&local_2b0,local_2c8);
                            local_218 = 4;
                          }
                          else {
                            local_218 = 0;
                          }
                          _objc_storeStrong(&local_310,0);
                          if (local_218 != 0) goto LAB_00659e08;
                          local_4c0 = local_4c0 + 1;
                        } while (local_4c0 < local_4b8);
                        local_4b8 = puVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_308,auStack_128,0x10);
                        local_4c0 = (undefined *)0x0;
                      } while (local_4b8 != (undefined *)0x0);
                    }
                    local_218 = 0;
LAB_00659e08:
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                  }
                }
                if (local_2b8 == (undefined *)0x0) {
                  uVar15 = local_268;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_268,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar15;
                  FUN_00655814();
                  _objc_retainAutoreleasedReturnValue();
                  local_328 = uVar8;
                  (*(code *)PTR__objc_release_02578630)(uVar15);
                  if (((local_328 == 0) ||
                      (uVar15 = local_328, FUN_0065c0c8(local_328,0,local_200), (uVar15 & 1) == 0))
                     || (uVar15 = local_328, FUN_0065c1d8(local_328,0), puVar4 = local_208,
                        (uVar15 & 1) != 0)) {
                    local_250 = local_250 + 1;
                  }
                  else {
                    local_188 = &cf_key;
                    local_158 = local_2b0;
                    local_180 = &cf_msg;
                    local_150 = local_328;
                    local_178 = &cf_section;
                    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                               0xffffffff);
                    _objc_retainAutoreleasedReturnValue();
                    local_170 = &cf_row;
                    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    local_148 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,
                               0xffffffff);
                    _objc_retainAutoreleasedReturnValue();
                    local_168 = &cf_node;
                    puVar10 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                    local_140 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                    _objc_retainAutoreleasedReturnValue();
                    local_160 = &cf_hasPosition;
                    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    local_138 = puVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                    local_130 = puVar11;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSDictionary_026ce090,
                               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_158,&local_188
                               ,6);
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar12;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180,puVar9);
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    (*(code *)PTR__objc_release_02578630)(puVar12);
                    (*(code *)PTR__objc_release_02578630)(puVar11);
                    (*(code *)PTR__objc_release_02578630)(puVar10);
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                  }
                  local_218 = 3;
                  _objc_storeStrong(&local_328,0);
                }
                else {
                  puVar4 = local_2b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_msg);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = local_2b8;
                  local_330 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_node);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_330;
                  local_341 = 0;
                  bVar2 = true;
                  uVar1 = local_330 != (undefined *)0x0;
                  local_338 = puVar5;
                  if ((bool)uVar1) {
                    puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                    _objc_retainAutoreleasedReturnValue();
                    bVar2 = puVar4 == puVar5;
                    local_341 = uVar1;
                    local_340 = puVar5;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    uVar1 = local_341;
                  }
                  local_341 = uVar1;
                  puVar4 = local_338;
                  if (bVar2) {
                    local_250 = local_250 + 1;
                    local_218 = 3;
                  }
                  else {
                    bVar2 = false;
                    if (local_338 == (undefined *)0x0) {
LAB_0065a4dc:
                      local_5f0 = (undefined *)0x0;
                    }
                    else {
                      local_358 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                      _objc_retainAutoreleasedReturnValue();
                      bVar2 = true;
                      if (puVar4 == local_358) goto LAB_0065a4dc;
                      local_5f0 = local_338;
                    }
                    (*(code *)PTR__objc_retain_02578638)();
                    local_350 = local_5f0;
                    if (bVar2) {
                      (*(code *)PTR__objc_release_02578630)(local_358);
                    }
                    puVar4 = local_330;
                    FUN_0065c0c8(local_330,local_350,local_200);
                    if ((((ulong)puVar4 & 1) == 0) ||
                       (puVar5 = local_330, FUN_0065c1d8(local_330,local_350), puVar4 = local_208,
                       ((ulong)puVar5 & 1) != 0)) {
                      local_258 = local_258 + 1;
                      local_218 = 3;
                    }
                    else {
                      local_1e8 = &cf_key;
                      local_1b8 = local_2b0;
                      local_1e0 = &cf_msg;
                      local_1b0 = local_330;
                      local_1d8 = &cf_section;
                      puVar5 = local_2b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2b8,PTR_s_objectForKeyedSubscript__0269d098);
                      _objc_retainAutoreleasedReturnValue();
                      local_620 = puVar5;
                      if (puVar5 == (undefined *)0x0) {
                        local_368 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810
                                   ,0);
                        _objc_retainAutoreleasedReturnValue();
                        local_620 = local_368;
                      }
                      local_1a8 = local_620;
                      local_1d0 = &cf_row;
                      puVar6 = local_2b8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2b8,PTR_s_objectForKeyedSubscript__0269d098);
                      _objc_retainAutoreleasedReturnValue();
                      local_640 = puVar6;
                      if (puVar6 == (undefined *)0x0) {
                        local_378 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810
                                   ,0);
                        _objc_retainAutoreleasedReturnValue();
                        local_640 = local_378;
                      }
                      local_1a0 = local_640;
                      local_1c8 = &cf_node;
                      bVar2 = local_350 == (undefined *)0x0;
                      if (bVar2) {
                        local_658 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                        _objc_retainAutoreleasedReturnValue();
                        local_388 = local_658;
                      }
                      else {
                        local_658 = local_350;
                      }
                      local_198 = local_658;
                      local_1c0 = &cf_hasPosition;
                      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                                 1);
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      local_190 = puVar10;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_1b8,
                                 &local_1e8,6);
                      _objc_retainAutoreleasedReturnValue();
                      puVar12 = puVar11;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar4,PTR_s_addObject__0269d180,puVar12);
                      (*(code *)PTR__objc_release_02578630)(puVar12);
                      (*(code *)PTR__objc_release_02578630)(puVar11);
                      (*(code *)PTR__objc_release_02578630)(puVar10);
                      if (bVar2) {
                        (*(code *)PTR__objc_release_02578630)(local_388);
                      }
                      if (puVar6 == (undefined *)0x0) {
                        (*(code *)PTR__objc_release_02578630)(local_378);
                      }
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      if (puVar5 == (undefined *)0x0) {
                        (*(code *)PTR__objc_release_02578630)(local_368);
                      }
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                      local_218 = 0;
                    }
                    _objc_storeStrong(&local_350,0);
                  }
                  _objc_storeStrong(&local_338);
                  _objc_storeStrong(&local_330,0);
                }
                _objc_storeStrong(&local_2b8,0);
              }
              _objc_storeStrong(&local_2b0,0);
              local_450 = local_450 + 1;
            } while (local_450 < local_448);
            local_448 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_a8,
                       0x10);
            local_450 = 0;
          } while (local_448 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar7);
        uVar7 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0);
        if (uVar7 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_count_0269cfe0);
        }
        puVar4 = local_208;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = puVar4;
        local_218 = 1;
        _objc_storeStrong(&local_248);
        _objc_storeStrong(&local_240,0);
      }
      _objc_storeStrong(&local_228,0);
    }
    _objc_storeStrong(&local_220,0);
  }
  _objc_storeStrong(&local_208);
  _objc_storeStrong(&local_1f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

