// FUN_010196b8 @ 010196b8

void FUN_010196b8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_188;
  ulong local_158;
  ulong local_150;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  cfstringStruct *local_d0;
  undefined *local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar4 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,uVar1);
        }
        pcVar5 = *(cfstringStruct **)(local_108 + local_158 * 8);
        local_d0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_domain_026a6490);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_188 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_188 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_188;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_containsString__0269d0b0,&cf_douyin);
        if ((((((ulong)pcVar3 & 1) != 0) ||
             (pcVar3 = local_118,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_118,PTR_s_containsString__0269d0b0,&cf_byteimg),
             ((ulong)pcVar3 & 1) != 0)) ||
            (pcVar3 = local_118,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_containsString__0269d0b0,&cf_snssdk),
            ((ulong)pcVar3 & 1) != 0)) ||
           (pcVar3 = local_118,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_118,PTR_s_containsString__0269d0b0,&cf_iesdouyin),
           ((ulong)pcVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
        }
        _objc_storeStrong(&local_118,0);
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSHTTPCookie_026cec90;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSHTTPCookie_026cec90,
               PTR_s_requestHeaderFieldsWithCookies__026adc58,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_Cookie)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setValue_forHTTPHeaderField__026a16e8,
                 local_128,&cf_Cookie);
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

