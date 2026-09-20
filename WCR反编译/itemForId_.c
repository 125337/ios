// itemForId: @ 00f64438

/* Function Stack Size: 0x18 bytes */

ID WCRefineForwardTargetHistory::itemForId_(ID param_1,SEL param_2,ID param_3)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *local_148;
  void *local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar3 = local_c8;
  FUN_00f646e4();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    pvVar1 = _memset(auStack_120,0,0x40);
    FUN_00f64200();
    _objc_retainAutoreleasedReturnValue();
    local_140 = pvVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != (void *)0x0) {
      lVar3 = *local_110;
      local_148 = (void *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,pvVar1);
          }
          uVar4 = *(ulong *)(local_118 + (long)local_148 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_itemId_026ac860);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_e0;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar4;
            local_d4 = 1;
            goto LAB_00f6465c;
          }
          local_148 = (void *)((long)local_148 + 1);
        } while (local_148 < local_140);
        local_140 = pvVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pvVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_148 = (void *)0x0;
      } while (local_140 != (void *)0x0);
    }
    local_d4 = 0;
LAB_00f6465c:
    (*(code *)PTR__objc_release_02578630)(pvVar1);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

