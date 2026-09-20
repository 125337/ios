// FUN_0034f354 @ 0034f354

void FUN_0034f354(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_0034e734();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  _memset(auStack_108,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar2 = *local_f8;
    local_138 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
        }
        local_c8 = *(undefined8 *)(local_100 + local_138 * 8);
        FUN_0034ec20(local_c8,&cf_unreadChange);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

