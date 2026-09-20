// callStackSymbols @ 0091e470

/* Function Stack Size: 0x10 bytes */

ID WCNavigationMonitor::callStackSymbols(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  SEL local_e0;
  ID local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = param_2;
  local_d8 = param_1;
  if (*(long *)(param_1 + 0x28) < 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_callStackSymbols_026aa4e0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if ((undefined1 *)((long)&MACH_HEADER.cpusubtype + 2) < puVar2) {
      local_c0 = 0;
      local_c8 = 10;
      local_b8 = 0;
      local_b0 = 10;
      local_f8 = 0;
      local_f0 = 10;
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subarrayWithRange__0269d848,0,10);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_e8;
      local_e8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    _memset(auStack_148,0,0x40);
    puVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_170 != (undefined1 *)0x0) {
      lVar5 = *local_138;
      local_178 = (undefined1 *)0x0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,puVar1);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_178 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_appendFormat__0269d148,&cf___);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_178 = (undefined1 *)0x0;
      } while (local_170 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar4 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar4;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_e8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

