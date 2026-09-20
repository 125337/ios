// displayedHistoryRecords @ 01b26960

/* Function Stack Size: 0x10 bytes */

ID WCRefineKeywordAlertHistoryViewController::displayedHistoryRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_278;
  undefined1 *local_270;
  ulong local_228;
  ulong local_220;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158;
  undefined1 *local_150;
  ID local_148;
  SEL local_140;
  ID local_138;
  undefined1 *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = param_2;
  local_138 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_historyRecords_026bea70);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_138;
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_shouldHideDuplicateRecords_026bea60);
  if (((IVar2 & 1) == 0) ||
     (IVar2 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0),
     IVar2 < 2)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObjectsFromArray__0269d540,local_148);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar1;
    _memset(auStack_1a0,0,0x40);
    IVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
    if (local_220 != 0) {
      lVar4 = *local_190;
      local_228 = 0;
      do {
        do {
          if (*local_190 - lVar4 != 0) {
            _objc_enumerationMutation(*local_190 - lVar4,IVar2);
          }
          lVar5 = *(long *)(local_198 + local_228 * 8);
          local_160 = lVar5;
          FUN_01b24660();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_160);
            local_1ac = 3;
          }
          else {
            puVar1 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_containsObject__0269cbb8,local_1a8);
            if (((ulong)puVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1a8);
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_160);
              local_1ac = 0;
            }
            else {
              local_1ac = 3;
            }
          }
          _objc_storeStrong(&local_1a8,0);
          local_228 = local_228 + 1;
        } while (local_228 < local_220);
        local_220 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_228 = 0;
      } while (local_220 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_158,0);
  }
  IVar2 = local_138;
  (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_ascendingSortOrder_026be8f0);
  if (((IVar2 & 1) == 0) ||
     (puVar3 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0),
     puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088,
     puVar3 <= (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
    puVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_copy_0269d150);
    local_1ac = 1;
    local_130 = puVar3;
  }
  else {
    puVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = puVar1;
    _memset(auStack_200,0,0x40);
    puVar3 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_reverseObjectEnumerator_0269d220);
    _objc_retainAutoreleasedReturnValue();
    local_270 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != (undefined1 *)0x0) {
      lVar4 = *local_1f0;
      local_278 = (undefined1 *)0x0;
      do {
        do {
          if (*local_1f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar4,puVar3);
          }
          local_1c0 = *(undefined8 *)(local_1f8 + (long)local_278 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1c0);
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                   0x10);
        local_278 = (undefined1 *)0x0;
      } while (local_270 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_copy_0269d150);
    local_1ac = 1;
    local_130 = puVar3;
    _objc_storeStrong(&local_1b8,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_130;
}

