// recomputeDedupCountMap @ 01b0c17c

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::recomputeDedupCountMap(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong local_160;
  ulong local_158;
  undefined *local_120;
  undefined4 local_114;
  long local_110;
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
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setDedupCountMap__026bea68,
               *(undefined8 *)PTR____NSDictionary0___02578288);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    _memset(auStack_108,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_158 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_f8;
      local_160 = 0;
      do {
        do {
          if (*local_f8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar5,IVar3);
          }
          lVar6 = *(long *)(local_100 + local_160 * 8);
          local_c8 = lVar6;
          FUN_01b0c574();
          _objc_retainAutoreleasedReturnValue();
          local_110 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
          if (lVar6 == 0) {
            local_114 = 3;
          }
          else {
            puVar4 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectForKeyedSubscript__0269d098,local_110);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_120 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_integerValue_026ca750);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_numberWithInteger__0269e080,puVar4 + 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_110);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_120,0);
            local_114 = 0;
          }
          _objc_storeStrong(&local_110,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDedupCountMap__026bea68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

