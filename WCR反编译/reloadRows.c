// reloadRows @ 01ab477c

/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::reloadRows(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  undefined *local_150 [3];
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingAllGroups_026bdd80);
  if ((param_1 & 1) == 0) {
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_buildDefaultRows_026bddf8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setDefaultRows__026bde00);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_buildQuickRows_026bde08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setQuickRows__026bde10);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar3;
    _memset(auStack_1f0,0,0x40);
    puVar3 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_2e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10);
    if (local_2e8 != (undefined *)0x0) {
      lVar5 = *local_1e0;
      local_2f0 = (undefined *)0x0;
      do {
        do {
          if (*local_1e0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1e0 - lVar5,puVar4);
          }
          uVar6 = *(ulong *)(local_1e8 + (long)local_2f0 * 8);
          bVar1 = false;
          local_1b0 = uVar6;
          FUN_01ab51b4();
          IVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manageScope_026bdd90);
          if (IVar2 == 0) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
            bVar1 = uVar6 == 1;
          }
          else if (IVar2 == 1) {
            if ((uVar6 & 1) == 0) {
              uVar6 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
              bVar1 = true;
              if (uVar6 == 2) goto LAB_01ab4f38;
            }
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
            bVar1 = uVar6 == 0x80;
          }
          else if ((IVar2 == 2) && (bVar1 = true, (uVar6 & 1) == 0)) {
            uVar6 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
            bVar1 = false;
            if (uVar6 != 1) {
              uVar6 = local_1b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
              bVar1 = false;
              if (uVar6 != 2) {
                uVar6 = local_1b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_scope_0269ea90);
                bVar1 = uVar6 != 0x80;
              }
            }
          }
LAB_01ab4f38:
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_addObject__0269d180,local_1b0);
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                   0x10);
        local_2f0 = (undefined *)0x0;
      } while (local_2e8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setCustomRows__026bde18,local_1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_refreshNavigationRightItems_026bdd70);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_1a8,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_150[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar4;
    _memset(auStack_1a0,0,0x40);
    puVar3 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_248 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_248 != (undefined *)0x0) {
      lVar5 = *local_190;
      local_250 = (undefined *)0x0;
      do {
        do {
          if (*local_190 - lVar5 != 0) {
            _objc_enumerationMutation(*local_190 - lVar5,puVar4);
          }
          uVar6 = *(ulong *)(local_198 + (long)local_250 * 8);
          local_160 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_disabled_026a2c20);
          if ((uVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_addObject__0269d180,local_160);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                   0x10);
        local_250 = (undefined *)0x0;
      } while (local_248 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setOrderRows__026bdde8,local_150[0]);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setForbiddenRows__026bddf0,local_158);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_158);
    _objc_storeStrong(local_150,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

