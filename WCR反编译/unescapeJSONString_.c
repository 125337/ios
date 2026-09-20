// unescapeJSONString: @ 0101b7c8

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::unescapeJSONString_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined2 local_182;
  undefined8 local_180;
  undefined *local_178;
  char *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined8 local_120;
  char *local_118;
  undefined *local_110;
  char *local_108;
  undefined *local_100;
  char *local_f8;
  undefined4 local_ec;
  char *local_e8;
  SEL local_e0;
  ID local_d8;
  char *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (char *)0x0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  pcVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  pcVar4 = local_e8;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar4;
    local_ec = 1;
  }
  else {
    pcVar1 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__u002F);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_f8;
    local_f8 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_f8;
    local_f8 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_f8;
    local_f8 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf___u__0_9a_fA_F__4__,0,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_f8;
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_mutableCopy_0269d8a0);
    pcVar4 = local_f8;
    puVar2 = local_100;
    pcVar3 = local_f8;
    local_108 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    local_c0 = 0;
    local_b8 = 0;
    local_120 = 0;
    local_118 = pcVar3;
    local_c8 = pcVar3;
    local_b0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_matchesInString_options_range__0269ef68,pcVar4,0,0,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar2;
    _memset(auStack_168,0,0x40);
    puVar2 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_reverseObjectEnumerator_0269d220);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1e8 != (undefined *)0x0) {
      lVar8 = *local_158;
      local_1f0 = (undefined *)0x0;
      do {
        do {
          if (*local_158 - lVar8 != 0) {
            _objc_enumerationMutation(*local_158 - lVar8,puVar2);
          }
          pcVar4 = local_f8;
          uVar9 = *(undefined8 *)(local_160 + (long)local_1f0 * 8);
          puVar6 = PTR_s_rangeAtIndex__0269ef20;
          local_128 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_180 = uVar9;
          local_178 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_substringWithRange__0269d138,uVar9,puVar6);
          _objc_retainAutoreleasedReturnValue();
          local_170 = pcVar4;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_UTF8String_026a2e68);
          lVar5 = _strtol(pcVar4,(char **)0x0,0x10);
          pcVar4 = local_108;
          local_182 = (undefined2)lVar5;
          uVar9 = local_128;
          puVar7 = PTR_s_range_0269ef50;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCharacters_length__0269fc18
                     ,&local_182,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar9,puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_storeStrong(&local_170,0);
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                   0x10);
        local_1f0 = (undefined *)0x0;
      } while (local_1e8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = pcVar4;
    local_ec = 1;
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

