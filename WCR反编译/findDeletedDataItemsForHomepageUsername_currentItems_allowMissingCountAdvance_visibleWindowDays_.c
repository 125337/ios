// findDeletedDataItemsForHomepageUsername:currentItems:allowMissingCountAdvance:visibleWindowDays: @ 010c08c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x2c bytes */

ID WCRefineMomentsMonitor::
   findDeletedDataItemsForHomepageUsername_currentItems_allowMissingCountAdvance_visibleWindowDays_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,long_long param_6)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  ulong local_350;
  ulong local_348;
  undefined *local_320;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  double local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  byte local_189;
  ulong local_188;
  undefined *local_180;
  ID local_178;
  undefined *local_170;
  undefined4 local_164;
  long_long local_160;
  byte local_151;
  ulong local_150;
  long local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  local_151 = (byte)param_5;
  lVar5 = local_148;
  local_160 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    IVar1 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_164 = 1;
    local_130 = IVar1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_170;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_170,
       (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_containsObject__0269cbb8,local_148),
       ((ulong)puVar2 & 1) == 0)) {
      IVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_cachedDataItemsForUsername__026a4c00,local_148);
      _objc_retainAutoreleasedReturnValue();
      local_178 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
      if (IVar1 == 0) {
        IVar1 = *(ID *)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_164 = 1;
        local_130 = IVar1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_150;
        local_188 = 0;
        local_189 = 0;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_180 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar7 & 1) != 0) {
          _memset(auStack_1d8,0,0x40);
          uVar7 = local_150;
          (*(code *)PTR__objc_retain_02578638)();
          local_2f0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                     0x10);
          if (local_2f0 != 0) {
            lVar5 = *local_1c8;
            local_2f8 = 0;
            do {
              do {
                if (*local_1c8 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1c8 - lVar5,uVar7);
                }
                uVar8 = *(ulong *)(local_1d0 + local_2f8 * 8);
                local_198 = uVar8;
                FUN_010bf2ec();
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar8,PTR_s_isEqualToString__0269ccc8,local_148);
                if ((uVar8 & 1) == 0) {
                  local_164 = 3;
                }
                else {
                  uVar8 = local_198;
                  FUN_010b66f4();
                  _objc_retainAutoreleasedReturnValue();
                  local_1e8 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
                  if (uVar8 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_180,PTR_s_addObject__0269d180,local_1e8);
                  }
                  uVar8 = local_198;
                  FUN_010c1774();
                  uVar6 = 0;
                  if (uVar8 != 0) {
                    if (((local_189 & 1) == 0) || (uVar8 < local_188)) {
                      local_188 = uVar8;
                    }
                    uVar6 = 1;
                    local_189 = 1;
                  }
                  local_1f0 = uVar8;
                  _objc_storeStrong(uVar6,&local_1e8,0);
                  local_164 = 0;
                }
                _objc_storeStrong(&local_1e0,0);
                local_2f8 = local_2f8 + 1;
              } while (local_2f8 < local_2f0);
              local_2f0 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,
                         auStack_a8,0x10);
              local_2f8 = 0;
            } while (local_2f0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
        }
        dVar9 = 0.0;
        local_1f8 = 0.0;
        if (0 < (long)local_160) {
          puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1f8 = (dVar9 - (double)(long)local_160 * 86400.0) + 21600.0;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_211 = 0;
        local_200 = puVar2;
        if (((local_151 & 1) == 0) && ((long)local_160 < 1)) {
          local_320 = (undefined *)0x0;
        }
        else {
          local_320 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_211 = 1;
          local_210 = local_320;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_208 = local_320;
        if ((local_211 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_220 = puVar2;
        _memset(auStack_268,0,0x40);
        IVar1 = local_178;
        (*(code *)PTR__objc_retain_02578638)();
        local_348 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,
                   0x10);
        if (local_348 != 0) {
          lVar5 = *local_258;
          local_350 = 0;
          do {
            do {
              if (*local_258 - lVar5 != 0) {
                _objc_enumerationMutation(*local_258 - lVar5,IVar1);
              }
              uVar7 = *(ulong *)(local_260 + local_350 * 8);
              local_228 = uVar7;
              FUN_010b66f4();
              _objc_retainAutoreleasedReturnValue();
              local_270 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
              if (uVar7 == 0) {
                local_164 = 5;
              }
              else {
                puVar2 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_containsObject__0269cbb8,local_270);
                if (((ulong)puVar2 & 1) == 0) {
                  IVar4 = local_138;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_isProactivelyDeletedForUsername__026ae718,local_148,
                             local_270);
                  uVar7 = local_228;
                  uVar6 = DAT_0280e1a0;
                  if ((IVar4 & 1) == 0) {
                    IVar4 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_138,PTR_s_cacheStatusForDataItem__026a4728,local_228);
                    uVar7 = local_228;
                    uVar6 = DAT_0280e1a0;
                    if (IVar4 - 3 == 0) {
                      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                                 1);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_setAssociatedObject(uVar7,uVar6,puVar2,1);
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineMomentsMonitor_026ce718,
                                 PTR_s_markDataItemDeletedFlag__026ae740,local_228);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_200,PTR_s_addObject__0269d180,local_228);
                      local_164 = 5;
                    }
                    else {
                      uVar8 = local_228;
                      FUN_010c1774(IVar4 - 3);
                      uVar7 = local_228;
                      uVar6 = DAT_0280e1a0;
                      if ((((local_189 & 1) == 0) || (uVar8 == 0)) || (uVar8 <= local_188)) {
                        if (((long)local_160 < 1) ||
                           (uVar8 = local_228, FUN_010c18d0(local_160), uVar7 = local_228,
                           uVar6 = DAT_0280e1a0, (int)uVar8 == 0)) {
                          if ((local_151 & 1) != 0) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_208,PTR_s_addObject__0269d180,local_270);
                          }
                          local_164 = 0;
                        }
                        else {
                          dVar9 = (double)NEON_ucvtf(uVar8 & 0xffffffff);
                          if (dVar9 < local_1f8) {
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_208,PTR_s_addObject__0269d180,local_270);
                          }
                          else {
                            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR__OBJC_CLASS___NSNumber_026ce038,
                                       PTR_s_numberWithBool__0269ce60,1);
                            _objc_retainAutoreleasedReturnValue();
                            _objc_setAssociatedObject(uVar7,uVar6,puVar2,1);
                            (*(code *)PTR__objc_release_02578630)(puVar2);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (PTR_WCRefineMomentsMonitor_026ce718,
                                       PTR_s_markDataItemDeletedFlag__026ae740,local_228);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_200,PTR_s_addObject__0269d180,local_228);
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_220,PTR_s_addObject__0269d180,local_270);
                          }
                          local_164 = 5;
                        }
                      }
                      else {
                        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSNumber_026ce038,
                                   PTR_s_numberWithBool__0269ce60,1);
                        _objc_retainAutoreleasedReturnValue();
                        _objc_setAssociatedObject(uVar7,uVar6,puVar2,1);
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineMomentsMonitor_026ce718,
                                   PTR_s_markDataItemDeletedFlag__026ae740,local_228);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_200,PTR_s_addObject__0269d180,local_228);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_220,PTR_s_addObject__0269d180,local_270);
                        local_164 = 5;
                      }
                    }
                  }
                  else {
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    _objc_setAssociatedObject(uVar7,uVar6,puVar2,1);
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineMomentsMonitor_026ce718,
                               PTR_s_markDataItemDeletedFlag__026ae740,local_228);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_200,PTR_s_addObject__0269d180,local_228);
                    local_164 = 5;
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineMomentsMonitor_026ce718,
                             PTR_s_clearDataItemDeletedFlag__026a4b58,local_228);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_138,PTR_s_clearDeletedMarkForUsername_tid__026a4b60,local_148,
                             local_270);
                  local_164 = 5;
                }
              }
              _objc_storeStrong(&local_270,0);
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = IVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128
                       ,0x10);
            local_350 = 0;
          } while (local_348 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setCacheStatus_forTids_username__026ae748,4,local_208,local_148);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_setCacheStatus_forTids_username__026ae748,3,local_220,local_148);
        IVar1 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_sortedItemsFromArray__026ae6d8,local_200);
        _objc_retainAutoreleasedReturnValue();
        local_164 = 1;
        local_130 = IVar1;
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_208,0);
        _objc_storeStrong(&local_200,0);
        _objc_storeStrong(&local_180,0);
      }
      _objc_storeStrong(&local_178,0);
    }
    else {
      IVar1 = *(ID *)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_164 = 1;
      local_130 = IVar1;
    }
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_130;
}

