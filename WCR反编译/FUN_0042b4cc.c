// FUN_0042b4cc @ 0042b4cc

void FUN_0042b4cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  lVar1 = local_b8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b0;
  local_c0 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
  if ((uVar2 == 0) ||
     (lVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_d0 = 1;
  }
  else {
    FUN_00423120();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    _memset(auStack_120,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar3 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_118 + local_178 * 8);
          local_e0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,local_e0);
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_d8,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

