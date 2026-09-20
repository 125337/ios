// FUN_0011855c @ 0011855c

undefined * FUN_0011855c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *local_1f8;
  ulong local_188;
  ulong local_180;
  ulong local_140;
  undefined4 local_134;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8 [3];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar1 = local_b0;
  FUN_00119804();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = puVar2;
  _memset(auStack_120,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar4 = *local_110;
    local_188 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_118 + local_188 * 8);
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_userId);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_128 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_nickname);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_130 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_128;
        FUN_00115578();
        if (((uVar3 & 1) == 0) && (uVar3 = local_130, FUN_00115578(), (uVar3 & 1) == 0)) {
          uVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          if ((uVar3 == 0) ||
             (uVar3 = local_c0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c0,PTR_s_containsObject__0269cbb8,local_128), (uVar3 & 1) == 0)) {
            uVar3 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            if (uVar3 == 0) {
              local_1f8 = &local_130;
            }
            else {
              local_1f8 = &local_128;
            }
            uVar3 = *local_1f8;
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
            if (uVar3 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_addObject__0269d180,local_140)
              ;
            }
            _objc_storeStrong(&local_140,0);
            local_134 = 0;
          }
          else {
            local_134 = 3;
          }
        }
        else {
          local_134 = 3;
        }
        _objc_storeStrong(&local_130);
        _objc_storeStrong(&local_128,0);
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  puVar2 = local_d8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_count_0269cfe0);
  local_134 = 1;
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return puVar2 + uVar1;
}

