// FUN_008606fc @ 008606fc

void FUN_008606fc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tag_026cab98);
    uVar2 = local_b8;
    if (uVar1 == 0x24f6dc) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_bc = 1;
    }
    else {
      _memset(auStack_118,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_148 != 0) {
        lVar3 = *local_108;
        local_150 = 0;
        do {
          do {
            if (*local_108 - lVar3 != 0) {
              _objc_enumerationMutation(*local_108 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_110 + local_150 * 8);
            local_d8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_tag_026cab98);
            uVar1 = local_d8;
            if (uVar4 == 0x24f6dc) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar1;
              local_bc = 1;
              goto LAB_0086098c;
            }
            local_150 = local_150 + 1;
          } while (local_150 < local_148);
          local_148 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_150 = 0;
        } while (local_148 != 0);
      }
      local_bc = 0;
LAB_0086098c:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_b8;
      if (local_bc == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
        local_bc = 1;
      }
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

