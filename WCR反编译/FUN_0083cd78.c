// FUN_0083cd78 @ 0083cd78

void FUN_0083cd78(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong local_1a0;
  ulong local_198;
  ulong local_160;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  undefined *local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_160 = local_b0;
  local_d9 = 0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((local_160 & 1) == 0) {
    FUN_0083d874();
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_160;
  }
  else {
    local_160 = local_b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_160;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  _memset(auStack_130,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_198 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_198 != 0) {
    lVar3 = *local_120;
    local_1a0 = 0;
    do {
      do {
        if (*local_120 - lVar3 != 0) {
          _objc_enumerationMutation(*local_120 - lVar3,uVar1);
        }
        lVar4 = *(long *)(local_128 + local_1a0 * 8);
        local_f0 = lVar4;
        FUN_0083d900(local_b8);
        _objc_retainAutoreleasedReturnValue();
        local_138 = lVar4;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,lVar4);
        }
        _objc_storeStrong(&local_138,0);
        local_1a0 = local_1a0 + 1;
      } while (local_1a0 < local_198);
      local_198 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_1a0 = 0;
    } while (local_198 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

