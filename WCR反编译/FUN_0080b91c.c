// FUN_0080b91c @ 0080b91c

void FUN_0080b91c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  long local_e8;
  undefined4 local_e0;
  ulong local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_e0 = 1;
  }
  else {
    local_e8 = 0;
    _memset(auStack_130,0,0x40);
    uVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar2 = *local_120;
      local_170 = 0;
      do {
        do {
          if (*local_120 - lVar2 != 0) {
            _objc_enumerationMutation(*local_120 - lVar2,uVar1);
          }
          lVar3 = *(long *)(local_128 + local_170 * 8);
          local_f0 = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar3 != 0) {
            local_e0 = 2;
            goto LAB_0080bb58;
          }
          local_e8 = local_e8 + 1;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_e0 = 0;
LAB_0080bb58:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e8 != 0) {
      local_c0 = 0;
      local_c8 = local_e8;
      local_b8 = 0;
      local_b0 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_removeObjectsInRange__0269dad0,0,local_e8);
    }
    FUN_0080c790(local_d0);
    local_e0 = 0;
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

