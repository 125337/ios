// leftNavigationItem @ 00f9f26c

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::leftNavigationItem(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined *local_148;
  undefined *local_140;
  ID local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ID local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  _memset(auStack_110,0,0x40);
  puVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_childViewControllers_0269d618);
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != (undefined *)0x0) {
    lVar5 = *local_100;
    local_148 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,puVar3);
        }
        IVar6 = *(ID *)(local_108 + (long)local_148 * 8);
        local_d0 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_118 = IVar4;
        (*(code *)PTR__objc_release_02578630)(IVar6);
        IVar4 = local_118;
        bVar1 = local_118 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar4;
        }
        _objc_storeStrong(&local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_00f9f498;
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_148 = (undefined *)0x0;
    } while (local_140 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_00f9f498:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

