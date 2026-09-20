// FUN_004fafcc @ 004fafcc

void FUN_004fafcc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_200;
  cfstringStruct *local_1e0;
  ulong local_190;
  ulong local_188;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_b8;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    _memset(auStack_120,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar4 = *local_110;
      local_190 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar1);
          }
          pcVar5 = *(cfstringStruct **)(local_118 + local_190 * 8);
          puVar2 = PTR_s_rangeOfString__0269d838;
          local_e0 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_rangeOfString__0269d838,&cf__);
          local_130 = pcVar5;
          local_128 = puVar2;
          if ((pcVar5 != (cfstringStruct *)0x7fffffffffffffff) && (pcVar5 != (cfstringStruct *)0x0))
          {
            pcVar3 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_substringToIndex__0269d6c0,pcVar5);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_e0;
            local_138 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_substringFromIndex__0269d120,
                       (undefined1 *)((long)&local_130->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            local_140 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_stringByRemovingPercentEncoding_0269d840);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_1e0 = local_140;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = local_1e0;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
            if (pcVar5 != (cfstringStruct *)0x0) {
              if (local_148 == (cfstringStruct *)0x0) {
                local_200 = &cf___;
              }
              else {
                local_200 = local_148;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_200,local_138);
            }
            _objc_storeStrong(&local_148);
            _objc_storeStrong(&local_140,0);
            _objc_storeStrong(&local_138,0);
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_c8 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

