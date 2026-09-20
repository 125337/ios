// FUN_00846ed4 @ 00846ed4

void FUN_00846ed4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar1 = local_b0;
  FUN_0084713c(local_b0,0);
  local_b1 = (byte)uVar1;
  _memset(auStack_110,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_visibleCells_0269fc48);
  _objc_retainAutoreleasedReturnValue();
  local_140 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != 0) {
    lVar2 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar2 != 0) {
          _objc_enumerationMutation(*local_100 - lVar2,uVar1);
        }
        local_d0 = *(undefined8 *)(local_108 + local_148 * 8);
        if ((local_b1 & 1) == 0) {
          FUN_0082d7c8(local_d0);
        }
        else {
          FUN_00847c6c(local_d0);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

