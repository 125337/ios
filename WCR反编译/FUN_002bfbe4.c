// FUN_002bfbe4 @ 002bfbe4

byte FUN_002bfbe4(double param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = param_3;
  if ((((local_b8 == 0) || (0xe < param_3)) ||
      (uVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isHidden_026ca768),
      (uVar1 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alpha_026ca4d8), param_1 <= DAT_02323d38)
     ) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_MinimizeBaseView)
    ;
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = local_d8,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_containsString__0269d0b0,&cf_MiniTaskDynamicBgView),
        (uVar1 & 1) == 0)) &&
       ((uVar1 = local_d8,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_containsString__0269d0b0,&cf_MiniTaskCollection), (uVar1 & 1) == 0
        && (uVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_d8,PTR_s_containsString__0269d0b0,&cf_MiniTaskView), (uVar1 & 1) == 0)))
       ) {
      _memset(auStack_120,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_180 != 0) {
        lVar2 = *local_110;
        local_188 = 0;
        do {
          do {
            if (*local_110 - lVar2 != 0) {
              _objc_enumerationMutation(*local_110 - lVar2,uVar1);
            }
            uVar3 = *(ulong *)(local_118 + local_188 * 8);
            local_e0 = uVar3;
            FUN_002bfbe4(uVar3,local_c0 + 1);
            if ((uVar3 & 1) != 0) {
              local_a9 = 1;
              local_d0 = 1;
              goto LAB_002bffbc;
            }
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_d0 = 0;
LAB_002bffbc:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
    }
    else {
      local_a9 = 1;
      local_d0 = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

