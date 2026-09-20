// FUN_00f723b8 @ 00f723b8

ulong FUN_00f723b8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_150;
  ulong local_148;
  ulong local_110;
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
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar5 = *local_f8;
    local_150 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,uVar3);
        }
        local_c8 = *(undefined8 *)(local_100 + local_150 * 8);
        uVar4 = local_b8;
        FUN_00f7c19c(local_b8,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_110 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
        bVar1 = (uVar4 & 1) != 0;
        if (bVar1) {
          uVar4 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_integerValue_026ca750);
          local_b0 = uVar4;
        }
        _objc_storeStrong(&local_110,0);
        bVar2 = true;
        if (bVar1) goto LAB_00f725b0;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  bVar2 = false;
LAB_00f725b0:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

