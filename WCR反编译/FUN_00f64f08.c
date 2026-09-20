// FUN_00f64f08 @ 00f64f08

void FUN_00f64f08(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong local_138;
  ulong local_130;
  ulong local_118;
  long local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  _memset(auStack_100,0,0x40);
  if (local_b0 == 0) {
    local_118 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_118 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar2 = *local_f0;
    local_138 = 0;
    do {
      do {
        if (*local_f0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar2,local_118);
        }
        lVar3 = *(long *)(local_f8 + local_138 * 8);
        local_c0 = lVar3;
        FUN_00f646e4();
        _objc_retainAutoreleasedReturnValue();
        local_108 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
        if (lVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_108);
        }
        _objc_storeStrong(&local_108,0);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                 0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_118);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

