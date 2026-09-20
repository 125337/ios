// FUN_00f8aca4 @ 00f8aca4

void FUN_00f8aca4(long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_138;
  void *local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  pvVar2 = _memset(auStack_108,0,0x40);
  FUN_00f8aefc();
  _objc_retainAutoreleasedReturnValue();
  local_130 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != (void *)0x0) {
    lVar4 = *local_f8;
    local_138 = (void *)0x0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,pvVar2);
        }
        puVar1 = local_c0;
        local_c8 = *(undefined8 *)(local_100 + (long)local_138 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_itemFromEntry__026acc58,local_c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_138 = (void *)((long)local_138 + 1);
      } while (local_138 < local_130);
      local_130 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_138 = (void *)0x0;
    } while (local_130 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  uVar3 = DAT_028e2ec0;
  DAT_028e2ec0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

