// listPacksSortMode: @ 01084ae8

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::listPacksSortMode_(ID param_1,SEL param_2,long_long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1b0;
  undefined *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  ID local_160;
  ID local_158;
  byte local_149;
  ID local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined *local_f8;
  undefined *local_f0;
  ID local_e8;
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
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = DAT_028e3298;
    DAT_028e3298 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_packs__ld);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = DAT_028e3298;
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3298,PTR_s_objectForKeyedSubscript__0269d098,puVar3)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_ensureRootDirectoryExists__026a3c70);
    IVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_e8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_1b0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_1b0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar3;
    _memset(auStack_140,0,0x40);
    puVar3 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar7 = *local_130;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar7 != 0) {
            _objc_enumerationMutation(*local_130 - lVar7,puVar3);
          }
          uVar8 = *(ulong *)(local_138 + (long)local_1e0 * 8);
          local_100 = uVar8;
          FUN_0107d2f4();
          if ((((uVar8 & 1) == 0) &&
              (uVar8 = local_100,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_isEqualToString__0269ccc8,&cf__gR_), (uVar8 & 1) == 0)) &&
             (uVar8 = local_100,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_100,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__),
             (uVar8 & 1) == 0)) {
            IVar4 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
            _objc_retainAutoreleasedReturnValue();
            local_149 = 0;
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_148 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)puVar5 & 1) != 0) {
              bVar1 = local_149 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_f8;
            if ((bVar1 & 1) == 0) {
              IVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_itemForRelative_isPack__026ae328,local_100,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(IVar4);
              local_dc = 0;
            }
            else {
              local_dc = 3;
            }
            _objc_storeStrong(&local_148,0);
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_sortItems_sortMode__026ae330,local_f8,local_c8);
    IVar6 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_packOrderMutable_026ae278);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_count_0269cfe0);
    puVar3 = local_f8;
    IVar4 = local_158;
    if (IVar6 != 0) {
      local_180 = PTR___NSConcreteGlobalBlock_02578658;
      local_178 = 0xd0800000;
      local_174 = 0;
      local_170 = FUN_01085218;
      local_168 = &DAT_02584eb0;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_sortUsingComparator__0269d168,&local_180);
      _objc_storeStrong(&local_160,0);
    }
    puVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
    local_188 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3298,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_d0);
    puVar3 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_dc = 1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_b0 = puVar2;
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

