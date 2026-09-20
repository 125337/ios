// appendTargetsFromContactTagName: @ 01d3b034

/* Function Stack Size: 0x18 bytes */

void WCRefineScheduledTaskViewController::appendTargetsFromContactTagName_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_168;
  undefined *local_160;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  uint local_cc;
  ID local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar1;
  if (IVar1 == 0) {
    local_cc = 1;
  }
  else {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_usernamesForContactTagName__026c4638,
               local_c0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_160 != (undefined *)0x0) {
      lVar5 = *local_118;
      local_168 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_168 * 8);
          IVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isAutoClearChatTask_026c45a0);
          if (((IVar1 & 1) == 0) ||
             (puVar3 = PTR_WCRefineScheduledTask_026ce850,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,
                        local_e8), ((ulong)puVar3 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_168 = (undefined *)0x0;
      } while (local_160 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_130 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,
                 local_c8,_kWCRScheduledTaskKeyTargets);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_WCRefineScheduledTask_026ce850;
      local_138 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_mergeTargets_adding__026c45e8,puVar3,
                 local_130);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_b0;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_140 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_0_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_saveTargets_toast__026c45f0,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_h__NlgT_N);
    }
    local_cc = (uint)(puVar2 == (undefined *)0x0);
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

