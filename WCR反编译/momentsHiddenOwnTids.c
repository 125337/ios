// momentsHiddenOwnTids @ 0205ae88

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::momentsHiddenOwnTids(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong local_148;
  ulong local_140;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_momentsHiddenOwnMoments_026c11f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar3 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,IVar1);
        }
        lVar4 = *(long *)(local_108 + local_148 * 8);
        local_d0 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_objectForKey__0269e048,&cf_tid);
        _objc_retainAutoreleasedReturnValue();
        local_118 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
        }
        _objc_storeStrong(&local_118,0);
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

