// FUN_004fa764 @ 004fa764

void FUN_004fa764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_230;
  undefined8 local_1d8;
  ulong local_1d0;
  undefined *puStack_1c8;
  ulong local_1c0;
  undefined *puStack_1b8;
  ulong local_1b0;
  undefined *puStack_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  cfstringStruct *local_150;
  undefined8 local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  long local_120;
  undefined4 local_118;
  undefined8 local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  long local_f0;
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
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_2);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_3);
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_4);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_5);
  pcVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar7 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     lVar7 == 0)) {
    if (local_e8 == (cfstringStruct *)0x0) {
      local_230 = &cf___;
    }
    else {
      local_230 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_230;
    local_118 = 1;
  }
  else {
    local_120 = 0;
    local_130 = 0;
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_f0,1,&local_130);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_120,local_130);
    pcVar1 = local_e8;
    local_128 = puVar2;
    if ((puVar2 == (undefined *)0x0) || (local_120 != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = pcVar1;
      local_118 = 1;
    }
    else {
      pcVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_d0 = 0;
      local_c8 = 0;
      local_148 = 0;
      local_140 = pcVar3;
      local_d8 = pcVar3;
      local_c0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_matchesInString_options_range__0269ef68,pcVar1,0,0,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      pcVar1 = local_e8;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = pcVar1;
        local_118 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_mutableCopy_0269d8a0);
        local_150 = pcVar1;
        _memset(auStack_198,0,0x40);
        puVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_reverseObjectEnumerator_0269d220);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2a8 != (undefined *)0x0) {
          lVar7 = *local_188;
          local_2b0 = (undefined *)0x0;
          do {
            do {
              if (*local_188 - lVar7 != 0) {
                _objc_enumerationMutation(*local_188 - lVar7,puVar2);
              }
              pcVar1 = local_100;
              local_158 = *(ulong *)(local_190 + (long)local_2b0 * 8);
              (*(code *)PTR__objc_retain_02578638)();
              local_1a0 = pcVar1;
              uVar4 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_numberOfRanges_0269ef18);
              if (((1 < uVar4) &&
                  (uVar4 = local_158, puVar6 = PTR_s_rangeAtIndex__0269ef20,
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_rangeAtIndex__0269ef20,1),
                  local_1b0 = uVar4, puStack_1a8 = puVar6, uVar4 != 0x7fffffffffffffff)) &&
                 (pcVar1 = local_e8, local_1c0 = uVar4, puStack_1b8 = puVar6, local_b8 = uVar4,
                 local_b0 = puVar6,
                 (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
                 (cfstringStruct *)(puVar6 + uVar4) <= pcVar1)) {
                puStack_1c8 = puStack_1a8;
                local_1d0 = local_1b0;
                pcVar3 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_substringWithRange__0269d138,local_1b0,puStack_1a8);
                _objc_retainAutoreleasedReturnValue();
                pcVar1 = local_1a0;
                local_1a0 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
              }
              uVar5 = local_f8;
              FUN_004fa134(local_f8,local_1a0,local_100,local_108);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_150;
              uVar4 = local_158;
              puVar6 = PTR_s_range_0269ef50;
              local_1d8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_replaceCharactersInRange_withStr_0269ef70,uVar4,puVar6,
                         local_1d8);
              _objc_storeStrong(&local_1d8);
              _objc_storeStrong(&local_1a0,0);
              local_2b0 = local_2b0 + 1;
            } while (local_2b0 < local_2a8);
            local_2a8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8
                       ,0x10);
            local_2b0 = (undefined *)0x0;
          } while (local_2a8 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        pcVar1 = local_150;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = pcVar1;
        local_118 = 1;
        _objc_storeStrong(&local_150,0);
      }
      _objc_storeStrong(&local_138,0);
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

