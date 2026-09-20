// FUN_0063c8a0 @ 0063c8a0

void FUN_0063c8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_170;
  ulong local_168;
  ulong local_150;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined *local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  if (local_b0 == 1) {
    _memset(auStack_120,0,0x40);
    if (local_c0 == 0) {
      local_150 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_150 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
              );
    if (local_168 != 0) {
      lVar6 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,local_150);
          }
          lVar7 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar7;
          FUN_0063b8ac();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar7);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e0);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_150);
  }
  else if (local_b0 == 2) {
    puVar5 = puVar3;
    FUN_0063ce30();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  bVar2 = false;
  puVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  bVar1 = false;
  if (puVar3 == (undefined *)0x0) {
    lVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    bVar1 = false;
    if (lVar6 != 0) {
      local_128 = local_b8;
      FUN_0063b8ac();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      lVar6 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar6 != 0;
    }
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_b8);
  }
  puVar3 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

