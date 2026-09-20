// FUN_0076d4c4 @ 0076d4c4

void FUN_0076d4c4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  byte local_384;
  ulong local_288;
  ulong local_280;
  ulong local_220;
  undefined1 local_213;
  undefined1 local_212;
  byte local_211;
  ulong local_210;
  byte local_201;
  ulong local_200;
  byte local_1f3;
  undefined1 local_1f2;
  byte local_1f1;
  undefined8 local_1f0;
  undefined8 local_1e8 [2];
  double local_1d8;
  undefined1 *local_1d0;
  undefined *local_1c8;
  ulong local_1c0 [3];
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  undefined4 local_12c;
  double local_128;
  ulong local_120;
  long local_118;
  undefined *local_110 [3];
  undefined *local_f8;
  double local_f0;
  byte local_e1;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_e1 = 0;
  dVar8 = 0.0;
  local_f0 = 0.0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_118 = 0;
  local_120 = 0;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_110[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  dVar9 = DAT_028cc938;
  local_128 = dVar8;
  if (((DAT_028cc938 <= 0.0) || (dVar9 = dVar8 - DAT_028cc938, 5.0 <= dVar9)) ||
     (dVar9 = DAT_028cc940, DAT_028cc940 <= 0.0)) {
    uVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar3;
    if (uVar3 != 0) {
      FUN_0076eca8();
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
      local_120 = uVar3;
      _memset(auStack_188,0,0x40);
      uVar3 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      if (local_280 != 0) {
        lVar6 = *local_178;
        local_288 = 0;
        do {
          do {
            if (*local_178 - lVar6 != 0) {
              _objc_enumerationMutation(*local_178 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_180 + local_288 * 8);
            puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            local_148 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar4 = local_148;
            if ((uVar7 & 1) != 0) {
              local_118 = local_118 + 1;
              (*(code *)PTR__objc_retain_02578638)();
              local_190 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              local_198 = uVar4;
              if ((uVar4 != 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0), uVar4 != 0)) {
                uVar4 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_containsString__0269d0b0,&cf__);
                if (((uVar4 & 1) != 0) ||
                   (uVar4 = local_198,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_198,PTR_s_containsString__0269d0b0,&cf__), (uVar4 & 1) != 0)) {
                  FUN_0076efc8(local_f8,local_198);
                  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = local_198;
                  uVar7 = local_198;
                  local_1a0 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
                  local_c0 = 0;
                  local_b8 = 0;
                  local_1c0[1] = 0;
                  local_1c0[2] = uVar7;
                  local_c8 = uVar7;
                  local_b0 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_firstMatchInString_options_range_0269ef48,uVar4,0,0,uVar7)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  local_1a8 = puVar1;
                  if ((puVar1 != (undefined1 *)0x0) &&
                     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberOfRanges_0269ef18),
                     uVar4 = local_198, (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar1)) {
                    puVar5 = local_1a8;
                    puVar1 = PTR_s_rangeAtIndex__0269ef20;
                    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_rangeAtIndex__0269ef20,1);
                    local_1d0 = puVar5;
                    local_1c8 = puVar1;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar4,PTR_s_substringWithRange__0269d138,puVar5,puVar1);
                    _objc_retainAutoreleasedReturnValue();
                    local_1c0[0] = uVar4;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608);
                    if (0.0 < dVar9) {
                      local_f0 = dVar9;
                    }
                    local_1d8 = dVar9;
                    _objc_storeStrong(local_1c0,0);
                  }
                  _objc_storeStrong(&local_1a8);
                  _objc_storeStrong(&local_1a0,0);
                }
                uVar4 = local_198;
                FUN_0076f200();
                if (((((uVar4 & 1) != 0) ||
                     (uVar4 = local_198,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_198,PTR_s_containsString__0269d0b0,&cf_6e>ke),
                     (uVar4 & 1) != 0)) ||
                    (uVar4 = local_198,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_198,PTR_s_containsString__0269d0b0,&cf__O), (uVar4 & 1) != 0))
                   || (uVar4 = local_198,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_198,PTR_s_containsString__0269d0b0,&cf_N>k_),
                      (uVar4 & 1) != 0)) {
                  FUN_0076efc8(local_110[0],local_198);
                }
                uVar4 = local_198;
                FUN_0076f200();
                if ((uVar4 & 1) != 0) {
                  local_e1 = 1;
                  _objc_storeStrong(&local_e0,local_198);
                }
              }
              _objc_storeStrong(&local_198);
              _objc_storeStrong(&local_190,0);
            }
            local_288 = local_288 + 1;
          } while (local_288 < local_280);
          local_280 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                     0x10);
          local_288 = 0;
        } while (local_280 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_140,0);
    }
    _objc_storeStrong(&local_138,0);
    local_1f1 = (byte)local_1e8;
    local_1e8[0] = 0x7fefffffffffffff;
    local_1f0 = 0x7fefffffffffffff;
    FUN_0076c92c();
    uVar3 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fromPluginSponsorPage);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_1f2 = (undefined1)uVar4;
    local_201 = 0;
    local_211 = 0;
    local_384 = 0;
    if ((uVar4 & 1) != 0) {
      uVar3 = DAT_028cc8b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rewardActionType);
      _objc_retainAutoreleasedReturnValue();
      local_201 = 1;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_200 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_384 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = DAT_028cc8b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rewardActionType);
        _objc_retainAutoreleasedReturnValue();
        local_211 = 1;
        local_210 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_384 = (byte)uVar3;
      }
    }
    if ((local_211 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_210);
    }
    if ((local_201 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    local_1f3 = local_384 & 1;
    uVar3 = local_d0;
    FUN_0076b520();
    local_212 = (undefined1)uVar3;
    uVar3 = DAT_028cc8b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pluginSponsorFlowID);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0076f5d0();
    (*(code *)PTR__objc_release_02578630)();
    local_213 = (undefined1)uVar4;
    if (((local_1f3 & 1) == 0) || ((local_1f1 & 1) == 0)) {
      local_12c = 1;
    }
    else if ((local_e1 & 1) == 0) {
      local_12c = 1;
    }
    else if (local_f0 <= 0.0) {
      local_12c = 1;
    }
    else {
      dVar9 = local_f0;
      FUN_0076be80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
      local_220 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_128 = dVar9;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((DAT_028cc900 <= 0.0) || (5.0 <= local_128 - DAT_028cc900)) ||
         ((DAT_02323d38 <= ABS(DAT_028cc948 - local_f0) ||
          (uVar3 = DAT_028cc8c0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028cc8c0,PTR_s_isEqualToString__0269ccc8,local_220), (uVar3 & 1) == 0)))) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,
                   &cf_verifiedTargetPayee);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_amount);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar3 = local_220;
        FUN_0076f89c(local_f0,local_220,&cf__eNbRu);
        if ((uVar3 & 1) != 0) {
          DAT_028cc938 = local_128;
          DAT_028cc940 = local_f0;
        }
        local_12c = 0;
      }
      else {
        local_12c = 1;
      }
      _objc_storeStrong(&local_220,0);
    }
  }
  else {
    local_12c = 1;
  }
  _objc_storeStrong(local_110);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

