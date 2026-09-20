// panelItemsFilteredBy: @ 01132510

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyStore::panelItemsFilteredBy_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_d0,
     (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_all),
     (uVar1 & 1) != 0)) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_panelItems_026af328);
    _objc_retainAutoreleasedReturnValue();
    local_d4 = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar2;
    _memset(auStack_128,0,0x40);
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_panelItems_026af328);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != (undefined *)0x0) {
      lVar5 = *local_118;
      local_150 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_150 * 8);
          puVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_filterTypeForItem__026af330,local_e8)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_150 = (undefined *)0x0;
      } while (local_148 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_d4 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

