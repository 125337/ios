// FUN_01bd7a90 @ 01bd7a90

void FUN_01bd7a90(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined *local_448;
  ulong local_3a0;
  ulong local_398;
  ulong local_338;
  ulong local_330;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  code *local_2e0;
  undefined *local_2d8;
  ulong local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined1 auStack_290 [8];
  undefined8 local_288;
  undefined *local_280;
  byte local_271;
  undefined *local_270;
  byte local_261;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  undefined *local_248;
  int local_23c;
  undefined *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined1 *local_220;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  undefined1 *local_150;
  uint local_144;
  ulong local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar4 = param_1;
  local_138 = param_1;
  local_130 = param_1;
  _objc_autoreleasePoolPush();
  uVar7 = param_1 + 0x48;
  _objc_loadWeakRetained();
  local_140 = uVar7;
  if ((uVar7 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isCancelled_026a1c20), (uVar7 & 1) != 0)) {
    local_144 = 1;
  }
  else {
    puVar5 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_150 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_158 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar5;
    _memset(auStack_1a8,0,0x40);
    uVar7 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_330 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_330 != 0) {
      lVar17 = *local_198;
      local_338 = 0;
      do {
        do {
          if (*local_198 - lVar17 != 0) {
            _objc_enumerationMutation(*local_198 - lVar17,uVar7);
          }
          local_168 = *(long *)(local_1a0 + local_338 * 8);
          uVar10 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isCancelled_026a1c20);
          if ((uVar10 & 1) != 0) {
            local_144 = 1;
            goto LAB_01bd7e80;
          }
          lVar9 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_168,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          if (lVar9 == 0) {
            local_144 = 3;
          }
          else {
            puVar6 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_1b0);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,puVar8 + 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_1b0);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            puVar5 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_1b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (puVar5 == (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,local_1b0);
            }
            local_144 = 0;
          }
          _objc_storeStrong(&local_1b0,0);
          local_338 = local_338 + 1;
        } while (local_338 < local_330);
        local_330 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_338 = 0;
      } while (local_330 != 0);
    }
    local_144 = 0;
LAB_01bd7e80:
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if (local_144 == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_1b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCalendar_026ce070;
      local_1c0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar5;
      _memset(auStack_210,0,0x40);
      uVar7 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_398 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10)
      ;
      if (local_398 != 0) {
        lVar17 = *local_200;
        local_3a0 = 0;
        do {
          do {
            if (*local_200 - lVar17 != 0) {
              _objc_enumerationMutation(*local_200 - lVar17,uVar7);
            }
            local_1d0 = *(ulong *)(local_208 + local_3a0 * 8);
            uVar10 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isCancelled_026a1c20);
            if ((uVar10 & 1) != 0) {
              local_144 = 1;
              goto LAB_01bd8928;
            }
            uVar10 = local_1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = *(long *)(param_1 + 0x28);
            local_218 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
            if ((lVar9 == 0) ||
               (uVar10 = local_218,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_218,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_1 + 0x28))
               , (uVar10 & 1) != 0)) {
              if (*(long *)(param_1 + 0x30) != 0) {
                uVar10 = *(ulong *)(param_1 + 0x30);
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar10,PTR_s_containsObject__0269cbb8,local_218);
                if ((uVar10 & 1) == 0) {
                  local_144 = 5;
                  goto LAB_01bd88a4;
                }
              }
              puVar5 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_218);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              uVar3 = (uint)puVar6;
              FUN_01bd8cd0();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if ((uVar3 & 1) == 0) {
                local_144 = 5;
              }
              else if ((*(long *)(param_1 + 0x60) < 1) || (3 < *(long *)(param_1 + 0x60))) {
LAB_01bd8234:
                if ((*(long *)(param_1 + 0x60) == 4) &&
                   (puVar11 = local_150,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_150,PTR_s_isDataItemFavorite__026c0668,local_1d0),
                   ((ulong)puVar11 & 1) == 0)) {
                  local_144 = 5;
                }
                else if ((*(long *)(param_1 + 0x68) < 1) ||
                        (uVar10 = local_1d0, FUN_01bc8670(*(long *)(param_1 + 0x68)),
                        uVar10 == *(ulong *)(param_1 + 0x68))) {
                  lVar9 = *(long *)(param_1 + 0x38);
                  (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  if (lVar9 != 0) {
                    uVar14 = *(undefined8 *)(param_1 + 0x40);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar14,PTR_s_objectForKeyedSubscript__0269d098,local_218);
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentDesc);
                    _objc_retainAutoreleasedReturnValue();
                    uVar13 = local_1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_tid);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_stringWithFormat__0269cca8,&cf___________);
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_228 = puVar6;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    (*(code *)PTR__objc_release_02578630)(uVar13);
                    (*(code *)PTR__objc_release_02578630)(uVar12);
                    (*(code *)PTR__objc_release_02578630)(uVar10);
                    (*(code *)PTR__objc_release_02578630)(uVar14);
                    puVar5 = local_228;
                    puVar6 = PTR_s_rangeOfString__0269d838;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_228,PTR_s_rangeOfString__0269d838,
                               *(undefined8 *)(param_1 + 0x38));
                    puVar11 = puVar5 + -0x7fffffffffffffff;
                    if (puVar11 == (undefined1 *)0x0) {
                      puVar11 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
                      local_144 = 5;
                    }
                    else {
                      local_144 = 0;
                    }
                    local_238 = puVar5;
                    local_230 = puVar6;
                    _objc_storeStrong(puVar11,&local_228,0);
                    if (local_144 != 0) goto LAB_01bd88a4;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_addObject__0269d180,local_1d0);
                  uVar10 = local_1d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_createtime);
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar10;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  iVar16 = (int)uVar12;
                  (*(code *)PTR__objc_release_02578630)(uVar10);
                  puVar5 = local_1c8;
                  local_448 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_251 = 0;
                  local_261 = 0;
                  local_271 = 0;
                  local_23c = iVar16;
                  if (iVar16 == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_271 = 1;
                    local_270 = local_448;
                  }
                  else {
                    uVar14 = NEON_ucvtf(uVar12 & 0xffffffff);
                    puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar14,PTR__OBJC_CLASS___NSDate_026cdf88,
                               PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
                    _objc_retainAutoreleasedReturnValue();
                    local_251 = 1;
                    local_250 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_component_fromDate__026a5328,4);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_448,PTR_s_numberWithInteger__0269e080,puVar5);
                    _objc_retainAutoreleasedReturnValue();
                    local_261 = 1;
                    local_260 = local_448;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_248 = local_448;
                  if ((local_271 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_270);
                  }
                  if ((local_261 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_260);
                  }
                  if ((local_251 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_250);
                  }
                  puVar5 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_248);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (puVar5 == (undefined *)0x0) {
                    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                               local_248);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                  }
                  puVar5 = local_1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_248);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  _objc_storeStrong(&local_248,0);
                  local_144 = 0;
                }
                else {
                  local_144 = 5;
                }
              }
              else {
                puVar11 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_cacheStatusForDataItem__026a4728,local_1d0);
                local_220 = puVar11;
                if ((*(long *)(param_1 + 0x60) == 1) &&
                   (puVar11 != (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
                  local_144 = 5;
                }
                else if (((*(long *)(param_1 + 0x60) == 2) &&
                         ((dword *)puVar11 != &MACH_HEADER.cputype)) &&
                        (puVar11 != (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
                  local_144 = 5;
                }
                else {
                  if ((*(long *)(param_1 + 0x60) != 3) ||
                     (puVar11 == (undefined1 *)((long)&MACH_HEADER.magic + 3))) goto LAB_01bd8234;
                  local_144 = 5;
                }
              }
            }
            else {
              local_144 = 5;
            }
LAB_01bd88a4:
            _objc_storeStrong(&local_218,0);
            local_3a0 = local_3a0 + 1;
          } while (local_3a0 < local_398);
          local_398 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                     0x10);
          local_3a0 = 0;
        } while (local_398 != 0);
      }
      local_144 = 0;
