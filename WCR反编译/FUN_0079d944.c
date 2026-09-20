// FUN_0079d944 @ 0079d944

void FUN_0079d944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint local_1a8;
  ulong local_178;
  ulong local_170;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) ||
     (lVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_sublayers_026a07b8);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar4;
    if (uVar4 == 0) {
      local_158 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_170 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
              );
    if (local_170 != 0) {
      lVar3 = *local_108;
      local_178 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,local_158);
          }
          uVar4 = *(ulong *)(local_110 + local_178 * 8);
          puVar1 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          local_1a8 = 0;
          if ((uVar4 & 1) != 0) {
            uVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_name_0269d828);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1a8 = (uint)uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          uVar4 = local_d8;
          if ((local_1a8 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar4;
            local_d0 = 1;
            goto LAB_0079dd08;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_d0 = 0;
LAB_0079dd08:
    (*(code *)PTR__objc_release_02578630)(local_158);
    if (local_d0 == 0) {
      local_b0 = 0;
      local_d0 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

