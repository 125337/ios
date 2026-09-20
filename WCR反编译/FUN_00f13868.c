// FUN_00f13868 @ 00f13868

void FUN_00f13868(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  ulong *local_c8;
  undefined4 local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(puVar1,param_2);
  if (local_b0 == 0) {
    local_bc = 1;
  }
  else {
    FUN_00f12c2c();
    local_c8 = puVar1;
    if ((puVar1 == (ulong *)0x0) ||
       (uVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,puVar1),
       (uVar2 & 1) == 0)) {
      _memset(auStack_118,0,0x40);
      uVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_148 != 0) {
        lVar4 = *local_108;
        local_150 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar2);
            }
            local_d8 = *(undefined8 *)(local_110 + local_150 * 8);
            FUN_00f13868(local_d8,local_b8);
            local_150 = local_150 + 1;
          } while (local_150 < local_148);
          local_148 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_150 = 0;
        } while (local_148 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_bc = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
                 local_b0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_b8;
      local_d0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsObject__0269cbb8,puVar3);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_d0);
        FUN_00f1cb50(local_b0);
      }
      local_bc = 1;
      _objc_storeStrong(&local_d0,0);
    }
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

