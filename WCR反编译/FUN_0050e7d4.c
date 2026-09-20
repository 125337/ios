// FUN_0050e7d4 @ 0050e7d4

byte FUN_0050e7d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_180;
  ulong local_178;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  long local_d8;
  uint local_cc;
  long local_c8;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = param_3;
  if ((local_b8 == 0) || (param_3 == 0)) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = param_3;
    _memset(auStack_130,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allTargets_026a46d0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != 0) {
      lVar4 = *local_120;
      local_180 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar2);
          }
          local_f0 = *(long *)(local_128 + local_180 * 8);
          if ((local_c0 == 0) || (local_f0 == local_c0)) {
            uVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_actionsForTarget_forControlEvent_026a46d8,local_f0,0x40);
            _objc_retainAutoreleasedReturnValue();
            local_138 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_d8);
            bVar1 = (uVar3 & 1) != 0;
            if (bVar1) {
              local_a9 = 1;
            }
            local_cc = (uint)bVar1;
            _objc_storeStrong(&local_138,0);
            if (local_cc != 0) goto LAB_0050eae0;
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    local_cc = 0;
LAB_0050eae0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

