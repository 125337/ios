// FUN_0087f5a4 @ 0087f5a4

void FUN_0087f5a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  if (local_b8 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    while (puVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
          local_b0 = local_c0, puVar1 != (undefined *)0x0) {
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeLastObject_0269e830);
      puVar1 = local_e0;
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_e0;
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        FUN_008825d8();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        if (puVar1 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_e8);
        }
        _objc_storeStrong(&local_f0);
        _objc_storeStrong(&local_e8,0);
      }
      _memset(auStack_138,0,0x40);
      puVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c8 != (undefined *)0x0) {
        lVar3 = *local_128;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar3 != 0) {
              _objc_enumerationMutation(*local_128 - lVar3,puVar1);
            }
            local_f8 = *(undefined8 *)(local_130 + (long)local_1d0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f8);
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_e0,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

