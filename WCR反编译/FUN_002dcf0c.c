// FUN_002dcf0c @ 002dcf0c

byte FUN_002dcf0c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if ((local_b8 == 0) || (0xe < param_2)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tag_026cab98);
    if (uVar1 == 0x24f753) {
      local_a9 = 1;
      local_c4 = 1;
    }
    else {
      uVar1 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar3 & 1) == 0) {
        _memset(auStack_120,0,0x40);
        uVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_178 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_178 != 0) {
          lVar2 = *local_110;
          local_180 = 0;
          do {
            do {
              if (*local_110 - lVar2 != 0) {
                _objc_enumerationMutation(*local_110 - lVar2,uVar1);
              }
              uVar3 = *(ulong *)(local_118 + local_180 * 8);
              local_e0 = uVar3;
              FUN_002dcf0c(uVar3,local_c0 + 1);
              if ((uVar3 & 1) != 0) {
                local_a9 = 1;
                local_c4 = 1;
                goto LAB_002dd254;
              }
              local_180 = local_180 + 1;
            } while (local_180 < local_178);
            local_178 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_180 = 0;
          } while (local_178 != 0);
        }
        local_c4 = 0;
LAB_002dd254:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_c4 == 0) {
          local_a9 = 0;
          local_c4 = 1;
        }
      }
      else {
        local_a9 = 1;
        local_c4 = 1;
      }
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

