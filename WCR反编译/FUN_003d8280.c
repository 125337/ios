// FUN_003d8280 @ 003d8280

ulong FUN_003d8280(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_140;
  ulong local_138;
  ulong local_120;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_preservedOriginalRows_026a2ce0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_b8 = uVar2;
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = uVar1;
  if (uVar1 == 0) {
    local_120 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  local_138 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar3 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,local_120);
        }
        lVar4 = *(long *)(local_f8 + local_140 * 8);
        local_c0 = lVar4;
        FUN_003d84f0();
        local_b8 = local_b8 + lVar4 + 1;
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                 0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_120);
  uVar1 = local_b8;
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

