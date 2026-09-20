// FUN_018541d8 @ 018541d8

void FUN_018541d8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *local_178;
  ulong local_130;
  ulong local_128;
  ulong local_110;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  _memset(auStack_100,0,0x40);
  if (local_b0 == 0) {
    local_110 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_110 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_128 != 0) {
    lVar3 = *local_f0;
    local_130 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,local_110);
        }
        lVar4 = *(long *)(local_f8 + local_130 * 8);
        local_c0 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        puVar1 = local_b8;
        if (lVar2 != 0) {
          lVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                 0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_110);
  puVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
  local_178 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_178 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_178);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

