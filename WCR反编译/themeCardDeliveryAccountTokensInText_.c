// themeCardDeliveryAccountTokensInText: @ 00fb93d4

/* Function Stack Size: 0x18 bytes */

ID WCRefineHelper::themeCardDeliveryAccountTokensInText_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_228;
  undefined *local_220;
  ulong local_1c8;
  long local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  long local_1a8;
  undefined *local_1a0;
  long local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  long local_138;
  undefined *local_130;
  undefined *local_128;
  undefined8 local_120;
  ulong local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  ulong local_e8;
  SEL local_e0;
  ID local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  uVar1 = local_e8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_ec = 1;
    local_d0 = puVar2;
  }
  else {
    local_f8 = 0;
    local_108 = 0;
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__A_Za_z0_9____6_32_,0,&local_108)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_f8,local_108);
    uVar1 = local_e8;
    local_100 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_ec = 1;
      local_d0 = puVar2;
    }
    else {
      uVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_c0 = 0;
      local_b8 = 0;
      local_120 = 0;
      local_118 = uVar3;
      local_c8 = uVar3;
      local_b0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_matchesInString_options_range__0269ef68,uVar1,0,0,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_110 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_128 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar2;
      _memset(auStack_178,0,0x40);
      puVar2 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      if (local_220 != (undefined *)0x0) {
        lVar5 = *local_168;
        local_228 = (undefined *)0x0;
        do {
          do {
            if (*local_168 - lVar5 != 0) {
              _objc_enumerationMutation(*local_168 - lVar5,puVar2);
            }
            lVar6 = *(long *)(local_170 + (long)local_228 * 8);
            puVar4 = PTR_s_range_0269ef50;
            local_138 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_188 = lVar6;
            local_180 = puVar4;
            if ((lVar6 != 0x7fffffffffffffff) &&
               (lVar6 = local_138, puVar4 = PTR_s_range_0269ef50,
               (*(code *)PTR__objc_msgSend_02578628)(), uVar1 = local_e8, local_198 = lVar6,
               local_190 = puVar4, puVar4 != (undefined *)0x0)) {
              lVar6 = local_138;
              puVar4 = PTR_s_range_0269ef50;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1a8 = lVar6;
              local_1a0 = puVar4;
              FUN_00fb99f4(uVar1,lVar6,puVar4);
              uVar3 = local_e8;
              if ((uVar1 & 1) == 0) {
                lVar6 = local_138;
                puVar4 = PTR_s_range_0269ef50;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1c0 = lVar6;
                local_1b8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_substringWithRange__0269d138,lVar6,puVar4);
                _objc_retainAutoreleasedReturnValue();
                local_1b0 = uVar3;
                FUN_00fb9bcc();
                if ((uVar3 & 1) == 0) {
                  local_ec = 3;
                }
                else {
                  uVar1 = local_1b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_lowercaseString_0269d9c0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = local_130;
                  local_1c8 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_containsObject__0269cbb8,uVar1);
                  if (((ulong)puVar4 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_130,PTR_s_addObject__0269d180,local_1c8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_128,PTR_s_addObject__0269d180,local_1b0);
                    local_ec = 0;
                  }
                  else {
                    local_ec = 3;
                  }
                  _objc_storeStrong(&local_1c8,0);
                }
                _objc_storeStrong(&local_1b0,0);
              }
            }
            local_228 = local_228 + 1;
          } while (local_228 < local_220);
          local_220 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_228 = (undefined *)0x0;
        } while (local_220 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
      local_ec = 1;
      local_d0 = puVar2;
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_100);
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

