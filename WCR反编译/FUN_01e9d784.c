// FUN_01e9d784 @ 01e9d784

double FUN_01e9d784(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double local_268;
  double local_260;
  double local_258;
  undefined *local_220;
  undefined *local_218;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  double local_118;
  undefined8 local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  ulong local_e0;
  long local_d8;
  double local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_2);
  lVar5 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if ((lVar5 == 0) ||
     (uVar6 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8, uVar6 == 0)) {
    local_d0 = 0.0;
    local_e4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringWithFormat__0269cca8,&cf___i__b___s___s___0_9________0_9_____px);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_f0,0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_d8;
    lVar4 = local_d8;
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    local_c0 = 0;
    local_b8 = 0;
    local_110 = 0;
    local_108 = lVar4;
    local_c8 = lVar4;
    local_b0 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_matchesInString_options_range__0269ef68,lVar5,0,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    local_118 = 0.0;
    local_100 = puVar3;
    _memset(auStack_160,0,0x40);
    puVar3 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_218 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_218 != (undefined *)0x0) {
      lVar5 = *local_150;
      local_220 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar5 != 0) {
            _objc_enumerationMutation(*local_150 - lVar5,puVar3);
          }
          uVar6 = *(ulong *)(local_158 + (long)local_220 * 8);
          local_120 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_numberOfRanges_0269ef18);
          lVar4 = local_d8;
          dVar1 = local_118;
          if (1 < uVar6) {
            uVar6 = local_120;
            puVar2 = PTR_s_rangeAtIndex__0269ef20;
            local_258 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_rangeAtIndex__0269ef20,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar4,PTR_s_substringWithRange__0269d138,uVar6,puVar2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_258 <= dVar1) {
              local_258 = dVar1;
            }
            local_118 = local_258;
          }
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_220 = (undefined *)0x0;
      } while (local_218 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_width);
    dVar1 = local_118;
    if ((uVar6 & 1) == 0) {
      uVar6 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_height);
      dVar1 = local_118;
      if ((uVar6 & 1) != 0) {
        FUN_01e9dd3c(local_d8,&cf___card_h);
        local_268 = local_118;
        if (local_118 <= dVar1) {
          local_268 = dVar1;
        }
        local_118 = local_268;
      }
    }
    else {
      FUN_01e9dd3c(local_d8,&cf___card_w);
      local_260 = local_118;
      if (local_118 <= dVar1) {
        local_260 = dVar1;
      }
      local_118 = local_260;
    }
    local_d0 = local_118;
    local_e4 = 1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_d0;
}

