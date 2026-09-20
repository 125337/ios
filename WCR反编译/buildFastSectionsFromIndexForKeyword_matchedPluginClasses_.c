// buildFastSectionsFromIndexForKeyword:matchedPluginClasses: @ 014c1364

/* Function Stack Size: 0x20 bytes */

ID WCRefineSearchManager::buildFastSectionsFromIndexForKeyword_matchedPluginClasses_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined1 *puVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  dword *pdVar12;
  cfstringStruct *local_460;
  cfstringStruct *local_450;
  undefined1 *local_430;
  undefined1 *local_428;
  ulong local_3e0;
  ulong local_3d8;
  ulong local_390;
  ulong local_388;
  cfstringStruct *local_350;
  char *local_348;
  cfstringStruct *local_340;
  bool local_331;
  cfstringStruct *local_330;
  cfstringStruct *local_328;
  bool local_319;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_308;
  undefined1 auStack_300 [8];
  long local_2f8;
  long *local_2f0;
  cfstringStruct *local_2c0;
  ulong local_2b8;
  undefined *local_2b0;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined1 *local_258;
  ulong local_250;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  ulong local_208;
  undefined8 local_200;
  undefined *local_1f8;
  long local_1f0;
  char *local_1e8;
  char *local_1e0;
  int local_1d4;
  ulong local_1d0;
  long local_1c8;
  SEL local_1c0;
  cfstringStruct *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_1c8,param_3);
  local_1d0 = 0;
  _objc_storeStrong(&local_1d0,param_4);
  if (local_1b8[2].field3_0x18 != 0) {
    lVar1 = local_1b8[2].field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (((lVar1 != 0) &&
        (lVar1 = local_1c8, (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0),
        lVar1 != 0)) &&
       (uVar2 = local_1d0, (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0),
       uVar2 != 0)) {
      pcVar4 = "WCTableViewSectionManager";
      _objc_getClass();
      pcVar5 = "WCTableViewNormalCellManager";
      local_1e0 = pcVar4;
      _objc_getClass();
      local_1e8 = pcVar5;
      if ((local_1e0 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
        puVar3 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d4 = 1;
        local_1b0 = puVar3;
      }
      else {
        lVar1 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_1f0 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_200 = 8;
        local_1f8 = puVar3;
        _memset(auStack_248,0,0x40);
        uVar2 = local_1d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_388 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,0x10
                  );
        if (local_388 != 0) {
          lVar1 = *local_238;
          local_390 = 0;
          do {
            do {
              if (*local_238 - lVar1 != 0) {
                _objc_enumerationMutation(*local_238 - lVar1,uVar2);
              }
              uVar9 = *(ulong *)(local_240 + local_390 * 8);
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_208 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar9 & 1) != 0) &&
                 (uVar9 = local_208,
                 (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0), uVar9 != 0)
                 ) {
                uVar9 = local_1b8[2].field3_0x18;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_objectForKeyedSubscript__0269d098,local_208);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_250 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
                if (((uVar9 & 1) == 0) ||
                   (uVar9 = local_250,
                   (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_count_0269cfe0), uVar9 == 0
                   )) {
                  local_1d4 = 3;
                }
                else {
                  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  local_258 = puVar3;
                  _memset(auStack_2a0,0,0x40);
                  uVar9 = local_250;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_3d8 = uVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                             auStack_128,0x10);
                  if (local_3d8 != 0) {
                    lVar10 = *local_290;
                    local_3e0 = 0;
                    do {
                      do {
                        if (*local_290 - lVar10 != 0) {
                          _objc_enumerationMutation(*local_290 - lVar10,uVar9);
                        }
                        uVar11 = *(ulong *)(local_298 + local_3e0 * 8);
                        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                        local_260 = uVar11;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (uVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
                        uVar6 = local_260;
                        if ((uVar11 & 1) != 0) {
                          (*(code *)PTR__objc_retain_02578638)();
                          local_2a8 = uVar6;
                          puVar3 = PTR_s_rangeOfString_options__0269d118;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (uVar6,PTR_s_rangeOfString_options__0269d118,local_1f0,1);
                          pdVar12 = (dword *)0x0;
                          local_2b8 = uVar6;
                          local_2b0 = puVar3;
                          if (uVar6 == 0x7fffffffffffffff) {
LAB_014c18b4:
                            local_1d4 = 0;
                          }
                          else {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_258,PTR_s_addObject__0269d180,local_2a8);
                            puVar7 = local_258;
                            (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0);
                            pdVar12 = (dword *)(puVar7 + -8);
                            if (puVar7 < &MACH_HEADER.cpusubtype) goto LAB_014c18b4;
                            pdVar12 = &MACH_HEADER.cputype;
                            local_1d4 = 4;
                          }
                          _objc_storeStrong(pdVar12,&local_2a8,0);
                          if (local_1d4 != 0) goto LAB_014c193c;
                        }
                        local_3e0 = local_3e0 + 1;
                      } while (local_3e0 < local_3d8);
                      local_3d8 = uVar9;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                                 auStack_128,0x10);
                      local_3e0 = 0;
                    } while (local_3d8 != 0);
                  }
                  local_1d4 = 0;
LAB_014c193c:
                  (*(code *)PTR__objc_release_02578630)(uVar9);
                  puVar7 = local_258;
                  (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_count_0269cfe0);
                  if (puVar7 == (undefined1 *)0x0) {
                    local_1d4 = 3;
                  }
                  else {
                    _memset(auStack_300,0,0x40);
                    puVar7 = local_258;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_428 = puVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_300,
                               auStack_1a8,0x10);
                    if (local_428 != (undefined1 *)0x0) {
                      lVar10 = *local_2f0;
                      local_430 = (undefined1 *)0x0;
                      do {
                        do {
                          if (*local_2f0 - lVar10 != 0) {
                            _objc_enumerationMutation(*local_2f0 - lVar10,puVar7);
                          }
                          local_2c0 = *(cfstringStruct **)(local_2f8 + (long)local_430 * 8);
                          pcVar8 = local_1b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1b8,PTR_s_wcRefineSearchComponentsFromInde_026af590,
                                     local_2c0);
                          _objc_retainAutoreleasedReturnValue();
                          local_308 = pcVar8;
                          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_count_0269cfe0);
                          local_319 = false;
                          if (pcVar8 < (cfstringStruct *)0x2) {
                            local_450 = &::cf___;
                          }
                          else {
                            local_450 = local_308;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_308,PTR_s_objectAtIndexedSubscript__0269cc78,1);
                            _objc_retainAutoreleasedReturnValue();
                            local_318 = local_450;
                          }
                          local_319 = pcVar8 >= (cfstringStruct *)0x2;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_310 = local_450;
                          if ((local_319 & 1U) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_318);
                          }
                          pcVar8 = local_308;
                          (*(code *)PTR__objc_msgSend_02578628)(local_308,PTR_s_count_0269cfe0);
                          local_331 = false;
                          if (pcVar8 < (cfstringStruct *)0x3) {
                            local_460 = local_2c0;
                          }
                          else {
                            local_460 = local_308;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_308,PTR_s_objectAtIndexedSubscript__0269cc78,2);
                            _objc_retainAutoreleasedReturnValue();
                            local_330 = local_460;
                          }
                          local_331 = pcVar8 >= (cfstringStruct *)0x3;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_328 = local_460;
                          if ((local_331 & 1U) != 0) {
                            (*(code *)PTR__objc_release_02578630)(local_330);
                          }
                          pcVar8 = local_1b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1b8,PTR_s_wcRefineSearchBreadcrumbHeaderFo_026af598,
                                     local_208,local_310);
                          _objc_retainAutoreleasedReturnValue();
                          local_340 = pcVar8;
                          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
                          if (pcVar8 == (cfstringStruct *)0x0) {
                            _objc_storeStrong(&local_340,local_208);
                          }
                          pcVar4 = local_1e0;
                          _objc_alloc_init();
                          local_348 = pcVar4;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (pcVar4,PTR_s_respondsToSelector__026ca818,
                                     PTR_s_setHeaderTitle__0269e3c0);
                          if (((ulong)pcVar4 & 1) != 0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                       PTR_s_setHeaderTitle__0269e3c0,local_340);
                          }
                          pcVar8 = local_1b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1b8,PTR_s_wcRefineSearchNavigationCellWith_026af5a0,
                                     local_328,local_208,local_310,local_1c8);
                          _objc_retainAutoreleasedReturnValue();
                          local_350 = pcVar8;
                          if (pcVar8 == (cfstringStruct *)0x0) {
                            local_1d4 = 7;
                          }
                          else {
                            pcVar4 = local_348;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_348,PTR_s_respondsToSelector__026ca818,
                                       PTR_s_addCell__0269e3f8);
                            if (((ulong)pcVar4 & 1) != 0) {
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_348,PTR_s_performSelector_withObject__026ca7c0,
                                         PTR_s_addCell__0269e3f8,local_350);
                            }
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_1f8,PTR_s_addObject__0269d180,local_348);
                            local_1d4 = 0;
                          }
                          _objc_storeStrong(&local_350);
                          _objc_storeStrong(&local_348,0);
                          _objc_storeStrong(&local_340,0);
                          _objc_storeStrong(&local_328,0);
                          _objc_storeStrong(&local_310,0);
                          _objc_storeStrong(&local_308,0);
                          local_430 = local_430 + 1;
                        } while (local_430 < local_428);
                        local_428 = puVar7;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_300,auStack_1a8,0x10);
                        local_430 = (undefined1 *)0x0;
                      } while (local_428 != (undefined1 *)0x0);
                    }
                    (*(code *)PTR__objc_release_02578630)(puVar7);
                    local_1d4 = 0;
                  }
                  _objc_storeStrong(&local_258,0);
                }
                _objc_storeStrong(&local_250,0);
              }
              local_390 = local_390 + 1;
            } while (local_390 < local_388);
            local_388 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_a8,
                       0x10);
            local_390 = 0;
          } while (local_388 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        puVar3 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_copy_0269d150);
        local_1d4 = 1;
        local_1b0 = puVar3;
        _objc_storeStrong(&local_1f8);
        _objc_storeStrong(&local_1f0,0);
      }
      goto LAB_014c1f34;
    }
  }
  puVar3 = *(undefined **)PTR____NSArray0___02578280;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d4 = 1;
  local_1b0 = puVar3;
LAB_014c1f34:
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_1b0;
}

