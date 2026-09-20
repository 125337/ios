// FUN_000b4fbc @ 000b4fbc

void FUN_000b4fbc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_170;
  undefined *local_168;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  undefined *local_d8;
  int local_d0;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  FUN_000b56b8(local_b8,0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar2;
      _memset(auStack_120,0,0x40);
      puVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_168 != (undefined *)0x0) {
        lVar3 = *local_110;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,puVar2);
            }
            puVar4 = *(undefined **)(local_118 + (long)local_170 * 8);
            local_e0 = puVar4;
            FUN_000b56b8(puVar4,0);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_c0;
            local_c0 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = local_c0;
            if (local_c0 != (undefined *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar1;
              local_d0 = 1;
              goto LAB_000b52a0;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      local_d0 = 0;
LAB_000b52a0:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_d0 == 0) {
        local_d0 = 0;
      }
      _objc_storeStrong(&local_d8,0);
      if (local_d0 != 0) goto LAB_000b5370;
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    FUN_000b56b8(puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_128,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b0 = puVar2;
  }
LAB_000b5370:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

