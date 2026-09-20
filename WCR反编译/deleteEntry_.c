// deleteEntry: @ 01f1bef4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::deleteEntry_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  ID local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_appendHistoryForEntry_eventType__026c8308,local_c0,&cf_deleted);
  lVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_backend_026c7148);
  if (lVar5 == 0) {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableLocalItems_026c82d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_c8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    IVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar5 = *local_108;
      local_140 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,IVar1);
          }
          uVar6 = *(ulong *)(local_110 + local_140 * 8);
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_entryId_026c7430);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqual__0269e9a8);
          (*(code *)PTR__objc_release_02578630)(lVar3);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar4 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_saveLocalItems__026c82e0,local_d0);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_removeOfficialItemForEntry__026c8310,local_c0);
    IVar1 = local_b0;
    lVar5 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_entryId_026c7430);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_clearOfficialMetaForId__026c8348);
    (*(code *)PTR__objc_release_02578630)(lVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_broadcastChanged_026c8298);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

