// FUN_000b56b8 @ 000b56b8

void FUN_000b56b8(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_478;
  ulong local_470;
  ulong local_3e0;
  ulong local_3d8;
  ulong local_368;
  ulong local_360;
  ulong local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_298;
  ulong local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  ulong local_1e8 [3];
  ulong local_1d0;
  uint local_1c4;
  ulong local_1c0;
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
  if ((local_1b8 == 0) || (5 < param_2)) {
    local_1b0 = 0;
    local_1c4 = 1;
    goto LAB_000b6144;
  }
  uVar5 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_isEqualToString__0269ccc8,&cf_FindFriendEntryViewController);
  uVar3 = local_1b8;
  if ((uVar5 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar5 = local_1b8;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_1b8;
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_240 = uVar3;
        _memset(auStack_288,0,0x40);
        uVar3 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_3d8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_3d8 != 0) {
          lVar4 = *local_278;
          local_3e0 = 0;
          do {
            do {
              if (*local_278 - lVar4 != 0) {
                _objc_enumerationMutation(*local_278 - lVar4,uVar3);
              }
              uVar5 = *(ulong *)(local_280 + local_3e0 * 8);
              local_248 = uVar5;
              FUN_000b56b8(uVar5,local_1c0 + 1);
              _objc_retainAutoreleasedReturnValue();
              local_290 = uVar5;
              if (uVar5 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = uVar5;
              }
              local_1c4 = (uint)(uVar5 != 0);
              _objc_storeStrong(&local_290,0);
              if (local_1c4 != 0) goto LAB_000b5d24;
              local_3e0 = local_3e0 + 1;
            } while (local_3e0 < local_3d8);
            local_3d8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,auStack_128
                       ,0x10);
            local_3e0 = 0;
          } while (local_3d8 != 0);
        }
        local_1c4 = 0;
LAB_000b5d24:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_1c4 == 0) {
          uVar3 = local_240;
          (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_selectedViewController_0269d610);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          FUN_000b56b8();
          _objc_retainAutoreleasedReturnValue();
          local_298 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_298;
          bVar1 = local_298 != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1b0 = uVar3;
          }
          local_1c4 = (uint)bVar1;
          _objc_storeStrong(&local_298,0);
        }
        _objc_storeStrong(&local_240,0);
        if (local_1c4 != 0) goto LAB_000b6124;
      }
      uVar3 = local_1b8;
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar5 = local_1b8;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_2a0 = uVar5;
        _memset(auStack_2e8,0,0x40);
        uVar3 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_childViewControllers_0269d618);
        _objc_retainAutoreleasedReturnValue();
        local_470 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_470 != 0) {
          lVar4 = *local_2d8;
          local_478 = 0;
          do {
            do {
              if (*local_2d8 - lVar4 != 0) {
                _objc_enumerationMutation(*local_2d8 - lVar4,uVar3);
              }
              uVar5 = *(ulong *)(local_2e0 + local_478 * 8);
              local_2a8 = uVar5;
              FUN_000b56b8(uVar5,local_1c0 + 1);
              _objc_retainAutoreleasedReturnValue();
              local_2f0 = uVar5;
              if (uVar5 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1b0 = uVar5;
              }
              local_1c4 = (uint)(uVar5 != 0);
              _objc_storeStrong(&local_2f0,0);
              if (local_1c4 != 0) goto LAB_000b60c0;
              local_478 = local_478 + 1;
            } while (local_478 < local_470);
            local_470 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_1a8
                       ,0x10);
            local_478 = 0;
          } while (local_470 != 0);
        }
        local_1c4 = 0;
LAB_000b60c0:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_1c4 == 0) {
          local_1c4 = 0;
        }
        _objc_storeStrong(&local_2a0,0);
        if (local_1c4 != 0) goto LAB_000b6124;
      }
      local_1b0 = 0;
      local_1c4 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8[0] = uVar5;
      _memset(auStack_230,0,0x40);
      uVar3 = local_1e8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8[0],PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_360 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_360 != 0) {
        lVar4 = *local_220;
        local_368 = 0;
        do {
          do {
            if (*local_220 - lVar4 != 0) {
              _objc_enumerationMutation(*local_220 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_228 + local_368 * 8);
            local_1f0 = uVar5;
            FUN_000b56b8(uVar5,local_1c0 + 1);
            _objc_retainAutoreleasedReturnValue();
            local_238 = uVar5;
            if (uVar5 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar5;
            }
            local_1c4 = (uint)(uVar5 != 0);
            _objc_storeStrong(&local_238,0);
            if (local_1c4 != 0) goto LAB_000b5a5c;
            local_368 = local_368 + 1;
          } while (local_368 < local_360);
          local_360 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          local_368 = 0;
        } while (local_360 != 0);
      }
      local_1c4 = 0;
LAB_000b5a5c:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_1c4 == 0) {
        local_1b0 = 0;
        local_1c4 = 1;
      }
      _objc_storeStrong(local_1e8,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar3;
    local_1c4 = 1;
  }
LAB_000b6124:
  _objc_storeStrong(&local_1d0,0);
LAB_000b6144:
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

