// buildClearCurrentRemarkChanges @ 018652a8

/* Function Stack Size: 0x10 bytes */

ID WCRefineBatchRemarkViewController::buildClearCurrentRemarkChanges(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_1a0;
  ulong local_158;
  ulong local_150;
  ID local_138;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  SEL local_d8;
  ID local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  _memset(auStack_128,0,0x40);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  local_138 = IVar2;
  if (IVar2 == 0) {
    local_138 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_150 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar5 = *local_118;
    local_158 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,local_138);
        }
        lVar6 = *(long *)(local_120 + local_158 * 8);
        local_e8 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_currentRemark_026b6a58);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar6);
        puVar1 = local_e0;
        if (lVar3 != 0) {
          local_c8 = &cf_candidate;
          local_b8 = local_e8;
          local_c0 = &cf_newRemark;
          local_b0 = &::cf___;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                 0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_138);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
  local_1a0 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_1a0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_1a0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

