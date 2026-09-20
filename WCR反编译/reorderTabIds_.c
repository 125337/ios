// reorderTabIds: @ 0151ede4

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingStore::reorderTabIds_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_290;
  ulong local_288;
  uint local_23c;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined4 local_1b0;
  byte local_1a9;
  ID local_1a8;
  ID local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined *local_150;
  undefined *local_148;
  ulong local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ensureTabsLoaded_026b01d8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar3;
  _memset(auStack_198,0,0x40);
  uVar1 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_218 != 0) {
    lVar5 = *local_188;
    local_220 = 0;
    do {
      do {
        if (*local_188 - lVar5 != 0) {
          _objc_enumerationMutation(*local_188 - lVar5,uVar1);
        }
        local_158 = *(undefined8 *)(local_190 + local_220 * 8);
        IVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tabForId__026a8278,local_158);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_150;
        local_1a9 = 0;
        local_23c = 1;
        local_1a0 = IVar4;
        if (IVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          local_1a9 = 1;
          local_1a8 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
          local_23c = (uint)puVar2;
        }
        if ((local_1a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1a8);
        }
        if ((local_23c & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1a0);
          puVar2 = local_150;
          IVar4 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          local_1b0 = 0;
        }
        else {
          local_1b0 = 3;
        }
        _objc_storeStrong(&local_1a0,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
      local_220 = 0;
    } while (local_218 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_1f8,0,0x40);
  IVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_cachedTabs_026b0180);
  _objc_retainAutoreleasedReturnValue();
  local_288 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_288 != 0) {
    lVar5 = *local_1e8;
    local_290 = 0;
    do {
      do {
        if (*local_1e8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_1e8 - lVar5,IVar4);
        }
        puVar2 = local_150;
        uVar6 = *(undefined8 *)(local_1f0 + local_290 * 8);
        local_1b8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1b8);
          puVar2 = local_150;
          uVar6 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_tabId_026a8270);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128,0x10)
      ;
      local_290 = 0;
    } while (local_288 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCachedTabs__026b0198,local_148);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

