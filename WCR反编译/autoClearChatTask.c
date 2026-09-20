// autoClearChatTask @ 014b3a38

/* Function Stack Size: 0x10 bytes */

ID WCRefineScheduledTask::autoClearChatTask(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  _memset(auStack_108,0,0x40);
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tasks_026a53a8);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar5 = *local_f8;
    local_138 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,IVar3);
        }
        local_c8 = *(ID *)(local_100 + local_138 * 8);
        IVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isAutoClearChatTask__026a6cc0,local_c8)
        ;
        IVar2 = local_c8;
        if ((IVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar2;
          bVar1 = true;
          goto LAB_014b3bdc;
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  bVar1 = false;
LAB_014b3bdc:
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

