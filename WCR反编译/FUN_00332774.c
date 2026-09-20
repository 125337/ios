// FUN_00332774 @ 00332774

void FUN_00332774(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_158;
  ulong local_150;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = param_2;
  if ((local_b0 == 0) || (param_2 < 0)) {
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar2 = *local_f8;
      local_158 = 0;
      do {
        do {
          if (*local_f8 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_100 + local_158 * 8);
          local_c8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_120[0] = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsString__0269d0b0,&cf_Separator);
          if ((uVar3 & 1) != 0) {
            FUN_00331b94(local_c8);
          }
          FUN_00332774(local_c8,local_b8 + -1);
          _objc_storeStrong(local_120,0);
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
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

