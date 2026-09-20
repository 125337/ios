// FUN_008c0508 @ 008c0508

void FUN_008c0508(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0 [3];
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_3;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = puVar2;
  _memset(auStack_128,0,0x40);
  uVar3 = local_b0;
  FUN_008c0948();
  _objc_retainAutoreleasedReturnValue();
  local_170 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_170 != 0) {
    lVar4 = *local_118;
    local_178 = 0;
    do {
      do {
        if (*local_118 - lVar4 != 0) {
          _objc_enumerationMutation(*local_118 - lVar4,uVar3);
        }
        uVar5 = *(ulong *)(local_120 + local_178 * 8);
        local_e8 = uVar5;
        FUN_008b50d8();
        if ((uVar5 & 1) == 0) {
          if (local_e8 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_addObject__0269d180,local_e8);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e8);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = local_c8;
  if (local_b8 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_b8 = puVar1;
  }
  puVar1 = local_e0[0];
  if (local_c0 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_c0 = puVar1;
  }
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

