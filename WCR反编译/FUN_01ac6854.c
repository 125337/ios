// FUN_01ac6854 @ 01ac6854

void FUN_01ac6854(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_188;
  ulong local_148;
  ulong local_140;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_b1 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  if (local_b0 == 0) {
    local_128 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_128 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_f8;
    local_148 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,local_128);
        }
        lVar5 = *(long *)(local_100 + local_148 * 8);
        local_c8 = lVar5;
        FUN_01a9eff8();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (lVar3 != 0) {
          lVar3 = local_c8;
          FUN_01ace5c4();
          bVar1 = (uint)lVar3 == (local_b1 & 1);
        }
        (*(code *)PTR__objc_release_02578630)(lVar5);
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_128);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_188 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_188);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

