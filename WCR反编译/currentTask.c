// currentTask @ 01d341a8

/* Function Stack Size: 0x10 bytes */

ID WCRefineScheduledTaskViewController::currentTask(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_138;
  undefined *local_130;
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
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
  _objc_retainAutoreleasedReturnValue();
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != (undefined *)0x0) {
    lVar6 = *local_f8;
    local_138 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,puVar2);
        }
        local_c8 = *(ID *)(local_100 + (long)local_138 * 8);
        puVar3 = PTR_WCRefineScheduledTask_026ce850;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_c8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_taskID_026c4500);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        IVar4 = local_c8;
        if (((ulong)puVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar4;
          bVar1 = true;
          goto LAB_01d343cc;
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_138 = (undefined *)0x0;
    } while (local_130 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_01d343cc:
  (*(code *)PTR__objc_release_02578630)(puVar2);
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

