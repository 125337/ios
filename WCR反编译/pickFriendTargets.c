// pickFriendTargets @ 01d39180

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickFriendTargets(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  undefined *local_190;
  undefined *local_188;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = param_1;
  if (param_1 == 0) {
    local_c4 = 1;
  }
  else {
    puVar3 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,param_1,
               _kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar4;
    _memset(auStack_120,0,0x40);
    puVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_188 != (undefined *)0x0) {
      lVar6 = *local_110;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,puVar3);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_190 * 8);
          puVar4 = PTR_WCRefineScheduledTask_026ce850;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,local_e0)
          ;
          if ((((ulong)puVar4 & 1) == 0) &&
             (puVar4 = PTR_WCRefineScheduledTask_026ce850,
             (*(code *)PTR__objc_msgSend_02578628)
                       (PTR_WCRefineScheduledTask_026ce850,PTR_s_isGroupTarget__026af4a8,local_e0),
             ((ulong)puVar4 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_initWeak(auStack_128,local_b0);
    IVar2 = local_b0;
    puVar3 = PTR_WCRefineGroupManagementViewController_026ce580;
    IVar5 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isAutoClearChatTask_026c45a0);
    local_148 = local_d0;
    puVar4 = local_d8;
    pcVar1 = &cf_byJ;
    if ((IVar5 & 1) == 0) {
      pcVar1 = &cf_b_YS;
    }
    local_168 = PTR___NSConcreteStackBlock_02578660;
    local_160 = 0xc2000000;
    local_15c = 0;
    local_158 = FUN_01d395a4;
    local_150 = &DAT_025887c8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_copyWeak(auStack_140,auStack_128);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_presentOfficialContactPickerFrom_026ac950,IVar2,pcVar1,puVar4,&local_168
              );
    _objc_destroyWeak(auStack_140);
    _objc_storeStrong(&local_148);
    _objc_destroyWeak(auStack_128);
    _objc_storeStrong(&local_d8,0);
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

