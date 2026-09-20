// clearCacheExcludingUsernames: @ 010c6064

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineMomentsMonitor::clearCacheExcludingUsernames_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong local_2a0;
  ulong local_298;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  long local_1c8;
  ID local_1c0;
  ID local_1b8;
  undefined4 local_1ac;
  ID local_1a8;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
  ulong local_148;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  _memset(auStack_198,0,0x40);
  uVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_228 != 0) {
    lVar6 = *local_188;
    local_230 = 0;
    do {
      do {
        if (*local_188 - lVar6 != 0) {
          _objc_enumerationMutation(*local_188 - lVar6,uVar1);
        }
        uVar7 = *(ulong *)(local_190 + local_230 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_158 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar3 = local_158;
        if ((uVar7 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          uVar3 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a0);
          }
          _objc_storeStrong(&local_1a0,0);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_230 = 0;
    } while (local_228 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cachedItemCountsByUsername_026ae760);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_1a8 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_clearAllCache_026ae768);
    local_130 = local_1a8;
    local_1ac = 1;
  }
  else {
    local_1b8 = 0;
    IVar4 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_cachedItemCountsByUsername_026ae760);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _memset(auStack_208,0,0x40);
    IVar4 = local_1c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_298 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_298 != 0) {
      lVar6 = *local_1f8;
      local_2a0 = 0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,IVar4);
          }
          lVar8 = *(long *)(local_200 + local_2a0 * 8);
          local_1c8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if ((lVar8 != 0) &&
             (puVar2 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_150,PTR_s_containsObject__0269cbb8,local_1c8),
             ((ulong)puVar2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_deleteCachedDataItemsForUsername_026ae770,local_1c8);
            local_1b8 = local_1b8 + 1;
          }
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < local_298);
        local_298 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2a0 = 0;
      } while (local_298 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar4);
    local_130 = local_1b8;
    local_1ac = 1;
    _objc_storeStrong(&local_1c0,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

