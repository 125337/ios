// FUN_0039842c @ 0039842c

void FUN_0039842c(undefined8 param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_170;
  ulong local_168;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  byte local_c9;
  long local_c8;
  byte *local_c0;
  long *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_c8 = 0;
  local_c9 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  _memset(auStack_118,0,0x40);
  uVar1 = local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar3 = *local_108;
    local_170 = 0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,uVar1);
        }
        uVar4 = *(ulong *)(local_110 + local_170 * 8);
        local_d8 = uVar4;
        FUN_003612b8(uVar4,&cf_session);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar4;
        if (uVar4 != 0) {
          FUN_0037a830(uVar4,&cf_m_bShowUnReadAsRedDot);
          uVar2 = local_120;
          FUN_00396798(local_120,&cf_m_uUnReadCount);
          if (uVar2 != 0) {
            if ((uVar4 & 1) == 0) {
              if (-local_c8 - 1U < uVar2) {
                local_c8 = -1;
              }
              else {
                local_c8 = local_c8 + uVar2;
              }
            }
            else {
              local_c9 = 1;
            }
          }
        }
        _objc_storeStrong(&local_120,0);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_b8 != (long *)0x0) {
    *local_b8 = local_c8;
  }
  if (local_c0 != (byte *)0x0) {
    *local_c0 = local_c9 & 1;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

