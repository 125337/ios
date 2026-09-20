// FUN_00340650 @ 00340650

byte FUN_00340650(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined *local_148 [3];
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  int local_e4;
  undefined *local_e0;
  undefined *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_1);
  puVar1 = &DAT_028c9ed8;
  _objc_loadWeakRetained();
  local_e0 = puVar1;
  if ((local_d8 == (undefined *)0x0) || (puVar1 == (undefined *)0x0)) {
    local_c9 = 0;
    local_e4 = 1;
  }
  else if (local_d8 == puVar1) {
    local_c9 = 1;
    local_e4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    local_c8 = &cf_poster;
    local_c0 = &cf_m_poster;
    local_b8 = &cf_timelinePoster;
    local_b0 = &cf_m_timelinePoster;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != (undefined *)0x0) {
      lVar3 = *local_120;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,puVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
          puVar2 = local_e0;
          FUN_0033d258(local_e0,local_f0);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = 0;
          if ((puVar2 == (undefined *)0x0) || (lVar4 = (long)local_d8 - (long)puVar2, lVar4 != 0)) {
            local_e4 = 0;
          }
          else {
            lVar4 = 1;
            local_c9 = 1;
            local_e4 = 1;
          }
          local_148[0] = puVar2;
          _objc_storeStrong(lVar4,local_148,0);
          if (local_e4 != 0) goto LAB_0034092c;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_0034092c:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_e4 == 0) {
      local_c9 = 0;
      local_e4 = 1;
    }
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

