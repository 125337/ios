// extractFeaturesFromPlugin: @ 014d8dbc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineSearchManager::extractFeaturesFromPlugin_(ID param_1,SEL param_2,CLASS param_3)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  CLASS CVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined *local_3f8;
  undefined *local_2f0;
  undefined *local_2e8;
  CLASS local_260;
  bool local_241;
  undefined *local_240;
  ID local_220;
  ID local_218;
  undefined *local_210;
  long local_208;
  ID local_200;
  long local_1f8;
  ID local_1e8;
  ID local_1e0 [2];
  ID local_1d0;
  char *local_1c8;
  char *local_1c0;
  uint local_1b4;
  CLASS local_1b0;
  uint local_1a4 [3];
  ID local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  ID local_140 [3];
  ID local_128;
  byte local_11d;
  int local_11c;
  ID local_118;
  bool local_109;
  CLASS local_108;
  CLASS local_f0;
  undefined *local_e8;
  CLASS local_e0;
  SEL local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = param_3;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_109 = false;
  bVar1 = local_e0 == 0;
  local_e8 = puVar3;
  if (bVar1) {
    local_260 = 0;
  }
  else {
    local_260 = local_e0;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_260;
  }
  local_109 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_f0 = local_260;
  if ((local_109 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  IVar4 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_wcRefineSearchInstantiatePluginC_026af608,local_e0,local_f0);
  _objc_retainAutoreleasedReturnValue();
  local_118 = IVar4;
  if (IVar4 == 0) {
    local_c8 = (undefined *)0x0;
    local_11c = 1;
  }
  else {
    bVar2 = (byte)local_f0;
    FUN_014c42cc();
    local_11d = (bVar2 ^ 1) & 1;
    if (local_11d != 0) {
      IVar4 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isViewLoaded_0269cde0);
      if ((IVar4 & 1) == 0) {
        IVar4 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_128 = IVar4;
        _objc_storeStrong(&local_128,0);
      }
      IVar4 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableData_0269dca8);
      if ((IVar4 & 1) == 0) {
        IVar4 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_reloadActionData_026af6e0);
        if ((IVar4 & 1) == 0) {
          IVar4 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
          if ((IVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_performSelector__026ca7b8,PTR_s_reloadData_0269e400);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_performSelector__026ca7b8,PTR_s_reloadActionData_026af6e0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_performSelector__026ca7b8,PTR_s_reloadTableData_0269dca8);
      }
    }
    IVar4 = local_118;
    local_140[0] = 0;
    puVar3 = PTR__OBJC_CLASS___UITableViewController_026ced28;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewController_026ced28,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((IVar4 & 1) != 0) {
      IVar5 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_140[0];
      local_140[0] = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    if (local_140[0] == 0) {
      local_40 = &cf_tableView;
      local_38 = &cf__tableView;
      local_30 = &cf_m_tableView;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar3;
      _memset(auStack_190,0,0x40);
      puVar3 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_c0,0x10)
      ;
      if (local_2e8 != (undefined *)0x0) {
        lVar8 = *local_180;
        local_2f0 = (undefined *)0x0;
        do {
          do {
            if (*local_180 - lVar8 != 0) {
              _objc_enumerationMutation(*local_180 - lVar8,puVar3);
            }
            IVar4 = local_118;
            uVar9 = *(undefined8 *)(local_188 + (long)local_2f0 * 8);
            local_150 = uVar9;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_respondsToSelector__026ca818,uVar9);
            if ((IVar4 & 1) != 0) {
              IVar4 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_valueForKey__0269d128,local_150)
              ;
              _objc_retainAutoreleasedReturnValue();
              local_198 = IVar4;
              if (IVar4 == 0) {
LAB_014d9534:
                local_11c = 0;
              }
              else {
                puVar6 = PTR__OBJC_CLASS___UITableView_026ce1a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
                if ((IVar4 & 1) == 0) goto LAB_014d9534;
                _objc_storeStrong(local_140,local_198);
                local_11c = 5;
              }
              _objc_storeStrong(&local_198,0);
              if (local_11c != 0) goto LAB_014d95dc;
            }
            local_2f0 = local_2f0 + 1;
          } while (local_2f0 < local_2e8);
          local_2e8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_c0,
                     0x10);
          local_2f0 = (undefined *)0x0;
        } while (local_2e8 != (undefined *)0x0);
      }
      local_11c = 0;
