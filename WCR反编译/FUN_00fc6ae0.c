// FUN_00fc6ae0 @ 00fc6ae0

void FUN_00fc6ae0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_3e8;
  ulong local_3e0;
  ulong local_398;
  ulong local_390;
  ulong local_328;
  ulong local_320;
  ulong local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  uint local_1c4;
  long local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  local_1c0 = param_2;
  if ((local_1b8 == 0) || (param_2 == 0)) {
    local_1b0 = 0;
    local_1c4 = 1;
  }
  else {
    uVar5 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_isKindOfClass__0269cd68,param_2);
    uVar2 = local_1b8;
    if ((uVar5 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar5 = local_1b8;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_selectedViewController_0269d610);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        FUN_00fc6ae0();
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar2 = local_1d8;
        if (local_1d8 == 0) {
          _memset(auStack_220,0,0x40);
          uVar2 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          local_320 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_320 != 0) {
            lVar4 = *local_210;
            local_328 = 0;
            do {
              do {
                if (*local_210 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_210 - lVar4,uVar2);
                }
                uVar3 = *(ulong *)(local_218 + local_328 * 8);
                local_1e0 = uVar3;
                FUN_00fc6ae0(uVar3,local_1c0);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_1d8;
                local_1d8 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar5);
                uVar5 = local_1d8;
                if (local_1d8 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b0 = uVar5;
                  local_1c4 = 1;
                  goto LAB_00fc6e0c;
                }
                local_328 = local_328 + 1;
              } while (local_328 < local_320);
              local_320 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                         auStack_a8,0x10);
              local_328 = 0;
            } while (local_320 != 0);
          }
          local_1c4 = 0;
LAB_00fc6e0c:
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_1c4 == 0) {
            local_1c4 = 0;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar2;
          local_1c4 = 1;
        }
        _objc_storeStrong(&local_1d8);
        _objc_storeStrong(&local_1d0,0);
        if (local_1c4 != 0) goto LAB_00fc733c;
      }
      uVar2 = local_1b8;
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar5 = local_1b8;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_228 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        FUN_00fc6ae0();
        _objc_retainAutoreleasedReturnValue();
        local_230 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar2 = local_230;
        if (local_230 == 0) {
          _memset(auStack_278,0,0x40);
          uVar2 = local_228;
          (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          local_390 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_390 != 0) {
            lVar4 = *local_268;
            local_398 = 0;
            do {
              do {
                if (*local_268 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_268 - lVar4,uVar2);
                }
                uVar3 = *(ulong *)(local_270 + local_398 * 8);
                local_238 = uVar3;
                FUN_00fc6ae0(uVar3,local_1c0);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = local_230;
                local_230 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar5);
                uVar5 = local_230;
                if (local_230 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_1b0 = uVar5;
                  local_1c4 = 1;
                  goto LAB_00fc70d4;
                }
                local_398 = local_398 + 1;
              } while (local_398 < local_390);
              local_390 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                         auStack_128,0x10);
              local_398 = 0;
            } while (local_390 != 0);
          }
          local_1c4 = 0;
LAB_00fc70d4:
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_1c4 == 0) {
            local_1c4 = 0;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar2;
          local_1c4 = 1;
        }
        _objc_storeStrong(&local_230);
        _objc_storeStrong(&local_228,0);
        if (local_1c4 != 0) goto LAB_00fc733c;
      }
      _memset(auStack_2c0,0,0x40);
      uVar2 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_3e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3e0 != 0) {
        lVar4 = *local_2b0;
        local_3e8 = 0;
        do {
          do {
            if (*local_2b0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2b0 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_2b8 + local_3e8 * 8);
            local_280 = uVar5;
            FUN_00fc6ae0(uVar5,local_1c0);
            _objc_retainAutoreleasedReturnValue();
            local_2c8 = uVar5;
            if (uVar5 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar5;
            }
            local_1c4 = (uint)(uVar5 != 0);
            _objc_storeStrong(&local_2c8,0);
            if (local_1c4 != 0) goto LAB_00fc72c4;
            local_3e8 = local_3e8 + 1;
          } while (local_3e8 < local_3e0);
          local_3e0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,
                     0x10);
          local_3e8 = 0;
        } while (local_3e0 != 0);
      }
      local_1c4 = 0;
LAB_00fc72c4:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_1c4 == 0) {
        uVar2 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        FUN_00fc6ae0();
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_1c4 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = uVar2;
      local_1c4 = 1;
    }
  }
LAB_00fc733c:
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

