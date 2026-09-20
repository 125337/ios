// findNavigationController: @ 009076d0

/* Function Stack Size: 0x18 bytes */

ID LogFloatingBall::findNavigationController_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ulong local_188;
  ulong local_180;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ID local_d8;
  uint local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar4 = local_c8;
  if ((IVar3 & 1) == 0) {
    IVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 == 0) {
      IVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      IVar3 = local_b8;
      if (IVar4 != 0) {
        IVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_findNavigationController__026aa010);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        IVar3 = local_d8;
        bVar1 = local_d8 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = IVar3;
        }
        local_cc = (uint)bVar1;
        _objc_storeStrong(&local_d8,0);
        if (local_cc != 0) goto LAB_00907ac0;
      }
      _memset(auStack_120,0,0x40);
      IVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_180 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_180 != 0) {
        lVar5 = *local_110;
        local_188 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,IVar3);
            }
            local_e0 = *(undefined8 *)(local_118 + local_188 * 8);
            IVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_findNavigationController__026aa010,local_e0);
            _objc_retainAutoreleasedReturnValue();
            local_128 = IVar4;
            if (IVar4 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = IVar4;
            }
            local_cc = (uint)(IVar4 != 0);
            _objc_storeStrong(&local_128,0);
            if (local_cc != 0) goto LAB_00907a90;
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_cc = 0;
LAB_00907a90:
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (local_cc == 0) {
        local_b0 = 0;
        local_cc = 1;
      }
    }
    else {
      IVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = IVar3;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar4;
    local_cc = 1;
  }
LAB_00907ac0:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

