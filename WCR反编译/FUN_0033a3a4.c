// FUN_0033a3a4 @ 0033a3a4

void FUN_0033a3a4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_190;
  ulong local_188;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  ulong local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b8;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_buttonTitleList_026a0d78);
  puVar1 = local_c0;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_d0 = 1;
  }
  else {
    local_d8 = 0;
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_buttonTitleList_026a0d78);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_d8;
    local_d8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_d8;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_128,0,0x40);
      uVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_188 != 0) {
        lVar4 = *local_118;
        local_190 = 0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,uVar2);
            }
            lVar5 = *(long *)(local_120 + local_190 * 8);
            local_e8 = lVar5;
            FUN_0033d3ec();
            _objc_retainAutoreleasedReturnValue();
            local_130 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if (lVar5 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_130);
            }
            _objc_storeStrong(&local_130,0);
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_190 = 0;
        } while (local_188 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_d0 = 1;
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

