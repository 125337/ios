// FUN_0083012c @ 0083012c

byte FUN_0083012c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_198;
  ulong local_150;
  byte local_141;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8 [3];
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar5 = local_b8;
    FUN_0082fb1c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_b8;
    local_d0 = uVar5;
    if ((uVar5 == 0) || (uVar5 == local_c0)) {
      puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_198 = 0;
      }
      else {
        local_198 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_198;
      if (local_198 == 0) {
        _memset(auStack_138,0,0x40);
        uVar3 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1c0 != 0) {
          lVar4 = *local_128;
          local_1c8 = 0;
          do {
            do {
              if (*local_128 - lVar4 != 0) {
                _objc_enumerationMutation(*local_128 - lVar4,uVar3);
              }
              uVar5 = *(ulong *)(local_130 + local_1c8 * 8);
              puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
              local_f8 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              if ((uVar5 & 1) != 0) {
                _objc_storeStrong(&local_f0,local_f8);
                local_c4 = 5;
                goto LAB_008305b8;
              }
              local_1c8 = local_1c8 + 1;
            } while (local_1c8 < local_1c0);
            local_1c0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            local_1c8 = 0;
          } while (local_1c0 != 0);
        }
        local_c4 = 0;
LAB_008305b8:
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (local_f0 == 0) {
        local_a9 = 0;
        local_c4 = 1;
      }
      else {
        local_141 = 0;
        uVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_dataSource_0269e800);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        bVar1 = false;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_dataSource_0269e800);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 1;
          bVar1 = uVar5 != local_c0;
          local_140 = uVar5;
        }
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (bVar1) {
          local_a9 = 1;
          local_c4 = 1;
        }
        else {
          uVar3 = local_f0;
          FUN_0082fb1c();
          _objc_retainAutoreleasedReturnValue();
          local_a9 = uVar3 != 0 && uVar3 != local_c0;
          local_c4 = 1;
          local_150 = uVar3;
          _objc_storeStrong(&local_150,0);
        }
      }
      _objc_storeStrong(&local_f0,0);
    }
    else {
      uVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_parentViewController_0269e500);
      _objc_retainAutoreleasedReturnValue();
      local_e8[0] = uVar3;
      while (local_e8[0] != 0) {
        if (local_e8[0] == local_d0) {
          local_a9 = 0;
          local_c4 = 1;
          goto LAB_008302f0;
        }
        uVar5 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_e8[0];
        local_e8[0] = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_c4 = 2;
LAB_008302f0:
      _objc_storeStrong(local_e8,0);
      if (local_c4 == 2) {
        local_a9 = 1;
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

