// allNativeAndDiscoveredLongPressEntries @ 010fd0d0

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::allNativeAndDiscoveredLongPressEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  ulong local_248;
  ulong local_240;
  ulong local_208;
  ulong local_200;
  long local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  long local_198;
  long local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  long local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  _memset(auStack_188,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_defaultNativeLongPressEntries_026aeda0);
  _objc_retainAutoreleasedReturnValue();
  local_200 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_200 != 0) {
    lVar3 = *local_178;
    local_208 = 0;
    do {
      do {
        if (*local_178 - lVar3 != 0) {
          _objc_enumerationMutation(*local_178 - lVar3,IVar2);
        }
        lVar4 = *(long *)(local_180 + local_208 * 8);
        local_148 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_190 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,local_148,local_190);
        }
        _objc_storeStrong(&local_190,0);
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_208 = 0;
    } while (local_200 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_1d8,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_rawLongPressDiscoveredItems_026aeda8);
  _objc_retainAutoreleasedReturnValue();
  local_240 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_240 != 0) {
    lVar3 = *local_1c8;
    local_248 = 0;
    do {
      do {
        if (*local_1c8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar3,IVar2);
        }
        lVar4 = *(long *)(local_1d0 + local_248 * 8);
        local_198 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,local_1e0);
        }
        _objc_storeStrong(&local_1e0,0);
        local_248 = local_248 + 1;
      } while (local_248 < local_240);
      local_240 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_128,0x10)
      ;
      local_248 = 0;
    } while (local_240 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_allValues_0269dae8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

