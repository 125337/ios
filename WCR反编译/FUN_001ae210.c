// FUN_001ae210 @ 001ae210

void FUN_001ae210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0 [3];
  ulong local_c8;
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
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_b0;
  FUN_001adea8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = puVar2;
  _memset(auStack_128,0,0x40);
  uVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar3 = *local_118;
    local_178 = 0;
    do {
      do {
        if (*local_118 - lVar3 != 0) {
          _objc_enumerationMutation(*local_118 - lVar3,uVar1);
        }
        local_e8 = *(long *)(local_120 + local_178 * 8);
        if ((local_e8 != local_b8) && (local_e8 != local_c0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,local_e8);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_e0[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

