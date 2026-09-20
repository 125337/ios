// FUN_0039754c @ 0039754c

void FUN_0039754c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint local_19c;
  undefined *local_180;
  undefined *local_178;
  undefined *local_160;
  undefined *local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (lVar4 == 0) {
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
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    _memset(auStack_118,0,0x40);
    if (local_b8 == (undefined *)0x0) {
      local_160 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_160 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
              );
    if (local_178 != (undefined *)0x0) {
      lVar4 = *local_108;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,local_160);
          }
          lVar5 = *(long *)(local_110 + (long)local_180 * 8);
          local_d8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_username_026a2238);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          lVar3 = local_c0;
          local_19c = 1;
          if (lVar2 != 0) {
            lVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_username_026a2238);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_containsObject__0269cbb8);
            local_19c = (uint)lVar3 ^ 1;
            (*(code *)PTR__objc_release_02578630)(lVar2);
          }
          (*(code *)PTR__objc_release_02578630)(lVar5);
          if ((local_19c & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_160);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_c4 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

