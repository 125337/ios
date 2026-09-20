// FUN_0157e108 @ 0157e108

long FUN_0157e108(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_158;
  ulong local_150;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_01534040();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    FUN_0152b7ec();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar1;
    if (uVar1 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = 0;
      local_d8 = puVar2;
      _memset(auStack_128,0,0x40);
      uVar1 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_150 != 0) {
        lVar4 = *local_118;
        local_158 = 0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,uVar1);
            }
            lVar5 = *(long *)(local_120 + local_158 * 8);
            local_e8 = lVar5;
            FUN_01528c84();
            _objc_retainAutoreleasedReturnValue();
            local_130 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 == 0) {
              local_c4 = 3;
            }
            else {
              puVar2 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_containsObject__0269cbb8,local_130);
              if (((ulong)puVar2 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
                uVar3 = local_d0;
                FUN_015625e8(local_d0,local_130);
                if ((uVar3 & 1) != 0) {
                  local_e0 = local_e0 + 1;
                }
                local_c4 = 0;
              }
              else {
                local_c4 = 3;
              }
            }
            _objc_storeStrong(&local_130,0);
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_b0 = local_e0;
      local_c4 = 1;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

