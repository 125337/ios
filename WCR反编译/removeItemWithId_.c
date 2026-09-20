// removeItemWithId: @ 00f65738

/* Function Stack Size: 0x18 bytes */

void WCRefineForwardTargetHistory::removeItemWithId_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  FUN_00f646e4();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_cc = 1;
  }
  else {
    FUN_00f64200();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _memset(auStack_130,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_120;
      local_158 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_128 + local_158 * 8);
          local_f0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_itemId_026ac860);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    if ((long)puVar2 - local_e0 != 0) {
      FUN_00f65254((long)puVar2 - local_e0,local_e8);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

