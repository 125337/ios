// FUN_0013d9b8 @ 0013d9b8

void FUN_0013d9b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_148;
  undefined *local_140;
  long local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    _memset(auStack_100,0,0x40);
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_140 != (undefined *)0x0) {
      lVar3 = *local_f0;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar3,puVar2);
          }
          lVar4 = *(long *)(local_f8 + (long)local_148 * 8);
          local_c0 = lVar4;
          FUN_00148b88();
          _objc_retainAutoreleasedReturnValue();
          local_108 = lVar4;
          if (lVar4 != 0) {
            FUN_00148f28(lVar4);
          }
          _objc_storeStrong(&local_108,0);
          if (lVar4 != 0) goto LAB_0013dca0;
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
LAB_0013dca0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

