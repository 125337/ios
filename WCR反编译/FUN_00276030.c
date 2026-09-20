// FUN_00276030 @ 00276030

void FUN_00276030(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar3 = local_b8;
  FUN_0027b798();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar3;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar4 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,uVar3);
        }
        uVar5 = *(ulong *)(local_110 + local_150 * 8);
        local_d8 = uVar5;
        FUN_0027bc38();
        uVar2 = local_d8;
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar2;
          bVar1 = true;
          goto LAB_00276240;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  bVar1 = false;
LAB_00276240:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

