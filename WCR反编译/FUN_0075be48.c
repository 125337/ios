// FUN_0075be48 @ 0075be48

void FUN_0075be48(void)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_120;
  void *local_118;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  pvVar2 = _memset(auStack_f8,0,0x40);
  FUN_0075e3f4();
  _objc_retainAutoreleasedReturnValue();
  local_118 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_118 != (void *)0x0) {
    lVar3 = *local_e8;
    local_120 = (void *)0x0;
    do {
      do {
        if (*local_e8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar3,pvVar2);
        }
        uVar4 = *(undefined8 *)(local_f0 + (long)local_120 * 8);
        local_b8 = uVar4;
        _WCRefineSpecialTextStyle();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,uVar4,local_b8);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_120 = (void *)((long)local_120 + 1);
      } while (local_120 < local_118);
      local_118 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_120 = (void *)0x0;
    } while (local_118 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  puVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_copy_0269d150);
  uVar4 = DAT_028cc870;
  DAT_028cc870 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

