// resolvedTargets @ 00f68b90

/* Function Stack Size: 0x10 bytes */

ID WCRForwardToGroupPickerViewController::resolvedTargets(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_258;
  ulong local_250;
  ulong local_1f8;
  ulong local_1f0;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined8 local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar1;
  _memset(auStack_188,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedGroupIDs_026ac910);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1f0 != 0) {
    lVar6 = *local_178;
    local_1f8 = 0;
    do {
      do {
        if (*local_178 - lVar6 != 0) {
          _objc_enumerationMutation(*local_178 - lVar6,IVar2);
        }
        IVar4 = local_130;
        puVar1 = local_140;
        local_148 = *(undefined8 *)(local_180 + local_1f8 * 8);
        IVar3 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_groupForId__026a27e0,local_148);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_usernamesForGroup__026ac918);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _memset(auStack_1d0,0,0x40);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_historyItems_026ac8d0);
  _objc_retainAutoreleasedReturnValue();
  local_250 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_250 != 0) {
    lVar6 = *local_1c0;
    local_258 = 0;
    do {
      do {
        if (*local_1c0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1c0 - lVar6,IVar2);
        }
        local_190 = *(undefined8 *)(local_1c8 + local_258 * 8);
        IVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectedHistoryIDs_026ac920);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_itemId_026ac860);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar1 = local_140;
        if ((IVar3 & 1) != 0) {
          uVar5 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_usernames_026ac868);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_258 = local_258 + 1;
      } while (local_258 < local_250);
      local_250 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_128,0x10)
      ;
      local_258 = 0;
    } while (local_250 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_140;
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pickedUsernames_026ac928);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

