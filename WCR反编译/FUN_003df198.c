// FUN_003df198 @ 003df198

void FUN_003df198(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d9;
  undefined8 local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  local_d9 = param_3;
  if (local_d0 == 0) {
    local_e0 = 1;
  }
  else {
    FUN_00367110(local_d0,&cf_m_cellData,local_d8);
    FUN_003df9e8(local_d0,&cf_setCellData_,local_d8);
    FUN_003df9e8(local_d0,&cf_updateWithCellData_,local_d8);
    _memset(auStack_128,0,0x40);
    local_c8 = &cf_updateNameLabel;
    local_c0 = &cf_updateMessageLabel;
    local_b8 = &cf_updateTimeLabel;
    local_b0 = &cf_updateAllLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_160 != (undefined *)0x0) {
      lVar2 = *local_118;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar2 != 0) {
            _objc_enumerationMutation(*local_118 - lVar2,puVar1);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_168 * 8);
          FUN_003df9e8(local_d0,local_e8,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setNeedsLayout_0269deb8);
    local_e0 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

