// FUN_007daac4 @ 007daac4

byte FUN_007daac4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_d0;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  FUN_007d5f98();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    FUN_007d76a8();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsObject__0269cbb8,local_c0);
    if ((uVar1 & 1) == 0) {
      _memset(auStack_120,0,0x40);
      uVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_160 != 0) {
        lVar3 = *local_110;
        local_168 = 0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_118 + local_168 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((uVar4 & 1) != 0) &&
                (uVar4 = local_e0,
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), 1 < uVar4))
               && ((uVar4 = local_c0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_c0,PTR_s_containsString__0269d0b0,local_e0), (uVar4 & 1) != 0 ||
                   (uVar4 = local_e0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_e0,PTR_s_containsString__0269d0b0,local_c0), (uVar4 & 1) != 0)))
               ) {
              local_a9 = 1;
              local_d0 = 1;
              goto LAB_007dae58;
            }
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_168 = 0;
        } while (local_160 != 0);
      }
      local_d0 = 0;
LAB_007dae58:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
    }
    else {
      local_a9 = 1;
      local_d0 = 1;
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

