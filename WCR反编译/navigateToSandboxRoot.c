// navigateToSandboxRoot @ 0199fcc8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::navigateToSandboxRoot(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_148;
  ulong local_140;
  undefined *local_110;
  int local_104;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isRoot_026a9380);
  if ((param_1 & 1) == 0) {
    _memset(auStack_100,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_140 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar5 = *local_f0;
      local_148 = 0;
      do {
        do {
          if (*local_f0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar5,IVar3);
          }
          uVar6 = *(ulong *)(local_f8 + local_148 * 8);
          puVar4 = PTR_WCRefineFileManagerViewController_026ceec8;
          local_c0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineFileManagerViewController_026ceec8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = local_c0,
             (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isRoot_026a9380), (uVar6 & 1) != 0
             )) {
            IVar1 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_unsafeClaimAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(IVar1);
            local_104 = 1;
            goto LAB_0199ffb0;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_104 = 0;
LAB_0199ffb0:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_104 == 0) {
      puVar4 = PTR_WCRefineFileManagerViewController_026ceec8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar1 = local_b0;
      local_110 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      _objc_storeStrong(&local_110,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setupNavBar_026ba288);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reload_026af6c8);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

