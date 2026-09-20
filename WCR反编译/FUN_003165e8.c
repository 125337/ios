// FUN_003165e8 @ 003165e8

void FUN_003165e8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  _memset(auStack_f8,0,0x40);
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_sublayers_026a07b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_130 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar2 = *local_e8;
    local_138 = 0;
    do {
      do {
        if (*local_e8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_e8 - lVar2,uVar1);
        }
        uVar3 = *(ulong *)(local_f0 + local_138 * 8);
        local_b8 = uVar3;
        FUN_0032200c();
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_removeFromSuperlayer_026ca7f8);
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

