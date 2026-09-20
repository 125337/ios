// FUN_0040fcf0 @ 0040fcf0

void FUN_0040fcf0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *local_370;
  undefined *local_368;
  ulong local_2b8;
  ulong local_2b0;
  cfstringStruct *local_260;
  undefined8 local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  undefined8 local_240;
  cfstringStruct *local_238;
  long local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  long local_190;
  int local_188;
  cfstringStruct *local_178;
  ulong local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined8 local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_168,param_1);
  local_170 = 0;
  _objc_storeStrong(&local_170,param_2);
  pcVar1 = local_168;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (uVar2 = local_170, (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    pcVar1 = local_178;
    FUN_0040eb04();
    _objc_retainAutoreleasedReturnValue();
    local_188 = 1;
    local_160 = pcVar1;
  }
  else {
    _memset(auStack_1d0,0,0x40);
    uVar2 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
    if (local_2b0 != 0) {
      lVar10 = *local_1c0;
      local_2b8 = 0;
      do {
        do {
          if (*local_1c0 - lVar10 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar10,uVar2);
          }
          lVar11 = *(long *)(local_1c8 + local_2b8 * 8);
          local_190 = lVar11;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = lVar11;
          (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_length_0269cca0);
          if (lVar11 == 0) {
            local_188 = 3;
          }
          else {
            pcVar1 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_isEqualToString__0269ccc8,local_1d8);
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if (((ulong)pcVar1 & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_escapedPatternForString__0269ef40,local_1d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
              puVar5 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
              local_b8 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                         PTR_s_escapedPatternForString__0269ef40,local_1d8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_stringWithFormat__0269cca8,&cf_____s__n_);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_b0 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_b8,2);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = puVar7;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              _memset(auStack_228,0,0x40);
              puVar4 = local_1e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_368 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                         auStack_138,0x10);
              if (local_368 != (undefined *)0x0) {
                lVar11 = *local_218;
                local_370 = (undefined *)0x0;
                do {
                  do {
                    if (*local_218 - lVar11 != 0) {
                      _objc_enumerationMutation(*local_218 - lVar11,puVar4);
                    }
                    local_1e8 = *(undefined8 *)(local_220 + (long)local_370 * 8);
                    local_230 = 0;
                    local_240 = 0;
                    pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_1e8,1,
                               &local_240);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_storeStrong(&local_230,local_240);
                    pcVar1 = local_178;
                    local_238 = pcVar8;
                    if ((local_230 == 0) && (pcVar8 != (cfstringStruct *)0x0)) {
                      pcVar9 = local_178;
                      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
                      local_150 = 0;
                      local_148 = 0;
                      local_258 = 0;
                      local_250 = pcVar9;
                      local_158 = pcVar9;
                      local_140 = pcVar9;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar8,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar1,0,0,
                                 pcVar9,&cf___);
                      _objc_retainAutoreleasedReturnValue();
                      local_248 = pcVar8;
                      FUN_0040494c();
                      _objc_retainAutoreleasedReturnValue();
                      local_260 = pcVar8;
                      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
                      uVar12 = 0;
                      if (pcVar8 == (cfstringStruct *)0x0) {
LAB_004104bc:
                        local_188 = 0;
                      }
                      else {
                        pcVar1 = local_260;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_260,PTR_s_isEqualToString__0269ccc8,local_178);
                        uVar12 = (ulong)pcVar1 & 0xffffffff;
                        if (((ulong)pcVar1 & 1) != 0) goto LAB_004104bc;
                        pcVar1 = local_260;
                        FUN_0040eb04();
                        _objc_retainAutoreleasedReturnValue();
                        uVar12 = 1;
                        local_188 = 1;
                        local_160 = pcVar1;
                      }
                      _objc_storeStrong(uVar12,&local_260);
                      _objc_storeStrong(&local_248,0);
                    }
                    else {
                      local_188 = 5;
                    }
                    _objc_storeStrong(&local_238);
                    _objc_storeStrong(&local_230,0);
                    if ((local_188 != 0) && (local_188 != 5)) goto LAB_00410594;
                    local_370 = local_370 + 1;
                  } while (local_370 < local_368);
                  local_368 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                             auStack_138,0x10);
                  local_370 = (undefined *)0x0;
                } while (local_368 != (undefined *)0x0);
              }
              local_188 = 0;
LAB_00410594:
              (*(code *)PTR__objc_release_02578630)(puVar4);
              if (local_188 == 0) {
                local_188 = 0;
              }
              _objc_storeStrong(&local_1e0,0);
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              local_160 = &cf___;
              local_188 = 1;
            }
          }
          _objc_storeStrong(&local_1d8,0);
          if ((local_188 != 0) && (local_188 != 3)) goto LAB_0041066c;
          local_2b8 = local_2b8 + 1;
        } while (local_2b8 < local_2b0);
        local_2b0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10
                  );
        local_2b8 = 0;
      } while (local_2b0 != 0);
    }
    local_188 = 0;
LAB_0041066c:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_188 == 0) {
      pcVar1 = local_178;
      FUN_0040eb04();
      _objc_retainAutoreleasedReturnValue();
      local_188 = 1;
      local_160 = pcVar1;
    }
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

