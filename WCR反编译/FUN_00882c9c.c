// FUN_00882c9c @ 00882c9c

void FUN_00882c9c(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined4 local_b8;
  byte local_b1;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b1 = param_2;
  if (local_b0 == 0) {
    local_b8 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    while (puVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
          puVar1 != (undefined *)0x0) {
      puVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_d8[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeLastObject_0269e830);
      puVar1 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_00872b3c();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_d8[0];
      puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((((ulong)puVar1 & 1) != 0) &&
          (puVar1 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
          puVar1 != (undefined *)0x0)) &&
         (puVar1 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsString__0269d0b0,&cf_phonebtn)
         , ((ulong)puVar1 & 1) != 0)) {
        FUN_00884b64(local_d8[0],local_b1 & 1);
      }
      _memset(auStack_128,0,0x40);
      puVar1 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1b8 != (undefined *)0x0) {
        lVar3 = *local_118;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,puVar1);
            }
            local_e8 = *(undefined8 *)(local_120 + (long)local_1c0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_e8);
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_e0);
      _objc_storeStrong(local_d8,0);
    }
    _objc_storeStrong(0,&local_c0,0);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

