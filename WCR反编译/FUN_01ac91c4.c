// FUN_01ac91c4 @ 01ac91c4

void FUN_01ac91c4(undefined8 param_1,byte *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_178;
  undefined *local_170;
  undefined *local_148;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  byte *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar1 = &local_b8;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(ppuVar1,param_1);
  local_c0 = param_2;
  FUN_01ace6b8();
  if ((((ulong)ppuVar1 & 1) == 0) ||
     (puVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    if (local_c0 != (byte *)0x0) {
      *local_c0 = 0;
    }
    if (local_b8 == (undefined *)0x0) {
      local_148 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_148 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_148;
    local_c4 = 1;
  }
  else {
    FUN_01ace93c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    local_d8 = puVar3;
    _memset(auStack_128,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_178 * 8);
          puVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsObject__0269cbb8,local_e8);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e8);
          }
          else {
            local_d9 = 1;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_b0 = local_d8;
    if (local_c0 != (byte *)0x0) {
      *local_c0 = local_d9 & 1;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

