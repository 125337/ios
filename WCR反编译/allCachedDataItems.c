// allCachedDataItems @ 010be6dc

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::allCachedDataItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_2a8;
  ulong local_2a0;
  ID local_258;
  undefined4 local_24c;
  long local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  long local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined *local_1b0 [3];
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  ID local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  code *local_148;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  local_158 = 0x32000000;
  local_154 = 0x30;
  local_150 = FUN_010b6320;
  local_148 = FUN_010b6374;
  local_140 = 0;
  local_198 = PTR___NSConcreteStackBlock_02578660;
  local_190 = 0xc2000000;
  local_18c = 0;
  local_188 = FUN_010becb0;
  local_180 = &DAT_02585298;
  local_160 = &local_168;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = param_1;
  local_170 = &local_168;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_performIOTaskSync__026ae6f0,&local_198);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1b0[0] = puVar1;
  _memset(auStack_1f8,0,0x40);
  uVar2 = local_160[5];
  (*(code *)PTR__objc_retain_02578638)();
  local_2a0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10);
  if (local_2a0 != 0) {
    lVar5 = *local_1e8;
    local_2a8 = 0;
    do {
      do {
        if (*local_1e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1e8 - lVar5,uVar2);
        }
        local_1b8 = *(undefined8 *)(local_1f0 + local_2a8 * 8);
        _memset(auStack_240,0,0x40);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_cachedDataItemsForUsername__026a4c00,local_1b8);
        _objc_retainAutoreleasedReturnValue();
        local_2e0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2e0 != 0) {
          lVar6 = *local_230;
          local_2e8 = 0;
          do {
            do {
              if (*local_230 - lVar6 != 0) {
                _objc_enumerationMutation(*local_230 - lVar6,IVar3);
              }
              lVar7 = *(long *)(local_238 + local_2e8 * 8);
              local_200 = lVar7;
              FUN_010b66f4();
              _objc_retainAutoreleasedReturnValue();
              local_248 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
              if (lVar7 == 0) {
                local_24c = 5;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b0[0],PTR_s_addObject__0269d180,local_200);
                local_24c = 0;
              }
              _objc_storeStrong(&local_248,0);
              local_2e8 = local_2e8 + 1;
            } while (local_2e8 < local_2e0);
            local_2e0 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_128
                       ,0x10);
            local_2e8 = 0;
          } while (local_2e0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_a8,0x10);
      local_2a8 = 0;
    } while (local_2a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  IVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_sortedItemsFromArray__026ae6d8,local_1b0[0])
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_130;
  local_258 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setBrowseListSnapshot__026ae660,local_258);
  _objc_sync_exit(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_258;
  (*(code *)PTR__objc_retain_02578638)();
  local_24c = 1;
  _objc_storeStrong(&local_258);
  _objc_storeStrong(local_1b0,0);
  _objc_storeStrong(&local_178,0);
  __Block_object_dispose(&local_168,8);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return IVar3;
}

