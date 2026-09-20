// FUN_004f5538 @ 004f5538

void FUN_004f5538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  long lVar6;
  cfstringStruct *local_318;
  undefined *local_2b8;
  undefined *local_2b0;
  cfstringStruct *local_218;
  cfstringStruct *local_1d8;
  ulong local_1d0;
  undefined *puStack_1c8;
  ulong local_1c0;
  undefined *puStack_1b8;
  ulong local_1a8;
  undefined *puStack_1a0;
  cfstringStruct *local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
  long local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_1);
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_2);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_3);
  pcVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar1 == (cfstringStruct *)0x0) {
    if (local_e8 == (cfstringStruct *)0x0) {
      local_218 = &cf___;
    }
    else {
      local_218 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_218;
    local_108 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,&cf__Tip);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_______0_9A_Fa_f__6___0_9A_Fa_f__8__);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_118 = 0;
    local_128 = 0;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_110,1,&local_128);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_118,local_128);
    pcVar1 = local_e8;
    local_120 = puVar3;
    if ((puVar3 == (undefined *)0x0) || (local_118 != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar1;
      local_108 = 1;
    }
    else {
      pcVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_d0 = 0;
      local_c8 = 0;
      local_140 = 0;
      local_138 = pcVar4;
      local_d8 = pcVar4;
      local_c0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_matchesInString_options_range__0269ef68,pcVar1,0,0,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
      pcVar1 = local_e8;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = pcVar1;
        local_108 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_mutableCopy_0269d8a0);
        local_148 = pcVar1;
        _memset(auStack_190,0,0x40);
        puVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reverseObjectEnumerator_0269d220);
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2b0 != (undefined *)0x0) {
          lVar6 = *local_180;
          local_2b8 = (undefined *)0x0;
          do {
            do {
              if (*local_180 - lVar6 != 0) {
                _objc_enumerationMutation(*local_180 - lVar6,puVar3);
              }
              local_150 = *(ulong *)(local_188 + (long)local_2b8 * 8);
              (*(code *)PTR__objc_retain_02578638)();
              local_198 = &cf___;
              uVar5 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_numberOfRanges_0269ef18);
              if (((1 < uVar5) &&
                  (uVar5 = local_150, puVar2 = PTR_s_rangeAtIndex__0269ef20,
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_rangeAtIndex__0269ef20,1),
                  local_1a8 = uVar5, puStack_1a0 = puVar2, uVar5 != 0x7fffffffffffffff)) &&
                 (pcVar1 = local_e8, local_1c0 = uVar5, puStack_1b8 = puVar2, local_b8 = uVar5,
                 local_b0 = puVar2,
                 (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
                 (cfstringStruct *)(puVar2 + uVar5) <= pcVar1)) {
                puStack_1c8 = puStack_1a0;
                local_1d0 = local_1a8;
                pcVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_substringWithRange__0269d138,local_1a8,puStack_1a0);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_198;
                local_198 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
              }
              if (local_f0 == (cfstringStruct *)0x0) {
                local_318 = &cf___;
              }
              else {
                local_318 = local_f0;
              }
              FUN_004f99c0(local_318,local_198,local_f8);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_148;
              uVar5 = local_150;
              puVar2 = PTR_s_range_0269ef50;
              local_1d8 = local_318;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar5,puVar2,
                         local_1d8);
              _objc_storeStrong(&local_1d8);
              _objc_storeStrong(&local_198,0);
              local_2b8 = local_2b8 + 1;
            } while (local_2b8 < local_2b0);
            local_2b0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8
                       ,0x10);
            local_2b8 = (undefined *)0x0;
          } while (local_2b0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        pcVar1 = local_148;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = pcVar1;
        local_108 = 1;
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_130,0);
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

