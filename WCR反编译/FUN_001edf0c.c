// FUN_001edf0c @ 001edf0c

void FUN_001edf0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = param_2;
  if ((local_b0 == 0) || (param_2 + -2 != 0 && 1 < param_2)) {
    local_bc = 1;
  }
  else {
    FUN_001ef4e0(param_2 + -2,local_b0);
    _memset(auStack_118,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar2 = *local_108;
      local_150 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_150 * 8);
          FUN_001edf0c(local_d8,local_b8 + 1);
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

