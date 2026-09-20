// FUN_002ecfd8 @ 002ecfd8

void FUN_002ecfd8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_180;
  undefined *local_178;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_e8;
  int local_dc;
  ulong local_d8;
  ulong local_d0;
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
    local_48 = &cf_multiSelectView;
    local_40 = &cf__multiSelectView;
    local_38 = &cf_m_multiSelectToolView;
    local_30 = &cf_multiSelectToolView;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _memset(auStack_140,0,0x40);
    puVar2 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,0x10);
    if (local_178 != (undefined *)0x0) {
      lVar5 = *local_130;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar5 != 0) {
            _objc_enumerationMutation(*local_130 - lVar5,puVar2);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_180 * 8);
          uVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_valueForKey__0269d128,local_100);
          _objc_retainAutoreleasedReturnValue();
          local_148 = uVar3;
          if (uVar3 == 0) {
LAB_002ed278:
            local_dc = 0;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar1 = local_148;
            if ((uVar3 & 1) == 0) goto LAB_002ed278;
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = uVar1;
            local_dc = 1;
          }
          _objc_storeStrong(&local_148,0);
          if (local_dc != 0) goto LAB_002ed310;
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_c8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_002ed310:
    (*(code *)PTR__objc_release_02578630)(puVar2);
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

