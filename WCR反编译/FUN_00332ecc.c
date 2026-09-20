// FUN_00332ecc @ 00332ecc

void FUN_00332ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong local_190;
  ulong local_188;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_d0;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_5;
  local_b0 = param_4;
  _objc_storeStrong(&local_c0,param_6);
  (*DAT_028c9e90)(local_b0,local_b8,local_c0);
  if ((local_c0 == 0) ||
     (uVar1 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,&cf__),
     (uVar1 & 1) == 0)) {
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar3 = *local_108;
      local_190 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_110 + local_190 * 8);
          pcVar2 = "MMMsgCommonTipsView";
          local_d8 = uVar4;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setHidden__026ca970,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,param_2,param_3,0,local_b0,PTR_s_setFrame__026ca960);
            local_d0 = 2;
            goto LAB_00333200;
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_d0 = 0;
LAB_00333200:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

