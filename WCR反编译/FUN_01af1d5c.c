// FUN_01af1d5c @ 01af1d5c

void FUN_01af1d5c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  int local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b0;
    FUN_01af86e0();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978),
       (uVar1 & 1) == 0)) {
      _memset(auStack_110,0,0x40);
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_140 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_140 != 0) {
        lVar2 = *local_100;
        local_148 = 0;
        do {
          do {
            if (*local_100 - lVar2 != 0) {
              _objc_enumerationMutation(*local_100 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_108 + local_148 * 8);
            local_d0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setImage__026ca978,local_b8);
              local_bc = 1;
              goto LAB_01af1fbc;
            }
            local_148 = local_148 + 1;
          } while (local_148 < local_140);
          local_140 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                     0x10);
          local_148 = 0;
        } while (local_140 != 0);
      }
      local_bc = 0;
LAB_01af1fbc:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_bc == 0) {
        local_bc = 0;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setImage__026ca978,local_b8);
      local_bc = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

