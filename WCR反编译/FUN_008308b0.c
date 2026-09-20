// FUN_008308b0 @ 008308b0

void FUN_008308b0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_190;
  ulong local_188;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    uVar4 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cd1f9);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = "WCTimelineTableView";
    local_d0 = uVar4;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar1);
    uVar2 = local_d0;
    if ((uVar4 & 1) == 0) {
      if (local_c0 == 0) {
        local_b0 = 0;
        local_c4 = 1;
      }
      else {
        _memset(auStack_128,0,0x40);
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_188 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_188 != 0) {
          lVar3 = *local_118;
          local_190 = 0;
          do {
            do {
              if (*local_118 - lVar3 != 0) {
                _objc_enumerationMutation(*local_118 - lVar3,uVar2);
              }
              uVar4 = *(ulong *)(local_120 + local_190 * 8);
              local_e8 = uVar4;
              FUN_008308b0(uVar4,local_c0 + -1);
              _objc_retainAutoreleasedReturnValue();
              local_130 = uVar4;
              if (uVar4 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar4;
              }
              local_c4 = (uint)(uVar4 != 0);
              _objc_storeStrong(&local_130,0);
              if (local_c4 != 0) goto LAB_00830bd8;
              local_190 = local_190 + 1;
            } while (local_190 < local_188);
            local_188 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                       0x10);
            local_190 = 0;
          } while (local_188 != 0);
        }
        local_c4 = 0;
LAB_00830bd8:
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_c4 == 0) {
          local_b0 = 0;
          local_c4 = 1;
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = uVar2;
      local_c4 = 1;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

