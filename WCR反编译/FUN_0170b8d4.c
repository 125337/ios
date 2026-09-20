// FUN_0170b8d4 @ 0170b8d4

void FUN_0170b8d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  byte local_b9;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_st_switchThemes_026a80b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b9 = (byte)uVar2;
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_st_switchThemes_026a80b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setSt_switchThemes__026b3890,0);
    _memset(auStack_108,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar3 = *local_f8;
      local_158 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar1);
          }
          local_c8 = *(undefined8 *)(local_100 + local_158 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHidden__026ca970,0);
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
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOn__0269dc80,local_b9 & 1);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

