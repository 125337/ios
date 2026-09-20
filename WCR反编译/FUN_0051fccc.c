// FUN_0051fccc @ 0051fccc

void FUN_0051fccc(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_170;
  ulong local_168;
  ulong local_130 [3];
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  uint local_cc;
  long local_c8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c8 = param_3;
  local_c0 = param_2;
  if (((local_b8 == 0) || (param_2 == 0)) || (6 < param_3)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_168 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
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
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,local_c0);
          uVar2 = local_d8;
          if ((uVar4 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
            local_cc = 1;
            goto LAB_0051ffb0;
          }
          FUN_0051fccc(local_d8,local_c0,local_c8 + 1);
          _objc_retainAutoreleasedReturnValue();
          local_130[0] = uVar2;
          if (uVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar2;
          }
          local_cc = (uint)(uVar2 != 0);
          _objc_storeStrong(local_130,0);
          if (local_cc != 0) goto LAB_0051ffb0;
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_cc = 0;
LAB_0051ffb0:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

