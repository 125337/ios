// FUN_00219988 @ 00219988

void FUN_00219988(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_c0 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = 0;
    local_c8 = puVar3;
    while (puVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
          puVar3 != (undefined *)0x0 && local_d0 < 0xb4) {
      puVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeObjectAtIndex__0269d530,0);
      local_d0 = local_d0 + 1;
      FUN_00217930(local_d8);
      _memset(auStack_120,0,0x40);
      puVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != (undefined *)0x0) {
        lVar4 = *local_110;
        local_170 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,puVar3);
            }
            local_e0 = *(undefined8 *)(local_118 + (long)local_170 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = (undefined *)0x0;
        } while (local_168 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

