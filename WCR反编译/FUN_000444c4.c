// FUN_000444c4 @ 000444c4

void FUN_000444c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_410;
  cfstringStruct *local_3a8;
  ulong local_358;
  ulong local_350;
  undefined *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_248;
  byte local_239;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  cfstringStruct *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  cfstringStruct *local_180;
  undefined *local_178;
  int local_170;
  long local_160;
  ulong local_158;
  cfstringStruct *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_2);
  uVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (lVar4 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = &cf___;
    local_170 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               local_158);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar2;
    _memset(auStack_1c0,0,0x40);
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_queryItems_0269d820);
    _objc_retainAutoreleasedReturnValue();
    local_2a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a8 != (undefined *)0x0) {
      lVar4 = *local_1b0;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          if (*local_1b0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar4,puVar2);
          }
          pcVar5 = *(cfstringStruct **)(local_1b8 + (long)local_2b0 * 8);
          local_180 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          if (((ulong)pcVar6 & 1) != 0) {
            pcVar6 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_value_0269d830);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar6;
            FUN_0003102c();
            _objc_retainAutoreleasedReturnValue();
            local_150 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            local_170 = 1;
            goto LAB_0004486c;
          }
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    local_170 = 0;
LAB_0004486c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_170 == 0) {
      uVar1 = local_158;
      puVar2 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_rangeOfString__0269d838,&cf__);
      local_1d0 = uVar1;
      local_1c8 = puVar2;
      if ((uVar1 == 0x7fffffffffffffff) ||
         (uVar3 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
         uVar3 <= uVar1 + 1)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = &cf___;
        local_170 = 1;
      }
      else {
        uVar1 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_substringFromIndex__0269d120,local_1d0 + 1);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = uVar1;
        _memset(auStack_220,0,0x40);
        uVar1 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_350 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_350 != 0) {
          lVar4 = *local_210;
          local_358 = 0;
          do {
            do {
              if (*local_210 - lVar4 != 0) {
                _objc_enumerationMutation(*local_210 - lVar4,uVar1);
              }
              pcVar6 = *(cfstringStruct **)(local_218 + local_358 * 8);
              local_1e0 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar6,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
              _objc_retainAutoreleasedReturnValue();
              local_228 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_count_0269cfe0);
              if (pcVar6 < (cfstringStruct *)0x2) {
                local_170 = 5;
              }
              else {
                pcVar6 = local_228;
                (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = pcVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_239 = 0;
                local_3a8 = pcVar5;
                if (pcVar5 == (cfstringStruct *)0x0) {
                  local_3a8 = local_228;
                  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_firstObject_0269d1f8);
                  _objc_retainAutoreleasedReturnValue();
                  local_238 = local_3a8;
                }
                local_239 = pcVar5 == (cfstringStruct *)0x0;
                (*(code *)PTR__objc_retain_02578638)();
                local_230 = local_3a8;
                if ((local_239 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_238);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                (*(code *)PTR__objc_release_02578630)(pcVar6);
                pcVar5 = local_230;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_230,PTR_s_isEqualToString__0269ccc8,local_160);
                pcVar6 = local_228;
                if (((ulong)pcVar5 & 1) == 0) {
                  local_170 = 0;
                }
                else {
                  pcVar5 = local_228;
                  (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_count_0269cfe0);
                  local_148 = (undefined1 *)((long)&pcVar5[-1].field3_0x18 + 7);
                  local_140 = 1;
                  local_138 = 1;
                  local_130 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar6,PTR_s_subarrayWithRange__0269d848,1,local_148);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar5 = pcVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_248 = pcVar5;
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  pcVar6 = local_248;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_248,PTR_s_stringByRemovingPercentEncoding_0269d840);
                  _objc_retainAutoreleasedReturnValue();
                  local_410 = pcVar6;
                  if (pcVar6 == (cfstringStruct *)0x0) {
                    local_410 = local_248;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = local_410;
                  (*(code *)PTR__objc_release_02578630)(pcVar6);
                  local_170 = 1;
                  _objc_storeStrong(&local_248,0);
                }
                _objc_storeStrong(&local_230,0);
              }
              _objc_storeStrong(&local_228,0);
              if ((local_170 != 0) && (local_170 != 5)) goto LAB_00044f48;
              local_358 = local_358 + 1;
            } while (local_358 < local_350);
            local_350 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128
                       ,0x10);
            local_358 = 0;
          } while (local_350 != 0);
        }
        local_170 = 0;
LAB_00044f48:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_170 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = &cf___;
          local_170 = 1;
        }
        _objc_storeStrong(&local_1d8,0);
      }
    }
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

