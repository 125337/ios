// FUN_002790c8 @ 002790c8

void FUN_002790c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_2b0;
  ulong local_2a8;
  undefined *local_248;
  undefined *local_240;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  ulong local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  undefined8 local_170;
  int local_168;
  long local_158;
  ulong local_150;
  ulong local_148;
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
    _memset(auStack_1b0,0,0x40);
    local_c0 = &cf_specsArray;
    local_b8 = &cf_hdrSpecsArray;
    local_b0 = &cf_hlsSpecsArray;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_240 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != (undefined *)0x0) {
      lVar5 = *local_1a0;
      local_248 = (undefined *)0x0;
      do {
        do {
          if (*local_1a0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a0 - lVar5,puVar1);
          }
          local_170 = *(undefined8 *)(local_1a8 + (long)local_248 * 8);
          local_1b8 = 0;
          uVar7 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_valueForKey__0269d128,local_170);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_1b8;
          local_1b8 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_1b8;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar3 & 1) == 0) {
            local_168 = 3;
          }
          else {
            _memset(auStack_208,0,0x40);
            uVar3 = local_1b8;
            (*(code *)PTR__objc_retain_02578638)();
            local_2a8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_140
                       ,0x10);
            if (local_2a8 != 0) {
              lVar6 = *local_1f8;
              local_2b0 = 0;
              do {
                do {
                  if (*local_1f8 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1f8 - lVar6,uVar3);
                  }
                  uVar7 = *(ulong *)(local_200 + local_2b0 * 8);
                  local_1c8 = uVar7;
                  FUN_0027a1c0(uVar7,&cf_fileFormat);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  uVar7 = local_1c8;
                  if ((uVar4 & 1) != 0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_148 = uVar7;
                    local_168 = 1;
                    goto LAB_002795a0;
                  }
                  local_2b0 = local_2b0 + 1;
                } while (local_2b0 < local_2a8);
                local_2a8 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                           auStack_140,0x10);
                local_2b0 = 0;
              } while (local_2a8 != 0);
            }
            local_168 = 0;
LAB_002795a0:
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if (local_168 == 0) {
              local_168 = 0;
            }
          }
          _objc_storeStrong(&local_1b8,0);
          if ((local_168 != 0) && (local_168 != 3)) goto LAB_00279668;
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                   0x10);
        local_248 = (undefined *)0x0;
      } while (local_240 != (undefined *)0x0);
    }
    local_168 = 0;
LAB_00279668:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_168 == 0) {
      local_148 = 0;
      local_168 = 1;
    }
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_148);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

