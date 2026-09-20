// FUN_005e11dc @ 005e11dc

void FUN_005e11dc(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_178;
  undefined *local_170;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_e8;
  uint local_dc;
  long local_d8;
  long local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  if (local_d8 == 0) {
    local_d0 = 0;
    local_dc = 1;
  }
  else {
    local_48 = &cf_title;
    local_40 = &cf_cellConfig_leftConfig_title;
    local_38 = &cf_leftConfig_title;
    local_30 = &cf_cellConfig_title;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar3;
    _memset(auStack_140,0,0x40);
    puVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,0x10);
    if (local_170 != (undefined *)0x0) {
      lVar5 = *local_130;
      local_178 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,puVar3);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_178 * 8);
          lVar4 = local_d8;
          FUN_005e6954(local_d8,local_100);
          _objc_retainAutoreleasedReturnValue();
          local_148 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          lVar1 = local_148;
          bVar2 = lVar4 != 0;
          if (bVar2) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = lVar1;
          }
          local_dc = (uint)bVar2;
          _objc_storeStrong(bVar2,&local_148,0);
          if (local_dc != 0) goto LAB_005e14a8;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,
                   0x10);
        local_178 = (undefined *)0x0;
      } while (local_170 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_005e14a8:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_dc == 0) {
      local_d0 = 0;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

