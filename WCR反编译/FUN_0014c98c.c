// FUN_0014c98c @ 0014c98c

void FUN_0014c98c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long local_e8;
  ulong local_e0 [3];
  char *local_c8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    pcVar1 = "MMInputToolView";
    _objc_getClass();
    uVar3 = local_b8;
    local_c8 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0[0] = uVar3;
    for (local_e8 = 0; local_e8 < 8 && local_e0[0] != 0; local_e8 = local_e8 + 1) {
      uVar2 = local_e0[0];
      _objc_getAssociatedObject(local_e0[0],&DAT_028c87e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar3 = local_e0[0];
      if (uVar2 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar3;
        local_bc = 1;
        goto LAB_0014ced4;
      }
      if ((local_c8 != (char *)0x0) &&
         (uVar2 = local_e0[0],
         (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_isKindOfClass__0269cd68,local_c8),
         uVar3 = local_e0[0], (uVar2 & 1) != 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar3;
        local_bc = 1;
        goto LAB_0014ced4;
      }
      uVar2 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_getGroupUndoneBarHeight_0269f308);
      uVar3 = local_e0[0];
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar3;
        local_bc = 1;
        goto LAB_0014ced4;
      }
      uVar2 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_e0[0];
      local_e0[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    _memset(auStack_130,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != 0) {
      lVar4 = *local_120;
      local_1b0 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_128 + local_1b0 * 8);
          local_f0 = uVar5;
          _objc_getAssociatedObject(uVar5,&DAT_028c87e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          uVar2 = local_f0;
          if (uVar5 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_bc = 1;
            goto LAB_0014ce8c;
          }
          if ((local_c8 != (char *)0x0) &&
             (uVar5 = local_f0,
             (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isKindOfClass__0269cd68,local_c8),
             uVar2 = local_f0, (uVar5 & 1) != 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_bc = 1;
            goto LAB_0014ce8c;
          }
          uVar5 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_respondsToSelector__026ca818,
                     PTR_s_getGroupUndoneBarHeight_0269f308);
          uVar2 = local_f0;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_bc = 1;
            goto LAB_0014ce8c;
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    local_bc = 0;
LAB_0014ce8c:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_b8;
    if (local_bc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar3;
      local_bc = 1;
    }
LAB_0014ced4:
    _objc_storeStrong(local_e0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

