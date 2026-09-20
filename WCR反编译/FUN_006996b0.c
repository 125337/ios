// FUN_006996b0 @ 006996b0

void FUN_006996b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_388;
  ulong local_380;
  ulong local_368;
  ulong local_330;
  ulong local_328;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  undefined8 local_260;
  ulong local_258;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined4 local_1bc;
  long local_1b8;
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
  if ((local_1b0 == 0) || (local_1b8 == 0)) {
    local_1bc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1b0);
    _memset(auStack_208,0,0x40);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_2d0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2d0 != 0) {
      lVar4 = *local_1f8;
      local_2d8 = 0;
      do {
        do {
          if (*local_1f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar4,uVar1);
          }
          local_1c8 = *(undefined8 *)(local_200 + local_2d8 * 8);
          FUN_006996b0(local_1c8,local_1b8);
          local_2d8 = local_2d8 + 1;
        } while (local_2d8 < local_2d0);
        local_2d0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_a8,0x10
                  );
        local_2d8 = 0;
      } while (local_2d0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 != 0) {
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      FUN_006996b0();
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
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
        local_258 = uVar1;
        _memset(auStack_2a0,0,0x40);
        uVar1 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_368 = uVar1;
        if (uVar1 == 0) {
          local_368 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_380 = local_368;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_368,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_1a8
                   ,0x10);
        if (local_380 != 0) {
          lVar4 = *local_290;
          local_388 = 0;
          do {
            do {
              if (*local_290 - lVar4 != 0) {
                _objc_enumerationMutation(*local_290 - lVar4,local_368);
              }
              local_260 = *(undefined8 *)(local_298 + local_388 * 8);
              FUN_006996b0(local_260,local_1b8);
              local_388 = local_388 + 1;
            } while (local_388 < local_380);
            local_380 = local_368;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_368,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                       auStack_1a8,0x10);
            local_388 = 0;
          } while (local_380 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(local_368);
        uVar1 = local_258;
        (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar1 != 0) {
          uVar1 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_selectedViewController_0269d610);
          _objc_retainAutoreleasedReturnValue();
          FUN_006996b0();
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        _objc_storeStrong(&local_258,0);
      }
    }
    else {
      _memset(auStack_250,0,0x40);
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_328 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_328 != 0) {
        lVar4 = *local_240;
        local_330 = 0;
        do {
          do {
            if (*local_240 - lVar4 != 0) {
              _objc_enumerationMutation(*local_240 - lVar4,uVar1);
            }
            local_210 = *(undefined8 *)(local_248 + local_330 * 8);
            FUN_006996b0(local_210,local_1b8);
            local_330 = local_330 + 1;
          } while (local_330 < local_328);
          local_328 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_128,
                     0x10);
          local_330 = 0;
        } while (local_328 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_1bc = 0;
  }
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

