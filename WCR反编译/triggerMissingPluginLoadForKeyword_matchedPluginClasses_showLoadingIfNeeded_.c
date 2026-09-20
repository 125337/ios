// triggerMissingPluginLoadForKeyword:matchedPluginClasses:showLoadingIfNeeded: @ 014c1f8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x24 bytes */

bool WCRefineSearchManager::
     triggerMissingPluginLoadForKeyword_matchedPluginClasses_showLoadingIfNeeded_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1b0;
  undefined *local_1a8;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  ulong local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d1 = (byte)param_5;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObjectsFromArray__0269d540,local_d0);
  }
  puVar1 = local_f0;
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_getSortedPluginVCList_026af578);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_138,0,0x40);
  puVar1 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1a8 != (undefined *)0x0) {
    lVar5 = *local_128;
    local_1b0 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar5 != 0) {
          _objc_enumerationMutation(*local_128 - lVar5,puVar1);
        }
        uVar6 = *(ulong *)(local_130 + (long)local_1b0 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_f8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar4 = local_f8;
        if ((uVar6 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
          if ((uVar4 != 0) &&
             (puVar2 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e8,PTR_s_containsObject__0269cbb8,local_140), ((ulong)puVar2 & 1) == 0
             )) {
            uVar4 = *(ulong *)(local_b8 + 0x50);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_140);
            if (((uVar4 & 1) == 0) &&
               (IVar3 = local_b8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_b8,PTR_s_isPluginEnabledForSearchByClassN_026af5a8,local_140),
               (IVar3 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_140);
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_140);
            }
          }
          _objc_storeStrong(&local_140,0);
        }
        local_1b0 = local_1b0 + 1;
      } while (local_1b0 < local_1a8);
      local_1a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_1b0 = (undefined *)0x0;
    } while (local_1a8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    local_a9 = 0;
  }
  else {
    _objc_storeStrong(local_b8 + 0x28,local_c8);
    if ((*(byte *)(local_b8 + 0xb) & 1) == 0) {
      *(undefined1 *)(local_b8 + 10) = 0;
      *(undefined1 *)(local_b8 + 0xb) = 1;
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_showLoadingState_026af528);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_loadPluginsOneByOne_atIndex__026af580,local_e0,0);
      local_a9 = 1;
    }
    else {
      local_a9 = 1;
    }
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

