// tabWithDictionary: @ 01515a00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramTab::tabWithDictionary_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  uint local_394;
  ulong local_388;
  ulong local_308;
  ulong local_300;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_280;
  bool local_229;
  ulong local_228;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  ulong local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  bool local_179;
  ulong local_178;
  ulong local_170;
  undefined *local_168;
  ID local_160;
  ulong local_158;
  undefined4 local_14c;
  ulong local_148;
  SEL local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar3 = local_148;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_130 = 0;
    local_14c = 1;
  }
  else {
    uVar3 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_tabId);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    FUN_01516994();
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_130 = 0;
      local_14c = 1;
    }
    else {
      IVar4 = local_138;
      _objc_alloc_init();
      local_160 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setTabId__026b00d0,local_158);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      FUN_01516994();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setKind__026ad410,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_scopeMask);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setScopeMask__026b00d8,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_148;
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_members);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_179 = false;
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        local_280 = 0;
      }
      else {
        local_280 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_members);
        _objc_retainAutoreleasedReturnValue();
        local_178 = local_280;
      }
      local_179 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = local_280;
      if ((local_179 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _memset(auStack_1c8,0,0x40);
      uVar3 = local_170;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
      if (local_2a8 != 0) {
        lVar6 = *local_1b8;
        local_2b0 = 0;
        do {
          do {
            if (*local_1b8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1b8 - lVar6,uVar3);
            }
            uVar7 = *(ulong *)(local_1c0 + local_2b0 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_188 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar7 & 1) != 0) &&
               (uVar7 = local_188,
               (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_length_0269cca0), uVar7 != 0))
            {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_188);
            }
            local_2b0 = local_2b0 + 1;
          } while (local_2b0 < local_2a8);
          local_2a8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                     0x10);
          local_2b0 = 0;
        } while (local_2a8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setMembers__026b00e0,local_168);
      puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_148;
      local_1d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_linkedGroupIds);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar7 & 1) != 0) {
        _memset(auStack_218,0,0x40);
        uVar3 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_linkedGroupIds);
        _objc_retainAutoreleasedReturnValue();
        local_300 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_300 != 0) {
          lVar6 = *local_208;
          local_308 = 0;
          do {
            do {
              if (*local_208 - lVar6 != 0) {
                _objc_enumerationMutation(*local_208 - lVar6,uVar3);
              }
              uVar7 = *(ulong *)(local_210 + local_308 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1d8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = local_1d8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0), uVar7 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_addObject__0269d180,local_1d8)
                ;
              }
              local_308 = local_308 + 1;
            } while (local_308 < local_300);
            local_300 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_128
                       ,0x10);
            local_308 = 0;
          } while (local_300 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      puVar2 = local_1d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setLinkedGroupIds__026b00f0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_preserveLinkedGroups);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setPreserveLinkedGroups__026b00f8,uVar7)
      ;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_memberGroupId);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      FUN_01516994();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setMemberGroupId__026b0108);
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_longPressAction);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setLongPressAction__026b0118,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidePinned);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setHidePinned__026b0120,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_recentDays);
      _objc_retainAutoreleasedReturnValue();
      local_388 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (((long)local_388 < 1) || (0x1e < (long)local_388)) {
        local_388 = 3;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setRecentDays__026b0130,local_388);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_removable);
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar7 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,&cf_all);
        local_394 = (uint)uVar7 ^ 1;
      }
      else {
        local_228 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_removable);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_228;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_394 = (uint)uVar7;
      }
      local_229 = uVar3 != 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setRemovable__026b0140,local_394 != 0);
      if (local_229) {
        (*(code *)PTR__objc_release_02578630)(local_228);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_disabled);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setDisabled__026b0148,uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_isEqualToString__0269ccc8,&cf_all);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setKind__026ad410,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setRemovable__026b0140,0);
      }
      uVar3 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_isEqualToString__0269ccc8,&cf_privateFriend);
      if (((uVar3 & 1) != 0) ||
         (IVar4 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_kind_026a27e8),
         IVar4 == 5)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setKind__026ad410,5);
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setTabId__026b00d0,DAT_02586518);
        IVar4 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        if (IVar5 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_setTitle__0269cef0,&cf__S);
        }
      }
      IVar4 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = IVar4;
      local_14c = 1;
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_160,0);
    }
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