LAB_01bd8928:
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if (local_144 == 0) {
        puVar5 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_allKeys_0269ef58);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_280 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar7 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_isCancelled_026a1c20);
        puVar5 = PTR___dispatch_main_q_02578680;
        bVar1 = (uVar7 & 1) == 0;
        if (bVar1) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_2f0 = PTR___NSConcreteStackBlock_02578660;
          local_2e8 = 0xc2000000;
          local_2e4 = 0;
          local_2e0 = FUN_01bd8e88;
          local_2d8 = &DAT_0258b870;
          _objc_copyWeak(auStack_290,param_1 + 0x50);
          uVar7 = local_140;
          (*(code *)PTR__objc_retain_02578638)();
          puVar8 = local_1b8;
          local_2d0 = uVar7;
          local_288 = *(undefined8 *)(param_1 + 0x70);
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_280;
          local_2c8 = puVar8;
          (*(code *)PTR__objc_retain_02578638)();
          puVar8 = local_1c0;
          local_2c0 = puVar6;
          (*(code *)PTR__objc_retain_02578638)();
          puVar2 = local_158;
          local_2b8 = puVar8;
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_160;
          local_2b0 = puVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a8 = puVar6;
          uVar14 = *(undefined8 *)(param_1 + 0x28);
          (*(code *)PTR__objc_retain_02578638)();
          uVar15 = *(undefined8 *)(param_1 + 0x20);
          local_2a0 = uVar14;
          (*(code *)PTR__objc_retain_02578638)();
          local_298 = uVar15;
          _dispatch_async(puVar5,&local_2f0);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_298);
          _objc_storeStrong(&local_2a0,0);
          _objc_storeStrong(&local_2a8,0);
          _objc_storeStrong(&local_2b0,0);
          _objc_storeStrong(&local_2b8,0);
          _objc_storeStrong(&local_2c0,0);
          _objc_storeStrong(&local_2c8,0);
          _objc_storeStrong(&local_2d0,0);
          _objc_destroyWeak(auStack_290);
        }
        local_144 = (uint)!bVar1;
        _objc_storeStrong(&local_280,0);
      }
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1c0,0);
      _objc_storeStrong(&local_1b8,0);
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  _objc_autoreleasePoolPop(lVar4);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

