// FUN_0054447c @ 0054447c

byte FUN_0054447c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  int local_c8;
  undefined *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  FUN_005448f8();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((ulong)puVar1 & 1) == 0) {
    _memset(auStack_110,0,0x40);
    puVar4 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar3 = *local_100;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,puVar1);
          }
          puVar4 = *(undefined **)(local_108 + (long)local_170 * 8);
          local_d0 = puVar4;
          if (puVar4 != local_b8) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_rootViewController_026ca820);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar4;
            FUN_005448f8();
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if (((ulong)puVar2 & 1) != 0) {
              local_a9 = 1;
              local_c8 = 1;
              goto LAB_00544844;
            }
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    local_c8 = 0;
LAB_00544844:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_c8 == 0) {
      local_a9 = 0;
      local_c8 = 1;
    }
  }
  else {
    local_a9 = 1;
    local_c8 = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

