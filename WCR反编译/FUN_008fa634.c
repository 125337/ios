// FUN_008fa634 @ 008fa634

void FUN_008fa634(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_218;
  undefined *local_210;
  cfstringStruct *local_1b8;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  undefined8 local_120;
  cfstringStruct *local_118;
  undefined *local_110;
  undefined *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0 [3];
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_d0;
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
  local_f9 = 0;
  local_1b8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_1b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_1b8;
  }
  local_f9 = pcVar3 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0[0] = local_1b8;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_f0[0];
  pcVar4 = local_f0[0];
  local_108 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0);
  local_c0 = 0;
  local_b8 = 0;
  local_120 = 0;
  local_118 = pcVar4;
  local_c8 = pcVar4;
  local_b0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_matchesInString_options_range__0269ef68,pcVar3,0,0,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  _memset(auStack_168,0,0x40);
  puVar2 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_reverseObjectEnumerator_0269d220);
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_210 != (undefined *)0x0) {
    lVar7 = *local_158;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar7 != 0) {
          _objc_enumerationMutation(*local_158 - lVar7,puVar2);
        }
        local_128 = *(ulong *)(local_160 + (long)local_218 * 8);
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = &cf_yy_MM_ddHH_mm_ss;
        uVar5 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_numberOfRanges_0269ef18);
        bVar1 = false;
        if (1 < uVar5) {
          uVar5 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_rangeAtIndex__0269ef20,1);
          bVar1 = uVar5 != 0x7fffffffffffffff;
        }
        pcVar3 = local_f0[0];
        if (bVar1) {
          uVar5 = local_128;
          puVar6 = PTR_s_rangeAtIndex__0269ef20;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_rangeAtIndex__0269ef20,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_substringWithRange__0269d138,uVar5,puVar6);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_170;
          local_170 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        pcVar3 = local_f0[0];
        uVar5 = local_128;
        puVar6 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar4 = local_170;
        _WCRefineFormatDateWithChatTimeRules(local_170,local_d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar5,puVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        _objc_storeStrong(&local_170,0);
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_f0[0];
  _WCRefineRenderDateFormatsInText(local_f0[0],local_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(local_f0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,pcVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

