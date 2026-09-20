// FUN_001e676c @ 001e676c

void FUN_001e676c(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint local_194;
  uint local_190;
  uint local_174;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_001e672c();
  if (((uVar1 & 1) == 0) || (local_b0 == 0)) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    FUN_001d4d18();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar3;
    if (uVar3 == 0) {
      local_c0 = 1;
    }
    else {
      FUN_001d1ba0();
      local_d0 = uVar3;
      FUN_001d1c14();
      local_d8 = uVar3;
      _memset(auStack_120,0,0x40);
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_150 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_150 != 0) {
        lVar5 = *local_110;
        local_158 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_118 + local_158 * 8);
            local_174 = 0;
            local_e0 = uVar6;
            if (local_d0 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,local_d0);
              local_174 = (uint)uVar6;
            }
            uVar6 = local_e0;
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_190 = 1;
            if (((uVar6 & 1) == 0) && (local_190 = 1, (local_174 & 1) == 0)) {
              local_194 = 0;
              if (local_d8 != 0) {
                uVar6 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_isKindOfClass__0269cd68,local_d8);
                local_194 = (uint)uVar6;
              }
              local_190 = local_194;
            }
            if (((local_190 & 1) != 0) && ((local_174 & 1) == 0)) {
              FUN_001e7bcc(local_e0);
            }
            local_158 = local_158 + 1;
          } while (local_158 < local_150);
          local_150 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_158 = 0;
        } while (local_150 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      FUN_001d0988(local_c8);
      local_c0 = 0;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

