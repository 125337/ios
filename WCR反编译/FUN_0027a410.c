// FUN_0027a410 @ 0027a410

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0027a410(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_2e0;
  ulong local_2d8;
  undefined *local_278;
  undefined *local_270;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ulong local_1d8 [3];
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  byte local_171;
  ulong local_170;
  ulong local_168;
  long local_160;
  undefined4 local_154;
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
  if (local_150 == 0) {
    local_148 = 0;
    local_154 = 1;
  }
  else {
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_171 = 0;
    _memset(auStack_1c0,0,0x40);
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
      lVar6 = *local_1b0;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_1b0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar6,puVar1);
          }
          local_180 = *(undefined8 *)(local_1b8 + (long)local_278 * 8);
          local_1d8[0] = 0;
          uVar8 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_valueForKey__0269d128,local_180);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_1d8[0];
          local_1d8[0] = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_1d8[0];
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) == 0) {
            local_154 = 3;
          }
          else {
            _memset(auStack_228,0,0x40);
            uVar3 = local_1d8[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_2d8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_140
                       ,0x10);
            if (local_2d8 != 0) {
              lVar7 = *local_218;
              local_2e0 = 0;
              do {
                do {
                  if (*local_218 - lVar7 != 0) {
                    _objc_enumerationMutation(*local_218 - lVar7,uVar3);
                  }
                  uVar8 = *(ulong *)(local_220 + local_2e0 * 8);
                  local_1e8 = uVar8;
                  FUN_0027a1c0(uVar8,&cf_codingFormat);
                  _objc_retainAutoreleasedReturnValue();
                  local_230 = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_isEqualToString__0269ccc8,&cf_h265);
                  if (((uVar8 & 1) == 0) &&
                     (uVar8 = local_230,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_230,PTR_s_isEqualToString__0269ccc8,&cf_h264),
                     (uVar8 & 1) == 0)) {
                    local_154 = 6;
                  }
                  else {
                    uVar9 = local_1e8;
                    FUN_0027ac10(local_1e8,&cf_width);
                    uVar8 = local_1e8;
                    FUN_0027ac10(local_1e8,&cf_height);
                    uVar9 = uVar9 * uVar8;
                    uVar4 = local_1e8;
                    FUN_00279828();
                    uVar5 = local_230;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_230,PTR_s_isEqualToString__0269ccc8,&cf_h265);
                    uVar8 = 0;
                    if ((((local_160 == 0) ||
                         (uVar8 = uVar9 - local_168, local_168 <= uVar9 && uVar8 != 0)) ||
                        ((uVar9 == local_168 &&
                         (uVar8 = uVar4 - local_170, local_170 <= uVar4 && uVar8 != 0)))) ||
                       ((uVar9 == local_168 &&
                        (((uVar4 == local_170 && ((uVar5 & 1) != 0)) &&
                         (uVar8 = (ulong)local_171, (local_171 & 1) == 0)))))) {
                      _objc_storeStrong(uVar8,&local_160,local_1e8);
                      local_171 = (byte)uVar5 & 1;
                      local_170 = uVar4;
                      local_168 = uVar9;
                    }
                    local_154 = 0;
                  }
                  _objc_storeStrong(&local_230,0);
                  local_2e0 = local_2e0 + 1;
                } while (local_2e0 < local_2d8);
                local_2d8 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                           auStack_140,0x10);
                local_2e0 = 0;
              } while (local_2d8 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_154 = 0;
          }
          _objc_storeStrong(local_1d8,0);
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar6 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = lVar6;
    local_154 = 1;
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_148);
  return;
}

