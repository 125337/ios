// FUN_01a9e9a4 @ 01a9e9a4

void FUN_01a9e9a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_148;
  undefined *local_140;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  int local_c4;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = local_b8;
  FUN_01acb100();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    _memset(auStack_110,0,0x40);
    puVar1 = local_b8;
    FUN_01acc30c();
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != (undefined *)0x0) {
      lVar3 = *local_100;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,puVar1);
          }
          puVar4 = *(undefined **)(local_108 + (long)local_148 * 8);
          local_d0 = puVar4;
          FUN_01acc534();
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_d0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_118;
            local_118 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_118;
            if (local_118 == (undefined *)0x0) {
              local_c4 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar4;
              local_c4 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c4 = 1;
            local_b0 = puVar4;
          }
          _objc_storeStrong(&local_118,0);
          if (local_c4 != 0) goto LAB_01a9ec18;
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
    local_c4 = 0;
LAB_01a9ec18:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_c4 == 0) {
      local_b0 = (undefined *)0x0;
      local_c4 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar1;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

