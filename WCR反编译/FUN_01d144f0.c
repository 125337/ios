// FUN_01d144f0 @ 01d144f0

void FUN_01d144f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_3b8;
  ulong local_3b0;
  ulong local_378;
  ulong local_370;
  ulong local_338;
  ulong local_330;
  ulong local_2e8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  undefined *local_1c8;
  long local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  local_1b0 = param_1;
  _objc_storeStrong(&local_1b8);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_1c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  if (local_1b8 == 0) {
    local_2e8 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_2e8 = local_1b8;
  }
  local_1c8 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d0 = local_2e8;
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_1d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_1d0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = puVar2;
  _memset(auStack_238,0,0x40);
  uVar3 = local_1d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_330 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10);
  if (local_330 != 0) {
    lVar4 = *local_228;
    local_338 = 0;
    do {
      do {
        if (*local_228 - lVar4 != 0) {
          _objc_enumerationMutation(*local_228 - lVar4,uVar3);
        }
        local_1f8 = *(undefined8 *)(local_230 + local_338 * 8);
        puVar1 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_containsObject__0269cbb8,local_1f8);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_1f8);
        }
        local_338 = local_338 + 1;
      } while (local_338 < local_330);
      local_330 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_a8,0x10);
      local_338 = 0;
    } while (local_330 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObjectsFromArray__0269d540,local_1e8);
  _memset(auStack_280,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_370 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,0x10);
  if (local_370 != 0) {
    lVar4 = *local_270;
    local_378 = 0;
    do {
      do {
        if (*local_270 - lVar4 != 0) {
          _objc_enumerationMutation(*local_270 - lVar4,uVar3);
        }
        local_240 = *(undefined8 *)(local_278 + local_378 * 8);
        puVar1 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_containsObject__0269cbb8,local_240);
        if ((((ulong)puVar1 & 1) != 0) &&
           (puVar1 = local_1f0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsObject__0269cbb8,local_240)
           , ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,local_240);
        }
        local_378 = local_378 + 1;
      } while (local_378 < local_370);
      local_370 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,auStack_128,0x10)
      ;
      local_378 = 0;
    } while (local_370 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _memset(auStack_2c8,0,0x40);
  uVar3 = local_1d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_3b0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,0x10);
  if (local_3b0 != 0) {
    lVar4 = *local_2b8;
    local_3b8 = 0;
    do {
      do {
        if (*local_2b8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_2b8 - lVar4,uVar3);
        }
        local_288 = *(undefined8 *)(local_2c0 + local_3b8 * 8);
        puVar1 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_containsObject__0269cbb8,local_288);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,local_288);
        }
        local_3b8 = local_3b8 + 1;
      } while (local_3b8 < local_3b0);
      local_3b0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,0x10)
      ;
      local_3b8 = 0;
    } while (local_3b0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c8,PTR_s_setQuickChatPinnedUsernames__026c4038,local_1f0);
  puVar1 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_quickChatRemovedUsernames_026b1608);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_2d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_removeObjectsInArray__026a8500,local_1f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1c8,PTR_s_setQuickChatRemovedUsernames__026b1610,local_2d0);
  puVar1 = PTR_WCRQuickChatRuntime_026ce698;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRQuickChatRuntime_026ce698,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_2d0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

