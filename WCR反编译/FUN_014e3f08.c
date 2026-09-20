// FUN_014e3f08 @ 014e3f08

long FUN_014e3f08(undefined8 param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_c0 = param_3;
  local_bc = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_b0 = 0;
  }
  else {
    local_d0 = 0;
    _memset(auStack_118,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar3 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar2);
          }
          uVar4 = *(undefined8 *)(local_110 + local_160 * 8);
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_unsignedIntValue_0269db10);
          if (((local_bc == 0) || (local_bc <= (uint)uVar4)) &&
             ((local_c0 == 0 || ((uint)uVar4 <= local_c0)))) {
            local_d0 = local_d0 + 1;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b0 = local_d0;
  }
  local_c4 = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

