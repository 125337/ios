// FUN_014fb9bc @ 014fb9bc

void FUN_014fb9bc(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  cfstringStruct *local_e0;
  int local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  pcVar1 = local_c8;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
  }
  else {
    local_b0 = &DAT_028e3748;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_025861d8);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    pcVar2 = DAT_028e3740;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3740,PTR_s_objectForKeyedSubscript__0269d098,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_e0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      _memset(auStack_128,0,0x40);
      pcVar1 = DAT_028e3740;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_158 != (cfstringStruct *)0x0) {
        lVar3 = *local_118;
        local_160 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,pcVar1);
            }
            lVar4 = *(long *)(local_120 + (long)local_160 * 8);
            local_e8 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar4,PTR_s_caseInsensitiveCompare__0269db48,local_d0);
            if (lVar4 == 0) {
              pcVar2 = DAT_028e3740;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e3740,PTR_s_objectForKeyedSubscript__0269d098,local_e8);
              _objc_retainAutoreleasedReturnValue();
              local_d4 = 1;
              local_c0 = pcVar2;
              goto LAB_014fbc98;
            }
            local_160 = (cfstringStruct *)((long)&local_160->field0_0x0 + 1);
          } while (local_160 < local_158);
          local_158 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_160 = (cfstringStruct *)0x0;
        } while (local_158 != (cfstringStruct *)0x0);
      }
      local_d4 = 0;
LAB_014fbc98:
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_d0;
      if (local_d4 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar1;
        local_d4 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar1;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

