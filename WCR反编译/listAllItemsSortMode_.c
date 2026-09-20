// listAllItemsSortMode: @ 01086004

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::listAllItemsSortMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_178;
  ulong local_170;
  undefined *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  undefined *local_d0;
  long_long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  if (DAT_028e3298 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028e3298;
    DAT_028e3298 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_a__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e3298;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3298,PTR_s_objectForKeyedSubscript__0269d098,puVar2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_b8;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_listUngroupedItemsSortMode__026ae338,local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_130,0,0x40);
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_listPacksSortMode__026ac360,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar5 = *local_120;
      local_178 = 0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,IVar3);
          }
          IVar4 = local_b8;
          puVar2 = local_e8;
          uVar6 = *(undefined8 *)(local_128 + local_178 * 8);
          local_f0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_relativePath_026ac370);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_listItemsInPack_sortMode__026ae348,uVar6,local_c8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_c8 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_sortItems_sortMode_order__026ae318,local_e8,1,0);
    }
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3298,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_d0);
    puVar2 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_dc = 1;
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

