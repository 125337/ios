// FUN_002392dc @ 002392dc

void FUN_002392dc(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  uint local_d0;
  char *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  local_c0 = pcVar1;
  if ((pcVar1 == (char *)0x0) || (local_b8 == 0)) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,pcVar1);
    uVar2 = local_b8;
    if ((uVar4 & 1) == 0) {
      _memset(auStack_118,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_childViewControllers_0269d618);
      _objc_retainAutoreleasedReturnValue();
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_158 != 0) {
        lVar3 = *local_108;
        local_160 = 0;
        do {
          do {
            if (*local_108 - lVar3 != 0) {
              _objc_enumerationMutation(*local_108 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_110 + local_160 * 8);
            local_d8 = uVar4;
            FUN_002392dc();
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar4;
            if (uVar4 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar4;
            }
            local_d0 = (uint)(uVar4 != 0);
            _objc_storeStrong(&local_120,0);
            if (local_d0 != 0) goto LAB_002395a0;
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      local_d0 = 0;
LAB_002395a0:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_d0 == 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar2 == 0) {
          local_b0 = 0;
          local_d0 = 1;
        }
        else {
          uVar2 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_002392dc();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_d0 = 1;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_d0 = 1;
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

