// deleteRecordsForPendingCurrentPage @ 01b13ee4

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::deleteRecordsForPendingCurrentPage
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID local_198;
  ulong local_168;
  ulong local_160;
  ID local_128;
  ID local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ID local_d0;
  undefined1 local_c5;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPageDeleteRecords_026bebf0);
  _objc_retainAutoreleasedReturnValue();
  local_128 = param_1;
  if (param_1 == 0) {
    local_128 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_128;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingPageDeleteRecords__026bebf8,0);
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resetDraggingDeleteState_026bebe0);
    local_c4 = 1;
  }
  else {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_c5 = (undefined1)IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSuppressRecordsChangeReload__026beba0,1)
    ;
    _memset(auStack_110,0,0x40);
    IVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar4 = *local_100;
      local_168 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,IVar1);
          }
          local_d0 = *(ID *)(local_108 + local_168 * 8);
          IVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          IVar3 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_198 = IVar3;
          if (IVar3 == 0) {
            local_198 = local_d0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = local_198;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          (*(code *)PTR__objc_release_02578630)(IVar2);
          IVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar2);
          _objc_storeStrong(&local_118,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSuppressRecordsChangeReload__026beba0,0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resetDraggingDeleteState_026bebe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData_0269e400);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

