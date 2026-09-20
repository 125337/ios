// historyRecordsByApplyingSecondaryFilter: @ 01b20708

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyRecordsByApplyingSecondaryFilter_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ID local_d0;
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
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_secondaryFilterKeywordList_026bea98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((((ulong)puVar3 & 1) == 0) ||
      (puVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
      puVar3 == (undefined *)0x0)) ||
     (IVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088, IVar1 == 0)) {
    puVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar3;
    local_d4 = 1;
  }
  else {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    puVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_160 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar3);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_168 * 8);
          IVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_historyRecord_matchesSecondaryFi_026bed70,local_e8,local_d0);
          if ((IVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_d4 = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

