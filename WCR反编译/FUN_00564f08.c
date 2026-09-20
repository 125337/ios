// FUN_00564f08 @ 00564f08

void FUN_00564f08(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_158;
  undefined *local_150;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _memset(auStack_110,0,0x40);
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_150 != (undefined *)0x0) {
    lVar4 = *local_100;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,puVar2);
        }
        lVar5 = *(long *)(local_108 + (long)local_158 * 8);
        local_d0 = lVar5;
        FUN_0056692c();
        _objc_retainAutoreleasedReturnValue();
        local_118 = lVar5;
        if (lVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar5;
        }
        _objc_storeStrong(&local_118,0);
        bVar1 = true;
        if (lVar5 != 0) goto LAB_005651ac;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_158 = (undefined *)0x0;
    } while (local_150 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_005651ac:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

