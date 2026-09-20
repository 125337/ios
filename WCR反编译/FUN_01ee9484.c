// FUN_01ee9484 @ 01ee9484

void FUN_01ee9484(undefined8 param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **local_2a0;
  undefined **local_298;
  ulong local_230;
  ulong local_228;
  ulong local_210;
  undefined **local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined **local_198;
  undefined4 local_18c;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  long local_140;
  undefined **local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_138 = ppuVar1;
  _memset(auStack_180,0,0x40);
  if (local_130 == 0) {
    local_210 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_210 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = local_210;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_228 != 0) {
    lVar5 = *local_170;
    local_230 = 0;
    do {
      do {
        if (*local_170 - lVar5 != 0) {
          _objc_enumerationMutation(*local_170 - lVar5,local_210);
        }
        lVar6 = *(long *)(local_178 + local_230 * 8);
        local_140 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar6;
        FUN_01f06ca8();
        _objc_retainAutoreleasedReturnValue();
        local_188 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar6);
        lVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0);
        if (lVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_188);
        }
        _objc_storeStrong(&local_188,0);
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                 0x10);
      local_230 = 0;
    } while (local_228 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_210);
  ppuVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
  if (ppuVar1 == (undefined **)0x0) {
    local_18c = 1;
  }
  else {
    FUN_01f01544();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_138;
    local_198 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_containsObject__0269cbb8,ppuVar1);
    if (((ulong)ppuVar3 & 1) != 0) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &local_1a0;
      local_1a0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_removeObjectForKey__0269d700,&cf_toDoCardWebActiveRepositoryItemId);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_removeObjectForKey__0269d700,&cf_toDoCardWebRuntimeStorage);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_1a0);
      puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(ppuVar3,0);
    }
    FUN_01f0f818();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_1a8 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar4;
    _memset(auStack_1f8,0,0x40);
    ppuVar1 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = ppuVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (ppuVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
    ;
    if (local_298 != (undefined **)0x0) {
      lVar5 = *local_1e8;
      local_2a0 = (undefined **)0x0;
      do {
        do {
          if (*local_1e8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1e8 - lVar5,ppuVar1);
          }
          local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2a0 * 8);
          ppuVar3 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_stringByAppendingPathComponent__026cab30,local_1b8);
          _objc_retainAutoreleasedReturnValue();
          local_200 = ppuVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_removeItemAtPath_error__0269f910,ppuVar3);
          _objc_storeStrong(&local_200,0);
          local_2a0 = (undefined **)((long)local_2a0 + 1);
        } while (local_2a0 < local_298);
        local_298 = ppuVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (ppuVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,
                   0x10);
        local_2a0 = (undefined **)0x0;
      } while (local_298 != (undefined **)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_198,0);
    local_18c = 0;
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

