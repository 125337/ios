// FUN_01b2a7d8 @ 01b2a7d8

void FUN_01b2a7d8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong local_290;
  ulong local_288;
  ulong local_250;
  ulong local_248;
  long local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  long local_1c0;
  undefined *local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  cfstringStruct *local_160;
  ulong local_158;
  undefined *local_150;
  undefined4 local_144;
  ulong local_140;
  ulong local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar1 = local_138;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &cf___;
    local_144 = 1;
  }
  else {
    uVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_140;
    local_140 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar6 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_creturn_s_,
               &cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_140;
    local_140 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_140;
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_componentsSeparatedByString__0269d3c0,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_160 = pcVar3;
    _memset(auStack_1a8,0,0x40);
    uVar1 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_248 != 0) {
      lVar5 = *local_198;
      local_250 = 0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,uVar1);
          }
          uVar6 = *(ulong *)(local_1a0 + local_250 * 8);
          local_168 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_componentsSeparatedByCharactersI_0269d1a8,local_150);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_1b0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = puVar2;
          _memset(auStack_200,0,0x40);
          uVar6 = local_1b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_288 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                     0x10);
          if (local_288 != 0) {
            lVar7 = *local_1f0;
            local_290 = 0;
            do {
              do {
                if (*local_1f0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar7,uVar6);
                }
                lVar8 = *(long *)(local_1f8 + local_290 * 8);
                local_1c0 = lVar8;
                FUN_01b1fc40();
                _objc_retainAutoreleasedReturnValue();
                local_208 = lVar8;
                (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
                if (lVar8 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1b8,PTR_s_addObject__0269d180,local_208);
                }
                _objc_storeStrong(&local_208,0);
                local_290 = local_290 + 1;
              } while (local_290 < local_288);
              local_288 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_128,0x10);
              local_290 = 0;
            } while (local_288 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
          pcVar3 = local_160;
          puVar2 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_componentsJoinedByString__0269d140,&cf_space_s_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_1b8);
          _objc_storeStrong(&local_1b0,0);
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        local_250 = 0;
      } while (local_248 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    pcVar3 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_160,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_144 = 1;
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

