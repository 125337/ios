// initWithMode: @ 01dbc638

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsLayoutViewController::initWithMode_(ID param_1,SEL param_2,long_long param_3)

{
  ID *pIVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_3f8;
  undefined *local_3d0;
  undefined *local_3c8;
  uint local_38c;
  undefined *local_370;
  undefined *local_368;
  undefined *local_330;
  undefined *local_328;
  undefined *local_2d8;
  long local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  long local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  ulong local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined *local_1c8;
  long_long local_1c0;
  SEL local_1b8;
  ID *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = (ID *)0x0;
  pIVar1 = &local_1d0;
  local_1c8 = PTR_WCRefineSessionStatsLayoutViewController_026d00d8;
  local_1d0 = param_1;
  local_1c0 = param_3;
  local_1b8 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_1b0 = pIVar1;
  _objc_storeStrong(&local_1b0);
  if (pIVar1 != (ID *)0x0) {
    *(long_long *)((long)local_1b0 + (long)_mode) = local_1c0;
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_sessionStatsBoardCatalogForMode__026c51b8,local_1c0
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_1d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar3;
    _memset(auStack_238,0,0x40);
    puVar2 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_328 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10);
    if (local_328 != (undefined *)0x0) {
      lVar7 = *local_228;
      local_330 = (undefined *)0x0;
      do {
        do {
          if (*local_228 - lVar7 != 0) {
            _objc_enumerationMutation(*local_228 - lVar7,puVar2);
          }
          local_1f8 = *(undefined8 *)(local_230 + (long)local_330 * 8);
          _memset(auStack_280,0,0x40);
          puVar3 = local_1d8;
          (*(code *)PTR__objc_retain_02578638)();
          local_368 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,
                     0x10);
          if (local_368 != (undefined *)0x0) {
            lVar8 = *local_270;
            local_370 = (undefined *)0x0;
            do {
              do {
                if (*local_270 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_270 - lVar8,puVar3);
                }
                uVar9 = *(ulong *)(local_278 + (long)local_370 * 8);
                local_240 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_38c = 0;
                if ((uVar4 & 1) != 0) {
                  puVar5 = local_1f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_containsObject__0269cbb8,local_1f8);
                  local_38c = (uint)puVar5 ^ 1;
                }
                (*(code *)PTR__objc_release_02578630)(uVar9);
                if ((local_38c & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_addObject__0269d180,local_240);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1f0,PTR_s_addObject__0269d180,local_1f8);
                }
                local_370 = local_370 + 1;
              } while (local_370 < local_368);
              local_368 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                         auStack_128,0x10);
              local_370 = (undefined *)0x0;
            } while (local_368 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_330 = local_330 + 1;
        } while (local_330 < local_328);
        local_328 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,
                   0x10);
        local_330 = (undefined *)0x0;
      } while (local_328 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_2c8,0,0x40);
    puVar2 = local_1d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,0x10);
    if (local_3c8 != (undefined *)0x0) {
      lVar7 = *local_2b8;
      local_3d0 = (undefined *)0x0;
      do {
        do {
          if (*local_2b8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_2b8 - lVar7,puVar2);
          }
          lVar8 = *(long *)(local_2c0 + (long)local_3d0 * 8);
          local_288 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          local_2d0 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if ((lVar8 != 0) &&
             (puVar3 = local_1f0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1f0,PTR_s_containsObject__0269cbb8,local_2d0),
             ((ulong)puVar3 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_288);
          }
          _objc_storeStrong(&local_2d0,0);
          local_3d0 = local_3d0 + 1;
        } while (local_3d0 < local_3c8);
        local_3c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,
                   0x10);
        local_3d0 = (undefined *)0x0;
      } while (local_3c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_copy_0269d150);
    uVar6 = *(undefined8 *)((long)local_1b0 + (long)_catalog);
    *(undefined8 *)((long)local_1b0 + (long)_catalog) = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_mutableCopy_0269d8a0);
    local_3f8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_2d8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_3f8 = local_2d8;
    }
    _objc_storeStrong((long)local_1b0 + (long)_pages,local_3f8);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_2d8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
  }
  pIVar1 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return (ID)pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

