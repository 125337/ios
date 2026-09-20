// FUN_00151690 @ 00151690

void FUN_00151690(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_188;
  undefined *local_180;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  uVar2 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if ((uVar2 & 1) != 0) {
    uVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = 1;
    local_b0 = uVar5;
    goto LAB_00151f20;
  }
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_180 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_180 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_188 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar3);
        }
        uVar5 = *(ulong *)(local_110 + (long)local_188 * 8);
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
        if ((uVar5 & 1) == 0) {
          _objc_storeStrong(&local_d0,local_d8);
          local_c8 = 2;
          goto LAB_001519fc;
        }
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_188 = (undefined *)0x0;
    } while (local_180 != (undefined *)0x0);
  }
  local_c8 = 0;
LAB_001519fc:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_d0 == 0) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else {
    uVar5 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_120 = uVar5;
    while( true ) {
      uVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar5 = local_120;
      if (uVar2 == 0) break;
      uVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_120;
      local_120 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_120;
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        local_128 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar5 = local_128;
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          uVar2 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar2 & 1) == 0) {
            local_c8 = 0;
          }
          else {
            uVar5 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            local_c8 = 1;
            local_b0 = uVar5;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar5;
          local_c8 = 1;
        }
        _objc_storeStrong(&local_128,0);
        if (local_c8 != 0) goto LAB_00151ee0;
      }
      uVar5 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      uVar2 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if ((uVar2 & 1) == 0) {
        local_b0 = 0;
        local_c8 = 1;
      }
      else {
        uVar5 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = 1;
        local_b0 = uVar5;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_c8 = 1;
    }
LAB_00151ee0:
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_d0,0);
LAB_00151f20:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

