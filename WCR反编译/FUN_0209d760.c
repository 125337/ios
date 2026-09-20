// FUN_0209d760 @ 0209d760

void FUN_0209d760(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_148;
  undefined1 *local_140;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined1 *local_c8;
  int local_bc;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    FUN_0209da94();
    _objc_retainAutoreleasedReturnValue();
    local_bc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    _memset(auStack_110,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_140 != (undefined1 *)0x0) {
      lVar5 = *local_100;
      local_148 = (undefined1 *)0x0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,puVar2);
          }
          lVar6 = *(long *)(local_108 + (long)local_148 * 8);
          local_d0 = lVar6;
          FUN_0209fb50();
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          puVar4 = (undefined1 *)0x0;
          if (lVar6 == 0) {
LAB_0209d960:
            local_bc = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
            puVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
            puVar4 = puVar3 + -7;
            if (puVar3 < (undefined1 *)((long)&MACH_HEADER.cputype + 3)) goto LAB_0209d960;
            puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
            local_bc = 2;
          }
          _objc_storeStrong(puVar4,&local_118,0);
          if (local_bc != 0) goto LAB_0209d9e8;
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_148 = (undefined1 *)0x0;
      } while (local_140 != (undefined1 *)0x0);
    }
    local_bc = 0;
LAB_0209d9e8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    local_bc = 1;
    local_b0 = puVar4;
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

