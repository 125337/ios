// FUN_007de3ec @ 007de3ec

void FUN_007de3ec(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_188;
  ulong local_180;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c8;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar2 = local_b8, uVar3 == 0)) {
    uVar2 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar2;
    local_c8 = 1;
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = uVar2;
    FUN_007d9414();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    _memset(auStack_120,0,0x40);
    uVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar5 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          local_e0 = *(ulong *)(local_118 + local_188 * 8);
          uVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_e0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_e0;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_128 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar3 & 1) == 0) ||
             (uVar4 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
             uVar3 = local_128, uVar4 == 0)) {
LAB_007de6f4:
            local_c8 = 3;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar3 & 1) == 0) goto LAB_007de6f4;
            uVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,local_e0);
            if ((uVar3 & 1) != 0) {
              uVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,local_e0,local_128
                        );
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_d0;
              local_d0 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
            local_c8 = 0;
          }
          _objc_storeStrong(&local_128,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar2;
    local_c8 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

