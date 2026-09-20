// FUN_002f7f58 @ 002f7f58

/* WARNING: Removing unreachable block (ram,0x002f81b4) */

void FUN_002f7f58(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_c0;
  byte local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if ((local_b0 == 0) || ((DAT_028c9ab8 & 1) != 0)) {
    local_b4 = 1;
  }
  else {
    DAT_028c9ab8 = 1;
    local_b5 = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    FUN_002f84ac(local_b0,puVar2);
    _memset(auStack_118,0,0x40);
    puVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_140 != (undefined *)0x0) {
      lVar3 = *local_108;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,puVar2);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_148 * 8);
          FUN_002f8720(local_d8,local_b0);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
    DAT_028c9ab8 = 0;
    if ((local_b5 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x2f81a4);
      (*pcVar1)();
    }
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

