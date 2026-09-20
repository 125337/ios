// FUN_010b6fcc @ 010b6fcc

void FUN_010b6fcc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  void *local_3d0;
  void *local_3c8;
  void *local_368;
  void *local_360;
  ulong local_328;
  ulong local_320;
  long local_2e8;
  long local_2e0;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  long *local_2c8;
  long local_298;
  undefined *local_290;
  long local_288;
  long local_280;
  long local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  long local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  long local_1e0;
  undefined *local_1d8;
  undefined4 local_1cc;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  uVar1 = local_1b8;
  FUN_010c86d4(local_1b8,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_1b8;
    FUN_010c86d4(local_1b8,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_1c0;
    local_1c0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_1c0;
  FUN_010c86d4(local_1c0,&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_1c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_1c8, (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0),
     puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088, uVar1 == 0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1cc = 1;
    local_1b0 = puVar3;
  }
  else {
    uVar1 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_1d8 = puVar3;
    _memset(auStack_220,0,0x40);
    uVar1 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_320 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
    if (local_320 != 0) {
      lVar8 = *local_210;
      local_328 = 0;
      do {
        do {
          if (*local_210 - lVar8 != 0) {
            _objc_enumerationMutation(*local_210 - lVar8,uVar1);
          }
          local_1e0 = *(long *)(local_218 + local_328 * 8);
          puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_228 = puVar3;
          if (local_1e0 != 0) {
            pvVar4 = _memset(auStack_270,0,0x40);
            FUN_010ca728();
            _objc_retainAutoreleasedReturnValue();
            local_360 = pvVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_360 != (void *)0x0) {
              lVar9 = *local_260;
              local_368 = (void *)0x0;
              do {
                do {
                  if (*local_260 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_260 - lVar9,pvVar4);
                  }
                  lVar10 = *(long *)(local_268 + (long)local_368 * 8);
                  local_230 = lVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (lVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = local_1e0;
                  lVar5 = local_230;
                  local_278 = lVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_230,PTR_s_objectForKeyedSubscript__0269d098,&cf_selector);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar5;
                  _NSSelectorFromString();
                  FUN_010ca4b4(lVar6,lVar10);
                  _objc_retainAutoreleasedReturnValue();
                  local_280 = lVar6;
                  (*(code *)PTR__objc_release_02578630)(lVar5);
                  lVar6 = local_278;
                  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_length_0269cca0);
                  if ((lVar6 != 0) &&
                     (lVar6 = local_280,
                     (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
                     lVar6 != 0)) {
                    lVar6 = local_280;
                    (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_copy_0269d150);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,lVar6,local_278
                              );
                    (*(code *)PTR__objc_release_02578630)(lVar6);
                  }
                  _objc_storeStrong(&local_280);
                  _objc_storeStrong(&local_278,0);
                  local_368 = (void *)((long)local_368 + 1);
                } while (local_368 < local_360);
                local_360 = pvVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pvVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                           auStack_128,0x10);
                local_368 = (void *)0x0;
              } while (local_360 != (void *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pvVar4);
            lVar9 = local_1e0;
            FUN_010ca3c0();
            _objc_retainAutoreleasedReturnValue();
            local_288 = lVar9;
            if (lVar9 != 0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              local_290 = puVar3;
              pvVar4 = _memset(auStack_2d8,0,0x40);
              FUN_010ca79c();
              _objc_retainAutoreleasedReturnValue();
              local_3c8 = pvVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_3c8 != (void *)0x0) {
                lVar9 = *local_2c8;
                local_3d0 = (void *)0x0;
                do {
                  do {
                    if (*local_2c8 - lVar9 != 0) {
                      _objc_enumerationMutation(*local_2c8 - lVar9,pvVar4);
                    }
                    lVar10 = *(long *)(local_2d0 + (long)local_3d0 * 8);
                    local_298 = lVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (lVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
                    _objc_retainAutoreleasedReturnValue();
                    lVar6 = local_288;
                    lVar5 = local_298;
                    local_2e0 = lVar10;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_298,PTR_s_objectForKeyedSubscript__0269d098,&cf_selector);
                    _objc_retainAutoreleasedReturnValue();
                    lVar10 = lVar5;
                    _NSSelectorFromString();
                    FUN_010ca4b4(lVar6,lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    local_2e8 = lVar6;
                    (*(code *)PTR__objc_release_02578630)(lVar5);
                    lVar6 = local_2e0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_length_0269cca0);
                    if ((lVar6 != 0) &&
                       (lVar6 = local_2e8,
                       (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_length_0269cca0),
                       lVar6 != 0)) {
                      lVar6 = local_2e8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_copy_0269d150);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_290,PTR_s_setObject_forKeyedSubscript__0269d248,lVar6,
                                 local_2e0);
                      (*(code *)PTR__objc_release_02578630)(lVar6);
                    }
                    _objc_storeStrong(&local_2e8);
                    _objc_storeStrong(&local_2e0,0);
                    local_3d0 = (void *)((long)local_3d0 + 1);
                  } while (local_3d0 < local_3c8);
                  local_3c8 = pvVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pvVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d8,
                             auStack_1a8,0x10);
                  local_3d0 = (void *)0x0;
                } while (local_3c8 != (void *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(pvVar4);
              puVar3 = local_290;
              (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_count_0269cfe0);
              if (puVar3 != (undefined *)0x0) {
                puVar3 = local_290;
                (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_live);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              _objc_storeStrong(&local_290,0);
            }
            _objc_storeStrong(&local_288,0);
          }
          puVar3 = local_1d8;
          puVar7 = local_228;
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_copy_0269d150);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_228,0);
          local_328 = local_328 + 1;
        } while (local_328 < local_320);
        local_320 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        local_328 = 0;
      } while (local_320 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_copy_0269d150);
    local_1cc = 1;
    local_1b0 = puVar3;
    _objc_storeStrong(&local_1d8,0);
  }
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

