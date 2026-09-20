// FUN_000b308c @ 000b308c

void FUN_000b308c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_178;
  ulong local_170;
  ulong local_130 [3];
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = param_4;
  if ((local_b0 == 0) || (5 < param_4)) {
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar2 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_110 + local_178 * 8);
          local_d8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_130[0] = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,local_b8);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_d8);
          }
          FUN_000b308c(local_d8,local_b8,local_c0,local_c8 + 1);
          _objc_storeStrong(local_130,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

