// FUN_0027dcf0 @ 0027dcf0

void FUN_0027dcf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_2e0;
  ulong local_2d8;
  undefined *local_278;
  undefined *local_270;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  ulong local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  ulong local_180;
  ulong local_178;
  long local_170;
  undefined4 local_168;
  long local_158;
  ulong local_150;
  long local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_150 = 0;
  _objc_storeStrong(&local_150,param_1);
  local_158 = 0;
  _objc_storeStrong(&local_158,param_2);
  if ((local_150 == 0) ||
     (lVar5 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
     lVar5 == 0)) {
    local_148 = 0;
    local_168 = 1;
  }
  else {
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    _memset(auStack_1c8,0,0x40);
    local_c0 = &cf_specsArray;
    local_b8 = &cf_hdrSpecsArray;
    local_b0 = &cf_hlsSpecsArray;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_270 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != (undefined *)0x0) {
      lVar5 = *local_1b8;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar5,puVar1);
          }
          local_188 = *(undefined8 *)(local_1c0 + (long)local_278 * 8);
          local_1d0 = 0;
          uVar7 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_valueForKey__0269d128,local_188);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_1d0;
          local_1d0 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_1d0;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) == 0) {
            local_168 = 3;
          }
          else {
            _memset(auStack_220,0,0x40);
            uVar3 = local_1d0;
            (*(code *)PTR__objc_retain_02578638)();
            local_2d8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_140
                       ,0x10);
            if (local_2d8 != 0) {
              lVar6 = *local_210;
              local_2e0 = 0;
              do {
                do {
                  if (*local_210 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_210 - lVar6,uVar3);
                  }
                  uVar7 = *(ulong *)(local_218 + local_2e0 * 8);
                  local_1e0 = uVar7;
                  FUN_0027a1c0(uVar7,&cf_codingFormat);
                  _objc_retainAutoreleasedReturnValue();
                  local_228 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_isEqualToString__0269ccc8,local_158);
                  if ((uVar7 & 1) == 0) {
                    uVar7 = 6;
                    local_168 = 6;
                  }
                  else {
                    uVar8 = local_1e0;
                    FUN_0027ac10(local_1e0,&cf_width);
                    uVar7 = local_1e0;
                    FUN_0027ac10(local_1e0,&cf_height);
                    uVar8 = uVar8 * uVar7;
                    uVar4 = local_1e0;
                    FUN_00279828();
                    uVar7 = 0;
                    if (((local_170 == 0) ||
                        (uVar7 = uVar8 - local_178, local_178 <= uVar8 && uVar7 != 0)) ||
                       ((uVar7 = uVar8 - local_178, uVar8 - local_178 == 0 &&
                        (uVar7 = uVar4 - local_180, local_180 <= uVar4 && uVar7 != 0)))) {
                      _objc_storeStrong(uVar7,&local_170,local_1e0);
                      uVar7 = uVar4;
                      local_180 = uVar4;
                      local_178 = uVar8;
                    }
                    local_168 = 0;
                  }
                  _objc_storeStrong(uVar7,&local_228,0);
                  local_2e0 = local_2e0 + 1;
                } while (local_2e0 < local_2d8);
                local_2d8 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_140,0x10);
                local_2e0 = 0;
              } while (local_2d8 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_168 = 0;
          }
          _objc_storeStrong(&local_1d0,0);
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar5 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = lVar5;
    local_168 = 1;
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_148);
  return;
}

