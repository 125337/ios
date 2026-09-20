// renderLocalItems @ 01e816ec

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::renderLocalItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  undefined *local_198;
  undefined *local_190;
  undefined *local_130;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  long local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsScrollView_026c6ea0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineToDoStore_026cf6a0;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardDailyOnly_026c7100);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_cardEntriesForBackend_dailyOnly__026c7108,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_toDoCardDailyOnly_026c7100);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_cc = 1;
  }
  else {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_emptyLabel_026a2668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    puVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar4 = *local_110;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,puVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_198 * 8);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_createCardRowForEntry_index__026c7110,local_e0,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          local_128 = IVar3;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_130 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_addGestureRecognizer__026ca4a8,puVar1);
          _objc_setAssociatedObject(local_128,&DAT_028e4830,local_e0,1);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_itemsStack_026c6eb0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_d8 = local_d8 + 1;
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutItemsStack_026c6f80);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

