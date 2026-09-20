// FUN_00367784 @ 00367784

void FUN_00367784(undefined8 param_1,byte param_2)

{
  long lVar1;
  ulong local_140;
  ulong local_138;
  ulong local_120;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b1 = param_2;
  _memset(auStack_100,0,0x40);
  if (local_b0 == 0) {
    local_120 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_120 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar1 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar1 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar1,local_120);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_140 * 8);
        FUN_003639b4(local_c0,local_b1 & 1);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_120,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,
                 0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_120);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

