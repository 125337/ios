// reloadKeywordsFromConfig @ 01b345a8

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertKeywordsViewController::reloadKeywordsFromConfig(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  undefined *local_180;
  undefined *local_178;
  undefined *local_148;
  undefined *local_138;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_138 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_138 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_mutableCopy_0269d8a0);
  local_c9 = 0;
  local_148 = local_138;
  if (local_138 == (undefined *)0x0) {
    local_148 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_148;
  }
  local_c9 = local_138 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setKeywords__026bef38,local_148);
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(local_138);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDisabledKeys__026bef40);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _memset(auStack_118,0,0x40);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_178 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_178 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar2);
        }
        lVar5 = *(long *)(local_110 + (long)local_180 * 8);
        local_d8 = lVar5;
        FUN_01b34a74();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
        if (lVar5 != 0) {
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_disabledKeys_026bef48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        _objc_storeStrong(&local_120,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_updateBatchToolbarVisibility_026bef50);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_updateEditBarState_026bef58);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

