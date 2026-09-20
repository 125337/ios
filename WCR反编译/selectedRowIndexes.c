// selectedRowIndexes @ 01b39a38

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertKeywordsViewController::selectedRowIndexes(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_026ce398;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableIndexSet_026ce398,PTR_s_indexSet_0269fc90);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  _memset(auStack_108,0,0x40);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedIndexPaths_026bef80);
  _objc_retainAutoreleasedReturnValue();
  local_138 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar6 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,IVar3);
        }
        lVar7 = *(long *)(local_100 + local_140 * 8);
        local_c8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_row_0269e210);
        bVar1 = false;
        if (-1 < lVar7) {
          lVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_row_0269e210);
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_keywords_026bef60);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = lVar7 < (long)IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        puVar2 = local_c0;
        if (bVar1) {
          lVar7 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_row_0269e210);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addIndex__0269fc98,lVar7);
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

