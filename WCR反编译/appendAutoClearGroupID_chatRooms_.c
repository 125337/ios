// appendAutoClearGroupID:chatRooms: @ 01d39f24

/* Function Stack Size: 0x1c bytes */

void WCRefineScheduledTaskViewController::appendAutoClearGroupID_chatRooms_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_168;
  undefined *local_160;
  undefined *local_138;
  undefined *local_130;
  uint local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c1;
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
  local_c1 = (byte)param_4;
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_usernamesForHomeGroupID_refreshB_026af4c0,
             local_c0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  puVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar1);
        }
        local_e0 = *(undefined8 *)(local_118 + (long)local_168 * 8);
        puVar2 = PTR_WCRefineScheduledTask_026ce850;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,local_e0);
        if ((uint)puVar2 == (local_c1 & 1)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  if (puVar2 != (undefined *)0x0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringArrayInTask_forKey__026a6cf0,IVar3,_kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_mergeTargets_adding__026c45e8,local_130,
               local_d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_b0;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_138 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__eX);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_saveTargets_toast__026c45f0,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_138);
    _objc_storeStrong(&local_130,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_feSO);
  }
  local_124 = (uint)(puVar2 == (undefined *)0x0);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

