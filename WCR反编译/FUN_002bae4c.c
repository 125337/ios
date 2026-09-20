// FUN_002bae4c @ 002bae4c

byte FUN_002bae4c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  byte local_a9;
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
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_140 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_140 != (undefined *)0x0) {
    lVar5 = *local_e8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar5,puVar4);
        }
        uVar6 = *(ulong *)(local_f0 + (long)local_148 * 8);
        local_b8 = uVar6;
        FUN_002bfbe4(uVar6,0);
        if ((uVar6 & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_002bb0d8;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_002bb0d8:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (!bVar1) {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

