// reloadHistory @ 01ea01f4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHistoryViewController::reloadHistory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_150;
  ulong local_148;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineToDoStore_026cf6a0;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoStore_026cf6a0,PTR_s_historyItems_026ac8d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAllItems__026a27d0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  local_148 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_148 != 0) {
    lVar6 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,IVar2);
        }
        uVar7 = *(ulong *)(local_110 + local_150 * 8);
        local_d8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_eventType);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8,&cf_completed);
        if ((uVar7 & 1) == 0) {
          uVar7 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_isEqualToString__0269ccc8,&cf_deleted);
          if ((uVar7 & 1) != 0) {
            local_d0 = local_d0 + 1;
          }
        }
        else {
          local_c0 = local_c0 + 1;
          uVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_wasOverdue);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar3 & 1) != 0) {
            local_c8 = local_c8 + 1;
          }
        }
        _objc_storeStrong(&local_120,0);
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_qQ);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_summaryLabel_026b4de0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allItems_026a2730);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar4 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rebuildGroups_026c7450);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

