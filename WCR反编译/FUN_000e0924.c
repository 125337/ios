// FUN_000e0924 @ 000e0924

byte FUN_000e0924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_330;
  undefined *local_328;
  undefined *local_298;
  undefined *local_290;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  int local_178;
  long local_168;
  long local_160;
  undefined8 local_158;
  byte local_149;
  undefined1 auStack_148 [128];
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_2);
  lVar5 = local_160;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_168 = lVar5;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar5 = local_168;
  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_149 = 1;
    local_178 = 1;
  }
  else {
    uVar3 = local_158;
    FUN_000e11f0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_180 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    _memset(auStack_1d0,0,0x40);
    local_c8 = &cf_m_nsContent;
    local_c0 = &cf_m_nsPushContent;
    local_b8 = &cf_m_nsMsgSource;
    local_b0 = &cf_m_nsAtUserList;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_290 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_290 != (undefined *)0x0) {
      lVar5 = *local_1c0;
      local_298 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar5,puVar2);
          }
          uVar3 = local_180;
          puVar1 = local_188;
          uVar6 = *(undefined8 *)(local_1c8 + (long)local_298 * 8);
          local_190 = uVar6;
          _NSSelectorFromString();
          FUN_000d8fe0(uVar3,uVar6);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                   0x10);
        local_298 = (undefined *)0x0;
      } while (local_290 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_158;
    puVar2 = local_188;
    pcVar4 = &cf_m_textForMessageLabel;
    _NSSelectorFromString();
    FUN_000d8fe0(uVar3,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _memset(auStack_218,0,0x40);
    puVar2 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_328 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_148,0x10);
    if (local_328 != (undefined *)0x0) {
      lVar5 = *local_208;
      local_330 = (undefined *)0x0;
      do {
        do {
          if (*local_208 - lVar5 != 0) {
            _objc_enumerationMutation(*local_208 - lVar5,puVar2);
          }
          lVar7 = *(long *)(local_210 + (long)local_330 * 8);
          local_1d8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_rangeOfString_options__0269d118,local_168,0x81);
          if (lVar7 != 0x7fffffffffffffff) {
            local_149 = 1;
            local_178 = 1;
            goto LAB_000e0fa8;
          }
          local_330 = local_330 + 1;
        } while (local_330 < local_328);
        local_328 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_148,
                   0x10);
        local_330 = (undefined *)0x0;
      } while (local_328 != (undefined *)0x0);
    }
    local_178 = 0;
LAB_000e0fa8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_178 == 0) {
      local_149 = 0;
      local_178 = 1;
    }
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_149 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

