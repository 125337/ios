// FUN_00068acc @ 00068acc

void FUN_00068acc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_120;
  undefined *local_118;
  undefined1 auStack_f0 [8];
  long local_e8;
  long *local_e0;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _memset(auStack_f0,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_118 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f0,auStack_a8,0x10);
  if (local_118 != (undefined *)0x0) {
    lVar3 = *local_e0;
    local_120 = (undefined *)0x0;
    do {
      do {
        if (*local_e0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_e0 - lVar3,puVar2);
        }
        local_b0 = *(undefined8 *)(local_e8 + (long)local_120 * 8);
        FUN_00069040(local_b0);
        local_120 = local_120 + 1;
      } while (local_120 < local_118);
      local_118 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f0,auStack_a8,0x10);
      local_120 = (undefined *)0x0;
    } while (local_118 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

