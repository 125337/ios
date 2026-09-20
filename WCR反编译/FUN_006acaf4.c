// FUN_006acaf4 @ 006acaf4

void FUN_006acaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_398;
  ulong local_390;
  ulong local_348;
  ulong local_340;
  ulong local_2f8;
  ulong local_2f0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  ulong local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined4 local_1c4;
  ulong local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_2);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_3);
  if ((local_1b0 == 0) ||
     (uVar1 = local_1c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_containsObject__0269cbb8,local_1b0),
     (uVar1 & 1) != 0)) {
    local_1c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_1b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1b0);
    uVar1 = local_1b0;
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_1b0;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_1b0;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_218 = uVar1;
        _memset(auStack_260,0,0x40);
        uVar1 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_340 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_340 != 0) {
          lVar4 = *local_250;
          local_348 = 0;
          do {
            do {
              if (*local_250 - lVar4 != 0) {
                _objc_enumerationMutation(*local_250 - lVar4,uVar1);
              }
              local_220 = *(undefined8 *)(local_258 + local_348 * 8);
              FUN_006acaf4(local_220,local_1b8,local_1c0);
              local_348 = local_348 + 1;
            } while (local_348 < local_340);
            local_340 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128
                       ,0x10);
            local_348 = 0;
          } while (local_340 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_218;
        (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        FUN_006acaf4();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        _objc_storeStrong(&local_218,0);
      }
    }
    else {
      _memset(auStack_210,0,0x40);
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_2f0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2f0 != 0) {
        lVar4 = *local_200;
        local_2f8 = 0;
        do {
          do {
            if (*local_200 - lVar4 != 0) {
              _objc_enumerationMutation(*local_200 - lVar4,uVar1);
            }
            local_1d0 = *(undefined8 *)(local_208 + local_2f8 * 8);
            FUN_006acaf4(local_1d0,local_1b8,local_1c0);
            local_2f8 = local_2f8 + 1;
          } while (local_2f8 < local_2f0);
          local_2f0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_a8,
                     0x10);
          local_2f8 = 0;
        } while (local_2f0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _memset(auStack_2a8,0,0x40);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_390 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_390 != 0) {
      lVar4 = *local_298;
      local_398 = 0;
      do {
        do {
          if (*local_298 - lVar4 != 0) {
            _objc_enumerationMutation(*local_298 - lVar4,uVar1);
          }
          local_268 = *(undefined8 *)(local_2a0 + local_398 * 8);
          FUN_006acaf4(local_268,local_1b8,local_1c0);
          local_398 = local_398 + 1;
        } while (local_398 < local_390);
        local_390 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_1a8,
                   0x10);
        local_398 = 0;
      } while (local_390 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    FUN_006acaf4();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_1c4 = 0;
  }
  _objc_storeStrong(&local_1c0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

