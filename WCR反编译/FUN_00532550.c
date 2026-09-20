// FUN_00532550 @ 00532550

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00532550(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong local_5c8;
  ulong local_590;
  ulong local_588;
  uint local_510;
  ulong local_4f0;
  ulong local_4e8;
  uint local_490;
  ulong local_470;
  ulong local_468;
  bool local_351;
  ulong local_350;
  long local_348;
  undefined *local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  undefined8 local_2f8;
  undefined *local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined *local_2d8;
  byte local_2c9;
  undefined8 local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  byte local_271;
  undefined8 local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  byte local_219;
  ulong local_218;
  undefined *local_210;
  undefined *local_208;
  ulong local_200;
  byte local_1f1;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  byte local_1b9;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  puVar3 = &local_1b8;
  local_1b8 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = (uint)puVar3;
  local_1b9 = param_3;
  local_1c8 = param_4;
  FUN_0052b2cc();
  if (((uVar2 & 1) == 0) || (local_1b0 == 0)) {
    local_1d8 = 1;
  }
  else {
    uVar2 = (uint)local_1b0;
    FUN_00532324();
    if ((uVar2 & 1) == 0) {
      uVar4 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = (uint)uVar4;
      local_1e0 = uVar4;
      FUN_0052b6cc();
      uVar4 = local_1b8;
      if ((uVar2 & 1) == 0) {
        local_1d8 = 1;
      }
      else {
        local_1e8 = 0;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar4 & 1) == 0) {
          local_1f1 = 0;
          uVar4 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = false;
          if ((uVar6 & 1) != 0) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
            _objc_retainAutoreleasedReturnValue();
            local_1f1 = 1;
            local_1f0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = uVar6 != 0;
          }
          if ((local_1f1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1f0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (bVar1) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_1e8;
            local_1e8 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
        }
        else {
          _objc_storeStrong(&local_1e8,local_1b8);
        }
        if (local_1e8 == 0) {
          local_1d8 = 1;
        }
        else {
          local_200 = 0;
          local_208 = (undefined *)0x0;
          local_210 = (undefined *)0x0;
          local_219 = 0;
          uVar4 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = false;
          if ((uVar6 & 1) != 0) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
            _objc_retainAutoreleasedReturnValue();
            local_219 = 1;
            local_218 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = uVar6 != 0;
          }
          if ((local_219 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_218);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if (bVar1) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_m_cache_026a4bd8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_200;
            local_200 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          else {
            _objc_storeStrong(&local_200,local_1e8);
          }
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          uVar4 = local_1e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_208;
          local_208 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar8);
          _memset(auStack_268,0,0x40);
          uVar4 = local_1e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_468 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,
                     0x10);
          if (local_468 != 0) {
            lVar10 = *local_258;
            local_470 = 0;
            do {
              do {
                if (*local_258 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar10,uVar4);
                }
                local_228 = *(undefined8 *)(local_260 + local_470 * 8);
                local_271 = 0;
                puVar5 = PTR_WCRefineMomentsMonitor_026ce718;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718,
                           local_228);
                local_490 = 1;
                if (((ulong)puVar5 & 1) == 0) {
                  uVar7 = local_228;
                  _objc_getAssociatedObject(local_228,DAT_026f4330);
                  _objc_retainAutoreleasedReturnValue();
                  local_271 = 1;
                  local_270 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_490 = (uint)uVar7;
                }
                if ((local_271 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_270);
                }
                if ((local_490 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineMomentsMonitor_026ce718,
                             PTR_s_clearDataItemCacheFlag__026a4b50,local_228);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineMomentsMonitor_026ce718,
                             PTR_s_clearDataItemDeletedFlag__026a4b58,local_228);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_208,PTR_s_addObject__0269d180,local_228);
                }
                local_470 = local_470 + 1;
              } while (local_470 < local_468);
              local_468 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_a8,0x10);
              local_470 = 0;
            } while (local_468 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          if (local_200 == local_1e8) {
            puVar8 = local_208;
            (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_mutableCopy_0269d8a0);
            puVar5 = local_210;
            local_210 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          else {
            uVar4 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithCapacity__0269d9b8,uVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = local_210;
            local_210 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            _memset(auStack_2c0,0,0x40);
            uVar4 = local_200;
            (*(code *)PTR__objc_retain_02578638)();
            local_4e8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_128
                       ,0x10);
            if (local_4e8 != 0) {
              lVar10 = *local_2b0;
              local_4f0 = 0;
              do {
                do {
                  if (*local_2b0 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_2b0 - lVar10,uVar4);
                  }
                  local_280 = *(undefined8 *)(local_2b8 + local_4f0 * 8);
                  local_2c9 = 0;
                  puVar5 = PTR_WCRefineMomentsMonitor_026ce718;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718
                             ,local_280);
                  local_510 = 1;
                  if (((ulong)puVar5 & 1) == 0) {
                    uVar7 = local_280;
                    _objc_getAssociatedObject(local_280,DAT_026f4330);
                    _objc_retainAutoreleasedReturnValue();
                    local_2c9 = 1;
                    local_2c8 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_510 = (uint)uVar7;
                  }
                  if ((local_2c9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_2c8);
                  }
                  if ((local_510 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineMomentsMonitor_026ce718,
                               PTR_s_clearDataItemCacheFlag__026a4b50,local_280);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR_WCRefineMomentsMonitor_026ce718,
                               PTR_s_clearDataItemDeletedFlag__026a4b58,local_280);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_210,PTR_s_addObject__0269d180,local_280);
                  }
                  local_4f0 = local_4f0 + 1;
                } while (local_4f0 < local_4e8);
                local_4e8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                           auStack_128,0x10);
                local_4f0 = 0;
              } while (local_4e8 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          puVar5 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_210,PTR_s_mutableCopy_0269d8a0);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setM_cache__026a4be8,puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          FUN_0052c29c(local_208);
          local_2d8 = (undefined *)0x0;
          puVar8 = PTR_WCRefineMomentsMonitor_026ce718;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_2d8;
          local_2d8 = puVar9;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          local_2e0 = 0;
          uVar6 = local_1e0;
          FUN_00534084(local_1e0,local_208,local_2d8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_2e0;
          local_2e0 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_2e8 = 0;
          uVar6 = local_2e0;
          FUN_00534b48(local_2e0,local_2d8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_2e8;
          local_2e8 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_2e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_count_0269cfe0);
          if (uVar4 == 0) {
            local_1d8 = 1;
          }
          else {
            puVar5 = PTR_WCRefineMomentsMonitor_026ce718;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
            _objc_retainAutoreleasedReturnValue();
            local_2f0 = puVar5;
            _memset(auStack_338,0,0x40);
            uVar4 = local_2e8;
            (*(code *)PTR__objc_retain_02578638)();
            local_588 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8
                       ,0x10);
            if (local_588 != 0) {
              lVar10 = *local_328;
              local_590 = 0;
              do {
                do {
                  if (*local_328 - lVar10 != 0) {
                    _objc_enumerationMutation(*local_328 - lVar10,uVar4);
                  }
                  local_2f8 = *(undefined8 *)(local_330 + local_590 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2f0,PTR_s_applyArchivedMediaPathsToDataIte_026a4bf8,local_2f8,
                             local_1e0);
                  local_590 = local_590 + 1;
                } while (local_590 < local_588);
                local_588 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,
                           auStack_1a8,0x10);
                local_590 = 0;
              } while (local_588 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_340 = (undefined *)0x0;
            puVar8 = local_210;
            FUN_00534b48(local_210,local_2e8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = local_340;
            local_340 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setM_cache__026a4be8,local_340);
            local_348 = 0;
            local_351 = (local_1b9 & 1) == 0;
            if (local_351) {
              local_5c8 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_5c8 = local_1b0;
              FUN_0053523c(local_1b0,local_1e0,local_2e8);
              _objc_retainAutoreleasedReturnValue();
              local_350 = local_5c8;
            }
            local_351 = !local_351;
            _objc_storeStrong(&local_348,local_5c8);
            if (local_351) {
              (*(code *)PTR__objc_release_02578630)(local_350);
            }
            lVar10 = local_348;
            (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_count_0269cfe0);
            if (lVar10 != 0) {
              FUN_005357a0(local_1b0,local_348);
            }
            _objc_storeStrong(&local_348);
            _objc_storeStrong(&local_340,0);
            _objc_storeStrong(&local_2f0,0);
            local_1d8 = 0;
          }
          _objc_storeStrong(&local_2e8);
          _objc_storeStrong(&local_2e0,0);
          _objc_storeStrong(&local_2d8,0);
          _objc_storeStrong(&local_210,0);
          _objc_storeStrong(&local_208,0);
          _objc_storeStrong(&local_200,0);
        }
        _objc_storeStrong(&local_1e8,0);
      }
      _objc_storeStrong(&local_1e0,0);
    }
    else {
      local_1d8 = 1;
    }
  }
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

