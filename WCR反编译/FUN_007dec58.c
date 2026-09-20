// FUN_007dec58 @ 007dec58

void FUN_007dec58(undefined8 param_1,long param_2,long param_3,byte param_4)

{
  ulong uVar1;
  long lVar2;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined4 local_c8;
  byte local_c1;
  long local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_c1 = param_4;
  local_c0 = param_3;
  local_b8 = param_2;
  if ((local_b0 == 0) || (param_2 == 0)) {
    local_c8 = 1;
  }
  else {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,param_2);
    if ((uVar1 & 1) == 0) {
      if ((local_c0 != 0) &&
         (uVar1 = local_b0,
         (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,local_c0),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,local_c1 & 1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,local_c1 & 1);
    }
    _memset(auStack_120,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar2 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar2 != 0) {
            _objc_enumerationMutation(*local_110 - lVar2,uVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + local_170 * 8);
          FUN_007dec58(local_e0,local_b8,local_c0,local_c1 & 1);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

