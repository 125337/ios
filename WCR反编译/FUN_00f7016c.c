// FUN_00f7016c @ 00f7016c

void FUN_00f7016c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_248;
  undefined *local_240;
  ulong local_200;
  ulong local_1f8;
  ulong local_1e0;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  _memset(auStack_180,0,0x40);
  if (local_130 == 0) {
    local_1e0 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_1e0 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_1f8 = local_1e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_1f8 != 0) {
    lVar3 = *local_170;
    local_200 = 0;
    do {
      do {
        if (*local_170 - lVar3 != 0) {
          _objc_enumerationMutation(*local_170 - lVar3,local_1e0);
        }
        local_140 = *(undefined8 *)(local_178 + local_200 * 8);
        puVar1 = PTR_WCRefineGroupManager_026ce2b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_188 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _memset(auStack_1d0,0,0x40);
        puVar1 = local_188;
        FUN_00f67eb0();
        _objc_retainAutoreleasedReturnValue();
        local_240 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_240 != (undefined *)0x0) {
          lVar4 = *local_1c0;
          local_248 = (undefined *)0x0;
          do {
            do {
              if (*local_1c0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar4,puVar1);
              }
              local_190 = *(undefined8 *)(local_1c8 + (long)local_248 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_addObject__0269d180,local_190);
              local_248 = local_248 + 1;
            } while (local_248 < local_240);
            local_240 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,
                       auStack_128,0x10);
            local_248 = (undefined *)0x0;
          } while (local_240 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_storeStrong(&local_188,0);
        local_200 = local_200 + 1;
      } while (local_200 < local_1f8);
      local_1f8 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                 0x10);
      local_200 = 0;
    } while (local_1f8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_1e0);
  puVar1 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

