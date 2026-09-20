// rebuildFiltered @ 019d2a28

/* Function Stack Size: 0x10 bytes */

void WCRefineFontListViewController::rebuildFiltered(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  cfstringStruct *local_488;
  cfstringStruct *local_478;
  ulong local_450;
  ulong local_448;
  ulong local_430;
  ulong local_3f8;
  ulong local_3f0;
  ID local_3d8;
  cfstringStruct *local_388;
  ulong local_358;
  ulong local_350;
  ID local_320;
  ID local_308;
  byte local_2f9;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  cfstringStruct *local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined *local_258;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  code *local_240;
  undefined *local_238;
  ID local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  ID local_1c8;
  ID local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = param_1;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  local_320 = IVar1;
  if (IVar1 == 0) {
    local_320 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_fontGroupsForItems__026bae48,local_320);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = param_1;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_1c8 = 0;
  if (*(long *)(local_1b0 + (long)_sortMode) == 1) {
    IVar2 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,PTR_s_sortedArrayUsingComparator__0269fae8,
               &PTR___NSConcreteGlobalBlock_0258aa00);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_1c8;
    local_1c8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    IVar2 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,PTR_s_sortedArrayUsingComparator__0269fae8,
               &PTR___NSConcreteGlobalBlock_0258aa20);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_1c8;
    local_1c8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_pinnedPaths_026bae28);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar4;
    _memset(auStack_228,0,0x40);
    IVar1 = local_1c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_350 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
    if (local_350 != 0) {
      lVar9 = *local_218;
      local_358 = 0;
      do {
        do {
          if (*local_218 - lVar9 != 0) {
            _objc_enumerationMutation(*local_218 - lVar9,IVar1);
          }
          IVar2 = local_1d0;
          pcVar10 = *(cfstringStruct **)(local_220 + local_358 * 8);
          local_1e8 = pcVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
          _objc_retainAutoreleasedReturnValue();
          local_388 = pcVar10;
          if (pcVar10 == (cfstringStruct *)0x0) {
            local_388 = &::cf___;
          }
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_containsObject__0269cbb8,local_388);
          (*(code *)PTR__objc_release_02578630)(pcVar10);
          if ((IVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_addObject__0269d180,local_1e8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_1e8);
          }
          local_358 = local_358 + 1;
        } while (local_358 < local_350);
        local_350 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10
                  );
        local_358 = 0;
      } while (local_350 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_1d0;
    puVar3 = local_1d8;
    local_250 = PTR___NSConcreteGlobalBlock_02578658;
    local_248 = 0xd0800000;
    local_244 = 0;
    local_240 = FUN_019d3960;
    local_238 = &DAT_0258aa40;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_sortUsingComparator__0269d168,&local_250);
    (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObjectsFromArray__0269d540,local_1e0);
    _objc_storeStrong(&local_1c8,local_1d8);
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_1d8,0);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_258 = puVar3;
  _memset(auStack_2a0,0,0x40);
  if (local_1c8 == 0) {
    local_3d8 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_3d8 = local_1c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_3f0 = local_3d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_3d8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_128,0x10)
  ;
  if (local_3f0 != 0) {
    lVar9 = *local_290;
    local_3f8 = 0;
    do {
      do {
        if (*local_290 - lVar9 != 0) {
          _objc_enumerationMutation(*local_290 - lVar9,local_3d8);
        }
        local_260 = *(ulong *)(local_298 + local_3f8 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_addObject__0269d180,local_260);
        uVar5 = local_260;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_260,PTR_s_objectForKeyedSubscript__0269d098,&cf_expanded);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar6 & 1) != 0) {
          _memset(auStack_2e8,0,0x40);
          uVar5 = local_260;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_260,PTR_s_objectForKeyedSubscript__0269d098,&cf_children);
          _objc_retainAutoreleasedReturnValue();
          local_430 = uVar5;
          if (uVar5 == 0) {
            local_430 = *(ulong *)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          local_448 = local_430;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_430,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                     auStack_1a8,0x10);
          if (local_448 != 0) {
            lVar11 = *local_2d8;
            local_450 = 0;
            do {
              do {
                if (*local_2d8 - lVar11 != 0) {
                  _objc_enumerationMutation(*local_2d8 - lVar11,local_430);
                }
                pcVar10 = *(cfstringStruct **)(local_2e0 + local_450 * 8);
                local_2a8 = pcVar10;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_mutableCopy_0269d8a0);
                local_2f0 = pcVar10;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar10,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_face,&cf_rowType)
                ;
                pcVar10 = local_2a8;
                FUN_019d3b3c();
                _objc_retainAutoreleasedReturnValue();
                local_2f9 = 0;
                local_478 = pcVar10;
                if (pcVar10 == (cfstringStruct *)0x0) {
                  pcVar7 = local_2a8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayName);
                  _objc_retainAutoreleasedReturnValue();
                  local_2f9 = 1;
                  local_488 = pcVar7;
                  if (pcVar7 == (cfstringStruct *)0x0) {
                    local_488 = &::cf___;
                  }
                  local_478 = local_488;
                  local_2f8 = pcVar7;
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_setObject_forKeyedSubscript__0269d248,local_478,
                           &cf_displayName);
                if ((local_2f9 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_2f8);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_2f0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                           &cf_expandable);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                puVar3 = local_258;
                pcVar10 = local_2f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(pcVar10);
                _objc_storeStrong(&local_2f0,0);
                local_450 = local_450 + 1;
              } while (local_450 < local_448);
              local_448 = local_430;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_430,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                         auStack_1a8,0x10);
              local_450 = 0;
            } while (local_448 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(local_430);
        }
        local_3f8 = local_3f8 + 1;
      } while (local_3f8 < local_3f0);
      local_3f0 = local_3d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_3d8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_128,
                 0x10);
      local_3f8 = 0;
    } while (local_3f0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_3d8);
  puVar3 = local_258;
  (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_copy_0269d150);
  uVar8 = *(undefined8 *)(local_1b0 + (long)_filtered);
  *(undefined8 *)(local_1b0 + (long)_filtered) = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  if ((*(byte *)(local_1b0 + (long)_multiSelectMode) & 1) != 0) {
    IVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_selectableFilteredPaths_026bae08);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(local_1b0 + (long)_selectedPaths);
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_308 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,IVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_intersectSet__026a2c18);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_308,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_1b0 + (long)_tableView),PTR_s_reloadData_0269e400);
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_updateNavigationItems_026badf0);
  _objc_storeStrong(&local_258);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

