// linkedGroupsForTab: @ 0151c534

/* Function Stack Size: 0x18 bytes */

ID WCRefineTelegramGroupingStore::linkedGroupsForTab_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong local_188;
  ulong local_180;
  undefined1 *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_linkedGroupIds_026b00e8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (uVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_linkedGroupsByTab_026b0248);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tabId_026a8270);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_d8;
    if (local_d8 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar3;
      _memset(auStack_128,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_linkedGroupIds_026b00e8);
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_180 != 0) {
        lVar6 = *local_118;
        local_188 = 0;
        do {
          do {
            if (*local_118 - lVar6 != 0) {
              _objc_enumerationMutation(*local_118 - lVar6,uVar1);
            }
            local_e8 = *(undefined8 *)(local_120 + local_188 * 8);
            puVar3 = PTR_WCRefineGroupManager_026ce2b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_130 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (((local_130 != (undefined1 *)0x0) &&
                (puVar5 = local_130,
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_disabled_026a2c20),
                ((ulong)puVar5 & 1) == 0)) &&
               (puVar5 = local_130,
               (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_kind_026a27e8),
               puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 2))) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
            }
            _objc_storeStrong(&local_130,0);
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_linkedGroupsByTab_026b0248);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setLinkedGroupsByTab__026b0250);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_e0;
      puVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_linkedGroupsByTab_026b0248);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tabId_026a8270);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_cc = 1;
      _objc_storeStrong(&local_e0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar3;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

