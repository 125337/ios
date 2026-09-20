// FUN_0018e334 @ 0018e334

void FUN_0018e334(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  void *local_198;
  void *local_190;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_contactsTopNameCustomEnabled_0269fcc8);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar1;
  }
  else {
    puVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_customContactsTopNames_0269fcd0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
       puVar1 == (undefined *)0x0)) {
      puVar1 = *(undefined **)PTR____NSDictionary0___02578288;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = 1;
      local_b0 = puVar1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar1;
      pvVar3 = _memset(auStack_120,0,0x40);
      FUN_0018e2c0();
      _objc_retainAutoreleasedReturnValue();
      local_190 = pvVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != (void *)0x0) {
        lVar4 = *local_110;
        local_198 = (void *)0x0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,pvVar3);
            }
            local_e0 = *(undefined8 *)(local_118 + (long)local_198 * 8);
            puVar1 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectForKeyedSubscript__0269d098,local_e0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar1;
            FUN_00184b18();
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
            if (puVar1 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,local_128,local_e0);
            }
            _objc_storeStrong(&local_128,0);
            local_198 = (void *)((long)local_198 + 1);
          } while (local_198 < local_190);
          local_190 = pvVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pvVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_198 = (void *)0x0;
        } while (local_190 != (void *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pvVar3);
      puVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar1;
      local_c8 = 1;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

