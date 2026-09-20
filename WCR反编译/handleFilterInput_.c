// handleFilterInput: @ 01b1b50c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::handleFilterInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_160;
  ulong local_158;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01b0f0fc();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar1 < 0x201) {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar6 = *local_118;
      local_160 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar1);
          }
          lVar7 = *(long *)(local_120 + local_160 * 8);
          local_e8 = lVar7;
          FUN_01b0f0fc();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
          }
          _objc_storeStrong(&local_130,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCurrentPage__0269f4f0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData_0269e400);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ_);
    local_cc = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

