// FUN_0088ac30 @ 0088ac30

void FUN_0088ac30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0 [3];
  undefined *local_c8;
  int local_bc;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    do {
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_b0 = (undefined *)0x0;
        local_bc = 1;
        break;
      }
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e0[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeLastObject_0269e830);
      puVar1 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_00872b3c();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (((puVar1 == (undefined *)0x0) ||
          (puVar1 = local_e8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_containsString__0269d0b0,&cf_textstateprofile),
          ((ulong)puVar1 & 1) == 0)) ||
         (puVar2 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e8,PTR_s_containsString__0269d0b0,&cf_tableview), puVar1 = local_e0[0],
         ((ulong)puVar2 & 1) == 0)) {
        _memset(auStack_130,0,0x40);
        puVar1 = local_e0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1a0 != (undefined *)0x0) {
          lVar3 = *local_120;
          local_1a8 = (undefined *)0x0;
          do {
            do {
              if (*local_120 - lVar3 != 0) {
                _objc_enumerationMutation(*local_120 - lVar3,puVar1);
              }
              local_f0 = *(undefined8 *)(local_128 + (long)local_1a8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_f0);
              local_1a8 = local_1a8 + 1;
            } while (local_1a8 < local_1a0);
            local_1a0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8
                       ,0x10);
            local_1a8 = (undefined *)0x0;
          } while (local_1a0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_bc = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar1;
        local_bc = 1;
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(local_e0,0);
    } while (local_bc == 0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

