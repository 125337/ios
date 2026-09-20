// FUN_006c6184 @ 006c6184

void FUN_006c6184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined *local_2e8;
  undefined *local_2e0;
  cfstringStruct *local_230;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  undefined *local_1e8;
  cfstringStruct *local_1e0;
  undefined *local_1d8;
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  cfstringStruct *local_1c0;
  long local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  undefined8 local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_120;
  cfstringStruct *local_110;
  undefined8 local_108;
  long local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f8,param_1);
  local_100 = 0;
  _objc_storeStrong(&local_100,param_2);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_3);
  if (local_f8 == (cfstringStruct *)0x0) {
    local_230 = &cf___;
  }
  else {
    local_230 = local_f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_230;
  (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_length_0269cca0);
  if (local_230 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = &cf___;
    local_120 = 1;
  }
  else {
    lVar7 = local_100;
    FUN_006ce608();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar7);
    pcVar2 = local_110;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = pcVar2;
      local_120 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_110;
        FUN_006c5ebc(local_110,local_100,local_108);
        _objc_retainAutoreleasedReturnValue();
        local_120 = 1;
        local_f0 = pcVar2;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                   PTR_s_regularExpressionWithPattern_opt_0269ef10,
                   &cf_<_wc_custom_link_[_s_S]*_<__wc_custom_link_>,0,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_110;
        local_128 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          FUN_006c5ebc(local_110,local_100,local_108);
          _objc_retainAutoreleasedReturnValue();
          local_120 = 1;
          local_f0 = pcVar2;
        }
        else {
          pcVar4 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          local_c0 = 0;
          local_b8 = 0;
          local_140 = 0;
          local_138 = pcVar4;
          local_c8 = pcVar4;
          local_b0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_matchesInString_options_range__0269ef68,pcVar2,0,0,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
          if (puVar3 == (undefined *)0x0) {
            pcVar2 = local_110;
            FUN_006c5ebc(local_110,local_100,local_108);
            _objc_retainAutoreleasedReturnValue();
            local_120 = 1;
            local_f0 = pcVar2;
          }
          else {
            pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
            _objc_retainAutoreleasedReturnValue();
            local_150 = (cfstringStruct *)0x0;
            local_148 = pcVar2;
            _memset(auStack_198,0,0x40);
            puVar3 = local_130;
            (*(code *)PTR__objc_retain_02578638)();
            local_2e0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8
                       ,0x10);
            if (local_2e0 != (undefined *)0x0) {
              lVar7 = *local_188;
              local_2e8 = (undefined *)0x0;
              do {
                do {
                  if (*local_188 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_188 - lVar7,puVar3);
                  }
                  pcVar8 = *(cfstringStruct **)(local_190 + (long)local_2e8 * 8);
                  puVar5 = PTR_s_range_0269ef50;
                  local_158 = pcVar8;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  pcVar4 = local_110;
                  pcVar2 = local_150;
                  local_1a8 = pcVar8;
                  local_1a0 = puVar5;
                  if (local_150 < pcVar8) {
                    pcVar8 = local_158;
                    puVar5 = PTR_s_range_0269ef50;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_1b8 = (long)pcVar8 - (long)local_150;
                    local_e0 = pcVar2;
                    local_d8 = pcVar2;
                    local_1c0 = pcVar2;
                    local_1d0 = pcVar8;
                    local_1c8 = puVar5;
                    local_e8 = local_1b8;
                    local_d0 = local_1b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar4,PTR_s_substringWithRange__0269d138,pcVar2,local_1b8);
                    _objc_retainAutoreleasedReturnValue();
                    local_1b0 = pcVar4;
                    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
                    pcVar2 = local_148;
                    if (pcVar4 != (cfstringStruct *)0x0) {
                      pcVar4 = local_1b0;
                      FUN_006c5ebc(local_1b0,local_100,local_108);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_appendString__0269ccb0);
                      (*(code *)PTR__objc_release_02578630)(pcVar4);
                    }
                    _objc_storeStrong(&local_1b0,0);
                  }
                  pcVar4 = local_110;
                  pcVar2 = local_148;
                  pcVar8 = local_158;
                  puVar5 = PTR_s_range_0269ef50;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_1e0 = pcVar8;
                  local_1d8 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar4,PTR_s_substringWithRange__0269d138,pcVar8,puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_appendString__0269ccb0);
                  (*(code *)PTR__objc_release_02578630)(pcVar4);
                  pcVar2 = local_158;
                  puVar5 = PTR_s_range_0269ef50;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  pcVar4 = local_158;
                  puVar6 = PTR_s_range_0269ef50;
                  local_1f0 = pcVar2;
                  local_1e8 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_150 = (cfstringStruct *)(puVar6 + (long)&pcVar2->field0_0x0);
                  local_2e8 = local_2e8 + 1;
                  local_200 = pcVar4;
                  local_1f8 = puVar6;
                } while (local_2e8 < local_2e0);
                local_2e0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,
                           auStack_a8,0x10);
                local_2e8 = (undefined *)0x0;
              } while (local_2e0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            pcVar2 = local_150;
            pcVar4 = local_110;
            (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
            if (pcVar2 < pcVar4) {
              pcVar4 = local_110;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_substringFromIndex__0269d120,local_150);
              _objc_retainAutoreleasedReturnValue();
              local_208 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
              pcVar2 = local_148;
              if (pcVar4 != (cfstringStruct *)0x0) {
                pcVar4 = local_208;
                FUN_006c5ebc(local_208,local_100,local_108);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_appendString__0269ccb0);
                (*(code *)PTR__objc_release_02578630)(pcVar4);
              }
              _objc_storeStrong(&local_208,0);
            }
            pcVar2 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            local_f0 = pcVar2;
            local_120 = 1;
            _objc_storeStrong(&local_148,0);
          }
          _objc_storeStrong(&local_130,0);
        }
        _objc_storeStrong(&local_128,0);
      }
    }
  }
  _objc_storeStrong(&local_110);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

