// FUN_001654a4 @ 001654a4

void FUN_001654a4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  FUN_0015e890();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b8 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _memset(auStack_110,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar2 = *local_100;
    local_160 = 0;
    do {
      do {
        if (*local_100 - lVar2 != 0) {
          _objc_enumerationMutation(*local_100 - lVar2,uVar1);
        }
        uVar3 = *(ulong *)(local_108 + local_160 * 8);
        local_d0 = uVar3;
        FUN_0015ecd4();
        if (uVar3 == 0) {
          uVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_topId_0269f790);
          if ((uVar3 & 1) != 0) {
            uVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_topId_0269f790);
            FUN_001657e4(local_b0,uVar3 & 0xffffffff);
          }
        }
        else {
          FUN_00164568(uVar3,local_b0,uVar3);
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

