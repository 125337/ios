// FUN_002798dc @ 002798dc

void FUN_002798dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong local_2c8;
  ulong local_2c0;
  undefined *local_260;
  undefined *local_258;
  long local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  long local_1d0;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  int local_170;
  ulong local_160;
  ulong local_158;
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
  uVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar1;
  if ((local_150 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0), uVar1 == 0)) {
    local_148 = 0;
    local_170 = 1;
  }
  else {
    _memset(auStack_1b8,0,0x40);
    local_c0 = &cf_specsArray;
    local_b8 = &cf_hdrSpecsArray;
    local_b0 = &cf_hlsSpecsArray;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_258 != (undefined *)0x0) {
      lVar5 = *local_1a8;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,puVar2);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_260 * 8);
          local_1c0 = 0;
          uVar8 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_valueForKey__0269d128,local_178);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_1c0;
          local_1c0 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_1c0;
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) == 0) {
            local_170 = 3;
          }
          else {
            _memset(auStack_210,0,0x40);
            uVar1 = local_1c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_2c0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_140
                       ,0x10);
            if (local_2c0 != 0) {
              lVar6 = *local_200;
              local_2c8 = 0;
              do {
                do {
                  if (*local_200 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_200 - lVar6,uVar1);
                  }
                  lVar7 = *(long *)(local_208 + local_2c8 * 8);
                  local_1d0 = lVar7;
                  FUN_0027a1c0(lVar7,&cf_fileFormat);
                  _objc_retainAutoreleasedReturnValue();
                  local_218 = lVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
                  uVar8 = 0;
                  if (lVar7 == 0) {
LAB_00279d9c:
                    local_170 = 0;
                  }
                  else {
                    uVar4 = local_160;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_160,PTR_s_containsString__0269d0b0,local_218);
                    lVar7 = local_1d0;
                    uVar8 = uVar4 & 0xffffffff;
                    if ((uVar4 & 1) == 0) goto LAB_00279d9c;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_148 = lVar7;
                    uVar8 = 1;
                    local_170 = 1;
                  }
                  _objc_storeStrong(uVar8,&local_218,0);
                  if (local_170 != 0) goto LAB_00279e30;
                  local_2c8 = local_2c8 + 1;
                } while (local_2c8 < local_2c0);
                local_2c0 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                           auStack_140,0x10);
                local_2c8 = 0;
              } while (local_2c0 != 0);
            }
            local_170 = 0;
LAB_00279e30:
            (*(code *)PTR__objc_release_02578630)(uVar1);
            if (local_170 == 0) {
              local_170 = 0;
            }
          }
          _objc_storeStrong(&local_1c0,0);
          if ((local_170 != 0) && (local_170 != 3)) goto LAB_00279ef8;
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    local_170 = 0;
LAB_00279ef8:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_170 == 0) {
      local_148 = 0;
      local_170 = 1;
    }
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_148);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

