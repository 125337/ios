// FUN_00331828 @ 00331828

void FUN_00331828(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    local_c0 = 0;
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_separatorViews_026a2110);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c0;
    local_c0 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_c0;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_b4 = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      uVar3 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_178 != 0) {
        lVar4 = *local_110;
        local_180 = 0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,uVar3);
            }
            local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
            FUN_00331b94(local_e0);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_b4 = 0;
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

