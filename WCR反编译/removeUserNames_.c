// removeUserNames: @ 00f7f604

/* Function Stack Size: 0x18 bytes */

void WCRefineFriendRelationStore::removeUserNames_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ID local_180;
  ulong local_158;
  ulong local_150;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  ID local_d8;
  ID local_d0;
  undefined4 local_c4;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_c4 = 1;
  }
  else {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableSnapshot_026aca58);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_b0;
    local_d0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resultsFromSnapshot__026acb00,IVar2);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_120,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_110;
      local_158 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar1);
          }
          lVar5 = *(long *)(local_118 + local_158 * 8);
          local_e0 = lVar5;
          FUN_00f7e630();
          _objc_retainAutoreleasedReturnValue();
          local_128 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_removeObjectForKey__0269d700,local_128);
          }
          _objc_storeStrong(&local_128,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    IVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    local_180 = IVar2;
    if (IVar2 == 0) {
      local_180 = *(ID *)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_180,&cf_results);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_saveSnapshot__026aca60,local_d0);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

