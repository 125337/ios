// FUN_0006c3cc @ 0006c3cc

void FUN_0006c3cc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_bc;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = param_2;
  if (local_b0 == 0) {
    local_bc = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,param_2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsLayout_0269deb8);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layoutIfNeeded_026ca790);
    }
    _memset(auStack_118,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar2 = *local_108;
      local_158 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_158 * 8);
          FUN_0006c3cc(local_d8,local_b8);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

