// FUN_00565494 @ 00565494

void FUN_00565494(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_178;
  undefined *local_170;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_e0;
  uint local_d4;
  long local_d0;
  long local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == 0) {
    local_c8 = 0;
    local_d4 = 1;
  }
  else {
    local_40 = &cf_dataItem;
    local_38 = &cf_m_dataItem;
    local_30 = &cf__dataItem;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    _memset(auStack_138,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_c0,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar3 = *local_128;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,puVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_178 * 8);
          lVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = lVar2;
          if (lVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = lVar2;
          }
          local_d4 = (uint)(lVar2 != 0);
          _objc_storeStrong(&local_140,0);
          if (local_d4 != 0) goto LAB_00565748;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_c0,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_00565748:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d4 == 0) {
      local_c8 = 0;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

