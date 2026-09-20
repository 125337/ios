// FUN_0052c29c @ 0052c29c

void FUN_0052c29c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_c0 = 1;
  }
  else {
    puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    _memset(auStack_110,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar4 = *local_100;
      local_170 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_108 + local_170 * 8);
          local_d0 = uVar5;
          FUN_0052b368();
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar5;
          FUN_0052b6cc();
          if ((uVar5 & 1) == 0) {
            local_c0 = 3;
          }
          else {
            uVar5 = local_d0;
            FUN_00529d10();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_d0;
            local_120 = uVar5;
            _objc_getAssociatedObject(local_d0,DAT_026f4330);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if ((uVar5 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_clearDataItemCacheFlag__026a4b50,
                         local_d0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMomentsMonitor_026ce718,
                         PTR_s_clearDataItemDeletedFlag__026a4b58,local_d0);
              uVar5 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
              if (uVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_clearDeletedMarkForUsername_tid__026a4b60,local_118,
                           local_120);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_cacheDataItem_forUsername__026a4b68,local_d0,local_118);
              local_c0 = 0;
            }
            else {
              uVar5 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
              if (uVar5 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_recordProactivelyDeletedTid_forU_026a47b0,local_120,
                           local_118);
              }
              local_c0 = 3;
            }
            _objc_storeStrong(&local_120,0);
          }
          _objc_storeStrong(&local_118,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_runAutoCleanupIfEnabledForced__026a4b70,0);
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

