// unreadCountForTab: @ 0152505c

/* Function Stack Size: 0x18 bytes */

unsigned_long_long __thiscall
WCRefineTelegramGroupingStore::unreadCountForTab_
          (WCRefineTelegramGroupingStore *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double in_d0;
  double dVar12;
  uint local_404;
  undefined *local_3e8;
  undefined *local_3e0;
  ulong local_3a0;
  ulong local_398;
  undefined *local_360;
  undefined *local_358;
  ID local_340;
  ID local_330;
  ID local_320;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  long local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  undefined *local_210;
  undefined *local_208;
  ID local_200;
  ID local_1f8;
  double local_1f0;
  uint local_1e4;
  long local_1e0;
  SEL local_1d8;
  ID local_1d0;
  ID local_1c8;
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [128];
  ID local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = 0;
  local_1d8 = param_2;
  local_1d0 = param_1;
  _objc_storeStrong(&local_1e0,param_3);
  if ((local_1e0 == 0) ||
     (lVar9 = local_1e0, (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_kind_026a27e8),
     lVar9 == 0)) {
    local_1c8 = 0;
    local_1e4 = 1;
  }
  else {
    _CACurrentMediaTime();
    dVar12 = in_d0;
    local_1f0 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_unreadCacheTime_026b0308);
    if (0.3 <= in_d0 - dVar12) {
      IVar3 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_unreadCache_026b0270);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,local_1d0,PTR_s_setUnreadCacheTime__026b02d0);
    }
    else {
      IVar3 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_unreadCache_026b0270);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_tabId_026a8270);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = IVar2;
      (*(code *)PTR__objc_release_02578630)(lVar9);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      bVar1 = local_1f8 != 0;
      if (bVar1) {
        IVar3 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_unsignedIntegerValue_026cabb8);
        local_1c8 = IVar3;
      }
      local_1e4 = (uint)bVar1;
      _objc_storeStrong(&local_1f8,0);
      if (local_1e4 != 0) goto LAB_01525a18;
    }
    local_200 = 0;
    puVar4 = PTR__OBJC_CLASS___NSHashTable_026ce238;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_hashTableWithOptions__026b0310,0x200);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_208 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_210 = puVar5;
    _memset(auStack_258,0,0x40);
    IVar3 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lastUnfilteredTop_026b0208);
    _objc_retainAutoreleasedReturnValue();
    local_320 = IVar3;
    if (IVar3 == 0) {
      local_320 = *(ID *)PTR____NSArray0___02578280;
    }
    local_c0 = local_320;
    IVar2 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lastUnfilteredAllTop_026a8220);
    _objc_retainAutoreleasedReturnValue();
    local_330 = IVar2;
    if (IVar2 == 0) {
      local_330 = *(ID *)PTR____NSArray0___02578280;
    }
    local_b8 = local_330;
    IVar6 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lastUnfilteredNormal_026a8230);
    _objc_retainAutoreleasedReturnValue();
    local_340 = IVar6;
    if (IVar6 == 0) {
      local_340 = *(ID *)PTR____NSArray0___02578280;
    }
    local_b0 = local_340;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_358 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,0x10);
    if (local_358 != (undefined *)0x0) {
      lVar9 = *local_248;
      local_360 = (undefined *)0x0;
      do {
        do {
          if (*local_248 - lVar9 != 0) {
            _objc_enumerationMutation(*local_248 - lVar9,puVar4);
          }
          local_218 = *(ulong *)(local_250 + (long)local_360 * 8);
          _memset(auStack_2a0,0,0x40);
          uVar11 = local_218;
          (*(code *)PTR__objc_retain_02578638)();
          local_398 = uVar11;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_140,
                     0x10);
          if (local_398 != 0) {
            lVar10 = *local_290;
            local_3a0 = 0;
            do {
              do {
                if (*local_290 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_290 - lVar10,uVar11);
                }
                local_260 = *(long *)(local_298 + local_3a0 * 8);
                if ((local_260 != 0) &&
                   (puVar5 = local_208,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_208,PTR_s_containsObject__0269cbb8,local_260),
                   ((ulong)puVar5 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_208,PTR_s_addObject__0269d180,local_260);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_210,PTR_s_addObject__0269d180,local_260);
                }
                local_3a0 = local_3a0 + 1;
              } while (local_3a0 < local_398);
              local_398 = uVar11;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar11,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                         auStack_140,0x10);
              local_3a0 = 0;
            } while (local_398 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar11);
          local_360 = local_360 + 1;
        } while (local_360 < local_358);
        local_358 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                   0x10);
        local_360 = (undefined *)0x0;
      } while (local_358 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _memset(auStack_2e8,0,0x40);
    puVar4 = local_210;
    (*(code *)PTR__objc_retain_02578638)();
    local_3e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_1c0,0x10);
    if (local_3e0 != (undefined *)0x0) {
      lVar9 = *local_2d8;
      local_3e8 = (undefined *)0x0;
      do {
        do {
          if (*local_2d8 - lVar9 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar9,puVar4);
          }
          uVar11 = *(ulong *)(local_2e0 + (long)local_3e8 * 8);
          local_2a8 = uVar11;
          FUN_01520288(uVar11,&cf_m_uUnReadCount);
          if ((0 < (long)uVar11) &&
             (uVar7 = local_2a8, FUN_0152119c(uVar11,local_2a8,&cf_m_bShowUnReadAsRedDot),
             (uVar7 & 1) == 0)) {
            puVar5 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_404 = 0;
            if (((ulong)puVar8 & 1) != 0) {
              uVar7 = local_2a8;
              FUN_01525a60();
              local_404 = (uint)uVar7;
            }
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (((local_404 & 1) == 0) &&
               (IVar3 = local_1d0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1d0,PTR_s_session_matchesTab__026b02b8,local_2a8,local_1e0),
               (IVar3 & 1) != 0)) {
              local_200 = local_200 + uVar11;
            }
          }
          local_3e8 = local_3e8 + 1;
        } while (local_3e8 < local_3e0);
        local_3e0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_1c0,
                   0x10);
        local_3e8 = (undefined *)0x0;
      } while (local_3e0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_200);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_unreadCache_026b0270);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4);
    (*(code *)PTR__objc_release_02578630)(lVar9);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_1c8 = local_200;
    local_1e4 = 1;
    _objc_storeStrong(&local_210);
    _objc_storeStrong(&local_208,0);
  }
LAB_01525a18:
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_1c8;
}

