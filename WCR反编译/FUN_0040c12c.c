// FUN_0040c12c @ 0040c12c

byte FUN_0040c12c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  int local_e0;
  long local_d0;
  long local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  lVar3 = local_c8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_b9 = 0;
    local_e0 = 1;
  }
  else {
    local_b0 = &DAT_028ca770;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257d188);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    _memset(auStack_128,0,0x40);
    uVar1 = DAT_028ca768;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar3 = *local_118;
      local_170 = 0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,uVar1);
          }
          local_e8 = *(undefined8 *)(local_120 + local_170 * 8);
          lVar2 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_rangeOfString_options__0269d118,local_e8,1);
          if (lVar2 != 0x7fffffffffffffff) {
            local_b9 = 1;
            local_e0 = 1;
            goto LAB_0040c404;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_e0 = 0;
LAB_0040c404:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_e0 == 0) {
      local_b9 = 0;
      local_e0 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

