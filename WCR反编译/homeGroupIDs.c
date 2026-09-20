// homeGroupIDs @ 014bab48

/* Function Stack Size: 0x10 bytes */

ID WCRefineScheduledTask::homeGroupIDs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_148;
  undefined *local_140;
  undefined *local_128;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_128 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_140 = local_128;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_140 != (undefined *)0x0) {
    lVar4 = *local_f8;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,local_128);
        }
        lVar5 = *(long *)(local_100 + (long)local_148 * 8);
        local_c8 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_groupId_0269ea88);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        FUN_014b5580();
        _objc_retainAutoreleasedReturnValue();
        local_110 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar5);
        lVar3 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
        if ((lVar3 != 0) &&
           (puVar1 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,local_110),
           ((ulong)puVar1 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_110);
        }
        _objc_storeStrong(&local_110,0);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_128);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

