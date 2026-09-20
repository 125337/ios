// FUN_005448f8 @ 005448f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_005448f8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_2f0;
  ulong local_2b0;
  ulong local_2a8;
  ulong local_248;
  ulong local_240;
  bool local_1f1;
  ulong local_1f0;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  ulong local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  int local_13c;
  ulong local_138;
  byte local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  if (local_138 == 0) {
    local_129 = 0;
    local_13c = 1;
  }
  else {
    uVar1 = (uint)local_138;
    FUN_0054255c();
    uVar3 = local_138;
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        _memset(auStack_198,0,0x40);
        uVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_240 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_240 != 0) {
          lVar4 = *local_188;
          local_248 = 0;
          do {
            do {
              if (*local_188 - lVar4 != 0) {
                _objc_enumerationMutation(*local_188 - lVar4,uVar3);
              }
              local_158 = *(undefined8 *)(local_190 + local_248 * 8);
              uVar1 = (uint)local_158;
              FUN_005448f8();
              if ((uVar1 & 1) != 0) {
                local_129 = 1;
                local_13c = 1;
                goto LAB_00544bcc;
              }
              local_248 = local_248 + 1;
            } while (local_248 < local_240);
            local_240 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                       0x10);
            local_248 = 0;
          } while (local_240 != 0);
        }
        local_13c = 0;
LAB_00544bcc:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_13c != 0) goto LAB_00544f6c;
      }
      uVar3 = local_138;
      puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        _memset(auStack_1e0,0,0x40);
        uVar3 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_viewControllers_0269e348);
        _objc_retainAutoreleasedReturnValue();
        local_2a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2a8 != 0) {
          lVar4 = *local_1d0;
          local_2b0 = 0;
          do {
            do {
              if (*local_1d0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1d0 - lVar4,uVar3);
              }
              uVar5 = *(ulong *)(local_1d8 + local_2b0 * 8);
              local_1a0 = uVar5;
              FUN_005448f8();
              if ((uVar5 & 1) != 0) {
                local_129 = 1;
                local_13c = 1;
                goto LAB_00544e0c;
              }
              local_2b0 = local_2b0 + 1;
            } while (local_2b0 < local_2a8);
            local_2a8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128
                       ,0x10);
            local_2b0 = 0;
          } while (local_2a8 != 0);
        }
        local_13c = 0;
LAB_00544e0c:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_13c != 0) goto LAB_00544f6c;
      }
      uVar3 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_presentedViewController_0269d448
                );
      local_1f1 = (uVar3 & 1) == 0;
      if (local_1f1) {
        local_2f0 = 0;
      }
      else {
        local_2f0 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = local_2f0;
      }
      local_1f1 = !local_1f1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = local_2f0;
      if (local_1f1) {
        (*(code *)PTR__objc_release_02578630)(local_1f0);
      }
      uVar3 = local_1e8;
      FUN_005448f8();
      local_129 = (byte)uVar3 & 1;
      local_13c = 1;
      _objc_storeStrong(&local_1e8,0);
    }
    else {
      local_129 = 1;
      local_13c = 1;
    }
  }
LAB_00544f6c:
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_129 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

