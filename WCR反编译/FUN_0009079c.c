// FUN_0009079c @ 0009079c

void FUN_0009079c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
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
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      FUN_0008ed94(local_b0);
    }
    if (local_b8 == 0) {
      local_bc = 1;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != 0) {
        lVar3 = *local_108;
        local_170 = 0;
        do {
          do {
            if (*local_108 - lVar3 != 0) {
              _objc_enumerationMutation(*local_108 - lVar3,uVar1);
            }
            local_d8 = *(undefined8 *)(local_110 + local_170 * 8);
            FUN_0009079c(local_d8,local_b8 + -1);
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_bc = 0;
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

