// FUN_002b7f4c @ 002b7f4c

void FUN_002b7f4c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1b8;
  ulong local_1b0;
  uint local_15c;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if ((local_b8 == 0) || (0xe < param_2)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar5 = local_b8;
    local_15c = 0;
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___UITabBar_026ce260;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_15c = (uint)uVar5;
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar5 = local_b8;
    if ((local_15c & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_1b0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_1b0 != 0) {
        lVar4 = *local_110;
        local_1b8 = 0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_118 + local_1b8 * 8);
            local_e0 = uVar5;
            FUN_002b7f4c(uVar5,local_c0 + 1);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar5;
            if (uVar5 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar5;
            }
            local_c4 = (uint)(uVar5 != 0);
            _objc_storeStrong(&local_128,0);
            if (local_c4 != 0) goto LAB_002b8368;
            local_1b8 = local_1b8 + 1;
          } while (local_1b8 < local_1b0);
          local_1b0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_1b8 = 0;
        } while (local_1b0 != 0);
      }
      local_c4 = 0;
LAB_002b8368:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) {
        local_b0 = 0;
        local_c4 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar5;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

