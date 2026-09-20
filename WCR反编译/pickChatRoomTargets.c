// pickChatRoomTargets @ 01d38c30

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickChatRoomTargets(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_198;
  undefined *local_190;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
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
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,param_1,
               _kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar3;
    _memset(auStack_120,0,0x40);
    puVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar5 = *local_110;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,puVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_198 * 8);
          puVar3 = PTR_WCRefineScheduledTask_026ce850;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineScheduledTask_026ce850,PTR_s_isChatRoomUsername__026af4a0,local_e0)
          ;
          if (((ulong)puVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_initWeak(auStack_128,local_b0);
    IVar1 = local_b0;
    puVar3 = local_d8;
    puVar2 = PTR_WCRefineChatRoomPicker_026cef60;
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_01d3900c;
    local_140 = &DAT_025887c8;
    puVar4 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = puVar4;
    _objc_copyWeak(auStack_130,auStack_128);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_presentFromViewController_title__026ab898,IVar1,&cf_b_J,puVar3,
               &local_158);
    _objc_destroyWeak(auStack_130);
    _objc_storeStrong(&local_138);
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

