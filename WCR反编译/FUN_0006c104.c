// FUN_0006c104 @ 0006c104

void FUN_0006c104(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_windows_0269dde0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (undefined *)0x0) {
    lVar2 = *local_f8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,puVar1);
        }
        lVar3 = *(long *)(local_100 + (long)local_148 * 8);
        local_c8 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar3 != 0) {
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_0006c3cc(local_c8,*(undefined8 *)(param_1 + 0x20));
          }
          FUN_0006c690(local_c8);
          FUN_0006c928(local_c8);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

