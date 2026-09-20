// appendFoldedChatRoomsForAutoClear @ 01d3a3c0

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::appendFoldedChatRoomsForAutoClear(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_148;
  undefined *local_140;
  undefined *local_120;
  undefined *local_118;
  uint local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroupManagementViewController_026ce580,
             PTR_s_foldedChatRoomUsernames_026c4618);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (undefined *)0x0) {
    lVar5 = *local_f8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,puVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + (long)local_148 * 8);
        puVar2 = PTR_WCRefineScheduledTask_026ce850;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,local_c8);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  if (puVar2 != (undefined *)0x0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringArrayInTask_forKey__026a6cf0,IVar3,_kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_mergeTargets_adding__026c45e8,local_118,
               local_c0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_b0;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_120 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__eX);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_saveTargets_toast__026c45f0,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_bSv_JS_MR_Nzz);
  }
  local_10c = (uint)(puVar2 == (undefined *)0x0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

