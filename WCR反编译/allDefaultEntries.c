// allDefaultEntries @ 010f949c

/* Function Stack Size: 0x10 bytes */

ID WCRefinePluginIconCatalog::allDefaultEntries(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
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
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allCategories_026aed18);
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_128 != 0) {
    lVar4 = *local_f8;
    local_130 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,IVar2);
        }
        IVar3 = local_b0;
        puVar1 = local_c0;
        uVar5 = *(undefined8 *)(local_100 + local_130 * 8);
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_integerValue_026ca750);
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_defaultEntriesForCategory__026aed20,uVar5)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
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

