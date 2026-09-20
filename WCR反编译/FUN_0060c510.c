// FUN_0060c510 @ 0060c510

void FUN_0060c510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8 [3];
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b0;
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_addObject__0269d180,local_b0);
    }
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_d8[0] = uVar2;
    if ((uVar2 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0), uVar2 != 0)) {
      _memset(auStack_120,0,0x40);
      uVar2 = local_d8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_180 != 0) {
        lVar3 = *local_110;
        local_188 = 0;
        do {
          do {
            if (*local_110 - lVar3 != 0) {
              _objc_enumerationMutation(*local_110 - lVar3,uVar2);
            }
            local_e0 = *(undefined8 *)(local_118 + local_188 * 8);
            FUN_0060c510(local_e0,local_b8);
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(local_d8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

