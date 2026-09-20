// FUN_00686a7c @ 00686a7c

void FUN_00686a7c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1a8;
  undefined *local_178;
  undefined *local_170;
  int local_124;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110 [3];
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  _memset(auStack_f8,0,0x40);
  puVar2 = PTR__OBJC_CLASS___NSHTTPCookieStorage_026ce7f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPCookieStorage_026ce7f8,PTR_s_sharedHTTPCookieStorage_026a6480);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_170 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_170 != (undefined *)0x0) {
    lVar5 = *local_e8;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar5,puVar3);
        }
        pcVar6 = *(cfstringStruct **)(local_f0 + (long)local_178 * 8);
        local_b8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_domain_026a6490);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1a8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_110[0] = local_1a8;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_1c8 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_1c8;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_value_0269d830);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar6;
        FUN_0067d82c();
        _objc_retainAutoreleasedReturnValue();
        local_120 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        pcVar6 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_124 = 3;
        }
        else {
          pcVar6 = local_110[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_110[0],PTR_s_rangeOfString_options__0269d118,&cf_sjtmgr,1);
          bVar1 = true;
          if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
            pcVar6 = local_110[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110[0],PTR_s_rangeOfString_options__0269d118,&cf_wxpapp_weixin_qq_com,1
                      );
            bVar1 = pcVar6 != (cfstringStruct *)0x7fffffffffffffff;
          }
          if (bVar1) {
            pcVar6 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_caseInsensitiveCompare__0269db48,&cf_sid);
            if (pcVar6 == (cfstringStruct *)0x0) {
              pcVar6 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_hasPrefix__0269d320,&cf_DQ);
              if ((((ulong)pcVar6 & 1) == 0) &&
                 (pcVar6 = local_120,
                 (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_hasPrefix__0269d320,&cf_dq),
                 ((ulong)pcVar6 & 1) == 0)) {
                local_124 = 0;
              }
              else {
                pcVar6 = local_120;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar6;
                local_124 = 1;
              }
            }
            else {
              local_124 = 3;
            }
          }
          else {
            local_124 = 3;
          }
        }
        _objc_storeStrong(&local_120);
        _objc_storeStrong(&local_118,0);
        _objc_storeStrong(local_110,0);
        if ((local_124 != 0) && (local_124 != 3)) goto LAB_00687050;
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  local_124 = 0;
LAB_00687050:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_124 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

