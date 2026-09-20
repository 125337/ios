// FUN_01575044 @ 01575044

byte FUN_01575044(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  FUN_01574f3c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar3 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_108 + local_148 * 8);
          local_d0 = uVar4;
          FUN_01575f2c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar4 == 0) {
            local_a9 = 0;
            local_c4 = 1;
            goto LAB_015752e0;
          }
          uVar4 = local_d0;
          FUN_01573a0c();
          bVar1 = false;
          if ((uVar4 & 1) != 0) {
            uVar4 = local_d0;
            FUN_01576028();
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar4 == 0;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          if (bVar1) {
            local_a9 = 0;
            local_c4 = 1;
            goto LAB_015752e0;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_c4 = 0;
LAB_015752e0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c4 == 0) {
      local_a9 = 1;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

