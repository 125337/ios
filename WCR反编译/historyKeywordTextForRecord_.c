// historyKeywordTextForRecord: @ 01b1f7c0

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyKeywordTextForRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_188;
  undefined *local_180;
  undefined *local_158;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  bool local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_d9 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_158 = (undefined *)0x0;
  }
  else {
    local_158 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_keywords);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_158;
  }
  local_d9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_158;
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    _memset(auStack_130,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar5 = *local_120;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,puVar2);
          }
          lVar6 = *(long *)(local_128 + (long)local_188 * 8);
          local_f0 = lVar6;
          FUN_01b1fc40();
          _objc_retainAutoreleasedReturnValue();
          local_138 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          if (lVar6 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_138);
          }
          _objc_storeStrong(&local_138,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    bVar1 = puVar2 != (undefined *)0x0;
    if (bVar1) {
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_componentsJoinedByString__0269d140,&::cf_0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar2;
    }
    _objc_storeStrong(bVar1,&local_e8,0);
    if (bVar1) goto LAB_01b1fbe4;
  }
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
LAB_01b1fbe4:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

