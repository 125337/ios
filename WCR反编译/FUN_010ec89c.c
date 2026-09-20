// FUN_010ec89c @ 010ec89c

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_010ec89c(long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  void *local_158;
  void *local_150;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_010ecc84();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,lVar4 * 2 + 2);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,&cf_path);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,&cf_nightPath);
  pvVar2 = _memset(auStack_108,0,0x40);
  FUN_010ecc84();
  _objc_retainAutoreleasedReturnValue();
  local_150 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_150 != (void *)0x0) {
    lVar4 = *local_f8;
    local_158 = (void *)0x0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,pvVar2);
        }
        lVar5 = *(long *)(local_100 + (long)local_158 * 8);
        local_c8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_integerValue_026ca750);
        FUN_010db7dc();
        _objc_retainAutoreleasedReturnValue();
        local_110 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        puVar1 = local_c0;
        if (lVar5 != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Path
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar1 = local_c0;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf___NightPath);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_110,0);
        local_158 = (void *)((long)local_158 + 1);
      } while (local_158 < local_150);
      local_150 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_158 = (void *)0x0;
    } while (local_150 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  puVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  puVar1 = DAT_028e3400;
  DAT_028e3400 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

