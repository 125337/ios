// FUN_00541d00 @ 00541d00

byte FUN_00541d00(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  _memset(auStack_100,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_130 != 0) {
    lVar3 = *local_f0;
    local_138 = 0;
    do {
      do {
        if (*local_f0 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
        }
        uVar4 = *(ulong *)(local_f8 + local_138 * 8);
        local_c0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_hasPrefix__0269d320,&cf_I_z_);
        if ((uVar4 & 1) != 0) {
          local_a9 = 1;
          bVar1 = true;
          goto LAB_00541ee8;
        }
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  bVar1 = false;
LAB_00541ee8:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

