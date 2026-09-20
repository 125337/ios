// mutableOfficialMeta @ 01f19bf4

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoStore::mutableOfficialMeta(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_150;
  undefined *local_148;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c0;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar1 & 1) != 0) {
    _memset(auStack_110,0,0x40);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_148 != (undefined *)0x0) {
      lVar4 = *local_100;
      local_150 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,puVar1);
          }
          local_d0 = *(undefined8 *)(local_108 + (long)local_150 * 8);
          puVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,local_d0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_118 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_mutableCopy_0269d8a0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_d0);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_118,0);
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_150 = (undefined *)0x0;
      } while (local_148 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

