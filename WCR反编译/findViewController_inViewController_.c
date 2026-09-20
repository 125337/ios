// findViewController:inViewController: @ 00937584

/* Function Stack Size: 0x20 bytes */

ID MyAction::findViewController_inViewController_(ID param_1,SEL param_2,CLASS param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong local_198;
  ulong local_190;
  ID local_158;
  ID local_150;
  ID local_148;
  ID local_140;
  ID local_138;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ID local_e0;
  uint local_d4;
  ID local_d0;
  CLASS local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isKindOfClass__0269cd68,local_c8);
  IVar3 = local_d0;
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar3;
    local_d4 = 1;
    goto LAB_00937ab8;
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar1 = local_d0;
  if ((IVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = IVar1;
    _memset(auStack_128,0,0x40);
    IVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_viewControllers_0269e348);
    _objc_retainAutoreleasedReturnValue();
    local_190 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != 0) {
      lVar4 = *local_118;
      local_198 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,IVar3);
          }
          local_e8 = *(undefined8 *)(local_120 + local_198 * 8);
          IVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_findViewController_inViewControl_026aa718,local_c8,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar1;
          if (IVar1 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = IVar1;
          }
          local_d4 = (uint)(IVar1 != 0);
          _objc_storeStrong(&local_130,0);
          if (local_d4 != 0) goto LAB_00937824;
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    local_d4 = 0;
LAB_00937824:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_d4 == 0) {
      local_d4 = 0;
    }
    _objc_storeStrong(&local_e0,0);
    if (local_d4 != 0) goto LAB_00937ab8;
  }
  IVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar1 = local_d0;
  if ((IVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    if (IVar1 == 0) {
LAB_00937980:
      local_d4 = 0;
    }
    else {
      IVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_findViewController_inViewControl_026aa718,local_c8,IVar1);
      _objc_retainAutoreleasedReturnValue();
      local_148 = IVar3;
      if (IVar3 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = IVar3;
      }
      local_d4 = (uint)(IVar3 != 0);
      _objc_storeStrong(&local_148,0);
      if (local_d4 == 0) goto LAB_00937980;
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
    if (local_d4 != 0) goto LAB_00937ab8;
  }
  IVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_presentedViewController_0269d448);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    IVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_b8;
    local_150 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_findViewController_inViewControl_026aa718,local_c8,IVar3);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar1;
    if (IVar1 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = IVar1;
    }
    local_d4 = (uint)(IVar1 != 0);
    _objc_storeStrong(&local_158);
    _objc_storeStrong(&local_150,0);
    if (local_d4 != 0) goto LAB_00937ab8;
  }
  local_b0 = 0;
  local_d4 = 1;
LAB_00937ab8:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

