// FUN_00121848 @ 00121848

void FUN_00121848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_290;
  undefined *local_288;
  cfstringStruct *local_208;
  cfstringStruct *local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  cfstringStruct *local_140;
  undefined8 local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_3);
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_4);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_5);
  pcVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar7 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    if (local_d8 == (cfstringStruct *)0x0) {
      local_208 = &cf___;
    }
    else {
      local_208 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_208;
    local_108 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_110 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf________0_9A_Fa_f__6___0_9A_Fa_f__8__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_118 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,puVar3,1,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_d8;
    local_120 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = pcVar1;
      local_108 = 1;
    }
    else {
      pcVar4 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      local_c0 = 0;
      local_b8 = 0;
      local_138 = 0;
      local_130 = pcVar4;
      local_c8 = pcVar4;
      local_b0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_matchesInString_options_range__0269ef68,pcVar1,0,0,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      pcVar1 = local_d8;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = pcVar1;
        local_108 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_mutableCopy_0269d8a0);
        local_140 = pcVar1;
        _memset(auStack_188,0,0x40);
        puVar2 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_reverseObjectEnumerator_0269d220);
        _objc_retainAutoreleasedReturnValue();
        local_288 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_288 != (undefined *)0x0) {
          lVar7 = *local_178;
          local_290 = (undefined *)0x0;
          do {
            do {
              if (*local_178 - lVar7 != 0) {
                _objc_enumerationMutation(*local_178 - lVar7,puVar2);
              }
              pcVar1 = local_f0;
              local_148 = *(ulong *)(local_180 + (long)local_290 * 8);
              (*(code *)PTR__objc_retain_02578638)();
              local_190 = pcVar1;
              uVar5 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_numberOfRanges_0269ef18);
              if ((1 < uVar5) &&
                 (uVar5 = local_148, puVar3 = PTR_s_rangeAtIndex__0269ef20,
                 (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_rangeAtIndex__0269ef20,1),
                 uVar5 != 0x7fffffffffffffff)) {
                pcVar4 = local_d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_d8,PTR_s_substringWithRange__0269d138,uVar5,puVar3);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_190;
                local_190 = pcVar4;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
              }
              pcVar1 = local_140;
              uVar5 = local_148;
              puVar3 = PTR_s_range_0269ef50;
              (*(code *)PTR__objc_msgSend_02578628)();
              uVar6 = local_e8;
              FUN_001220d8(local_e8,local_190,local_f8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar5,puVar3);
              (*(code *)PTR__objc_release_02578630)(uVar6);
              _objc_storeStrong(&local_190,0);
              local_290 = local_290 + 1;
            } while (local_290 < local_288);
            local_288 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8
                       ,0x10);
            local_290 = (undefined *)0x0;
          } while (local_288 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar1 = local_140;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = pcVar1;
        local_108 = 1;
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_128,0);
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

