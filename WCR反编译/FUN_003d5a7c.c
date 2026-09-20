// FUN_003d5a7c @ 003d5a7c

void FUN_003d5a7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_158;
  undefined *local_150;
  undefined *local_128;
  undefined *local_120;
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
  FUN_003d5e94();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    _memset(auStack_110,0,0x40);
    puVar1 = local_b8;
    FUN_003d7194();
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != (undefined *)0x0) {
      lVar4 = *local_100;
      local_158 = (undefined *)0x0;
      do {
        do {
          puVar2 = local_150;
          if (*local_100 - lVar4 != 0) {
            puVar2 = puVar1;
            _objc_enumerationMutation(*local_100 - lVar4);
          }
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d0 = *(undefined **)(local_108 + (long)local_158 * 8);
          FUN_003d5540();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_official______);
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_118;
          FUN_003d560c();
          _objc_retainAutoreleasedReturnValue();
          local_120 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_d0);
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar2;
            if (puVar2 == (undefined *)0x0) {
              puVar3 = local_d0;
              FUN_003d73bc();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_128;
              local_128 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (local_128 == (undefined *)0x0) {
                local_c4 = 0;
              }
              else {
                FUN_003d5944(local_128,local_118);
                puVar2 = local_128;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar2;
                local_c4 = 1;
              }
            }
            else {
              FUN_003d5944(puVar2,local_118);
              puVar2 = local_128;
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = puVar2;
              local_c4 = 1;
            }
            _objc_storeStrong(&local_128,0);
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c4 = 1;
            local_b0 = puVar2;
          }
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
          if (local_c4 != 0) goto LAB_003d5e0c;
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_158 = (undefined *)0x0;
      } while (local_150 != (undefined *)0x0);
    }
    local_c4 = 0;
LAB_003d5e0c:
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
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

