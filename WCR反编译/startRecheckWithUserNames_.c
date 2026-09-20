// startRecheckWithUserNames: @ 00f77164

/* Function Stack Size: 0x18 bytes */

bool WCRefineFriendRelationChecker::startRecheckWithUserNames_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  ulong local_148;
  undefined *local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_running_026aca70);
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    if (local_c8 == 0) {
      local_148 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_148 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
              );
    if (local_160 != 0) {
      lVar4 = *local_118;
      local_168 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,local_148);
          }
          lVar5 = *(long *)(local_120 + local_168 * 8);
          local_e8 = lVar5;
          FUN_00f73814();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if ((lVar5 == 0) ||
             (puVar2 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_e0,PTR_s_containsObject__0269cbb8,local_130), ((ulong)puVar2 & 1) != 0
             )) {
            local_cc = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_130);
            local_cc = 0;
          }
          _objc_storeStrong(&local_130,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_148);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_a9 = 0;
      local_cc = 1;
    }
    else {
      puVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setRecheckQueue__026acb38);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setRecheckCursor__026acb40);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setRechecking__026acb10,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setRunning__026acb08,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setTransportRetryCount__026acb18,0);
      puVar2 = PTR_WCRefineFriendRelationStore_026cebd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
      _objc_retainAutoreleasedReturnValue();
      local_138 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,_kWCRFriendRelationStatusRunning
                 ,&cf_status);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_pauseReason);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_updatedAt);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_138);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_startNext_026acb20);
      local_a9 = 1;
      local_cc = 1;
      _objc_storeStrong(&local_138,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  else {
    local_a9 = 0;
    local_cc = 1;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

