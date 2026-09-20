// FUN_000cfa34 @ 000cfa34

byte FUN_000cfa34(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_c8;
  int local_bc;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_c8 = puVar1;
    do {
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0 || 0xef < local_e0) {
        local_a9 = 0;
        local_bc = 1;
        break;
      }
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeLastObject_0269e830);
      local_e0 = local_e0 + 1;
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_containsString__0269d0b0,&cf_MMInputToolView);
      if (((((ulong)puVar1 & 1) == 0) &&
          (puVar1 = local_f0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_containsString__0269d0b0,&cf_InputToolView),
          ((ulong)puVar1 & 1) == 0)) &&
         (puVar1 = local_f0,
         (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_containsString__0269d0b0,&cf_MsgInput)
         , ((ulong)puVar1 & 1) == 0)) {
        _memset(auStack_138,0,0x40);
        puVar1 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_198 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_198 != (undefined *)0x0) {
          lVar2 = *local_128;
          local_1a0 = (undefined *)0x0;
          do {
            do {
              if (*local_128 - lVar2 != 0) {
                _objc_enumerationMutation(*local_128 - lVar2,puVar1);
              }
              local_f8 = *(long *)(local_130 + (long)local_1a0 * 8);
              if (local_f8 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_f8);
              }
              local_1a0 = local_1a0 + 1;
            } while (local_1a0 < local_198);
            local_198 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8
                       ,0x10);
            local_1a0 = (undefined *)0x0;
          } while (local_198 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_bc = 0;
      }
      else {
        local_a9 = 1;
        local_bc = 1;
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
    } while (local_bc == 0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

