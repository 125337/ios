// FUN_002d524c @ 002d524c

byte FUN_002d524c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_168;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  ulong local_e0 [3];
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_002d5b2c();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  if (param_1 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = param_1;
    if (param_1 == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
    else {
      local_e9 = 0;
      puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((param_1 & 1) == 0) {
        local_168 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = local_168;
      }
      else {
        local_168 = local_c8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_e0[0] = local_168;
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      if (local_e0[0] == 0) {
        local_a9 = 0;
        local_bc = 1;
      }
      else {
        uVar2 = local_e0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = uVar2;
        if ((uVar2 == 0) || (FUN_002d5dd0(uVar2,&cf_WCTimeLineViewController), (uVar2 & 1) != 0)) {
          local_a9 = 0;
          local_bc = 1;
        }
        else {
          _memset(auStack_140,0,0x40);
          uVar2 = local_e0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_1a8 != 0) {
            lVar3 = *local_130;
            local_1b0 = 0;
            do {
              do {
                if (*local_130 - lVar3 != 0) {
                  _objc_enumerationMutation(*local_130 - lVar3,uVar2);
                }
                uVar4 = *(ulong *)(local_138 + local_1b0 * 8);
                local_100 = uVar4;
                FUN_002d5dd0(uVar4,&cf_WCTimeLineViewController);
                if ((uVar4 & 1) != 0) {
                  local_a9 = 1;
                  local_bc = 1;
                  goto LAB_002d5690;
                }
                local_1b0 = local_1b0 + 1;
              } while (local_1b0 < local_1a8);
              local_1a8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,
                         auStack_a8,0x10);
              local_1b0 = 0;
            } while (local_1a8 != 0);
          }
          local_bc = 0;
LAB_002d5690:
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_bc == 0) {
            local_a9 = 0;
            local_bc = 1;
          }
        }
        _objc_storeStrong(&local_f8,0);
      }
      _objc_storeStrong(local_e0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

