// rebaseMetadataFromRelativePath:toRelativePath: @ 015b9e38

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackStore::rebaseMetadataFromRelativePath_toRelativePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  ulong local_390;
  ulong local_388;
  undefined *local_340;
  undefined *local_338;
  undefined **local_298;
  undefined1 auStack_290 [8];
  long local_288;
  long *local_280;
  undefined8 local_250;
  undefined *local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  ID local_1f8;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined **local_1c8;
  undefined *local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  ulong local_190;
  long local_188;
  ulong local_180;
  undefined **local_178;
  ulong local_170;
  undefined4 local_164;
  long local_160;
  ulong local_158;
  SEL local_150;
  ID local_148;
  undefined1 auStack_140 [128];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  local_150 = param_2;
  local_148 = param_1;
  _objc_storeStrong(&local_158,param_3);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_4);
  uVar1 = local_158;
  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (lVar8 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
      lVar8 == 0)) ||
     (uVar1 = local_158,
     (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,local_160),
     (uVar1 & 1) != 0)) {
    local_164 = 1;
  }
  else {
    uVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_158;
    ppuVar3 = &local_1b0;
    local_1b0 = PTR___NSConcreteStackBlock_02578660;
    local_1a8 = 0xc2000000;
    local_1a4 = 0;
    local_1a0 = FUN_015ba5ec;
    local_198 = &DAT_02587108;
    local_170 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar8 = local_160;
    local_190 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_170;
    local_188 = lVar8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    _objc_retainBlock();
    IVar4 = local_148;
    local_178 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_loadIndexDictionary_026b0c78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_1b8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_dictionaryWithCapacity__026a1ad0,IVar4);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_1b8;
    local_1f0 = PTR___NSConcreteGlobalBlock_02578658;
    local_1e8 = 0xd0800000;
    local_1e4 = 0;
    local_1e0 = FUN_015ba770;
    local_1d8 = &DAT_025853c8;
    local_1c0 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar3 = local_178;
    local_1d0 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_saveIndexDictionary__026b0c80,local_1c0);
    IVar4 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_loadBookmarksMutable_026b0c98);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = IVar4;
    _memset(auStack_240,0,0x40);
    local_c0 = &cf_recents;
    local_b8 = &cf_favorites;
    local_b0 = &cf_pinned;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_338 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_338 != (undefined *)0x0) {
      lVar8 = *local_230;
      local_340 = (undefined *)0x0;
      do {
        do {
          if (*local_230 - lVar8 != 0) {
            _objc_enumerationMutation(*local_230 - lVar8,puVar5);
          }
          local_200 = *(undefined8 *)(local_238 + (long)local_340 * 8);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_248 = puVar6;
          _memset(auStack_290,0,0x40);
          IVar4 = local_148;
          IVar7 = local_1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_objectForKeyedSubscript__0269d098,local_200);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_normalizedPathList__026b0ca0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(IVar7);
          local_388 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,auStack_140,
                     0x10);
          if (local_388 != 0) {
            lVar9 = *local_280;
            local_390 = 0;
            do {
              do {
                if (*local_280 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_280 - lVar9,IVar4);
                }
                local_250 = *(undefined8 *)(local_288 + local_390 * 8);
                ppuVar3 = local_178;
                (*(code *)local_178[2])(local_178,local_250);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = local_248;
                local_298 = ppuVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_248,PTR_s_containsObject__0269cbb8,ppuVar3);
                if (((ulong)puVar6 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_248,PTR_s_addObject__0269d180,local_298);
                }
                _objc_storeStrong(&local_298,0);
                local_390 = local_390 + 1;
              } while (local_390 < local_388);
              local_388 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_290,
                         auStack_140,0x10);
              local_390 = 0;
            } while (local_388 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f8,PTR_s_setObject_forKeyedSubscript__0269d248,local_248,local_200);
          _objc_storeStrong(&local_248,0);
          local_340 = local_340 + 1;
        } while (local_340 < local_338);
        local_338 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_a8,
                   0x10);
        local_340 = (undefined *)0x0;
      } while (local_338 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_saveBookmarks__026b0ca8,local_1f8);
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_1c8,0);
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_190,0);
    _objc_storeStrong(&local_170,0);
    local_164 = 0;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

