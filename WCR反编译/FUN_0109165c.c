// FUN_0109165c @ 0109165c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0109165c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_4e8;
  ulong local_4e0;
  undefined *local_480;
  undefined *local_478;
  undefined *local_440;
  undefined *local_438;
  ulong local_3e8;
  ulong local_3e0;
  ulong local_3a8;
  undefined1 auStack_3a0 [8];
  long local_398;
  long *local_390;
  ulong local_360;
  byte local_351;
  undefined *local_350;
  ulong local_348;
  ulong local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  ulong local_2f8;
  undefined *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  undefined *local_2a0;
  ulong local_298;
  ulong local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  undefined *local_240;
  undefined4 local_234;
  ulong local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_230 = 0;
  _objc_storeStrong(&local_230,param_1);
  uVar6 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_count_0269cfe0);
  if (uVar6 == 0) {
    local_234 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar2;
    _memset(auStack_288,0,0x40);
    uVar6 = local_230;
    (*(code *)PTR__objc_retain_02578638)();
    local_3e0 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10);
    if (local_3e0 != 0) {
      lVar4 = *local_278;
      local_3e8 = 0;
      do {
        do {
          if (*local_278 - lVar4 != 0) {
            _objc_enumerationMutation(*local_278 - lVar4,uVar6);
          }
          uVar5 = *(ulong *)(local_280 + local_3e8 * 8);
          local_248 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_248;
          local_290 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_290;
          local_298 = uVar7;
          FUN_0107bd28();
          uVar7 = local_298;
          if ((uVar5 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = local_298,
               (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_length_0269cca0), uVar7 == 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_290);
            }
          }
          _objc_storeStrong(&local_298);
          _objc_storeStrong(&local_290,0);
          local_3e8 = local_3e8 + 1;
        } while (local_3e8 < local_3e0);
        local_3e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_a8,0x10
                  );
        local_3e8 = 0;
      } while (local_3e0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar2 = local_240;
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_234 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_2a0 = puVar2;
      _memset(auStack_2e8,0,0x40);
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_discoverDouTuBackupPaths_026ae410);
      _objc_retainAutoreleasedReturnValue();
      local_438 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_438 != (undefined *)0x0) {
        lVar4 = *local_2d8;
        local_440 = (undefined *)0x0;
        do {
          do {
            if (*local_2d8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2d8 - lVar4,puVar2);
            }
            uVar6 = *(ulong *)(local_2e0 + (long)local_440 * 8);
            local_2a8 = uVar6;
            FUN_01092c58();
            if ((uVar6 & 1) != 0) {
              FUN_01092e14(local_2a8,local_2a0);
            }
            local_440 = local_440 + 1;
          } while (local_440 < local_438);
          local_438 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_128,
                     0x10);
          local_440 = (undefined *)0x0;
        } while (local_438 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_234 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = puVar2;
        _memset(auStack_338,0,0x40);
        puVar2 = local_2a0;
        (*(code *)PTR__objc_retain_02578638)();
        local_478 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,auStack_1a8,
                   0x10);
        if (local_478 != (undefined *)0x0) {
          lVar4 = *local_328;
          local_480 = (undefined *)0x0;
          do {
            do {
              if (*local_328 - lVar4 != 0) {
                _objc_enumerationMutation(*local_328 - lVar4,puVar2);
              }
              uVar7 = *(ulong *)(local_330 + (long)local_480 * 8);
              local_2f8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_2f8;
              local_340 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_240;
              local_348 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_240,PTR_s_containsObject__0269cbb8,local_340);
              uVar6 = local_348;
              local_351 = 0;
              bVar1 = false;
              if (((ulong)puVar3 & 1) != 0) {
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
                bVar1 = false;
                if ((uVar6 & 1) != 0) {
                  uVar6 = local_348;
                  (*(code *)PTR__objc_msgSend_02578628)(local_348,PTR_s_length_0269cca0);
                  bVar1 = false;
                  if (uVar6 != 0) {
                    puVar3 = local_2f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2f0,PTR_s_objectForKeyedSubscript__0269d098,local_340);
                    _objc_retainAutoreleasedReturnValue();
                    local_351 = 1;
                    bVar1 = puVar3 == (undefined *)0x0;
                    local_350 = puVar3;
                  }
                }
              }
              if ((local_351 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_350);
              }
              if (bVar1) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_setObject_forKeyedSubscript__0269d248,local_348,local_340
                          );
              }
              _objc_storeStrong(&local_348);
              _objc_storeStrong(&local_340,0);
              local_480 = local_480 + 1;
            } while (local_480 < local_478);
            local_478 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_338,
                       auStack_1a8,0x10);
            local_480 = (undefined *)0x0;
          } while (local_478 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_2f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_234 = 1;
        }
        else {
          _memset(auStack_3a0,0,0x40);
          uVar6 = local_230;
          (*(code *)PTR__objc_retain_02578638)();
          local_4e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,auStack_228,
                     0x10);
          if (local_4e0 != 0) {
            lVar4 = *local_390;
            local_4e8 = 0;
            do {
              do {
                if (*local_390 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_390 - lVar4,uVar6);
                }
                uVar7 = *(ulong *)(local_398 + local_4e8 * 8);
                puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
                local_360 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((uVar7 & 1) != 0) {
                  uVar7 = local_360;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_360,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = local_360;
                  local_3a8 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_360,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = false;
                  if (uVar5 == 0) {
                    puVar2 = local_2f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2f0,PTR_s_objectForKeyedSubscript__0269d098,local_3a8);
                    _objc_retainAutoreleasedReturnValue();
                    bVar1 = puVar2 != (undefined *)0x0;
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  if (bVar1) {
                    puVar2 = local_2f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2f0,PTR_s_objectForKeyedSubscript__0269d098,local_3a8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_360,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_url)
                    ;
                    (*(code *)PTR__objc_release_02578630)(puVar2);
                  }
                  _objc_storeStrong(&local_3a8,0);
                }
                local_4e8 = local_4e8 + 1;
              } while (local_4e8 < local_4e0);
              local_4e0 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3a0,
                         auStack_228,0x10);
              local_4e8 = 0;
            } while (local_4e0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_234 = 0;
        }
        _objc_storeStrong(&local_2f0,0);
      }
      _objc_storeStrong(&local_2a0,0);
    }
    _objc_storeStrong(&local_240,0);
  }
  _objc_storeStrong(&local_230,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

