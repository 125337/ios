// FUN_0068fa00 @ 0068fa00

void FUN_0068fa00(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_2b8;
  ulong local_2b0;
  undefined *local_258;
  undefined *local_250;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  undefined8 local_178;
  undefined *local_170;
  int local_168;
  ulong local_158;
  undefined *local_150;
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
  uVar1 = local_158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = 1;
    local_150 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar2;
    _memset(auStack_1b8,0,0x40);
    local_c8 = &cf_link_qrcode_list;
    local_c0 = &cf_list;
    local_b8 = &cf_link_qrcodes;
    local_b0 = &cf_items;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_250 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_250 != (undefined *)0x0) {
      lVar4 = *local_1a8;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_1a8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar4,puVar2);
          }
          local_178 = *(undefined8 *)(local_1b0 + (long)local_258 * 8);
          uVar1 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_178);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1c0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) == 0) {
            uVar5 = 3;
            local_168 = 3;
          }
          else {
            _memset(auStack_208,0,0x40);
            uVar1 = local_1c0;
            (*(code *)PTR__objc_retain_02578638)();
            local_2b0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_148
                       ,0x10);
            if (local_2b0 != 0) {
              lVar6 = *local_1f8;
              local_2b8 = 0;
              do {
                do {
                  if (*local_1f8 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1f8 - lVar6,uVar1);
                  }
                  uVar7 = *(ulong *)(local_200 + local_2b8 * 8);
                  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_1c8 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
                  if ((uVar7 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_170,PTR_s_addObject__0269d180,local_1c8);
                  }
                  local_2b8 = local_2b8 + 1;
                } while (local_2b8 < local_2b0);
                local_2b0 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                           auStack_148,0x10);
                local_2b8 = 0;
              } while (local_2b0 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            puVar3 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
            if (puVar3 == (undefined *)0x0) {
              local_168 = 0;
              uVar5 = 0;
            }
            else {
              uVar5 = 2;
              local_168 = 2;
            }
          }
          _objc_storeStrong(uVar5,&local_1c0,0);
          if ((local_168 != 0) && (local_168 != 3)) goto LAB_0068ffb4;
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    local_168 = 0;
LAB_0068ffb4:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_170;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar2;
    local_168 = 1;
    _objc_storeStrong(&local_170,0);
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_150);
  return;
}