LAB_014d95dc:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_148,0);
    }
    if (local_140[0] == 0) {
      local_1a4[0] = 0;
      CVar7 = local_e0;
      _class_copyIvarList(local_e0,local_1a4);
      local_1b0 = CVar7;
      for (local_1b4 = 0; local_1b4 < local_1a4[0]; local_1b4 = local_1b4 + 1) {
        pcVar10 = *(char **)(local_1b0 + (ulong)local_1b4 * 8);
        local_1c0 = pcVar10;
        _ivar_getTypeEncoding();
        local_1c8 = pcVar10;
        if ((pcVar10 != (char *)0x0) &&
           ((pcVar10 = _strstr(pcVar10,"UITableView"), pcVar10 != (char *)0x0 ||
            (pcVar10 = _strstr(local_1c8,"MMTableView"), pcVar10 != (char *)0x0)))) {
          IVar4 = local_118;
          FUN_014d63c8(local_118,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = IVar4;
          if (IVar4 == 0) {
LAB_014d97e4:
            local_11c = 0;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((IVar4 & 1) == 0) goto LAB_014d97e4;
            _objc_storeStrong(local_140,local_1d0);
            local_11c = 8;
          }
          _objc_storeStrong(&local_1d0,0);
          if (local_11c != 0) break;
        }
      }
      if (local_1b0 != 0) {
        _free(local_1b0);
      }
    }
    if (local_140[0] == 0) {
      local_c8 = (undefined *)0x0;
      local_11c = 1;
    }
    else {
      IVar4 = local_140[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_1e0[0] = IVar4;
      if (IVar4 == 0) {
        local_c8 = (undefined *)0x0;
        local_11c = 1;
      }
      else {
        local_1e8 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_numberOfSectionsInTableView__026a2388);
        if ((IVar4 & 1) != 0) {
          IVar4 = local_1e0[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e0[0],PTR_s_numberOfSectionsInTableView__026a2388,local_140[0]);
          local_1e8 = IVar4;
        }
        for (local_1f8 = 0; local_1f8 < (long)local_1e8; local_1f8 = local_1f8 + 1) {
          IVar4 = local_1e0[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e0[0],PTR_s_tableView_numberOfRowsInSection__0269e8d8,local_140[0],
                     local_1f8);
          local_200 = IVar4;
          for (local_208 = 0; local_208 < (long)local_200; local_208 = local_208 + 1) {
            puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                       PTR_s_indexPathForRow_inSection__0269e9a0,local_208,local_1f8);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_1e0[0];
            local_210 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0[0],PTR_s_tableView_cellForRowAtIndexPath__0269e790,local_140[0],
                       puVar3);
            _objc_retainAutoreleasedReturnValue();
            local_218 = IVar4;
            if (IVar4 != 0) {
              IVar5 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_extractTitleFromCell_atIndexPath_026af6e8,IVar4,local_210);
              _objc_retainAutoreleasedReturnValue();
              local_220 = IVar5;
              if ((IVar5 != 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0), IVar5 != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_220);
              }
              _objc_storeStrong(&local_220,0);
            }
            _objc_storeStrong(&local_218);
            _objc_storeStrong(&local_210,0);
          }
        }
        local_11c = 0;
      }
      _objc_storeStrong(local_1e0,0);
    }
    _objc_storeStrong(local_140,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_f0,0);
  if (local_11c == 0) {
    puVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      local_3f8 = (undefined *)0x0;
    }
    else {
      local_3f8 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
      local_240 = local_3f8;
    }
    local_241 = puVar3 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_3f8;
    if (local_241) {
      (*(code *)PTR__objc_release_02578630)(local_240);
    }
    local_11c = 1;
  }
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_c8;
}

