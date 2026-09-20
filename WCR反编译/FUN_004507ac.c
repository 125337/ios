// FUN_004507ac @ 004507ac

void FUN_004507ac(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_148;
  undefined *local_140;
  long local_110 [3];
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _memset(auStack_f8,0,0x40);
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_140 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_140 != (undefined *)0x0) {
    lVar4 = *local_e8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_e8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar4,puVar3);
        }
        lVar5 = *(long *)(local_f0 + (long)local_148 * 8);
        local_b8 = lVar5;
        FUN_004515e8();
        _objc_retainAutoreleasedReturnValue();
        local_110[0] = lVar5;
        if (lVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar5;
        }
        _objc_storeStrong(local_110,0);
        bVar1 = true;
        if (lVar5 != 0) goto LAB_00450a14;
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_00450a14:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

