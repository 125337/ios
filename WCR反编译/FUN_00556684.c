// FUN_00556684 @ 00556684

byte FUN_00556684(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_commentUsers_026a4730);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      local_a9 = 0;
      local_bc = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar3 = *local_110;
        local_170 = 0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_118 + local_170 * 8);
            local_e0 = uVar4;
            FUN_0055756c();
            if ((uVar4 & 1) != 0) {
              local_a9 = 1;
              local_bc = 1;
              goto LAB_00556964;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_bc = 0;
LAB_00556964:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_bc == 0) {
        local_a9 = 0;
        local_bc = 1;
      }
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

