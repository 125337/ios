// memberCountForScope: @ 01ab6cd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRGroupListViewController::memberCountForScope_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint local_3c4;
  undefined *local_3a8;
  undefined *local_3a0;
  ulong local_368;
  ulong local_360;
  ulong local_348;
  undefined *local_320;
  undefined *local_318;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  undefined *local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  long local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  undefined *local_1e0;
  undefined4 local_1d4;
  undefined *local_1d0;
  unsigned_long_long local_1c8;
  SEL local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineGroupDataProvider_026ce540;
  local_1c8 = param_3;
  local_1c0 = param_2;
  local_1b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
    local_1d4 = 1;
    local_1b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar1;
    _memset(auStack_228,0,0x40);
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_318 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_318 != (undefined *)0x0) {
      lVar3 = *local_218;
      local_320 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar3 != 0) {
            _objc_enumerationMutation(*local_218 - lVar3,puVar2);
          }
          uVar6 = *(ulong *)(local_220 + (long)local_320 * 8);
          local_1e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_scope_0269ea90);
          if ((uVar6 & local_1c8) != 0) {
            _memset(auStack_270,0,0x40);
            uVar6 = local_1e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_members_0269ea98);
            _objc_retainAutoreleasedReturnValue();
            local_348 = uVar6;
            if (uVar6 == 0) {
              local_348 = *(ulong *)PTR____NSArray0___02578280;
            }
            (*(code *)PTR__objc_retain_02578638)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            local_360 = local_348;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_348,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                       auStack_128,0x10);
            if (local_360 != 0) {
              lVar4 = *local_260;
              local_368 = 0;
              do {
                do {
                  if (*local_260 - lVar4 != 0) {
                    _objc_enumerationMutation(*local_260 - lVar4,local_348);
                  }
                  lVar5 = *(long *)(local_268 + local_368 * 8);
                  local_230 = lVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
                  if (lVar5 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e0,PTR_s_addObject__0269d180,local_230);
                  }
                  local_368 = local_368 + 1;
                } while (local_368 < local_360);
                local_360 = local_348;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_348,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,
                           auStack_128,0x10);
                local_368 = 0;
              } while (local_360 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(local_348);
          }
          local_320 = local_320 + 1;
        } while (local_320 < local_318);
        local_318 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,
                   0x10);
        local_320 = (undefined *)0x0;
      } while (local_318 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_278 = (undefined *)0x0;
    _memset(auStack_2c0,0,0x40);
    puVar1 = local_1d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_3a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,0x10);
    if (local_3a0 != (undefined *)0x0) {
      lVar3 = *local_2b0;
      local_3a8 = (undefined *)0x0;
      do {
        do {
          if (*local_2b0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_2b0 - lVar3,puVar1);
          }
          lVar5 = *(long *)(local_2b8 + (long)local_3a8 * 8);
          local_280 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_1e0;
          local_3c4 = 1;
          if (lVar4 != 0) {
            lVar4 = local_280;
            (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
            local_3c4 = (uint)puVar2 ^ 1;
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          if ((local_3c4 & 1) != 0) {
            local_278 = local_278 + 1;
          }
          local_3a8 = local_3a8 + 1;
        } while (local_3a8 < local_3a0);
        local_3a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,
                   0x10);
        local_3a8 = (undefined *)0x0;
      } while (local_3a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_1b0 = local_278;
    local_1d4 = 1;
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_1d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return (unsigned_long_long)local_1b0;
}

