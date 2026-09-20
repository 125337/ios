// repairHistoryRecordsIfNeeded @ 01b252c4

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryViewController::repairHistoryRecordsIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_1e0;
  undefined *local_1c8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_historyRecords_026bea70);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
  puVar4 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)puVar4 & 1) != 0) &&
       (puVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
       puVar1 != (undefined *)0x0)) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_cc = 1;
  }
  else {
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_c0;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_d9 = false;
    if (((ulong)puVar4 & 1) != 0) {
      puVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
      puVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      local_d9 = puVar1 != puVar4;
    }
    _memset(auStack_128,0,0x40);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar3 = *local_118;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,puVar1);
          }
          puVar4 = *(undefined **)(local_120 + (long)local_1a0 * 8);
          local_e8 = puVar4;
          FUN_01b2591c();
          if (((ulong)puVar4 & 1) == 0) {
            puVar4 = local_e8;
            FUN_01b25b28();
            if (((ulong)puVar4 & 1) == 0) {
              puVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_resolvedRecord__026beb38,local_e8);
              _objc_retainAutoreleasedReturnValue();
              local_1c8 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_1c8 = local_e8;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = local_1c8;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_recordByRepairingMiniProgramFiel_026bed98,local_130);
              _objc_retainAutoreleasedReturnValue();
              local_1e0 = puVar4;
              if (puVar4 == (undefined *)0x0) {
                local_1e0 = local_130;
              }
              _objc_storeStrong(&local_130,local_1e0);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
              if ((local_130 != local_e8) &&
                 (puVar4 = local_130,
                 (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isEqual__0269e9a8,local_e8),
                 ((ulong)puVar4 & 1) == 0)) {
                local_d9 = 1;
              }
              _objc_storeStrong(&local_130,0);
            }
            else {
              local_d9 = 1;
            }
          }
          else {
            local_d9 = 1;
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_d9 & 1) != 0) {
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

