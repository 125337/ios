// FUN_00f64200 @ 00f64200

void FUN_00f64200(void)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *local_128;
  void *local_120;
  long local_100;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  pvVar2 = _memset(auStack_f8,0,0x40);
  FUN_00f65b24();
  _objc_retainAutoreleasedReturnValue();
  local_120 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_120 != (void *)0x0) {
    lVar3 = *local_e8;
    local_128 = (void *)0x0;
    do {
      do {
        if (*local_e8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar3,pvVar2);
        }
        lVar4 = *(long *)(local_f0 + (long)local_128 * 8);
        local_b8 = lVar4;
        FUN_00f65e64();
        _objc_retainAutoreleasedReturnValue();
        local_100 = lVar4;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addObject__0269d180,lVar4);
        }
        _objc_storeStrong(&local_100,0);
        local_128 = (void *)((long)local_128 + 1);
      } while (local_128 < local_120);
      local_120 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_128 = (void *)0x0;
    } while (local_120 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_025834d8);
  puVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

