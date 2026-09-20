// addSectionTo:cellClass:title:entries: @ 019aefbc

/* Function Stack Size: 0x30 bytes */

void WCRFilePathListViewController::addSectionTo_cellClass_title_entries_
               (ID param_1,SEL param_2,ID param_3,CLASS param_4,ID param_5,ID param_6)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  CLASS CVar9;
  long lVar10;
  ulong uVar11;
  ulong local_1a0;
  ulong local_198;
  CLASS local_158;
  ulong local_150;
  ulong local_148 [3];
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined1 auStack_e8 [8];
  undefined *local_e0;
  ulong local_d8;
  long local_d0;
  CLASS local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_d0 = 0;
  local_c8 = param_4;
  _objc_storeStrong(&local_d0,param_5);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_6);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  if (local_d0 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,local_d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addSection__0269e3d0,local_e0);
  _objc_initWeak(auStack_e8,local_b0);
  _memset(auStack_130,0,0x40);
  uVar1 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar10 = *local_120;
    local_1a0 = 0;
    do {
      do {
        if (*local_120 - lVar10 != 0) {
          _objc_enumerationMutation(*local_120 - lVar10,uVar1);
        }
        uVar11 = *(ulong *)(local_128 + local_1a0 * 8);
        local_f0 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar11,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_148[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar11);
        uVar4 = local_f0;
        FUN_0198e288();
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_b0;
        CVar9 = local_c8;
        puVar3 = PTR_s_handlePathCellTap__026ba818;
        uVar5 = local_f0;
        local_150 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_0198b704();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = local_148[0];
        uVar4 = local_150;
        uVar7 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (CVar9,PTR_s_normalCellForSel_target_title_de_026b3248,puVar3,IVar2,uVar6,uVar11,
                   uVar4,(uVar8 & 1) != 0);
        _objc_retainAutoreleasedReturnValue();
        local_158 = CVar9;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setValue_forKey__0269d300,local_f0,&cf_userInfo);
        CVar9 = local_158;
        uVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        FUN_019af634(CVar9);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        IVar2 = local_b0;
        CVar9 = local_158;
        uVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_attachSwipeRemoveToCell_path__026ba820,CVar9);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        _objc_loadWeakRetained(auStack_e8);
        (*(code *)PTR__objc_release_02578630)();
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addCell__0269e3f8,local_158);
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(local_148,0);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_destroyWeak(auStack_e8);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

