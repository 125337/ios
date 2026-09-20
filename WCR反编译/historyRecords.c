// historyRecords @ 01b26514

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088, puVar1 == (undefined *)0x0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    puVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_160 != (undefined *)0x0) {
      lVar3 = *local_110;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_118 + (long)local_168 * 8);
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

