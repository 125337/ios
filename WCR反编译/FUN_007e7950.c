// FUN_007e7950 @ 007e7950

void FUN_007e7950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  u_int32_t uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong local_230;
  ulong local_228;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined *local_158;
  long local_150;
  ulong local_148;
  undefined *local_140;
  undefined4 local_134;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8 [3];
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  FUN_007e5388();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _arc4random();
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_msg__ld__u);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8[0] = puVar5;
  _memset(auStack_130,0,0x40);
  uVar2 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_228 != 0) {
    lVar7 = *local_120;
    local_230 = 0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,uVar2);
        }
        local_f0 = *(undefined8 *)(local_128 + local_230 * 8);
        uVar6 = DAT_028cce70;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cce70,PTR_s_containsObject__0269cbb8,local_f0);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = DAT_028cce78,
           (*(code *)PTR__objc_msgSend_02578628)
                     (DAT_028cce78,PTR_s_containsObject__0269cbb8,local_f0), (uVar6 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_addObject__0269d180,local_f0);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_230 = 0;
    } while (local_228 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar5 = local_e8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
  if (puVar5 == (undefined *)0x0) {
    local_134 = 1;
  }
  else {
    puVar5 = local_e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
    local_140 = puVar5;
    while (local_140 = local_140 + -1, 0 < (long)local_140) {
      uVar3 = _arc4random_uniform((int)local_140 + 1);
      local_148 = (ulong)uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8[0],PTR_s_exchangeObjectAtIndex_withObject_026a84f8,local_140,local_148);
    }
    lVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
    puVar5 = local_e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
    local_150 = lVar7 * (long)puVar5;
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_158 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_totalCount);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_processedCount);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,&cf_codeIndexMap);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_errorCountMap);
    puVar4 = local_d0;
    uVar1 = DAT_028cce90;
    local_160 = 0;
    local_1a8 = PTR___NSConcreteGlobalBlock_02578658;
    local_1a0 = 0xd0800000;
    local_19c = 0;
    local_198 = FUN_007e8284;
    local_190 = &DAT_02580160;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_158;
    local_188 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_b8;
    local_180 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_e8[0];
    local_178 = lVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar5;
    local_168 = &local_160;
    _dispatch_sync(uVar1,&local_1a8);
    FUN_007e8810();
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_158,0);
    local_134 = 0;
  }
  _objc_storeStrong(local_e8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

