// FUN_005008b8 @ 005008b8

byte FUN_005008b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  cfstringStruct *local_e0;
  int local_d4;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,local_b8,
             _kWCRMessageSyncRuleKeyIncludeKeywords);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,local_b8,
             _kWCRMessageSyncRuleKeyExcludeKeywords);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c8;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if ((puVar1 == (undefined *)0x0) &&
     (puVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     puVar1 == (undefined *)0x0)) {
    local_a9 = 1;
    local_d4 = 1;
  }
  else {
    if (local_c0 == (cfstringStruct *)0x0) {
      local_168 = &cf___;
    }
    else {
      local_168 = local_c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_168;
    _memset(auStack_128,0,0x40);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar1);
          }
          lVar5 = *(long *)(local_120 + (long)local_198 * 8);
          local_e8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if ((lVar5 != 0) &&
             (pcVar3 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_rangeOfString_options__0269d118,local_e8,1),
             pcVar3 != (cfstringStruct *)0x7fffffffffffffff)) {
            local_a9 = 0;
            local_d4 = 1;
            goto LAB_00500bbc;
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_00500bbc:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_d4 == 0) {
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_a9 = 1;
        local_d4 = 1;
      }
      else {
        puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageSyncRule_026ce708,
                   PTR_s_matchedKeywordsForRule_matchText_026a4550,local_b8,local_e0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a9 = puVar2 != (undefined *)0x0;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_d4 = 1;
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

