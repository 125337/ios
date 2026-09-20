// FUN_003d3c38 @ 003d3c38

long FUN_003d3c38(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  ulong local_108;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _memset(auStack_100,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar2 = *local_f0;
    local_140 = 0;
    do {
      do {
        if (*local_f0 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar2,uVar1);
        }
        uVar3 = *(ulong *)(local_f8 + local_140 * 8);
        local_c0 = uVar3;
        FUN_003612b8(uVar3,&cf_session);
        _objc_retainAutoreleasedReturnValue();
        local_108 = uVar3;
        if ((uVar3 != 0) && (FUN_00396798(uVar3,&cf_m_uUnReadCount), uVar3 != 0)) {
          if (-local_b8 - 1U < uVar3) {
            local_b8 = -1;
          }
          else {
            local_b8 = local_b8 + uVar3;
          }
        }
        _objc_storeStrong(&local_108,0);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar2 = local_b8;
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

