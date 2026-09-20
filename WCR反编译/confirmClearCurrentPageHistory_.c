// confirmClearCurrentPageHistory: @ 01b1c128

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::confirmClearCurrentPageHistory_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  ID local_188;
  ulong local_158;
  ulong local_150;
  ID local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ID local_d8;
  undefined1 local_cd;
  undefined4 local_cc;
  ID local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_recordsOnCurrentPage_026bec08);
  _objc_retainAutoreleasedReturnValue();
  local_c8[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    local_cc = 1;
  }
  else {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_cd = (undefined1)IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSuppressRecordsChangeReload__026beba0,1)
    ;
    _memset(auStack_118,0,0x40);
    IVar2 = local_c8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar6 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar6 != 0) {
            _objc_enumerationMutation(*local_108 - lVar6,IVar2);
          }
          local_d8 = *(ID *)(local_110 + local_158 * 8);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_188 = IVar4;
          if (IVar4 == 0) {
            local_188 = local_d8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_188;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          _objc_storeStrong(&local_120,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSuppressRecordsChangeReload__026beba0,0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_exitMultiSelectMode_026bade0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData_0269e400);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__nzzS_MRu);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_cc = 0;
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

