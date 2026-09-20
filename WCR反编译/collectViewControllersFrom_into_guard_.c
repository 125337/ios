// collectViewControllersFrom:into:guard: @ 00ffb70c

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkMediaSender::collectViewControllersFrom_into_guard_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long *param_5)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_3b8;
  ulong local_3b0;
  ulong local_398;
  ulong local_360;
  ulong local_358;
  ulong local_2f8;
  ulong local_2f0;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  ulong local_278;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined4 local_1d4;
  long_long *local_1d0;
  long local_1c8;
  ulong local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c0 = 0;
  local_1b8 = param_2;
  local_1b0 = param_1;
  _objc_storeStrong(&local_1c0,param_3);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_4);
  local_1d0 = param_5;
  if ((((local_1c0 == 0) || (local_1c8 == 0)) || (param_5 == (long_long *)0x0)) ||
     (0x40 < (long)*param_5)) {
    local_1d4 = 1;
  }
  else {
    *param_5 = *param_5 + 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_1c0);
    _memset(auStack_220,0,0x40);
    uVar2 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_childViewControllers_0269d618);
    _objc_retainAutoreleasedReturnValue();
    local_2f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2f0 != 0) {
      lVar5 = *local_210;
      local_2f8 = 0;
      do {
        do {
          if (*local_210 - lVar5 != 0) {
            _objc_enumerationMutation(*local_210 - lVar5,uVar2);
          }
          local_1e0 = *(undefined8 *)(local_218 + local_2f8 * 8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_collectViewControllersFrom_into__026ad898,local_1e0,local_1c8,
                     local_1d0);
          local_2f8 = local_2f8 + 1;
        } while (local_2f8 < local_2f0);
        local_2f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10
                  );
        local_2f8 = 0;
      } while (local_2f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar1 = local_1b0;
    if (uVar2 != 0) {
      uVar2 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_collectViewControllersFrom_into__026ad898,uVar2,local_1c8,local_1d0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_1c0;
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar4 = local_1c0;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar2 = local_1c0;
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_278 = uVar2;
        _memset(auStack_2c0,0,0x40);
        uVar2 = local_278;
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_398 = uVar2;
        if (uVar2 == 0) {
          local_398 = *(ulong *)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_3b0 = local_398;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_398,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8
                   ,0x10);
        if (local_3b0 != 0) {
          lVar5 = *local_2b0;
          local_3b8 = 0;
          do {
            do {
              if (*local_2b0 - lVar5 != 0) {
                _objc_enumerationMutation(*local_2b0 - lVar5,local_398);
              }
              local_280 = *(undefined8 *)(local_2b8 + local_3b8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b0,PTR_s_collectViewControllersFrom_into__026ad898,local_280,
                         local_1c8,local_1d0);
              local_3b8 = local_3b8 + 1;
            } while (local_3b8 < local_3b0);
            local_3b0 = local_398;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_398,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                       auStack_1a8,0x10);
            local_3b8 = 0;
          } while (local_3b0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(local_398);
        _objc_storeStrong(&local_278,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = uVar4;
      _memset(auStack_270,0,0x40);
      uVar2 = local_228;
      (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_358 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_358 != 0) {
        lVar5 = *local_260;
        local_360 = 0;
        do {
          do {
            if (*local_260 - lVar5 != 0) {
              _objc_enumerationMutation(*local_260 - lVar5,uVar2);
            }
            local_230 = *(undefined8 *)(local_268 + local_360 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_collectViewControllersFrom_into__026ad898,local_230,local_1c8
                       ,local_1d0);
            local_360 = local_360 + 1;
          } while (local_360 < local_358);
          local_358 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_128,
                     0x10);
          local_360 = 0;
        } while (local_358 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_228,0);
    }
    local_1d4 = 0;
  }
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

