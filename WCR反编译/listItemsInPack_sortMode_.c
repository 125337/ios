// listItemsInPack:sortMode: @ 01085400

/* Function Stack Size: 0x20 bytes */

ID WCRefineLocalEmoticonStore::listItemsInPack_sortMode_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_210;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1b0;
  undefined *local_170;
  undefined *local_168;
  bool local_159;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  long_long local_d0;
  ulong local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar6 = local_c8;
  local_d0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
  if ((uVar6 & 1) == 0) {
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
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_p_____ld);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e3298;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3298,PTR_s_objectForKeyedSubscript__0269d098,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_absolutePathFromRelative__026ae2c0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1b0 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = local_1b0;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_100 = puVar2;
      _memset(auStack_148,0,0x40);
      puVar2 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      if (local_1d8 != (undefined *)0x0) {
        lVar5 = *local_138;
        local_1e0 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,puVar2);
            }
            uVar6 = *(ulong *)(local_140 + (long)local_1e0 * 8);
            local_108 = uVar6;
            FUN_0107d2f4();
            if ((uVar6 & 1) == 0) {
              uVar6 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar6;
              FUN_0107b0d4();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((uVar3 & 1) != 0) {
                uVar6 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
                local_159 = false;
                if (uVar6 == 0) {
                  local_210 = local_108;
                }
                else {
                  local_210 = local_c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_108);
                  _objc_retainAutoreleasedReturnValue();
                  local_158 = local_210;
                }
                local_159 = uVar6 != 0;
                (*(code *)PTR__objc_retain_02578638)();
                local_150 = local_210;
                if ((local_159 & 1U) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_158);
                }
                puVar1 = local_100;
                puVar4 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_itemForRelative_isPack__026ae328,local_150,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar4);
                _objc_storeStrong(&local_150,0);
              }
            }
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1e0 = (undefined *)0x0;
        } while (local_1d8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_168 = (undefined *)0x0;
      uVar6 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      if ((uVar6 != 0) && (uVar3 = local_c8, FUN_01085b64(uVar6), (uVar3 & 1) == 0)) {
        puVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_itemOrderForPack__026ae340,local_c8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_168;
        local_168 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_sortItems_sortMode_order__026ae318,local_100,local_d0,local_168);
      puVar2 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3298,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_e0);
      puVar2 = local_170;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_d4 = 1;
      _objc_storeStrong(&local_170);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_b0 = puVar1;
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  else {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_listUngroupedItemsSortMode__026ae338,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_d4 = 1;
    local_b0 = puVar2;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

