// FUN_01cc3fdc @ 01cc3fdc

void FUN_01cc3fdc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_140;
  ulong local_138;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_defaultEntries_026c3538);
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar4 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,uVar3);
        }
        lVar5 = *(long *)(local_100 + local_140 * 8);
        local_c8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_110 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,local_110);
        }
        _objc_storeStrong(&local_110,0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  uVar1 = DAT_028e46b8;
  DAT_028e46b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

