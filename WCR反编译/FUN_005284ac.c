// FUN_005284ac @ 005284ac

byte FUN_005284ac(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_240;
  ulong local_238;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  int local_144;
  ulong local_140;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = param_2;
  if ((local_138 == 0) || (0xb < param_2 && param_2 - 0xc != 0)) {
    local_129 = 0;
    local_144 = 1;
  }
  else {
    uVar4 = local_138;
    FUN_00528c30(param_2 - 0xc);
    uVar2 = local_138;
    if ((uVar4 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar4 = local_138;
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar4 & 1) != 0) {
          uVar2 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_selectedViewController_0269d610);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_005284ac();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar4 & 1) != 0) {
            local_129 = 1;
            local_144 = 1;
            goto LAB_00528b68;
          }
        }
      }
      else {
        _memset(auStack_1a0,0,0x40);
        uVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_238 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_238 != 0) {
          lVar3 = *local_190;
          local_240 = 0;
          do {
            do {
              if (*local_190 - lVar3 != 0) {
                _objc_enumerationMutation(*local_190 - lVar3,uVar2);
              }
              uVar4 = *(ulong *)(local_198 + local_240 * 8);
              local_160 = uVar4;
              FUN_005284ac(uVar4,local_140 + 1);
              if ((uVar4 & 1) != 0) {
                local_129 = 1;
                local_144 = 1;
                goto LAB_00528778;
              }
              local_240 = local_240 + 1;
            } while (local_240 < local_238);
            local_238 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                       0x10);
            local_240 = 0;
          } while (local_238 != 0);
        }
        local_144 = 0;
LAB_00528778:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_144 != 0) goto LAB_00528b68;
      }
      _memset(auStack_1e8,0,0x40);
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_2b8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2b8 != 0) {
        lVar3 = *local_1d8;
        local_2c0 = 0;
        do {
          do {
            if (*local_1d8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1d8 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_1e0 + local_2c0 * 8);
            local_1a8 = uVar4;
            FUN_005284ac(uVar4,local_140 + 1);
            if ((uVar4 & 1) != 0) {
              local_129 = 1;
              local_144 = 1;
              goto LAB_00528a4c;
            }
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                     0x10);
          local_2c0 = 0;
        } while (local_2b8 != 0);
      }
      local_144 = 0;
LAB_00528a4c:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_144 == 0) {
        uVar2 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar2 == 0) {
          local_129 = 0;
          local_144 = 1;
        }
        else {
          uVar2 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_005284ac();
          local_129 = (byte)uVar4 & 1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_144 = 1;
        }
      }
    }
    else {
      local_129 = 1;
      local_144 = 1;
    }
  }
LAB_00528b68:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

