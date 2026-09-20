// FUN_0065b498 @ 0065b498

void FUN_0065b498(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_190;
  ulong local_188;
  long local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined4 local_dc;
  ulong local_d8 [3];
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_b8;
  local_c0 = puVar1;
  FUN_00655d64(local_b8,"m_newArrMessageNodeData");
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d8[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_c0;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
  }
  else {
    _memset(auStack_128,0,0x40);
    uVar2 = local_d8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar3 = *local_118;
      local_190 = 0;
      do {
        do {
          if (*local_118 - lVar3 != 0) {
            _objc_enumerationMutation(*local_118 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_120 + local_190 * 8);
          local_e8 = lVar4;
          FUN_00655814();
          _objc_retainAutoreleasedReturnValue();
          local_130 = lVar4;
          FUN_00655b28();
          _objc_retainAutoreleasedReturnValue();
          local_138 = lVar4;
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,lVar4);
          }
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_130,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
  }
  local_dc = 1;
  _objc_storeStrong(local_d8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

