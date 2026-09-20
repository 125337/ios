// FUN_00534084 @ 00534084

void FUN_00534084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_430;
  undefined *local_428;
  ulong local_3d0;
  ulong local_3c8;
  ulong local_370;
  ulong local_368;
  long local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  long *local_2d0;
  long local_2a0;
  undefined *local_298;
  long local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  long local_248;
  undefined *local_240;
  long local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  long local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
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
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_2);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_3);
  uVar1 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_1b8, FUN_0052b6cc(), (uVar1 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = 1;
    local_1b0 = puVar2;
  }
  else {
    puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = 1;
      local_1b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = puVar2;
      _memset(auStack_230,0,0x40);
      uVar1 = local_1c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_368 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,0x10);
      if (local_368 != 0) {
        lVar4 = *local_220;
        local_370 = 0;
        do {
          do {
            if (*local_220 - lVar4 != 0) {
              _objc_enumerationMutation(*local_220 - lVar4,uVar1);
            }
            lVar5 = *(long *)(local_228 + local_370 * 8);
            local_1f0 = lVar5;
            FUN_00529d10();
            _objc_retainAutoreleasedReturnValue();
            local_238 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_addObject__0269d180,local_238);
            }
            _objc_storeStrong(&local_238,0);
            local_370 = local_370 + 1;
          } while (local_370 < local_368);
          local_368 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          local_370 = 0;
        } while (local_368 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_240 = puVar2;
      _memset(auStack_288,0,0x40);
      uVar1 = local_1c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_3c8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,0x10)
      ;
      if (local_3c8 != 0) {
        lVar4 = *local_278;
        local_3d0 = 0;
        do {
          do {
            if (*local_278 - lVar4 != 0) {
              _objc_enumerationMutation(*local_278 - lVar4,uVar1);
            }
            lVar5 = *(long *)(local_280 + local_3d0 * 8);
            local_248 = lVar5;
            FUN_00529d10();
            _objc_retainAutoreleasedReturnValue();
            local_290 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_addObject__0269d180,local_290);
            }
            _objc_storeStrong(&local_290,0);
            local_3d0 = local_3d0 + 1;
          } while (local_3d0 < local_3c8);
          local_3c8 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128,
                     0x10);
          local_3d0 = 0;
        } while (local_3c8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_298 = puVar2;
      _memset(auStack_2e0,0,0x40);
      puVar2 = local_1e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_428 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,0x10
                );
      if (local_428 != (undefined *)0x0) {
        lVar4 = *local_2d0;
        local_430 = (undefined *)0x0;
        do {
          do {
            if (*local_2d0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2d0 - lVar4,puVar2);
            }
            lVar5 = *(long *)(local_2d8 + (long)local_430 * 8);
            local_2a0 = lVar5;
            FUN_00529d10();
            _objc_retainAutoreleasedReturnValue();
            local_2e8 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (((lVar5 == 0) ||
                (puVar3 = local_1e8,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1e8,PTR_s_containsObject__0269cbb8,local_2e8),
                ((ulong)puVar3 & 1) != 0)) ||
               (puVar3 = local_240,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_240,PTR_s_containsObject__0269cbb8,local_2e8),
               ((ulong)puVar3 & 1) != 0)) {
              local_1d8 = 7;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_markDataItemFromCache__026a4c08,
                         local_2a0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMomentsMonitor_026ce718,
                         PTR_s_clearDataItemDeletedFlag__026a4b58,local_2a0);
              (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_addObject__0269d180,local_2a0);
              local_1d8 = 0;
            }
            _objc_storeStrong(&local_2e8,0);
            local_430 = local_430 + 1;
          } while (local_430 < local_428);
          local_428 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e0,auStack_1a8,
                     0x10);
          local_430 = (undefined *)0x0;
        } while (local_428 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_298;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar2;
      local_1d8 = 1;
      _objc_storeStrong(&local_298);
      _objc_storeStrong(&local_240,0);
      _objc_storeStrong(&local_1e8,0);
    }
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1b0);
  return;
}

