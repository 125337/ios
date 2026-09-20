// FUN_006db2cc @ 006db2cc

void FUN_006db2cc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d0;
  ulong local_180;
  ulong local_178;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b8;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  puVar1 = local_c0;
  if (uVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar4 = *local_108;
      local_180 = 0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,uVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_110 + local_180 * 8);
          puVar1 = PTR_s_rangeOfString__0269d838;
          local_d8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_rangeOfString__0269d838,&cf__);
          local_128 = pcVar5;
          local_120 = puVar1;
          if (pcVar5 != (cfstringStruct *)0x7fffffffffffffff) {
            pcVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_substringToIndex__0269d6c0,pcVar5);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_d8;
            local_130 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_substringFromIndex__0269d120,
                       (undefined1 *)((long)&local_128->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            local_138 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_stringByRemovingPercentEncoding_0269d840);
            _objc_retainAutoreleasedReturnValue();
            local_1d0 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_1d0 = local_138;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = local_1d0;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            pcVar5 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if (pcVar5 != (cfstringStruct *)0x0) {
              if (local_140 == (cfstringStruct *)0x0) {
                local_1f0 = &cf___;
              }
              else {
                local_1f0 = local_140;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_1f0,local_130);
            }
            _objc_storeStrong(&local_140);
            _objc_storeStrong(&local_138,0);
            _objc_storeStrong(&local_130,0);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
  }
  local_d0 = 1;
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

